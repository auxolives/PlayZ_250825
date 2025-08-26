modded class DayZPlayerMeleeFightLogic_LightHeavy
{
    override bool HandleProneKick(int pCurrentCommandID, HumanInputController pInputs, InventoryItem itemInHands, HumanMovementState pMovementState, out bool pContinueAttack)
    {
        bool didKick = super.HandleProneKick(pCurrentCommandID, pInputs, itemInHands, pMovementState, pContinueAttack);
        
        if (didKick && GetGame().IsServer())
        {
            EntityAI target;
            EMeleeTargetType targetType;
            GetTargetData(target, targetType);
            
            if (target)
            {
                int hitZoneIdx = m_MeleeCombat.GetHitZoneIdx();
                vector hitPosWS = m_MeleeCombat.GetHitPos();

                string kickAmmo = "MeleeFist";
                DamageSystem.CloseCombatDamage(m_Player, target, hitZoneIdx, kickAmmo, hitPosWS);
            }
        }
        
        return didKick;
    }
}
