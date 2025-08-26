class CfgPatches
{
	class DZ_Characters_Backpacks_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing;
	class MountainBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {
			6,
			12
		};
	};
	class AliceBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {
			9,
			9
		};
	};
	class HuntingBag: Clothing
	{
		itemsCargoSize[] = {
			8,
			8
		};
	};
};