class PlayZZombieSpawnerSettings
{
    int   DebugConfigLog;
    float CheckIntervalSec;
    float SpawnCooldownSec;
    float CleanupIntervalSec;
    float TimestampLifetimeSec;
    float MinUniqueSpawnSeparation;
    int   SpawnChance;
    float SafeCheckRadius;
    float CheckRadius;
    int   MinZombiesToSpawn;
    int   MaxZombiesToSpawn;
    int   MaxInfectedPerPlayer;
    int   MaxInfected;

    void PlayZZombieSpawnerSettings()
    {
        DebugConfigLog           = 0;
        CheckIntervalSec         = 15.0;
        SpawnCooldownSec         = 30.0;
        CleanupIntervalSec       = 40.0;
        TimestampLifetimeSec     = 60.0;
        MinUniqueSpawnSeparation = 1.0;
        SpawnChance              = 5;
        SafeCheckRadius          = 100.0;
        CheckRadius              = 300.0;
        MinZombiesToSpawn        = 1;
        MaxZombiesToSpawn        = 1;
        MaxInfectedPerPlayer     = 20;
        MaxInfected              = 400;
    }
};

class PlayZEventTypesEntry
{
    string              Event;
    ref array<string>   Types;

    void PlayZEventTypesEntry()
    {
        Types = new array<string>;
    }
}

class PlayZUsageMapEntry
{
    string Usage;
    string Event;
}

class PlayZBuildingEventEntry
{
    string Classname;
    string Event;
}

class PlayZFilePaths
{
    string MapGroupProto;
    string MapGroupPos;

    void PlayZFilePaths()
    {
        MapGroupProto = "$mission:mapgroupproto.xml";
        MapGroupPos   = "$mission:mapgrouppos.xml";
    }
}

class PlayZSpawnFilters
{
    ref TStringArray AllowedContainers;
    float            MinHeight;
    float            MinRange;

    ref TStringArray BuildingWhitelist;
    ref TStringArray BuildingBlacklist;

    bool             UseProtoUsages;
    string           DefaultEvent;

    void PlayZSpawnFilters()
    {
        AllowedContainers = new TStringArray;
        AllowedContainers.Insert("lootFloor");

        MinHeight         = 1.6;
        MinRange          = 0.6;

        BuildingWhitelist = new TStringArray;
        BuildingBlacklist = new TStringArray;

        UseProtoUsages    = true;
        DefaultEvent      = "InfectedCity";
    }
}

class PlayZConfigData
{
    ref PlayZZombieSpawnerSettings            ZombieSpawner;
    ref PlayZFilePaths                        Files;
    ref PlayZSpawnFilters                     SpawnFilters;
    ref array<ref PlayZEventTypesEntry>       EventTypes;
    ref array<ref PlayZUsageMapEntry>         UsageToEvent;
    ref array<ref PlayZBuildingEventEntry>    BuildingEventOverrides;

    void PlayZConfigData()
    {
        ZombieSpawner          = new PlayZZombieSpawnerSettings();
        Files                  = new PlayZFilePaths();
        SpawnFilters           = new PlayZSpawnFilters();
        EventTypes             = new array<ref PlayZEventTypesEntry>();
        UsageToEvent           = new array<ref PlayZUsageMapEntry>();
        BuildingEventOverrides = new array<ref PlayZBuildingEventEntry>();

        InsertUsage("Town","InfectedCity");
        InsertUsage("Village","InfectedVillage");
        InsertUsage("School","InfectedSchool");
        InsertUsage("Prison","InfectedPrisoner");
        InsertUsage("Office","InfectedOffice");
        InsertUsage("Farm","InfectedFarm");
        InsertUsage("Coast","InfectedCoast");
        InsertUsage("Hunting","InfectedSolitude");
        InsertUsage("Industrial","InfectedIndustrial");
        InsertUsage("Military","InfectedArmy");
        InsertUsage("Police","InfectedPolice");
        InsertUsage("Firefighter","InfectedFirefighter");
        InsertUsage("Medic","InfectedMedic");

        array<string> arr = new array<string>();

        arr.Clear();
        arr.Insert("ZmbM_PatrolNormal_Autumn");
        arr.Insert("ZmbM_PatrolNormal_Flat");
        arr.Insert("ZmbM_PatrolNormal_PautRev");
        arr.Insert("ZmbM_PatrolNormal_Summer");
        arr.Insert("ZmbM_SoldierNormal");
        arr.Insert("ZmbM_usSoldier_normal_Desert");
        arr.Insert("ZmbM_usSoldier_normal_Woodland");
        arr.Insert("ZmbM_usSoldier_Heavy_Woodland");
        arr.Insert("ZmbM_usSoldier_Officer_Desert");
        InsertEventList("InfectedArmy", arr);

        arr.Clear();
        arr.Insert("ZmbF_BlueCollarFat_Blue");
        arr.Insert("ZmbF_BlueCollarFat_Green");
        arr.Insert("ZmbF_BlueCollarFat_Red");
        arr.Insert("ZmbF_BlueCollarFat_White");
        arr.Insert("ZmbF_MechanicNormal_Beige");
        arr.Insert("ZmbF_MechanicNormal_Green");
        arr.Insert("ZmbF_MechanicNormal_Grey");
        arr.Insert("ZmbF_MechanicNormal_Orange");
        arr.Insert("ZmbM_ConstrWorkerNormal_Beige");
        arr.Insert("ZmbM_ConstrWorkerNormal_Black");
        arr.Insert("ZmbM_ConstrWorkerNormal_Green");
        arr.Insert("ZmbM_HandymanNormal_Beige");
        arr.Insert("ZmbM_HandymanNormal_Blue");
        arr.Insert("ZmbM_HandymanNormal_Green");
        arr.Insert("ZmbM_HandymanNormal_Grey");
        arr.Insert("ZmbM_HandymanNormal_White");
        arr.Insert("ZmbM_HeavyIndustryWorker");
        arr.Insert("ZmbM_MechanicSkinny_Blue");
        arr.Insert("ZmbM_MechanicSkinny_Green");
        arr.Insert("ZmbM_MechanicSkinny_Grey");
        arr.Insert("ZmbM_MechanicSkinny_Red");
        arr.Insert("ZmbM_OffshoreWorker_Green");
        arr.Insert("ZmbM_OffshoreWorker_Orange");
        arr.Insert("ZmbM_OffshoreWorker_Red");
        arr.Insert("ZmbM_OffshoreWorker_Yellow");
        InsertEventList("InfectedIndustrial", arr);

        arr.Clear();
        arr.Insert("ZmbF_BlueCollarFat_White");
        arr.Insert("ZmbF_CitizenANormal_Beige");
        arr.Insert("ZmbF_CitizenANormal_Blue");
        arr.Insert("ZmbF_CitizenBSkinny");
        arr.Insert("ZmbF_Clerk_Normal_Blue");
        arr.Insert("ZmbF_Clerk_Normal_Red");
        arr.Insert("ZmbF_Clerk_Normal_White");
        arr.Insert("ZmbF_JournalistNormal_Blue");
        arr.Insert("ZmbF_JournalistNormal_Green");
        arr.Insert("ZmbF_JournalistNormal_Red");
        arr.Insert("ZmbF_ShortSkirt_beige");
        arr.Insert("ZmbF_ShortSkirt_brown");
        arr.Insert("ZmbF_ShortSkirt_checks");
        arr.Insert("ZmbF_ShortSkirt_green");
        arr.Insert("ZmbF_ShortSkirt_grey");
        arr.Insert("ZmbF_ShortSkirt_white");
        arr.Insert("ZmbF_ShortSkirt_yellow");
        arr.Insert("ZmbF_SkaterYoung_Brown");
        arr.Insert("ZmbF_SkaterYoung_Striped");
        arr.Insert("ZmbF_SkaterYoung_Violet");
        arr.Insert("ZmbF_SurvivorNormal_Blue");
        arr.Insert("ZmbF_SurvivorNormal_Red");
        arr.Insert("ZmbF_SurvivorNormal_White");
        arr.Insert("ZmbM_CitizenASkinny_Blue");
        arr.Insert("ZmbM_CitizenASkinny_Grey");
        arr.Insert("ZmbM_CitizenASkinny_Red");
        arr.Insert("ZmbM_CitizenBFat_Blue");
        arr.Insert("ZmbM_CitizenBFat_Green");
        arr.Insert("ZmbM_CitizenBFat_Red");
        arr.Insert("ZmbM_ClerkFat_Grey");
        arr.Insert("ZmbM_ClerkFat_Khaki");
        arr.Insert("ZmbM_ClerkFat_White");
        arr.Insert("ZmbM_CommercialPilotOld_Blue");
        arr.Insert("ZmbM_CommercialPilotOld_Brown");
        arr.Insert("ZmbM_CommercialPilotOld_Olive");
        arr.Insert("ZmbM_Gamedev_Black");
        arr.Insert("ZmbM_Gamedev_Blue");
        arr.Insert("ZmbM_Gamedev_Gray");
        arr.Insert("ZmbM_JournalistSkinny");
        arr.Insert("ZmbM_MotobikerFat_Beige");
        arr.Insert("ZmbM_SkaterYoung_Brown");
        arr.Insert("ZmbM_SkaterYoung_Green");
        arr.Insert("ZmbM_SkaterYoung_Grey");
        InsertEventList("InfectedCity", arr);

        arr.Clear();
        arr.Insert("ZmbF_SkaterYoung_Brown");
        arr.Insert("ZmbF_SkaterYoung_Striped");
        arr.Insert("ZmbF_SkaterYoung_Violet");
        arr.Insert("ZmbM_SkaterYoung_Brown");
        arr.Insert("ZmbM_SkaterYoung_Green");
        arr.Insert("ZmbM_SkaterYoung_Grey");
        InsertEventList("InfectedSchool", arr);

        arr.Clear();
        arr.Insert("ZmbF_Clerk_Normal_Blue");
        arr.Insert("ZmbF_Clerk_Normal_Red");
        arr.Insert("ZmbF_Clerk_Normal_White");
        arr.Insert("ZmbF_JournalistNormal_Blue");
        arr.Insert("ZmbF_JournalistNormal_Red");
        arr.Insert("ZmbF_ShortSkirt_beige");
        arr.Insert("ZmbF_ShortSkirt_green");
        InsertEventList("InfectedOffice", arr);

        arr.Clear();
        arr.Insert("ZmbF_JoggerSkinny_Blue");
        arr.Insert("ZmbF_JoggerSkinny_Brown");
        arr.Insert("ZmbF_JoggerSkinny_Green");
        arr.Insert("ZmbF_MilkMaidOld_Beige");
        arr.Insert("ZmbF_MilkMaidOld_Black");
        arr.Insert("ZmbF_MilkMaidOld_Grey");
        arr.Insert("ZmbF_VillagerOld_Green");
        arr.Insert("ZmbF_VillagerOld_Red");
        arr.Insert("ZmbF_VillagerOld_White");
        arr.Insert("ZmbM_FarmerFat_Blue");
        arr.Insert("ZmbM_FarmerFat_Brown");
        arr.Insert("ZmbM_FarmerFat_Green");
        arr.Insert("ZmbM_Jacket_beige");
        arr.Insert("ZmbM_Jacket_black");
        arr.Insert("ZmbM_Jacket_blue");
        arr.Insert("ZmbM_Jacket_brown");
        arr.Insert("ZmbM_Jacket_greenchecks");
        arr.Insert("ZmbM_Jacket_grey");
        arr.Insert("ZmbM_Jacket_khaki");
        arr.Insert("ZmbM_Jacket_stripes");
        arr.Insert("ZmbM_JoggerSkinny_Blue");
        arr.Insert("ZmbM_JoggerSkinny_Green");
        arr.Insert("ZmbM_VillagerOld_Blue");
        arr.Insert("ZmbM_VillagerOld_White");
        InsertEventList("InfectedVillage", arr);

        arr.Clear();
        arr.Insert("ZmbF_MilkMaidOld_Beige");
        arr.Insert("ZmbF_MilkMaidOld_Black");
        arr.Insert("ZmbF_MilkMaidOld_Grey");
        arr.Insert("ZmbM_FarmerFat_Blue");
        arr.Insert("ZmbM_FarmerFat_Brown");
        arr.Insert("ZmbM_FarmerFat_Green");
        InsertEventList("InfectedFarm", arr);

        arr.Clear();
        arr.Insert("ZmbF_DoctorSkinny");
        arr.Insert("ZmbF_NurseFat");
        arr.Insert("ZmbF_ParamedicNormal_Blue");
        arr.Insert("ZmbF_ParamedicNormal_Green");
        arr.Insert("ZmbF_ParamedicNormal_Red");
        arr.Insert("ZmbM_DoctorFat");
        arr.Insert("ZmbF_PatientOld");
        arr.Insert("ZmbM_PatientSkinny");
        arr.Insert("ZmbM_ParamedicNormal_Blue");
        arr.Insert("ZmbM_ParamedicNormal_Green");
        arr.Insert("ZmbM_ParamedicNormal_Red");
        InsertEventList("InfectedMedic", arr);

        arr.Clear();
        arr.Insert("ZmbM_FirefighterNormal");
        arr.Insert("ZmbM_NBC_Yellow");
        InsertEventList("InfectedFirefighter", arr);

        arr.Clear();
        arr.Insert("ZmbF_PoliceWomanNormal");
        arr.Insert("ZmbM_PolicemanFat");
        arr.Insert("ZmbM_PolicemanSpecForce");
        InsertEventList("InfectedPolice", arr);

        arr.Clear();
        arr.Insert("ZmbM_PrisonerSkinny");
        arr.Insert("ZmbM_PolicemanSpecForce_Heavy");
        InsertEventList("InfectedPrisoner", arr);

        arr.Clear();
        arr.Insert("ZmbF_HikerSkinny_Blue");
        arr.Insert("ZmbF_HikerSkinny_Green");
        arr.Insert("ZmbF_HikerSkinny_Grey");
        arr.Insert("ZmbF_HikerSkinny_Red");
        arr.Insert("ZmbM_HikerSkinny_Blue");
        arr.Insert("ZmbM_HikerSkinny_Green");
        arr.Insert("ZmbM_HikerSkinny_Yellow");
        arr.Insert("ZmbM_HunterOld_Autumn");
        arr.Insert("ZmbM_HunterOld_Spring");
        arr.Insert("ZmbM_HunterOld_Summer");
        arr.Insert("ZmbM_HunterOld_Winter");
        InsertEventList("InfectedSolitude", arr);

        arr.Clear();
        arr.Insert("ZmbM_FishermanOld_Blue");
        arr.Insert("ZmbM_FishermanOld_Green");
        arr.Insert("ZmbM_FishermanOld_Grey");
        arr.Insert("ZmbM_FishermanOld_Red");
        InsertEventList("InfectedCoast", arr);

    }

    private void InsertUsage(string usage, string eventName)
    {
        PlayZUsageMapEntry e = new PlayZUsageMapEntry;
        e.Usage = usage; e.Event = eventName;
        UsageToEvent.Insert(e);
    }

    private void InsertEventList(string eventName, array<string> types)
    {
        PlayZEventTypesEntry e = new PlayZEventTypesEntry;
        e.Event = eventName;
        e.Types.InsertArray(types);
        EventTypes.Insert(e);
    }

    private void InsertBuildingOverride(string cls, string eventName)
    {
        PlayZBuildingEventEntry b = new PlayZBuildingEventEntry;
        b.Classname = cls; b.Event = eventName;
        BuildingEventOverrides.Insert(b);
    }
}

class PlayZConfig
{
    private static const string MOD_FOLDER  = "$profile:PlayZ/";
    private static const string CONFIG_PATH = MOD_FOLDER + "Config.json";

    private static ref PlayZConfig m_Instance;
    private ref PlayZConfigData m_Data;

    private ref map<string, TStringArray> m_EventToTypes;
    private ref map<string, string>           m_UsageToEvent;
    private ref map<string, string>           m_BuildingOverride;

    static PlayZConfig GetInstance()
    {
        if (!m_Instance) m_Instance = new PlayZConfig();
        return m_Instance;
    }

    private void PlayZConfig()
    {
        m_Data = new PlayZConfigData();
        m_EventToTypes   = new map<string, TStringArray>();
        m_UsageToEvent   = new map<string, string>;
        m_BuildingOverride = new map<string, string>;
    }

    void Load()
    {
        if (!GetGame().IsServer()) return;

        if (FileExist(CONFIG_PATH))
        {
            JsonSerializer serializer = new JsonSerializer();
            string fileContent;
            string errorMessage;

            FileHandle fh = OpenFile(CONFIG_PATH, FileMode.READ);
            if (fh != 0)
            {
                string line;
                while (FGets(fh, line) > 0) fileContent += line;
                CloseFile(fh);

                if (!serializer.ReadFromString(m_Data, fileContent, errorMessage))
                {
                    Print("[PlayZ] ERROR: Can't parse Config.json: " + errorMessage + " - using defaults from code.");
                }
                else
                {
                    Print("[PlayZ] Config.json loaded.");
                }
            }
        }
        else
        {
            Print("[PlayZ] WARNING: Config.json not found. Creating default config.");
            CreateDefaultConfig();
        }

        AutoClamp();
        BuildRuntimeMaps();
    }

    void Save()
    {
        if (!GetGame().IsServer()) return;

        if (!FileExist(MOD_FOLDER)) MakeDirectory(MOD_FOLDER);

        JsonSerializer serializer = new JsonSerializer();
        string outStr;
        serializer.WriteToString(m_Data, true, outStr);

        FileHandle fh = OpenFile(CONFIG_PATH, FileMode.WRITE);
        if (fh != 0)
        {
            FPrintln(fh, outStr);
            CloseFile(fh);
        }

        Print("[PlayZ] Config.json saved.");
    }

    private void CreateDefaultConfig()
    {
        if (!FileExist(MOD_FOLDER)) MakeDirectory(MOD_FOLDER);
        m_Data = new PlayZConfigData();
        Save();
    }

    private void AutoClamp()
    {
        PlayZZombieSpawnerSettings s = m_Data.ZombieSpawner;

        if (s.DebugConfigLog != 0 && s.DebugConfigLog != 1)
            s.DebugConfigLog = 0;

        s.SpawnChance = Math.Clamp(s.SpawnChance, 0, 100);

        if (s.CheckRadius < 1.0) s.CheckRadius = 1.0;
        if (s.SafeCheckRadius < 0) s.SafeCheckRadius = 0;
        if (s.SafeCheckRadius >= s.CheckRadius) s.SafeCheckRadius = s.CheckRadius * 0.75;

        if (s.MinZombiesToSpawn < 1) s.MinZombiesToSpawn = 1;
        if (s.MaxZombiesToSpawn < s.MinZombiesToSpawn) s.MaxZombiesToSpawn = s.MinZombiesToSpawn;

        if (s.MaxInfected < 1) s.MaxInfected = 1;

        if (s.MaxInfectedPerPlayer < 1) s.MaxInfectedPerPlayer = 1;
        if (s.MaxInfectedPerPlayer > s.MaxInfected) s.MaxInfectedPerPlayer = s.MaxInfected;

        if (s.TimestampLifetimeSec < s.SpawnCooldownSec)
        {
            Print("[PlayZ] WARNING: TimestampLifetimeSec < SpawnCooldownSec. Adjusting to match cooldown.");
            s.TimestampLifetimeSec = s.SpawnCooldownSec;
        }

        if (s.MinUniqueSpawnSeparation < 0.2) s.MinUniqueSpawnSeparation = 0.2;

        if (!m_Data.SpawnFilters) m_Data.SpawnFilters = new PlayZSpawnFilters();
        if (!m_Data.SpawnFilters.AllowedContainers || m_Data.SpawnFilters.AllowedContainers.Count() == 0)
            m_Data.SpawnFilters.AllowedContainers = {"lootFloor"};
        if (m_Data.SpawnFilters.MinHeight < 0.0) m_Data.SpawnFilters.MinHeight = 0.0;
        if (m_Data.SpawnFilters.MinRange  < 0.0) m_Data.SpawnFilters.MinRange  = 0.0;
        if (m_Data.SpawnFilters.DefaultEvent == "") m_Data.SpawnFilters.DefaultEvent = "InfectedCity";
    }

    private void BuildRuntimeMaps()
    {
        m_EventToTypes.Clear();
        m_UsageToEvent.Clear();
        m_BuildingOverride.Clear();

        map<string, TStringArray> defaults = new map<string, TStringArray>();
        {
            PlayZConfigData defData = new PlayZConfigData();
            for (int di = 0; di < defData.EventTypes.Count(); di++)
            {
                PlayZEventTypesEntry de = defData.EventTypes[di];
                if (!de || de.Event == "") continue;

                TStringArray arr = new TStringArray();
                if (de.Types && de.Types.Count() > 0)
                {
                    for (int dk = 0; dk < de.Types.Count(); dk++)
                    {
                        string t = de.Types[dk];
                        if (t != "") arr.Insert(t);
                    }
                }
                defaults.Set(de.Event, arr);
            }
        }

        if (!m_Data.EventTypes)
        {
            m_Data.EventTypes = new array<ref PlayZEventTypesEntry>();
        }

        for (int i = 0; i < m_Data.EventTypes.Count(); i++)
        {
            PlayZEventTypesEntry e = m_Data.EventTypes[i];
            if (!e || e.Event == "") continue;

            TStringArray outArr = new TStringArray();

            if (e.Types && e.Types.Count() > 0)
            {
                for (int k = 0; k < e.Types.Count(); k++)
                {
                    string typeName = e.Types[k];
                    if (typeName != "")
                        outArr.Insert(typeName);
                }
            }

            if (outArr.Count() == 0)
            {
                TStringArray defList;
                if (defaults.Find(e.Event, defList) && defList && defList.Count() > 0)
                {
                    for (int defIndex = 0; defIndex < defList.Count(); defIndex++)
                    {
                        outArr.Insert(defList[defIndex]);
                    }

                    Print("[PlayZ] NOTE: Event '" + e.Event + "' had no JSON Types; using built-in defaults (" + outArr.Count().ToString() + ").");
                }
            }

            m_EventToTypes.Set(e.Event, outArr);
        }

        foreach (string defEv, TStringArray defTypes : defaults)
        {
            if (!m_EventToTypes.Contains(defEv))
            {
                TStringArray copy = new TStringArray();
                if (defTypes) copy.InsertArray(defTypes);
                m_EventToTypes.Set(defEv, copy);
                Print("[PlayZ] NOTE: Missing event '" + defEv + "' added from defaults (" + copy.Count().ToString() + ").");
            }
        }

        if (m_Data.UsageToEvent)
        {
            for (int u = 0; u < m_Data.UsageToEvent.Count(); u++)
            {
                PlayZUsageMapEntry m = m_Data.UsageToEvent[u];
                if (!m || m.Usage == "" || m.Event == "") continue;
                m_UsageToEvent.Set(m.Usage, m.Event);
            }
        }

        if (m_Data.BuildingEventOverrides)
        {
            for (int b = 0; b < m_Data.BuildingEventOverrides.Count(); b++)
            {
                PlayZBuildingEventEntry o = m_Data.BuildingEventOverrides[b];
                if (!o || o.Classname == "" || o.Event == "") continue;
                m_BuildingOverride.Set(o.Classname, o.Event);
            }
        }

        if (m_Data.ZombieSpawner && m_Data.ZombieSpawner.DebugConfigLog == 1)
        {
            foreach (string ev, TStringArray list : m_EventToTypes)
            {
                int cnt;
                if (list)
                    cnt = list.Count();
                else
                    cnt = 0;

                Print("[PlayZ] Event '" + ev + "' has " + cnt.ToString() + " types");
            }
        }
    }

    PlayZZombieSpawnerSettings GetZombieSpawnerSettings() { return m_Data.ZombieSpawner; }
    PlayZSpawnFilters          GetSpawnFilters()          { return m_Data.SpawnFilters;  }
    string                     GetProtoPath()             { return m_Data.Files.MapGroupProto; }
    string                     GetPosPath()               { return m_Data.Files.MapGroupPos;   }

    TStringArray GetTypesForEvent(string eventName)
    {
        TStringArray arr;
        if (m_EventToTypes.Find(eventName, arr) && arr && arr.Count() > 0)
            return arr;

        PlayZConfigData defData = new PlayZConfigData();
        for (int i = 0; i < defData.EventTypes.Count(); i++)
        {
            PlayZEventTypesEntry e = defData.EventTypes[i];
            if (e && e.Event == eventName && e.Types && e.Types.Count() > 0)
            {
                TStringArray copy = new TStringArray();
                for (int k = 0; k < e.Types.Count(); k++)
                    copy.Insert(e.Types[k]);

                m_EventToTypes.Set(eventName, copy);

                if (m_Data.ZombieSpawner && m_Data.ZombieSpawner.DebugConfigLog == 1)
                    Print("[PlayZ] NOTE: Lazy backfill for event '" + eventName + "' (" + copy.Count().ToString() + ").");
                    return copy;
            }
        }

        return new TStringArray();
    }

    bool MapUsageToEvent(string usage, out string eventOut)
    {
        return m_UsageToEvent.Find(usage, eventOut);
    }

    bool GetBuildingOverride(string className, out string eventOut)
    {
        return m_BuildingOverride.Find(className, eventOut);
    }

    bool IsBuildingAllowed(string className)
    {
        PlayZSpawnFilters f = m_Data.SpawnFilters;
        if (!f) return true;

        if (f.BuildingBlacklist && f.BuildingBlacklist.Find(className) != -1)
            return false;

        if (f.BuildingWhitelist && f.BuildingWhitelist.Count() > 0)
            return f.BuildingWhitelist.Find(className) != -1;

        return true;
    }
}
