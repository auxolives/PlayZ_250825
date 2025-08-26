class CfgPatches
{
	class DZ_Gear_Drinks_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Drinks"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
	class GlassBottle: Bottle_Base
	{
		varLiquidTypeInit = 2048;
	};
};