modded class AreaExposureMdfr : ModifierBase
{
    override void OnActivate(PlayerBase player)
    {
        JsonDataContaminatedAreas data = EffectAreaLoader.GetData();
        if (data)
        {
            // MiscGameplayFunctions.TeleportCheck(player, data.SafePositions);
            // player.SetPersistentFlag(PersistentFlag.AR	EA_PRESENCE, false);
        }
        
        float transmitted = TransmitAgents(player, 1);
        if (transmitted) 
            player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
        
        m_NextEvent1 = Math.RandomFloatInclusive(EVENT_1_INTERVAL_MIN, EVENT_1_INTERVAL_MAX);
    }
}