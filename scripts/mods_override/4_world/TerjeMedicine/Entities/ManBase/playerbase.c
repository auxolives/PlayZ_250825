modded class PlayerBase
{
	static const float RABIES_HYDRO_THRESHOLD      = 20.0;

	override bool Consume(PlayerConsumeData data)
	{
		float rabies = 0;
		if (GetTerjeStats())
			rabies = GetTerjeStats().GetRabiesValue();

		if (rabies <= 0)
			return super.Consume(data);

		int rabiesStage = Math.Floor(rabies);

		PlayerStat<float> statWater = GetStatWater();

		if (rabiesStage >= 3)
		{
			if (statWater)
				statWater.Add((data.m_Amount * 0.1));
			if (Math.RandomFloat01() < 0.30)
			{
				GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
				GetStaminaHandler().DepleteStamina(EStaminaModifiers.OVERALL_DRAIN);
			}
			AddHealth("", "Shock", -20);
			GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_GASP);
			return false;
		}

		if (!super.Consume(data))
			return false;

		bool affect = false;

		if (data.m_Type == EConsumeType.ENVIRO_POND || data.m_Type == EConsumeType.ENVIRO_WELL || data.m_Type == EConsumeType.ENVIRO_SNOW)
		{
			affect = true;
		}
		else
		{
			Edible_Base food = Edible_Base.Cast(data.m_Source);
			if (food)
			{
				if (food.IsLiquidContainer())
				{
					int lt = food.GetLiquidType();
					if (lt == LIQUID_WATER || lt == LIQUID_RIVERWATER)
						affect = true;
				}

				if (!affect)
				{
					float waterInFood = Edible_Base.GetFoodWater(food);
					if (waterInFood >= RABIES_HYDRO_THRESHOLD)
						affect = true;
				}
			}
		}

		if (!affect)
			return true;

		if (rabiesStage == 1)
		{
			if (statWater)
				statWater.Add((data.m_Amount * 0.3));
			if (Math.RandomFloat01() < 0.05)
			{
				GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
				GetStaminaHandler().DepleteStamina(EStaminaModifiers.OVERALL_DRAIN);
			}
			if (Math.RandomFloat01() < 0.25)
			{
				AddHealth("", "Shock", -10);
				GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_GASP);
			}
			return false;
		}
		else if (rabiesStage == 2)
		{
			if (statWater)
				statWater.Add((data.m_Amount * 0.2));
			if (Math.RandomFloat01() < 0.15)
			{
				GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
				GetStaminaHandler().DepleteStamina(EStaminaModifiers.OVERALL_DRAIN);
			}
			if (Math.RandomFloat01() < 0.50)
			{
				AddHealth("", "Shock", -15);
				GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_GASP);
			}
			return false;
		}

		return true;
	}
}
