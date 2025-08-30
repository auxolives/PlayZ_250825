class CfgPatches
{
	class DZ_Sound_Weapons_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data"
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class Shotgun_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class BoltActionRifle_Base;
	class Pistol_Base;
	class AKM_Base: Rifle_Base
	{
		aimSoundSet = "AK";
	};
	class AK101_Base: Rifle_Base
	{
		aimSoundSet = "AK";
	};
	class AK74_Base: Rifle_Base
	{
		aimSoundSet = "AK";
	};
	class B95_Base: Rifle_Base
	{
		aimSoundSet = "Winchester70";
	};
	class Colt1911_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class CZ61_Base: Rifle_Base
	{
		aimSoundSet = "CZ61";
	};
	class CZ527_Base: BoltActionRifle_Base
	{
		aimSoundSet = "CR527";
	};
	class CZ75_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Deagle_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class FAL_Base: Rifle_Base
	{
		aimSoundSet = "SVD";
	};
	class FNX45_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Glock19_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Izh18_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
		aimSoundSet = "Saiga";
	};
	class M4A1_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class Magnum_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class MakarovIJ70_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet = "Mosin";
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		aimSoundSet = "Saiga";
	};
	class MP5K_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class Repeater_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class Ruger1022_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class Saiga_Base: Rifle_Base
	{
		aimSoundSet = "Saiga";
	};
	class Scout_Base: BoltActionRifle_Base
	{
		aimSoundSet = "CR527";
	};
	class SKS_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class SVD_Base: Rifle_Base
	{
		aimSoundSet = "SVD";
	};
	class UMP45_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class VSS_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet = "Winchester70";
	};
};