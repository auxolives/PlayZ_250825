class CfgPatches
{
	class DZ_Data_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data"
		};
		worlds[] = {};
	};
};
class CfgWorlds
{
	initWorld = "ChernarusPlus";
	class DefaultLighting
	{
		groundReflection[] = {
			0.0085,
			0.0068,
			0.0034
		};
		moonObjectColorFull[] = {
			0.5,
			0.4,
			0.4,
			1
		};
		moonHaloObjectColorFull[] = {
			0.5,
			0.4,
			0.4,
			0
		};
		moonsetObjectColor[] = {
			0.55,
			0.35,
			0.25
		};
		moonsetHaloObjectColor[] = {
			0.55,
			0.35,
			0.25
		};
		nightAngle = 5;
		sunSunset = 20;
		endSunset = 10;
		moonDayIntensity = 20.5;
		moonNightIntensity = 3.5000002;
	};
	class DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
	};
	class CAWorld: DefaultWorld
	{
		class Weather: Weather
		{
			class VolFog
			{
				CameraFog = 0;
				Item1[] = {
					800,
					0.06,
					0.93,
					0.13,
					1
				};
				Item2[] = {
					1300,
					0.02,
					0.9,
					0.05,
					1
				};
			};
			class Fog
			{
				nearDistanceFraction = 0.4;
				farDistanceFraction = 0.8;
			};
			class RainFog
			{
				distance = 600;
			};
			class SnowfallFog
			{
				distance = 600;
			};
		};
	};
	class ChernarusPlus: CAWorld
	{
		latitude = 54.8;
		longitude = -68.3;
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
		liquidFreezeThreshold=-40;
	};
};