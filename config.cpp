class CfgPatches
{
	class PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Scripts",
			"TerjeCore",
			"TerjeMedicine",
			"TerjeSkills",
			"sFramework",
			"sGunplay",
			"InediaInfectedAI"
		};
	};
};
class CfgMods
{
	class PlayZ
	{
		hideName = 1;
		hidePicture = 1;
		name = "PlayZ";
		credits = "";
		author = "auxOlives";
		type = "mod";
		dependencies[] = {
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {
					"PlayZ_250825/scripts/3_game",
					"PlayZ_250825/scripts/mods_override/3_game/sFramework",
					"PlayZ_250825/scripts/mods_override/3_game/sGunplay",
					"PlayZ_250825/scripts/mods_override/3_game/TerjeMedicine"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {
					"PlayZ_250825/scripts/4_world",
					"PlayZ_250825/scripts/mods_override/4_world/sGunplay",
					"PlayZ_250825/scripts/mods_override/4_world/TerjeMedicine",
					"PlayZ_250825/scripts/mods_override/4_world/TerjeSkills"
				};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {
					"PlayZ_250825/scripts/5_mission"
				};
			};
		};
	};
};