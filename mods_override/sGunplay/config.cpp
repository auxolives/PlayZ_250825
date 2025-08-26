class CfgPatches
{
	class sGunplay_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Weapons_Supports",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Firearms_UMP",
			"DZ_Weapons_Firearms_cz61",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_Famas",
			"DZ_Weapons_Firearms_AK74",
			"sFramework",
			"sGunplay"
		};
	};
};

class cfgVehicles
{
	class Inventory_Base;

	/***** STOCKS *****/
	class M4_OEBttstck: Inventory_Base
	{
		// Basic M4 stock: balanced approach, moderate stats
		s_recoilControlStabilityX = 0.38;
		s_recoilControlStabilityY = 0.39;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.14;
		s_recoilControlKick = 0.58;
	};
	class M4_MPBttstck: Inventory_Base
	{
		// Polymer buttstock: slightly lighter, mild recoil, slightly more misalignment
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.36;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.54;
	};
	class M4_CQBBttstck: Inventory_Base
	{
		// CQB short stock: good for close quarters, higher misalignment & recoil
		s_recoilControlStabilityX = 0.44;
		s_recoilControlStabilityY = 0.38;
		s_recoilControlMisalignmentX = 0.06;
		s_recoilControlMisalignmentY = 0.18;
		s_recoilControlKick = 0.63;
	};
	class AK_WoodBttstck: Inventory_Base
	{
		// Wood stock: heavier, good stability, moderate misalignment
		s_recoilControlStabilityX = 0.42;
		s_recoilControlStabilityY = 0.42;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.14;
		s_recoilControlKick = 0.58;
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		// Plastic stock: slightly less stable than wood, but a bit less recoil kick
		s_recoilControlStabilityX = 0.38;
		s_recoilControlStabilityY = 0.36;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.55;
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		// Folding: more compact, can add misalignment and slightly higher recoil
		s_recoilControlStabilityX = 0.43;
		s_recoilControlStabilityY = 0.38;
		s_recoilControlMisalignmentX = 0.06;
		s_recoilControlMisalignmentY = 0.18;
		s_recoilControlKick = 0.62;
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		// Similar to AK_Wood, just a separate variant
		s_recoilControlStabilityX = 0.42;
		s_recoilControlStabilityY = 0.42;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.14;
		s_recoilControlKick = 0.58;
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		// Short variant stock, close quarters
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.38;
		s_recoilControlMisalignmentX = 0.06;
		s_recoilControlMisalignmentY = 0.17;
		s_recoilControlKick = 0.60;
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		// MP5 folding or minimal stock: moderate stability, decent recoil
		s_recoilControlStabilityX = 0.38;
		s_recoilControlStabilityY = 0.38;
		s_recoilControlMisalignmentX = 0.06;
		s_recoilControlMisalignmentY = 0.16;
		s_recoilControlKick = 0.58;
	};
	class Saiga_Bttstck: Inventory_Base
	{
		// Basic shotgun stock, moderate stability and misalignment
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.58;
	};
	class Fal_OeBttstck: Inventory_Base
	{
		// Standard FAL stock: moderate stability and kick
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.14;
		s_recoilControlKick = 0.58;
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		// Folding: smaller profile, a bit more misalignment
		s_recoilControlStabilityX = 0.38;
		s_recoilControlStabilityY = 0.36;
		s_recoilControlMisalignmentX = 0.06;
		s_recoilControlMisalignmentY = 0.16;
		s_recoilControlKick = 0.55;
	};
	class PP19_Bttstck: Inventory_Base
	{
		// Basic PP19 stock: moderate stability, moderate recoil
		s_recoilControlStabilityX = 0.39;
		s_recoilControlStabilityY = 0.39;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.57;
	};

	/***** HANDGUARDS *****/
	class M4_PlasticHndgrd: Inventory_Base
	{
		// Plastic handguard: moderate stability, moderate misalignment
		s_recoilControlStabilityX = 0.18;
		s_recoilControlStabilityY = 0.18;
		s_recoilControlMisalignmentX = 0.48;
		s_recoilControlMisalignmentY = 0.43;
	};
	class M4_RISHndgrd: Inventory_Base
	{
		// RIS: slightly heavier but with improved mounting, can lead to more misalignment from added gear
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.53;
		s_recoilControlMisalignmentY = 0.45;
	};
	class M4_MPHndgrd: Inventory_Base
	{
		// Magpul style polymer: decent stability, less misalignment
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.48;
		s_recoilControlMisalignmentY = 0.40;
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		// Wood: heavier, stable
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.52;
		s_recoilControlMisalignmentY = 0.43;
	};
	class AK_RailHndgrd: Inventory_Base
	{
		// Rail system: more accessory mounts, slight misalignment from weight
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.40;
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		// Plastic: lighter but not as stable as wood
		s_recoilControlStabilityX = 0.18;
		s_recoilControlStabilityY = 0.18;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.44;
	};
	class AK74_Hndgrd: Inventory_Base
	{
		// Standard AK74 wooden or polymer mix
		s_recoilControlStabilityX = 0.19;
		s_recoilControlStabilityY = 0.19;
		s_recoilControlMisalignmentX = 0.52;
		s_recoilControlMisalignmentY = 0.44;
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		// Plastic: moderate stability, moderate misalignment
		s_recoilControlStabilityX = 0.18;
		s_recoilControlStabilityY = 0.18;
		s_recoilControlMisalignmentX = 0.52;
		s_recoilControlMisalignmentY = 0.44;
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		// Rail for MP5: can mount more accessories, extra misalignment
		s_recoilControlStabilityX = 0.19;
		s_recoilControlStabilityY = 0.19;
		s_recoilControlMisalignmentX = 0.54;
		s_recoilControlMisalignmentY = 0.45;
	};

	/***** MUZZLE DEVICES *****/
	class ItemSuppressor;
	class MP5_Compensator: ItemSuppressor
	{
		// Minimal muzzle device: minor horizontal recoil fix
		s_recoilControlMisalignmentX = 0.22;
		s_recoilControlMisalignmentY = 0.05;
	};
	class Mosin_Compensator: ItemSuppressor
	{
		// Larger device for bolt-action: better vertical recoil control
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.12;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.14;
	};

};

class cfgWeapons
{
	class Rifle_Base;

	/***** SMGs & PDWs *****/
	class CZ61_Base: Rifle_Base
	{
		// Very small SMG: controllable but can be jumpy on full-auto
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.55;
	};
	class PP19_Base: Rifle_Base
	{
		// Lightweight 9mm SMG: moderate recoil, moderate misalignment
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.48;
		s_recoilControlMisalignmentY = 0.44;
		s_recoilControlKick = 0.25;
	};
	class UMP45_Base: Rifle_Base
	{
		// .45 ACP SMG: more punch, moderate recoil and misalignment
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.57;
		s_recoilControlMisalignmentY = 0.57;
		s_recoilControlKick = 0.58;
	};

	/***** SPECIAL / INTEGRALLY SUPPRESSED *****/
	class VSS_Base: Rifle_Base
	{
		// Integrally suppressed marksman rifle, moderate recoil
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.55;
	};

	/***** RIFLES *****/
	class Aug_Base: Rifle_Base
	{
		// Bullpup 5.56: stable, somewhat heavier
		s_recoilControlStabilityX = 0.58;
		s_recoilControlStabilityY = 0.58;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.56;
	};
	class AugShort: Aug_Base
	{
		// Short variant: more muzzle climb, slightly higher misalignment
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.58;
	};
	class M16A2_Base: Rifle_Base
	{
		// Classic 5.56 rifle: balanced recoil, stable
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.52;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.53;
		s_recoilControlKick = 0.54;
	};
	class Famas_Base: Rifle_Base
	{
		// Bullpup 5.56: known for high ROF, moderate recoil
		s_recoilControlStabilityX = 0.52;
		s_recoilControlStabilityY = 0.52;
		s_recoilControlMisalignmentX = 0.57;
		s_recoilControlMisalignmentY = 0.57;
		s_recoilControlKick = 0.56;
	};
	class AK74_Base;
	class AKS74U: AK74_Base
	{
		// Short 5.45 carbine: more muzzle rise, fairly high misalignment in auto
		s_recoilControlStabilityX = 0.28;
		s_recoilControlStabilityY = 0.28;
		s_recoilControlMisalignmentX = 0.52;
		s_recoilControlMisalignmentY = 0.46;
		s_recoilControlKick = 0.30;
	};
	class FAL_Base: Rifle_Base
	{
		// 7.62 NATO: heavier recoil, moderate misalignment
		s_recoilControlStabilityX = 0.32;
		s_recoilControlStabilityY = 0.34;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.56;
		s_recoilControlKick = 0.62;
	};

	/***** B95 / RIFLE / SAWED-OFF VARIANTS *****/
	class B95_Base: Rifle_Base
	{
		// Double rifle: good stability on first shot, moderate recoil
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.60;
	};
	class SawedoffB95: B95_Base
	{
		// Sawed-off: more misalignment, less overall stability
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.47;
		s_recoilControlKick = 0.0;
	};

	class Ruger1022_Base: Rifle_Base
	{
		// .22 LR: minimal recoil
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.45;
	};
	class Repeater_Base: Rifle_Base
	{
		// .357 lever-action: moderate recoil, decent stability
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.55;
	};
	class BoltActionRifle_ExternalMagazine_Base;
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		// Bolt-action 5.45: minimal recoil, good stability
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.55;
	};
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
		// Scout rifle .308: moderate recoil, fairly stable
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.56;
		s_recoilControlMisalignmentY = 0.56;
		s_recoilControlKick = 0.58;
	};
	class SKS_Base: Rifle_Base
	{
		// 7.62x39 semi-auto: moderate recoil
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.53;
		s_recoilControlKick = 0.50;
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
		// Bolt-action 7.62x39: moderate recoil
		s_recoilControlStabilityX = 0.52;
		s_recoilControlStabilityY = 0.52;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.55;
	};
	class Izh18_Base: Rifle_Base
	{
		// Single-shot: decent stability, moderate recoil
		s_recoilControlStabilityX = 0.54;
		s_recoilControlStabilityY = 0.54;
		s_recoilControlMisalignmentX = 0.56;
		s_recoilControlMisalignmentY = 0.56;
		s_recoilControlKick = 0.57;
	};
	class Izh18;
	class SawedoffIzh18: Izh18
	{
		// Sawed-off: bigger muzzle climb, less stability
		s_recoilControlStabilityX = 0.24;
		s_recoilControlStabilityY = 0.24;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.0;
	};

	class BoltActionRifle_InnerMagazine_Base;
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		// Classic 7.62 bolt-action: moderate recoil
		s_recoilControlStabilityX = 0.58;
		s_recoilControlStabilityY = 0.58;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{
		// Sawed-off version: larger misalignment, less stability
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.0;
	};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
		// Typical hunting bolt-action: moderate recoil, decent stability
		s_recoilControlStabilityX = 0.56;
		s_recoilControlStabilityY = 0.56;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.57;
	};
	class SVD_Base: Rifle_Base
	{
		// 7.62 DMR: moderate-high recoil, fairly stable
		s_recoilControlStabilityX = 0.48;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.62;
	};
	class SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
		// High-power bolt-action: stronger recoil
		s_recoilControlStabilityX = 0.46;
		s_recoilControlStabilityY = 0.46;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.63;
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		// .308 bolt-action: moderate recoil, stable
		s_recoilControlStabilityX = 0.54;
		s_recoilControlStabilityY = 0.54;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.59;
	};
	class M14_Base: Rifle_Base
	{
		// 7.62 battle rifle: moderate-high recoil
		s_recoilControlStabilityX = 0.46;
		s_recoilControlStabilityY = 0.46;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.56;
		s_recoilControlKick = 0.63;
	};

	/***** SHOTGUNS *****/
	class Shotgun_Base;
	class Mp133Shotgun_Base: Shotgun_Base
	{
		// Pump action 12g: moderate recoil
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.60;
	};
	class Saiga_Base: Rifle_Base
	{
		// Semi-auto 12g: bigger recoil but can follow up shots quickly
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.0;
	};
	class Izh18Shotgun_Base: Shotgun_Base
	{
		// Single-shot 12g: moderate recoil, stable for one shot
		s_recoilControlStabilityX = 0.54;
		s_recoilControlStabilityY = 0.54;
		s_recoilControlMisalignmentX = 0.56;
		s_recoilControlMisalignmentY = 0.56;
		s_recoilControlKick = 0.60;
	};
	class SawedoffIzh18Shotgun: Izh18Shotgun_Base
	{
		// Sawed-off: less stable, more misalignment
		s_recoilControlStabilityX = 0.24;
		s_recoilControlStabilityY = 0.24;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.0;
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
		// Double barrel 12g: moderate recoil
		s_recoilControlStabilityX = 0.55;
		s_recoilControlStabilityY = 0.55;
		s_recoilControlMisalignmentX = 0.58;
		s_recoilControlMisalignmentY = 0.58;
		s_recoilControlKick = 0.60;
	};
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
	{
		// Sawed-off double barrel: bigger muzzle climb, less control
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.0;
	};
};
