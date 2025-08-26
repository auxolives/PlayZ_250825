class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[]=
		{
			"SunGlasses"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics",
			"DZ_Characters_Glasses"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class ItemOptics;
	class Clothing;
	class SportGlasses_ColorBase: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={15};
	};
	class AviatorGlasses: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={15};
	};
	class DesignerGlasses: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={15};
	};
	class ThickFramesGlasses: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={15};
	};
	class ThinFramesGlasses: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={15};
	};
	class TacticalGoggles: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={15};
	};
};
