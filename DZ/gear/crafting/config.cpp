class CfgPatches
{
	class DZ_Gear_Crafting_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Crafting"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class HandDrillKit: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
				};
			};
		};
	};
};