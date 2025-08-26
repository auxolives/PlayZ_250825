class CfgPatches
{
	class DZ_Gear_Food_Terje_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Food",
			"TerjeMedicine"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class FoodCan_250g_Opened_ColorBase;
	class DogFoodCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		medMindDegradationForce = 0.22;
		medMindDegradationTime = 1.0;
	};
	class CatFoodCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		medMindDegradationForce = 0.3;
		medMindDegradationTime = 1.0;
	};
	class MushroomBase;
	class PsilocybeMushroom: MushroomBase
	{
		medMindDegradationForce = 0.25;
		medMindDegradationTime = 24.0;
		medPainkillerLevel = 3;
		medPainkillerTimeSec = 5.0;
		overdosedIncrement = 0.05;
	};
	class AmanitaMushroom: MushroomBase
	{
		overdosedIncrement = 0.05;
	};
};