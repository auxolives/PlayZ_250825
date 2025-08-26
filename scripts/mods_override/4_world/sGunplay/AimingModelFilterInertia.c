modded class AimingModelFilterInertia
{
    override void onUpdate(float pDt, SDayZPlayerAimingModel pModel, int stanceIndex)
	{
		float stanceMultiplier = 1.0;
		switch (stanceIndex)
		{
			case DayZPlayerConstants.STANCEMASK_CROUCH:
				stanceMultiplier = 0.75;
				break;
			case DayZPlayerConstants.STANCEMASK_PRONE:
				stanceMultiplier = 0.50;
				break;
		}

		float staminaMultiplier = 1.0;
		float resetSpeedMultiplier = 1.0;
		PlayerBase player = PlayerBase.Cast(getAimingModel().m_pPlayer);
		if (player)
		{
			StaminaHandler staminaHandler = player.GetStaminaHandler();
			if (staminaHandler)
			{
				float staminaFraction = Math.Clamp(staminaHandler.GetStamina() / staminaHandler.GetStaminaMax(), 0, 1);
				staminaMultiplier = Math.Map(staminaFraction, 0.0, 1.0, 1.75, 0.9); 
				resetSpeedMultiplier = Math.Map(staminaFraction, 0.0, 1.0, 0.6, 1.1);
			}
		}

        m_accel = getAimingModel().getAimDeltaDegree(pDt) * computeInertiaMultiplier() * stanceMultiplier * staminaMultiplier;
        m_vel += m_accel;
        m_vel[0] = Math.Clamp(m_vel[0], GunplayConstants.INERTIA_VELOCITY_LIMIT[1], GunplayConstants.INERTIA_VELOCITY_LIMIT[2]);
        m_vel[1] = Math.Clamp(m_vel[1], GunplayConstants.INERTIA_VELOCITY_LIMIT[3], GunplayConstants.INERTIA_VELOCITY_LIMIT[0]);
        
        pModel.m_fAimXHandsOffset = Math.SmoothCD(pModel.m_fAimXHandsOffset, pModel.m_fAimXHandsOffset + m_vel[0], m_currInertiaVelX, GunplayConstants.INERTIA_SPEED_ACCELERATION[0], 1000, pDt);
        pModel.m_fAimYHandsOffset = Math.SmoothCD(pModel.m_fAimYHandsOffset, pModel.m_fAimYHandsOffset + m_vel[1], m_currInertiaVelY, GunplayConstants.INERTIA_SPEED_ACCELERATION[1], 1000, pDt);
        
        m_vel[0] = Math.SmoothCD(m_vel[0], 0, m_currResetVelX, GunplayConstants.INERTIA_SPEED_RESET[0] * resetSpeedMultiplier, 1000, pDt);
        m_vel[1] = Math.SmoothCD(m_vel[1], 0, m_currResetVelY, GunplayConstants.INERTIA_SPEED_RESET[1] * resetSpeedMultiplier, 1000, pDt);
        
        if (GetGame().IsClient())
		{
            pModel.m_fAimXCamOffset += m_vel[0] * GunplayConstants.INERTIA_MISALIGNMENT_INTENSITY[0];
            pModel.m_fAimYCamOffset += m_vel[1] * GunplayConstants.INERTIA_MISALIGNMENT_INTENSITY[1];
        }
    }
}