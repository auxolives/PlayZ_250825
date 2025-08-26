class CfgPatches
{
	class DZ_Weapons_Muzzles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor: Inventory_Base
	{};
	class ImprovisedSuppressor: ItemSuppressor
	{
		barrelArmor = 600;
	};
};