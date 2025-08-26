class CfgPatches
{
	class TerjeMedicine_Pills_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"TerjeMedicine",
			"TerjeMedicine_Pills"
		};
	};
};
class CfgVehicles
{
	class Edible_Base;
	class TerjePillsBase: Edible_Base
	{
		itemSize[] = {
			1,
			1
		};
	};
	class CharcoalTablets: Edible_Base
	{
		itemSize[] = {
			1,
			1
		};
	};
	class ChelatingTablets: Edible_Base
	{
		itemSize[] = {
			1,
			1
		};
	};
	class PainkillerTablets: Edible_Base
	{
		itemSize[] = {
			1,
			1
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		itemSize[] = {
			1,
			1
		};
	};
	class TerjePillsIbuprofen: TerjePillsBase
	{
		medPainkillerLevel = 1;
		medPainkillerTimeSec = 600;
		medAntibioticLevel = 2;
		medAntibioticsTimeSec = 600;
	};
	class TerjePillsAmoxiclav: TerjePillsBase
	{
		medAntisepsisTimeSec = 180;
	};
};