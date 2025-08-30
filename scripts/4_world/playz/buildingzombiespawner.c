class BuildingZombieSpawner
{
    private ref PlayZZombieSpawnerSettings  m_Settings;

    private ref array<ref StaticAnchor>     m_Anchors;
    private float                           m_CellSize = 250.0;
    private ref map<string, ref array<int>> m_Grid;

    private ref map<string, ref array<int>> m_BuildingToAnchors;
    private ref map<string, int>            m_BuildingCap;
    private ref array<string>               m_AnchorToBKey;
    private ref map<int, bool>              m_AnchorBlockCache;

    void BuildingZombieSpawner()
    {
        PlayZConfig.GetInstance().Load();
        m_Settings = PlayZConfig.GetInstance().GetZombieSpawnerSettings();

        if (m_Settings && m_Settings.DebugConfigLog == 1)
            Print("[PlayZ] Spawner initializing…");

        m_Anchors           = new array<ref StaticAnchor>;
        m_Grid              = new map<string, ref array<int>>;
        m_BuildingToAnchors = new map<string, ref array<int>>;
        m_BuildingCap       = new map<string, int>;
        m_AnchorToBKey      = new array<string>;
        m_AnchorBlockCache  = new map<int, bool>;

        BuildAnchorsFromFiles(PlayZConfig.GetInstance().GetProtoPath(), PlayZConfig.GetInstance().GetPosPath());

        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Tick,    m_Settings.CheckIntervalSec * 1000, true, this);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Cleanup, m_Settings.CleanupIntervalSec * 1000, true, this);

        if (m_Settings && m_Settings.DebugConfigLog == 1)
            Print("[PlayZ] Spawner initialized with " + m_Anchors.Count() + " anchors.");
    }

    private bool IsBuildingAllowed(string className)
    {
        return PlayZConfig.GetInstance().IsBuildingAllowed(className);
    }

    private TStringArray ResolveEventsFor(string buildingClass, TStringArray protoUsages)
    {
        TStringArray outEvents = new TStringArray;

        string overrideEvent;
        if (PlayZConfig.GetInstance().GetBuildingOverride(buildingClass, overrideEvent))
        {
            outEvents.Insert(overrideEvent);
            return outEvents;
        }

        PlayZSpawnFilters f = PlayZConfig.GetInstance().GetSpawnFilters();
        if (!f) { outEvents.Insert("InfectedCity"); return outEvents; }

        if (f.UseProtoUsages && protoUsages && protoUsages.Count() > 0)
        {
            for (int i = 0; i < protoUsages.Count(); i++)
            {
                string mapped;
                if (PlayZConfig.GetInstance().MapUsageToEvent(protoUsages[i], mapped))
                {
                    if (outEvents.Find(mapped) == -1)
                        outEvents.Insert(mapped);
                }
            }
        }

        if (outEvents.Count() == 0)
            outEvents.Insert(f.DefaultEvent);

        return outEvents;
    }

    void BuildAnchorsFromFiles(string protoPath, string posPath)
    {
        PlayZSpawnFilters filters = PlayZConfig.GetInstance().GetSpawnFilters();

        ProtoDB pdb = new ProtoDB(filters);
        PosDB   mdb = new PosDB;

        if (!pdb.Load(protoPath)) return;
        if (!mdb.Load(posPath))   return;

        int created = 0;
        float nowSec = GetGame().GetTime() * 0.001;

        for (int i = 0; i < mdb.instances.Count(); i++)
        {
            MapGroupInstance inst = mdb.instances[i];
            if (!IsBuildingAllowed(inst.name))
                continue;

            ProtoGroup pg;
            if (!pdb.groups.Find(inst.name, pg))
                continue;

            string bkey = string.Format("%1@%2,%3,%4", inst.name, Math.Round(inst.pos[0]), Math.Round(inst.pos[1]), Math.Round(inst.pos[2]));

            ref array<int> anchorIdxs;
            if (!m_BuildingToAnchors.Find(bkey, anchorIdxs))
            {
                anchorIdxs = new array<int>;
                m_BuildingToAnchors.Set(bkey, anchorIdxs);
            }

            TStringArray events = ResolveEventsFor(inst.name, pg.usages);

            int pointsForThisBuilding = 0;

            for (int p = 0; p < pg.points.Count(); p++)
            {
                ProtoPoint pt = pg.points[p];
                vector w = AdaptSpawnPosition(inst.pos, inst.rpy, pt.localPos);

                StaticAnchor a = new StaticAnchor;
                a.worldPos        = w;
                a.radius          = pt.range;
                a.headroom        = pt.height;
                a.candidateEvents = events;
                a.buildingType    = inst.name;

                a.lastSpawnSec    = nowSec - m_Settings.SpawnCooldownSec;
                a.lastPlayerNearSec = nowSec;
                a.spawnStacks     = 0;

                int idx = m_Anchors.Count();
                m_Anchors.Insert(a);
                IndexAnchor(idx, w);
                anchorIdxs.Insert(idx);
                m_AnchorToBKey.Insert(bkey);

                pointsForThisBuilding++;
                created++;
            }

            if (pointsForThisBuilding > 0)
            {
                int cap = Math.Ceil(pointsForThisBuilding / 5.0);
                if (cap < 1) cap = 1;
                m_BuildingCap.Set(bkey, cap);

                if (m_Settings && m_Settings.DebugConfigLog == 1)
                    Print(string.Format("[PlayZ] Cap for %1 = %2 (from %3 points)", bkey, cap, pointsForThisBuilding));
            }
        }

        if (m_Settings && m_Settings.DebugConfigLog == 1)
            Print("[PlayZ] Built " + created + " anchors from pos/proto.");
    }

    void Cleanup()
    {
        if (!GetGame().IsServer()) return;

        float nowSec = GetGame().GetTime() * 0.001;

        for (int i = 0; i < m_Anchors.Count(); i++)
        {
            StaticAnchor a = m_Anchors[i];
            if (!a) continue;

            bool stale = (nowSec - a.lastPlayerNearSec) > m_Settings.TimestampLifetimeSec;
            if (stale && (nowSec - a.lastSpawnSec) <= m_Settings.TimestampLifetimeSec)
                stale = false;

            for (int j = a.spawned.Count() - 1; j >= 0; j--)
            {
                DayZInfected z = a.spawned[j];
                if (!z || z.IsAlive() == false)
                {
                    if (z) GetGame().ObjectDelete(z);
                    a.spawned.Remove(j);
                    continue;
                }

                if (stale)
                {
                    GetGame().ObjectDelete(z);
                    a.spawned.Remove(j);
                }
            }

            if (a.spawned.Count() == 0 && stale)
            {
                a.spawnStacks  = 0;
                a.lastSpawnSec = nowSec;
            }
        }
    }

    private string GridKey(int gx, int gz) { return string.Format("%1,%2", gx, gz); }

    private void IndexAnchor(int idx, vector w)
    {
        int gx = Math.Floor(w[0] / m_CellSize);
        int gz = Math.Floor(w[2] / m_CellSize);
        string key = GridKey(gx, gz);
        ref array<int> bucket;
        if (!m_Grid.Find(key, bucket)) { bucket = new array<int>; m_Grid.Set(key, bucket); }
        bucket.Insert(idx);
    }

    private void CollectNearbyAnchors(vector pos, float radius, out array<int> outIdx)
    {
        outIdx = new array<int>;
        int rg = Math.Ceil(radius / m_CellSize);
        int gx = Math.Floor(pos[0] / m_CellSize);
        int gz = Math.Floor(pos[2] / m_CellSize);
        for (int dx = -rg; dx <= rg; dx++)
        {
            for (int dz = -rg; dz <= rg; dz++)
            {
                string key = GridKey(gx + dx, gz + dz);
                ref array<int> b;
                if (m_Grid.Find(key, b))
                {
                    for (int i = 0; i < b.Count(); i++)
                        outIdx.Insert(b[i]);
                }
            }
        }
    }

    private int CountAliveForBuilding(string bkey)
    {
        ref array<int> idxs;
        if (!m_BuildingToAnchors.Find(bkey, idxs)) return 0;

        int alive = 0;
        for (int n = 0; n < idxs.Count(); n++)
        {
            int ai = idxs[n];
            StaticAnchor a = m_Anchors[ai];
            if (!a || !a.spawned) continue;

            for (int j = a.spawned.Count() - 1; j >= 0; j--)
            {
                DayZInfected z = a.spawned[j];
                if (!z || !z.IsAlive())
                {
                    if (z) GetGame().ObjectDelete(z);
                    a.spawned.Remove(j);
                }
                else
                {
                    alive++;
                }
            }
        }
        return alive;
    }

    private int CountAllAlive()
    {
        int alive = 0;
        for (int i = 0; i < m_Anchors.Count(); i++)
        {
            StaticAnchor a = m_Anchors[i];
            if (!a || !a.spawned) continue;

            for (int j = a.spawned.Count() - 1; j >= 0; j--)
            {
                DayZInfected z = a.spawned[j];
                if (!z || !z.IsAlive())
                {
                    if (z) GetGame().ObjectDelete(z);
                    a.spawned.Remove(j);
                }
                else
                {
                    alive++;
                }
            }
        }
        return alive;
    }

    private int CountAliveInAnchors(array<int> anchorIndices)
    {
        int alive = 0;
        if (!anchorIndices) return 0;

        for (int i = 0; i < anchorIndices.Count(); i++)
        {
            int idx = anchorIndices[i];
            if (idx < 0 || idx >= m_Anchors.Count()) continue;

            StaticAnchor a = m_Anchors[idx];
            if (!a || !a.spawned) continue;

            for (int j = a.spawned.Count() - 1; j >= 0; j--)
            {
                DayZInfected z = a.spawned[j];
                if (!z || !z.IsAlive())
                {
                    if (z) GetGame().ObjectDelete(z);
                    a.spawned.Remove(j);
                }
                else
                {
                    alive++;
                }
            }
        }
        return alive;
    }

    private bool IsAnyInfectedNearPlayer(StaticAnchor a, vector ppos, float radius)
    {
        if (!a || !a.spawned) return false;
        float radiusSq = radius * radius;

        for (int i = 0; i < a.spawned.Count(); i++)
        {
            DayZInfected z = a.spawned[i];
            if (z && z.IsAlive() && vector.DistanceSq(z.GetPosition(), ppos) <= radiusSq)
                return true;
        }
        return false;
    }

    void Tick()
    {
        if (m_Settings && m_Settings.DebugConfigLog == 1)
            Print("[PlayZ] Debug: Tick fired");

        if (!GetGame().IsServer())
            return;

        array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);
        if (players.Count() == 0) return;

        m_AnchorBlockCache.Clear();

        float nowSec = GetGame().GetTime() * 0.001;
        int totalAlive = CountAllAlive();
        bool globalCapReached = totalAlive >= m_Settings.MaxInfected;

        if (globalCapReached && m_Settings.DebugConfigLog == 1)
        {
            Print("[PlayZ] DEBUG: Global infected cap reached (" + totalAlive + "/" + m_Settings.MaxInfected + "). Spawning is paused, but presence will be updated.");
        }

        for (int pi = 0; pi < players.Count(); pi++)
        {
            Man p = players[pi];
            if (!p || !p.IsAlive()) continue;
            vector ppos = p.GetPosition();

            array<int> candidates;
            CollectNearbyAnchors(ppos, m_Settings.CheckRadius, candidates);

            int playerLocalAlive = CountAliveInAnchors(candidates);

            for (int ci = 0; ci < candidates.Count(); ci++)
            {
                int idx = candidates[ci];
                StaticAnchor a = m_Anchors[idx];
                if (!a) continue;

                if (!a.spawned) a.spawned = new array<DayZInfected>;

                float d = vector.Distance(a.worldPos, ppos);

                if (d <= m_Settings.CheckRadius)
                    a.lastPlayerNearSec = nowSec;
                else if (IsAnyInfectedNearPlayer(a, ppos, m_Settings.CheckRadius))
                    a.lastPlayerNearSec = nowSec;

                if (globalCapReached || playerLocalAlive >= m_Settings.MaxInfectedPerPlayer)
                {
                    continue;
                }

                if (d < m_Settings.SafeCheckRadius) continue;
                if (d > m_Settings.CheckRadius)     continue;

                bool isBlockedBySpecialObject;
                if (m_AnchorBlockCache.Find(idx, isBlockedBySpecialObject))
                {
                    if (isBlockedBySpecialObject)
                        continue;
                }
                else
                {
                    isBlockedBySpecialObject = IsNearForbiddenObject(a.worldPos);
                    m_AnchorBlockCache.Set(idx, isBlockedBySpecialObject);
                    if (isBlockedBySpecialObject)
                    {
                        if (m_Settings && m_Settings.DebugConfigLog == 1)
                            Print(string.Format("[PlayZ] DEBUG: spawn at %1 for %2 is blocked by a nearby special object (flag/barrel).", a.worldPos, a.buildingType));
                        continue;
                    }
                }

                bool blocked = false;
                for (int oi = 0; oi < players.Count(); oi++)
                {
                    if (oi == pi) continue;
                    Man other = players[oi];
                    if (!other || !other.IsAlive()) continue;
                    if (vector.Distance(a.worldPos, other.GetPosition()) < m_Settings.SafeCheckRadius)
                    {
                        blocked = true;
                        break;
                    }
                }
                if (blocked) continue;

                if (nowSec < a.lastSpawnSec + m_Settings.SpawnCooldownSec)
                    continue;

                if (a.spawnStacks >= 2)
                {
                    if (m_Settings.DebugConfigLog == 1)
                        Print(string.Format("[PlayZ] DEBUG: stack limit reached at %1 for %2", a.worldPos, a.buildingType));
                    continue;
                }

                int roll = Math.RandomInt(0, 100);
                if (roll >= m_Settings.SpawnChance)
                    continue;

                string ev = a.candidateEvents.Get(Math.RandomIntInclusive(0, a.candidateEvents.Count() - 1));
                TStringArray zList = PlayZConfig.GetInstance().GetTypesForEvent(ev);
                if (!zList || zList.Count() == 0)
                {
                    if (m_Settings.DebugConfigLog == 1)
                        Print("[PlayZ] DEBUG: empty zList for event " + ev);
                    continue;
                }

                string bkey = m_AnchorToBKey.Get(idx);
                int buildingCap = 1;
                m_BuildingCap.Find(bkey, buildingCap);
                int buildingAlive = CountAliveForBuilding(bkey);
                if (buildingAlive >= buildingCap)
                {
                    if (m_Settings.DebugConfigLog == 1)
                        Print(string.Format("[PlayZ] DEBUG: building cap reached for %1 (%2/%3)", bkey, buildingAlive, buildingCap));
                    continue;
                }

                if (totalAlive >= m_Settings.MaxInfected)
                {
                    if (m_Settings.DebugConfigLog == 1)
                        Print("[PlayZ] DEBUG: Global infected cap reached during tick. No more spawns.");
                    return;
                }

                if (playerLocalAlive >= m_Settings.MaxInfectedPerPlayer)
                {
                    if (m_Settings.DebugConfigLog == 1)
                        Print(string.Format("[PlayZ] DEBUG: Player cap for %1 reached during tick. No more spawns for them.", p.GetIdentity().GetName()));
                    break;
                }

                int want = Math.RandomIntInclusive(m_Settings.MinZombiesToSpawn, m_Settings.MaxZombiesToSpawn);
                int roomLeft = buildingCap - buildingAlive;
                if (want > roomLeft) want = roomLeft;

                int globalRoomLeft = m_Settings.MaxInfected - totalAlive;
                if (want > globalRoomLeft) want = globalRoomLeft;

                int playerRoomLeft = m_Settings.MaxInfectedPerPlayer - playerLocalAlive;
                if (want > playerRoomLeft) want = playerRoomLeft;

                if (want <= 0) continue;

                int done = 0;
                array<vector> used = new array<vector>;

                for (int s = 0; s < want; s++)
                {
                    vector pos = a.worldPos;
                    pos[1] = pos[1] + 0.02;

                    if (!IsClearBox(pos)) continue;

                    bool clash = false;
                    for (int u = 0; u < used.Count(); u++)
                        if (vector.Distance(used[u], pos) < m_Settings.MinUniqueSpawnSeparation) { clash = true; break; }
                    if (clash) continue;

                    string zType = "";
                    bool picked = false;
                    for (int tries = 0; tries < 6; tries++)
                    {
                        string cand = zList.Get(Math.RandomIntInclusive(0, zList.Count() - 1));

                        bool classExists = GetGame().ConfigIsExisting("CfgVehicles " + cand);
                        bool isInfected  = GetGame().IsKindOf(cand, "ZombieBase") || GetGame().IsKindOf(cand, "DayZInfected") || GetGame().IsKindOf(cand, "DZ_LightAI");

                        if (classExists && isInfected)
                        {
                            zType = cand;
                            picked = true;
                            break;
                        }
                    }
                    if (!picked) continue;

                    Object obj = GetGame().CreateObject(zType, pos, false, true, true);
                    if (!obj) continue;

                    DayZInfected zInf = DayZInfected.Cast(obj);
                    if (!zInf)
                    {
                        GetGame().ObjectDelete(obj);
                        continue;
                    }

                    obj.SetOrientation(Vector(Math.RandomFloatInclusive(0,360), 0, 0));
                    used.Insert(pos);
                    done++;

                    a.spawned.Insert(zInf);
                }

                if (done > 0)
                {
                    totalAlive += done;
                    playerLocalAlive += done;
                    a.lastSpawnSec = nowSec;
                    a.spawnStacks++;

                    if (m_Settings && m_Settings.DebugConfigLog == 1)
                        Print("[PlayZ] Spawned " + done + " (" + ev + ") near " + a.buildingType + " @ " + a.worldPos + " [stack " + a.spawnStacks + "/2]");
                }
            }

            if (playerLocalAlive >= m_Settings.MaxInfectedPerPlayer)
            {
                if (m_Settings.DebugConfigLog == 1)
                    Print(string.Format("[PlayZ] DEBUG: Player cap reached for %1 (%2/%3). Skipping their spawns.", p.GetIdentity().GetName(), playerLocalAlive, m_Settings.MaxInfectedPerPlayer));
            }
        }
    }

    bool IsClearBox(vector floorPos)
    {
        array<Object> excluded = new array<Object>;
        vector boxMin     = floorPos + Vector(-0.75, -0.10, -0.75);
        vector boxMax     = floorPos + Vector( 0.75,  1.80,  0.75);
        vector boxCenter  = (boxMin + boxMax) * 0.5;
        vector edgeLength = boxMax - boxMin;
        return !GetGame().IsBoxColliding(boxCenter, Vector(0,0,0), edgeLength, excluded);
    }

    private bool IsNearForbiddenObject(vector pos)
    {
        const float FORBIDDEN_RADIUS = 200.0;
        array<Object> nearbyObjects = new array<Object>;
        array<CargoBase> proxyCargos = new array<CargoBase>;
        GetGame().GetObjectsAtPosition3D(pos, FORBIDDEN_RADIUS, nearbyObjects, proxyCargos);

        for (int i = 0; i < nearbyObjects.Count(); i++)
        {
            Object obj = nearbyObjects.Get(i);
            if (obj)
            {
                if (obj.IsInherited(TerritoryFlag) || obj.IsInherited(BarrelHoles_ColorBase))
                {
                    return true;
                }
            }
        }

        return false;
    }
}
