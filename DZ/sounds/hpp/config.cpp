class CfgPatches
{
	class DZ_Sounds_Effects_PlayZ
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Sounds_Effects"
		};
		units[] = {};
		weapons[] = {};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class aim_Base_SoundShader: baseCharacter_SoundShader
	{
		volume = 0.55;
		range = 20;
	};
	class aim_in_Base_SoundShader: aim_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\jamming_01",
				1
			}
		};
	};
	class aim_out_Base_SoundShader: aim_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\hand_0",
				1
			}
		};
		volume = 0.5;
	};
	class AK_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\NewAK\handling\jamming_01",
				1
			}
		};
		volume = 0.8;
	};
	class AK_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\NewAK\handling\hand_0",
				1
			}
		};
		volume = 2.8;
	};
	class CR527_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\cr527\handling\jamming_01",
				1
			}
		};
		volume = 0.9;
	};
	class CR527_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\cr527\handling\hand1_0",
				1
			}
		};
		volume = 0.8;
	};
	class CZ61_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\CZ61\handling\jamming_01",
				1
			}
		};
		volume = 0.6;
	};
	class CZ61_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\CZ61\handling\hand_0",
				1
			}
		};
		volume = 0.5;
	};
	class FNX45_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\fnx45\handling\jamming_01",
				1
			}
		};
		volume = 0.3;
	};
	class FNX45_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\fnx45\handling\jamming_06",
				1
			}
		};
		volume = 0.1;
	};
	class M4_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\jamming_07",
				1
			}
		};
		volume = 0.2;
	};
	class M4_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\M4A1\handling\jamming_01",
				1
			}
		};
		volume = 1.4;
	};
	class Mosin_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\hand_0",
				1
			}
		};
		volume = 3;
	};
	class Mosin_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_01",
				1
			}
		};
		volume = 1;
	};
	class Saiga_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\shotguns\saiga12\handling\jamming_01",
				1
			}
		};
	};
	class Saiga_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\shotguns\saiga12\handling\hand_0",
				1
			}
		};
		volume = 2.6;
	};
	class SVD_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_01",
				1
			}
		};
		volume = 1;
	};
	class SVD_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\SVD\handling\hand_0",
				1
			}
		};
		volume = 2.8;
	};
	class VSS_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\vss_vintorez\handling\hand_5",
				1
			}
		};
		volume = 1.5;
	};
	class VSS_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\vss_vintorez\handling\hand_1",
				1
			}
		};
		volume = 1.5;
	};
	class Winchester70_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\winchester70\handling\jamming_01",
				1
			}
		};
		volume = 2;
	};
	class Winchester70_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {
			{
				"DZ\sounds\weapons\firearms\winchester70\handling\tail\hand_1_tail_interior",
				1
			}
		};
		volume = 2.3;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class aim_in_Base_SoundSet: baseCharacter_SoundSet
	{
		frequencyRandomizer = 1;
		volumeRandomizer = 1;
	};
	class aim_out_Base_SoundSet: baseCharacter_SoundSet
	{
		frequencyRandomizer = 1;
		volumeRandomizer = 1;
	};
	class AK_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"AK_aim_in_SoundShader"
		};
	};
	class AK_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"AK_aim_out_SoundShader"
		};
	};
	class CR527_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"CR527_aim_in_SoundShader"
		};
	};
	class CR527_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"CR527_aim_out_SoundShader"
		};
	};
	class CZ61_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"CZ61_aim_in_SoundShader"
		};
	};
	class CZ61_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"CZ61_aim_out_SoundShader"
		};
	};
	class FNX45_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"FNX45_aim_in_SoundShader"
		};
	};
	class FNX45_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"FNX45_aim_out_SoundShader"
		};
	};
	class Mosin_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"Mosin_aim_in_SoundShader"
		};
	};
	class Mosin_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"Mosin_aim_out_SoundShader"
		};
	};
	class M4_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"M4_aim_in_SoundShader"
		};
	};
	class M4_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"M4_aim_out_SoundShader"
		};
	};
	class Saiga_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"Saiga_aim_in_SoundShader"
		};
	};
	class Saiga_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"Saiga_aim_out_SoundShader"
		};
	};
	class SVD_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"SVD_aim_in_SoundShader"
		};
	};
	class SVD_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"SVD_aim_out_SoundShader"
		};
	};
	class VSS_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"VSS_aim_in_SoundShader"
		};
	};
	class VSS_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"VSS_aim_out_SoundShader"
		};
	};
	class Winchester70_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {
			"Winchester70_aim_in_SoundShader"
		};
	};
	class Winchester70_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {
			"Winchester70_aim_out_SoundShader"
		};
	};
};