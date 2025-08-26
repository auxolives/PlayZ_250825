class CfgPatches
{
	class TerjeMedicine_Ampouls_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"TerjeMedicine",
			"TerjeMedicine_Ampouls"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class TerjeAmpouleBase;
	class TerjeAmpouleAdrenalin: TerjeAmpouleBase
	{
		medAdrenalinTimeSec = 400;
        overdosedIncrement = 1.9 ;
    };
};