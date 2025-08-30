class CfgPatches
{
	class DZ_Data_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Worlds_Chernarusplus_World"
		};
	};
};
class CfgWorlds
{
	class DefaultLighting
	{
		moonDayIntensity = 10.0;
		moonNightIntensity = 8.0;
	};
	class DefaultWorld;
	class CAWorld
	{
		hazeDistCoef = 0;
		hazeFogCoef = 0.5;
		volFogOffset = 0;
	};
	class ChernarusPlus: CAWorld
	{
		latitude = 54;
		longitude = -68;
	};
};
class cfgLiquidDefinitions
{
	class Vodka
	{
		class Nutrition
		{
			energy = 73;
			water = 5;
		};
	};
	class Gasoline
	{
		liquidFreezeThreshold = -40;
	};
};
