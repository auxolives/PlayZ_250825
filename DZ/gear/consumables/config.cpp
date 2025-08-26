class CfgPatches
{
	class DZ_Gear_Consumables_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Medical",
			"DZ_Gear_Consumables"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Pelt_Base;
	class WoodenLog: Inventory_Base
	{
		itemSize[] = {
			4,
			14
		};
	};
	class Stone: Inventory_Base
	{
		weight = 6000;
		itemSize[] = {
			4,
			4
		};
	};
	class WildboarPelt: Pelt_Base
	{
		itemSize[]={4,3};
	};
	class RabbitPelt: Pelt_Base
	{
		itemSize[]={2,1};
	};
	class CowPelt: Pelt_Base
	{
		itemSize[]={6,3};
	};
	class PigPelt: Pelt_Base
	{
		itemSize[]={4,3};
	};
	class DeerPelt: Pelt_Base
	{
		itemSize[]={5,3};
	};
	class ReindeerPelt: Pelt_Base
	{
		itemSize[]={5,3};
	};
	class GoatPelt: Pelt_Base
	{
		itemSize[]={4,3};
	};
	class BearPelt: Pelt_Base
	{
		itemSize[]={7,4};
	};
	class WolfPelt: Pelt_Base
	{
		itemSize[]={4,3};
	};
	class SheepPelt: Pelt_Base
	{
		itemSize[]={4,3};
	};
	class MouflonPelt: Pelt_Base
	{
		itemSize[]={3,2};
	};
	class FoxPelt: Pelt_Base
	{
		itemSize[]={3,2};
	};
};