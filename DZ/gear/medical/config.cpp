class CfgPatches
{
	class DZ_Gear_Medical_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Medical"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Epinephrine: Inventory_Base
	{
		scope = 0;
	};
};