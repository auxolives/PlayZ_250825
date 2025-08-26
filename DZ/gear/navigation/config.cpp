class CfgPatches
{
	class DZ_Gear_Navigation_PlayZ
	{
		units[] = {
			"ChernarusMap"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Navigation"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ItemMap: Inventory_Base
	{};
	class ChernarusMap: ItemMap
	{
		scope = 2;
		inventorySlot[] = {
			"Map"
		};
	};
};