class CfgPatches
{
	class DZ_Characters_Tops_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Characters",
			"DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing;
	class Hoodie_ColorBase: Clothing
	{
		itemsCargoSize[] = {
			4,
			4
		};
	};
	class DownJacket_ColorBase: Clothing
	{
		itemsCargoSize[] = {
			5,
			4
		};
	};
	class Sweater_ColorBase: Clothing
	{
		itemsCargoSize[] = {
			4,
			4
		};
	};
	class HikingJacket_ColorBase: Clothing
	{
		itemsCargoSize[] = {
			5,
			4
		};
	};
};