class CfgPatches
{
	class DZ_Weapons_Melee_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Melee"
		};
		ammo[] = {};
	};
};
class CfgAmmo
{
	class MeleeDamage;
};
class CfgVehicles
{
	class Inventory_Base;
};