class CfgPatches
{
	class DZ_data_aiconfigs_PlayZ
	{
		requiredAddons[] = {
			"DZ_data_aiconfigs",
			"InediaInfectedAI"
		};
	};
};
class PathGraphFilters
{
	class ZombieAlerted
	{
		class Flags
		{
			include[] = {
				"walk",
				"door",
				"inside",
				"jump",
				"climb"
			};
			exclude[] = {
				"disabled",
				"crawl",
				"crouch"
			};
		};
	};
	class WolfOnOuterCircle
	{
		class Flags
		{
			include[] = {
				"walk",
				"jumpover",
				"door",
				"inside",
			};
			exclude[] = {
				"disabled",
				"swim",
				"swimsea",
				"climb",
				"crawl",
				"crouch"
			};
		};
	};
};
