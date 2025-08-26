class CfgPatches
{
	class DZ_AI_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_AI"
		};
	};
};
class CfgAIBehaviours
{
	class Herbivores_CapreolusCapreolus
	{
		class BehaviourHLDeer
		{
			instantAlertRangeMin=30;
			instantAlertRangeMax=75;
			instantAlertStrength=6;
		};
		class NoiseSystemParams
		{
			rangeMin=30;
			rangeMax=105;
			rangeShotMin=125;
			rangeShotMax=375;
		};
		class TargetSystemDZBase
		{
			visionRangeMin=8;
			visionRangeMax=75;
		};
	};
	class Herbivores_SusScrofa
	{
		class BehaviourHLDeer
		{
			instantAlertRangeMin=30;
			instantAlertRangeMax=75;
			instantAlertStrength=7;
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=45;
			rangeShotMin=125;
			rangeShotMax=375;
		};
		class TargetSystemDZBase
		{
			visionRangeMin=8;
			visionRangeMax=90;
		};
	};
	class Herbivores_CervusElaphusFem
	{
		class BehaviourHLDeer
		{
			instantAlertRangeMin=30;
			instantAlertRangeMax=75;
			instantAlertStrength=7;
		};
		class NoiseSystemParams
		{
			rangeMin=30;
			rangeMax=120;
			rangeShotMin=125;
			rangeShotMax=375;
		};
		class TargetSystemDZBase
		{
			visionRangeMin=8;
			visionRangeMax=120;
		};
	};
	class Herbivores_CervusElaphus
	{
		class BehaviourHLDeer
		{
			instantAlertRangeMin=30;
			instantAlertRangeMax=75;
			instantAlertStrength=7;
		};
		class NoiseSystemParams
		{
			rangeMin=30;
			rangeMax=80;
			rangeShotMin=125;
			rangeShotMax=375;
		};
		class TargetSystemDZBase
		{
			visionRangeMin=8;
			visionRangeMax=120;
		};
	};
	class Predators_Wolf
	{
		class BehaviourHLPredator
		{
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[] = {
								"WolfPantShort_SoundSet"
							};
						};
						probability = 1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[] = {
								"WolfPant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[] = {
								"WolfGrowl_SoundSet"
							};
						};
						probability = 0.40000001;
						RepeatTimeMin = 5;
						RepeatTimeMax = 15;
						RepeatEnabled = "true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[] = {
								"WolfBark_SoundSet"
							};
						};
						probability = 0.50000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[] = {
								"WolfBark2_SoundSet"
							};
						};
						class Sound2
						{
							sounds[] = {
								"WolfBark3_SoundSet"
							};
						};
						class Sound3
						{
							sounds[] = {
								"WolfBark_SoundSet"
							};
						};
						probability = 1;
						RepeatTimeMin = 10;
						RepeatTimeMax = 30;
						RepeatEnabled = "true";
					};
				};
			};
		};
	};
};
