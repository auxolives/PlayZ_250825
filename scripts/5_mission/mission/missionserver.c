modded class MissionServer
{
    ref BuildingZombieSpawner m_PZSpawner;

    override void OnInit()
    {
        super.OnInit();

        if (GetGame().IsServer())
        {
            m_PZSpawner = new BuildingZombieSpawner();
        }
    }

    override void OnMissionFinish()
    {
        super.OnMissionFinish();
        m_PZSpawner = null;
    }
}
