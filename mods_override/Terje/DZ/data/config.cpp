class CfgPatches
{
	class DZ_Data_Terje_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"TerjeMedicine"
		};
		worlds[] = {};
	};
};
class cfgLiquidDefinitions
{
	class Vodka
	{
		medSleepingIncrementValue = -4;
		medSleepingIncrementTimeSec = 5.0;
		overdosedIncrement = 0.0040;
		medPainkillerLevel = 2;
		medPainkillerTimeSec = 1;
	};
};