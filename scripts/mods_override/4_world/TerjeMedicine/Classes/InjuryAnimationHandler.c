modded class InjuryAnimationHandler
{
	override private eInjuryHandlerLevels CalculateLowEnergyWaterState()
	{
		if (m_Player.GetStatEnergy().Get() <= PlayerConstants.SL_ENERGY_CRITICAL || m_Player.GetStatWater().Get() <= PlayerConstants.SL_WATER_CRITICAL)
		{
			return eInjuryHandlerLevels.DAMAGED;
		}
		
		if (m_Player.GetStatEnergy().Get() <= PlayerConstants.SL_ENERGY_LOW || m_Player.GetStatWater().Get() <= PlayerConstants.SL_WATER_LOW)
		{
			return eInjuryHandlerLevels.WORN;
		}

		return eInjuryHandlerLevels.PRISTINE;
	}
}