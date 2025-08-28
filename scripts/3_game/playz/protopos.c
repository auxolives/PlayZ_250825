class ProtoPoint
{
    vector  localPos;
    float   range;
    float   height;
    string  container;
};

class ProtoGroup
{
    string                      name;
    ref TStringArray            usages;
    ref array<ref ProtoPoint>   points;

    void ProtoGroup(string n)
    {
        name   = n;
        usages = new TStringArray;
        points = new array<ref ProtoPoint>;
    }
};

class MapGroupInstance
{
    string  name;
    vector  pos;
    vector  rpy;
};

class StaticAnchor
{
    vector                  worldPos;
    float                   radius;
    float                   headroom;
    ref TStringArray        candidateEvents;
    string                  buildingType;
    float                   lastSpawnSec;
    string                  buildingKey;
    float                   lastPlayerNearSec;
    ref array<DayZInfected> spawned;
    int                     spawnStacks;

    void StaticAnchor()
    {
        spawned = new array<DayZInfected>;
        lastPlayerNearSec = 0;
        spawnStacks = 0;
    }
}

static vector AdaptSpawnPosition(vector worldPos, vector rpy, vector localPos)
{
    vector ypr = Vector(rpy[2], rpy[1], rpy[0]);

    float yawOffsetDeg = 270.0;

    ypr[0] = ypr[0] + yawOffsetDeg;

    vector m[3];
    Math3D.YawPitchRollMatrix(ypr, m);

    return worldPos + m[0] * localPos[0] + m[1] * localPos[1] + m[2] * localPos[2];
}

static vector ParseVec(string s)
{
    s.Trim();
    TStringArray p = new TStringArray;
    s.Split(" ", p);
    float x = 0, y = 0, z = 0;
    if (p.Count() > 0 && p[0].Length()) x = p[0].ToFloat();
    if (p.Count() > 1 && p[1].Length()) y = p[1].ToFloat();
    if (p.Count() > 2 && p[2].Length()) z = p[2].ToFloat();
    return Vector(x,y,z);
}

static bool ReadAllLines(string path, out array<string> lines)
{
    lines = new array<string>;
    FileHandle fh = OpenFile(path, FileMode.READ);
    if (!fh) return false;
    string line;
    while (FGets(fh, line) > 0) lines.Insert(line);
    CloseFile(fh);
    return true;
}

class ProtoDB
{
    ref map<string, ref ProtoGroup> groups = new map<string, ref ProtoGroup>;

    float MIN_HEIGHT = 1.7;
    float MIN_RANGE  = 0.5;
    ref TStringArray ALLOWED_CONTAINERS;

    void ProtoDB(PlayZSpawnFilters filters = null)
    {
        if (filters)
        {
            MIN_HEIGHT         = filters.MinHeight;
            MIN_RANGE          = filters.MinRange;
            ALLOWED_CONTAINERS = filters.AllowedContainers;
        }
        if (!ALLOWED_CONTAINERS || ALLOWED_CONTAINERS.Count() == 0)
            ALLOWED_CONTAINERS = {"lootFloor"};
    }

    bool Load(string path)
    {
        array<string> lines;
        if (!ReadAllLines(path, lines))
        {
            Print("[PlayZ] ERROR: Cannot read proto file: " + path);
            return false;
        }

        ProtoGroup current = null;
        string currentContainer = "";

        foreach (string _raw : lines)
        {
            string line = _raw; line.Replace("\t", " "); line.Trim();

            if (line.Contains("<group") && line.Contains("name=") && !line.Contains("</group"))
            {
                string name;
                if (ExtractAttr(line, "name", name))
                {
                    current = new ProtoGroup(name);
                    groups.Set(name, current);
                }
                continue;
            }

            if (!current) continue;

            if (line.Contains("<usage"))
            {
                string u;
                if (ExtractAttr(line, "name", u)) current.usages.Insert(u);
                continue;
            }

            if (line.Contains("<container") && line.Contains("name="))
            {
                ExtractAttr(line, "name", currentContainer);
                continue;
            }

            if (line.Contains("<point") && line.Contains("pos="))
            {
                if (ALLOWED_CONTAINERS.Find(currentContainer) == -1)
                    continue;

                string posS, rangeS, heightS;
                if (!ExtractAttr(line, "pos", posS)) continue;
                ExtractAttr(line, "range",  rangeS);
                ExtractAttr(line, "height", heightS);

                float range  = rangeS.ToFloat();
                float height = heightS.ToFloat();
                if (height <= MIN_HEIGHT || range <= MIN_RANGE)
                    continue;

                ProtoPoint pt = new ProtoPoint;
                pt.localPos  = ParseVec(posS);
                pt.range     = range;
                pt.height    = height;
                pt.container = currentContainer;
                current.points.Insert(pt);
                continue;
            }

            if (line.Contains("</group>"))
            {
                current = null;
                currentContainer = "";
                continue;
            }
        }

        Print("[PlayZ] ProtoDB loaded groups=" + groups.Count());
        return true;
    }

    private bool ExtractAttr(string line, string key, out string outVal)
    {
        outVal = "";
        int k = line.IndexOf(key + "=\"");
        if (k < 0) return false;
        int s = k + key.Length() + 2;
        int e = line.IndexOfFrom(s, "\"");
        if (e < 0) return false;
        outVal = line.Substring(s, e - s);
        return true;
    }
}

class PosDB
{
    ref array<ref MapGroupInstance> instances = new array<ref MapGroupInstance>;

    bool Load(string path)
    {
        array<string> lines;
        if (!ReadAllLines(path, lines))
        {
            Print("[PlayZ] ERROR: Cannot read pos file: " + path);
            return false;
        }

        foreach (string _raw : lines)
        {
            string line = _raw; line.Replace("\t"," "); line.Trim();
            if (!line.Contains("<group")) continue;
            if (!line.Contains("name=") || !line.Contains("pos=") || !line.Contains("rpy=")) continue;

            string nameS, posS, rpyS;
            if (!ExtractAttr(line, "name", nameS)) continue;
            ExtractAttr(line, "pos", posS);
            ExtractAttr(line, "rpy", rpyS);

            MapGroupInstance inst = new MapGroupInstance;
            inst.name = nameS;
            inst.pos  = ParseVec(posS);
            inst.rpy  = ParseVec(rpyS);

            instances.Insert(inst);
        }

        Print("[PlayZ] PosDB loaded instances=" + instances.Count());
        return true;
    }

    private bool ExtractAttr(string line, string key, out string outVal)
    {
        outVal = "";
        int k = line.IndexOf(key + "=\"");
        if (k < 0) return false;
        int s = k + key.Length() + 2;
        int e = line.IndexOfFrom(s, "\"");
        if (e < 0) return false;
        outVal = line.Substring(s, e - s);
        return true;
    }
}
