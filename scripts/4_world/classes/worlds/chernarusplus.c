enum EModdedWeatherScenario
{
    CLEAR,
    FOGGY,
    LIGHT_SNOW,
    MEDIUM_SNOW,
    BLIZZARD
};

modded class ChernarusPlusData
{
    private float SCENARIO_OVERCAST_CLEAR             = 0.15;
    private float SCENARIO_OVERCAST_FOGGY             = 0.20;
    private float SCENARIO_OVERCAST_LIGHT_SNOW  	  = 0.45;
    private float SCENARIO_OVERCAST_MEDIUM_SNOW       = 0.55;
    private float SCENARIO_OVERCAST_BLIZZARD          = 0.65;

    private float SCENARIO_SNOWFALL_CLEAR             = 0.00;
    private float SCENARIO_SNOWFALL_FOGGY             = 0.00;
    private float SCENARIO_SNOWFALL_LIGHT_SNOW		  = 0.05;
    private float SCENARIO_SNOWFALL_MEDIUM_SNOW       = 0.50;
    private float SCENARIO_SNOWFALL_BLIZZARD          = 1.00;

    private float SCENARIO_VOLFOG_CLEAR               = 0.00;
    private float SCENARIO_VOLFOG_FOGGY               = 0.30;
    private float SCENARIO_VOLFOG_LIGHT_SNOW		  = 0.01;
    private float SCENARIO_VOLFOG_MEDIUM_SNOW         = 0.03;
    private float SCENARIO_VOLFOG_BLIZZARD            = 0.90;

    protected EModdedWeatherScenario m_CurrentScenario = EModdedWeatherScenario.CLEAR;

    private int MIN_TRANSITION_TIME = 300;  
    private int MAX_TRANSITION_TIME = 600;  

    private int MIN_LOCKED_TIME = 400;  
    private int MAX_LOCKED_TIME = 900;  

    private int GetRandomTransitionTime()
    {
        return Math.RandomIntInclusive(MIN_TRANSITION_TIME, MAX_TRANSITION_TIME);
    }

    private int GetRandomLockedTime()
    {
        return Math.RandomIntInclusive(MIN_LOCKED_TIME, MAX_LOCKED_TIME);
    }

    override void Init()
    {
        super.Init();

        m_Sunrise_Jan = 6;
        m_Sunset_Jan  = 18;
        m_Sunrise_Jul = 6;
        m_Sunset_Jul  = 18;

		int tempIdx;

		m_MinTemps = {-7,-7.4,-4.1,1.5,7,11.3,20.4,19.1,18,5.3,0.8,-3.6};
		if (CfgGameplayHandler.GetEnvironmentMinTemps() && CfgGameplayHandler.GetEnvironmentMinTemps().Count() == 12)
		{
			for (tempIdx = 0; tempIdx < CfgGameplayHandler.GetEnvironmentMinTemps().Count(); tempIdx++)
			{
				m_MinTemps[tempIdx] = CfgGameplayHandler.GetEnvironmentMinTemps().Get(tempIdx);
			}
		}

		m_MaxTemps = {-2.5,-2.1,2.3,9,15.5,19.4,25,22,21,10.5,4.2,0.1};
		if (CfgGameplayHandler.GetEnvironmentMaxTemps() && CfgGameplayHandler.GetEnvironmentMaxTemps().Count() == 12)
		{
			for (tempIdx = 0; tempIdx < CfgGameplayHandler.GetEnvironmentMaxTemps().Count(); tempIdx++)
			{
				m_MaxTemps[tempIdx] = CfgGameplayHandler.GetEnvironmentMaxTemps().Get(tempIdx);
			}
		}

        if (GetGame().IsServer() || !GetGame().IsMultiplayer())
        {
            m_Weather.SetDynVolFogHeightDensity(1, 60);
            m_Weather.SetDynVolFogHeightBias(0, 0);
            m_Weather.GetFog().Set(0, 0, 1000);
            m_Weather.GetFog().SetLimits(0, 0);
            m_Weather.GetOvercast().SetLimits(0.07, 1);

            if (GetGame().IsMultiplayer())
            {
                m_Weather.GetOvercast().Set(Math.RandomFloat(0, 0.75), 0, 5);
            }
        }

		m_WorldWindCoef                         = 0.8;
		m_CloudsTemperatureEffectModifier       = 2.0;
		m_TemperaturePerHeightReductionModifier = 0.03;
		m_TemperatureInsideBuildingsModifier 	= 6.0;
		m_WaterContactTemperatureModifier 		= 30.0;

        m_Weather.SetSnowfallThresholds(0.1, 1.0, 10);
        m_CurrentScenario = ChooseModdedWeatherScenario();
    }

    EModdedWeatherScenario ChooseModdedWeatherScenario()
    {
        EModdedWeatherScenario current = m_CurrentScenario;
        
        float weightClear      = 0;
        float weightFoggy      = 0;
        float weightLightSnow  = 0;
        float weightMediumSnow = 0;
        float weightBlizzard   = 0;
        
        switch (current)
        {
            case EModdedWeatherScenario.CLEAR:
            {
                weightClear      = 75;
                weightFoggy      = 5;
                weightLightSnow  = 10;
                weightMediumSnow = 5;
                weightBlizzard   = 5;
                break;
            }
            case EModdedWeatherScenario.FOGGY:
            {
                weightClear      = 100;
                weightFoggy      = 0;
                weightLightSnow  = 0;
                weightMediumSnow = 0;
                weightBlizzard   = 0;
                break;
            }
            case EModdedWeatherScenario.LIGHT_SNOW:
            {
                weightClear      = 40;
                weightFoggy      = 0;
                weightLightSnow  = 20;
                weightMediumSnow = 30;
                weightBlizzard   = 10;
                break;
            }
            case EModdedWeatherScenario.MEDIUM_SNOW:
            {
                weightClear      = 50;
                weightFoggy      = 0;
                weightLightSnow  = 25;
                weightMediumSnow = 10;
                weightBlizzard   = 15;
                break;
            }
            case EModdedWeatherScenario.BLIZZARD:
            {
                weightClear      = 30;
                weightFoggy      = 0;
                weightLightSnow  = 20;
                weightMediumSnow = 50;
                weightBlizzard   = 0;
                break;
            }
            default:
            {
                weightClear      = 70;
                weightFoggy      = 10;
                weightLightSnow  = 10;
                weightMediumSnow = 10;
                weightBlizzard   = 5;
                break;
            }
        }
        
        float totalWeight = weightClear + weightFoggy + weightLightSnow + weightMediumSnow + weightBlizzard;
        
        float roll = Math.RandomFloatInclusive(0, totalWeight);
        
        if (roll < weightClear)
        {
            return EModdedWeatherScenario.CLEAR;
        }
        roll -= weightClear;
        if (roll < weightFoggy)
        {
            return EModdedWeatherScenario.FOGGY;
        }
        roll -= weightFoggy;
        if (roll < weightLightSnow)
        {
            return EModdedWeatherScenario.LIGHT_SNOW;
        }
        roll -= weightLightSnow;
        if (roll < weightMediumSnow)
        {
            return EModdedWeatherScenario.MEDIUM_SNOW;
        }
        return EModdedWeatherScenario.BLIZZARD;
    }

	float RandomizeValue(float value)
	{
		float min = Math.Max(value * 0.9, 0.0);
		float max = Math.Min(value * 1.1, 1.0);
		return Math.RandomFloatInclusive(min, max);
	}

    override bool WeatherOnBeforeChange(EWeatherPhenomenon type, float actual, float change, float time)
    {
        switch (type)
        {
            case EWeatherPhenomenon.OVERCAST:
            {
                m_CurrentScenario = ChooseModdedWeatherScenario();

                float targetOvercast = 0.3;
                switch (m_CurrentScenario)
                {
                    case EModdedWeatherScenario.CLEAR:
                        targetOvercast = RandomizeValue(SCENARIO_OVERCAST_CLEAR);
                        break;
                    case EModdedWeatherScenario.FOGGY:
                        targetOvercast = RandomizeValue(SCENARIO_OVERCAST_FOGGY); 
                        break;
                    case EModdedWeatherScenario.LIGHT_SNOW:
                        targetOvercast = RandomizeValue(SCENARIO_OVERCAST_LIGHT_SNOW);
                        break;
                    case EModdedWeatherScenario.MEDIUM_SNOW:
                        targetOvercast = RandomizeValue(SCENARIO_OVERCAST_MEDIUM_SNOW);
                        break;
                    case EModdedWeatherScenario.BLIZZARD:
                        targetOvercast = SCENARIO_OVERCAST_BLIZZARD;
                        break;
                }

                float targetSnowfall = 0.0;
                switch (m_CurrentScenario)
                {
                    case EModdedWeatherScenario.CLEAR:
                        targetSnowfall = SCENARIO_SNOWFALL_CLEAR;
                        break;
                    case EModdedWeatherScenario.FOGGY:
                        targetSnowfall = SCENARIO_SNOWFALL_FOGGY;
                        break;
                    case EModdedWeatherScenario.LIGHT_SNOW:
						targetSnowfall = RandomizeValue(SCENARIO_SNOWFALL_LIGHT_SNOW);
                        break;
                    case EModdedWeatherScenario.MEDIUM_SNOW:
                        targetSnowfall = RandomizeValue(SCENARIO_SNOWFALL_MEDIUM_SNOW);
                        break;
                    case EModdedWeatherScenario.BLIZZARD:
                        targetSnowfall = SCENARIO_SNOWFALL_BLIZZARD;
                        break;
                }

                float targetVolFog = 0.0;
                switch (m_CurrentScenario)
                {
                    case EModdedWeatherScenario.CLEAR:
                        targetVolFog = SCENARIO_VOLFOG_CLEAR;
                        break;
                    case EModdedWeatherScenario.FOGGY:
                        targetVolFog = RandomizeValue(SCENARIO_VOLFOG_FOGGY);
                        break;
                    case EModdedWeatherScenario.LIGHT_SNOW:
                        targetVolFog = RandomizeValue(SCENARIO_VOLFOG_LIGHT_SNOW);
                        break;
                    case EModdedWeatherScenario.MEDIUM_SNOW:
                        targetVolFog = RandomizeValue(SCENARIO_VOLFOG_MEDIUM_SNOW);
                        break;
                    case EModdedWeatherScenario.BLIZZARD:
                        targetVolFog = RandomizeValue(SCENARIO_VOLFOG_BLIZZARD);
                        break;
                }

                int transitionTime = GetRandomTransitionTime();
                int lockedTime = GetRandomLockedTime();

                m_Weather.GetOvercast().Set(targetOvercast, transitionTime, lockedTime);
                m_Weather.SetSnowfallThresholds(0.1, 1.0, 10);
				m_Weather.GetSnowfall().Set(targetSnowfall, transitionTime, transitionTime);
                m_Weather.SetDynVolFogDistanceDensity(targetVolFog, transitionTime);
                m_Weather.GetRain().Set(0.0, 99999, 99999);
				m_Weather.GetRain().SetLimits(0.0, 0.0);
                m_Weather.SetDynVolFogHeightBias(0, 0);
                m_Weather.SetDynVolFogHeightDensity(1, 0);

				float windMag, windDirection;
				float phmnTime   = transitionTime / 5;
				float phmnLength = lockedTime / 5;

				CalculateWind(-1, false, windMag, windDirection);

				m_Weather.GetWindMagnitude().Set(windMag, phmnTime, phmnLength);

				m_Weather.GetWindDirection().Set(windDirection, phmnTime, phmnLength + 1000);

				return true;
            }
        }

        return false;
    }

	override void CalculateWind(int newWeather, bool suddenChange, out float magnitude, out float direction)
	{
		magnitude = 1.0;
		direction = 0.0;
		
		EModdedWeatherScenario scenario = m_CurrentScenario;

		float windChance = Math.RandomIntInclusive(0, 100);

		switch (scenario)
		{
			case EModdedWeatherScenario.CLEAR:
			{
				if (windChance < 65)
				{
					magnitude = Math.RandomFloatInclusive(0, 3);
					direction = Math.RandomFloatInclusive(-1.0, -0.5);
				}
				else if (windChance < 90)
				{
					magnitude = Math.RandomFloatInclusive(3, 8);
					direction = Math.RandomFloatInclusive(-1.3, -0.9);
				}
				else
				{
					magnitude = Math.RandomFloatInclusive(8, 20);
					direction = Math.RandomFloatInclusive(-0.6, 0.0);
				}
				break;
			}

			case EModdedWeatherScenario.FOGGY:
			{
				if (windChance < 50)
				{
					magnitude = Math.RandomFloatInclusive(0, 1);
					direction = Math.RandomFloatInclusive(-3.14, -2.4);
				}
				else
				{
					magnitude = Math.RandomFloatInclusive(0, 2);
					direction = Math.RandomFloatInclusive(-2.2, -1.4);
				}
				break;
			}

			case EModdedWeatherScenario.LIGHT_SNOW:
			{
				if (windChance < 70)
				{
					magnitude = Math.RandomFloatInclusive(0, 4);
					direction = Math.RandomFloatInclusive(-1.0, -0.5);
				}
				else if (windChance < 95)
				{
					magnitude = Math.RandomFloatInclusive(4, 10);
					direction = Math.RandomFloatInclusive(-1.3, -0.9);
				}
				else
				{
					magnitude = Math.RandomFloatInclusive(10, 20);
					direction = Math.RandomFloatInclusive(-0.6, 0.0);
				}
				break;
			}

			case EModdedWeatherScenario.MEDIUM_SNOW:
			{
				if (windChance < 70)
				{
					magnitude = Math.RandomFloatInclusive(0, 4);
					direction = Math.RandomFloatInclusive(1.0, 1.4);
				}
				else if (windChance < 95)
				{
					magnitude = Math.RandomFloatInclusive(4, 10);
					direction = Math.RandomFloatInclusive(1.4, 1.7);
				}
				else
				{
					magnitude = Math.RandomFloatInclusive(10, 20);
					direction = Math.RandomFloatInclusive(1.7, 2.2);
				}
				break;
			}

			case EModdedWeatherScenario.BLIZZARD:
			{
				magnitude = Math.RandomFloatInclusive(15, 20);
				direction = Math.RandomFloatInclusive(0.5, 2.0);
				break;
			}
		}
	}

    override protected void CalculateVolFog(float lerpValue, float windMagnitude, float changeTime)
	{
		
	}
}