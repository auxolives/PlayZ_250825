class CfgPatches
{
	class DZ_Radio_PlayZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Radio"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Transmitter_Base;
	class PersonalRadio: Transmitter_Base
	{
		range=30000;
		class EnergyManager
		{
			energyUsagePerSecond = 0.001;
		};
	};
	class Megaphone: Inventory_Base
	{
		range=300;
		class EnergyManager
		{
			energyUsagePerSecond = 0.01;
		};
	};
};