class CfgPatches
{
	class TerjeSkillsOverride_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"TerjeCore","TerjeSkills","DZ_Gear_Medical","TerjeMedicine"};
	};
};
class CfgTerjeSkills
{
	class Immunity
	{
		enabled = 1;
		perkPointsPerLevel = 4;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Modifiers
		{
			class ResistDiseasesModifier
			{
				enabled = 1;
				value = 0.025;
			};
		};
		class Perks
		{
			class ColdResist
			{
				enabled = 0;
			};
			class PoisonResist
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.15,0.25,0.30};
			};
			class BiohazardResist
			{
				enabled = 0;
			};
			class HematomaRecovery
			{
				enabled = 0;
			};
			class WoundHealing
			{
				enabled = 0;
			};
			class IntoxicResist
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.20,0.35,0.45,0.50};
			};
			class FastSleep
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class IronMind
			{
				enabled = 0;
			};
			class RecoveryShock
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.20,0.35,0.45,0.50};
			};
			class ImpactResist
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.15,0.25,0.30};
			};
			class DurableLeather
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.15,0.25,0.30};
			};
			class ResistZmbVirus
			{
				enabled = 0;
			};
			class ResistSepsis
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.15,0.25,0.30};
			};
			class FeetWarm
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {3};
				requiredPerkPoints[] = {2};
				values[] = {0.50};
			};
			class SafeDinner
			{
				enabled = 0;
			};
			class QuickHealing
			{
				enabled = 0;
			};
			class BloodRegen
			{
				enabled = 0;
			};
			class ThickBlood
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class RabiesResist
			{
				enabled = 0;
			};
			class LowPainTresh
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {4};
				values[] = {0};
			};
		};
	};
	class Medicine
	{
		enabled = 1;
		perkPointsPerLevel = 3;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Perks
		{
			class SurgeryStabWound
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class SurgeryBulletWound
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class SurgeryInternalWound
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class CleanlinessSterility
			{
				enabled = 0;
			};
			class Pharmacologist
			{
				enabled = 0;
			};
			class MasterDressing
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class Surgeon
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class BringingLife
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {1};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
			class PillRecognition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {3};
				requiredPerkPoints[] = {1};
				values[] = {0};
			};
			class AmpouleRecognition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {4};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
			class InjectorRecognition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {5};
				requiredPerkPoints[] = {3};
				values[] = {0};
			};
			class Stethoscope
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {6,7,8};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0,0,0};
				hints[] = {"#STR_TERJEPERK_MED_STETHOSCOPE_HINT_1","#STR_TERJEPERK_MED_STETHOSCOPE_HINT_2","#STR_TERJEPERK_MED_STETHOSCOPE_HINT_3"};
			};
			class ExpertAntibiotics
			{
				enabled = 0;
			};
			class Anesthesiolog
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {3};
				values[] = {0};
			};
		};
	};
	class Athletic
	{
		enabled = 1;
		perkPointsPerLevel = 3;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Modifiers
		{
			class MaxStaminaModifier
			{
				enabled = 1;
				value = 0.02;
			};
		};
		class Perks
		{
			class QuickFeet
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.15,-0.25,-0.30};
			};
			class Marathoner
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.15,0.25,0.30};
			};
			class ProperBreathing
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.25,0.45,0.60,0.70};
			};
			class Swimmer
			{
				enabled = 0;
			};
			class StairMaster
			{
				enabled = 0;
			};
			class NoPanting
			{
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class Enduring
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.10,0.20,0.30};
			};
			class Stuntman
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.15,-0.30,-0.50};
			};
			class StrongBones
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.15,-0.30,-0.50};
			};
		};
	};
	class Strength
	{
		enabled = 1;
		perkPointsPerLevel = 4;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Modifiers
		{
			class MaxWeightModifier
			{
				enabled = 1;
				value = 0.02;
			};
		};
		class Perks
		{
			class HeavyWeight
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.15,0.25,0.30};
			};
			class Jumper
			{
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.25,-0.50,-0.75};
			};
			class MasterOfDefence
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class MasterOfEvasion
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.20,0.35,0.45,0.50};
			};
			class LightAttacksSpeed
			{
				enabled = 0;
			};
			class LightAttacksForce
			{
				enabled = 0;
			};
			class HeavyAttacksSpeed
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,3,5,7,9};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {-0.02,-0.04,-0.08,-0.16,-0.20};
			};
			class HeavyAttacksForce
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,3,5,7,9};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {0.02,0.04,0.08,0.16,0.20};
			};
			class LightweightArmor
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class StrongHands
			{
				enabled = 0;
			};
			class MasterStroke
			{
				enabled = 0;
			};
		};
	};
	class Metabolism
	{
		enabled = 1;
		perkPointsPerLevel = 4;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Modifiers
		{
			class EnergyConsumptionModifier
			{
				enabled = 1;
				value = -0.01;
			};
		};
		class Perks
		{
			class IncreasedCalorie
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,2,3,5,8};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {0.05,0.10,0.15,0.20,0.25};
			};
			class IncreasedHydration
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,2,3,5,8};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {0.05,0.10,0.15,0.20,0.25};
			};
			class EnergySaving
			{
				enabled = 0;
			};
			class WaterSaving
			{
				enabled = 0;
			};
			class EnergyControl
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,2,3,5,8};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {-0.05,-0.10,-0.15,-0.20,-0.25};
			};
			class HydrationControl
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,2,3,5,8};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {-0.05,-0.10,-0.15,-0.20,-0.25};
			};
			class EnregyContainment
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,2,3};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.10,-0.20,-0.30};
			};
			class WaterContainment
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,2,3};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.10,-0.20,-0.30};
			};
			class ResistWater
			{
				enabled = 0;
			};
			class ResistHunger
			{
				enabled = 0;
			};
			class WildMeatLover
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {4};
				values[] = {0};
			};
		};
	};
	class Stealth
	{
		enabled = 1;
		perkPointsPerLevel = 4;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Perks
		{
			class QuietStep
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.15,-0.30,-0.55,-0.90};
			};
			class ColdBlooded
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class QuietShooter
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class FittingEquipment
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class InvisibleMan
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,4,7,10};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {-0.20,-0.35,-0.45,-0.50};
			};
			class CatVision
			{
				enabled = 0;
			};
			class WolfInstinct
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.25,-0.50,-0.75};
			};
			class BearsFriend
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.25,-0.50,-0.75};
			};
			class SilentKiller
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {8};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
			class Ninja
			{
				enabled = 0;
			};
			class ShadowTracker
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {3};
				values[] = {0};
			};
		};
	};
	class Survival
	{
		enabled = 1;
		perkPointsPerLevel = 3;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Modifiers
		{
			class ReducedTempModifier
			{
				enabled = 0;
				value = -0.02;
			};
			class ReducedZombDmgModifier
			{
				enabled = 1;
				value = -0.01;
			};
			class ReducedFireStartModifier
			{
				enabled = 1;
				value = -0.05;
			};
		};
		class Perks
		{
			class StartingFire
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.20,0.35,0.45,0.50};
			};
			class ColdResistance
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {3};
				values[] = {0.25};
			};
			class RoughHands
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {4};
				requiredPerkPoints[] = {2};
				values[] = {-0.95};
			};
			class RoughFeet
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {7};
				requiredPerkPoints[] = {3};
				values[] = {-0.95};
			};
			class AncestralTechnologies
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class MaintainingFire
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.50,1.0,1.5};
			};
			class DurableEquipment
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.15,-0.25,-0.30};
			};
			class Bushcraft
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.25,0.50,0.75,1.0};
			};
			class Expert
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {5};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
			class Stashes
			{
				enabled = 0;
			};
			class SurvivalInstinct
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {3};
				requiredPerkPoints[] = {3};
				values[] = {0};
			};
			class MushroomPremonition
			{
				enabled = 0;
			};
		};
	};
	class Hunting
	{
		enabled = 1;
		perkPointsPerLevel = 2;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Modifiers
		{
			class MeatCountModifier
			{
				enabled = 1;
				value = 0.05;
			};
		};
		class Perks
		{
			class MeatHunter
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class QuickSkinning
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.50,-0.65,-0.80};
			};
			class MasterKnife
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {4};
				requiredPerkPoints[] = {2};
				values[] = {-0.60};
			};
			class TrapExpert
			{
				enabled = 0;
			};
			class PeltMaster
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.50,0.75,1.00};
			};
			class ExperiencedHunter
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,2,3,5,8};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {0.05,0.10,0.15,0.20,0.25};
			};
			class KnowledgeAnatomy
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = {1,2,3,5,8};
				requiredPerkPoints[] = {1,2,3,4,5};
				values[] = {0.05,0.10,0.15,0.20,0.25};
			};
			class RemovingRot
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
			class Pathfinder
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {7};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
		};
	};
	class Fishing
	{
		enabled = 1;
		perkPointsPerLevel = 2;
		levels[] = {100, 300, 650, 950, 1350, 1850, 2500, 3300, 4200, 5000};
		class Perks
		{
			class MasterFillet
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.25,0.50,0.75};
			};
			class QuickClean
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {-0.50,-0.65,-0.80};
			};
			class StraightArms
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {4};
				requiredPerkPoints[] = {2};
				values[] = {-0.60};
			};
			class MasterTrap
			{
				enabled = 0;
			};
			class SkilledFisherman
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.50,0.75,1.00};
			};
			class FishermanLuck
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = {1,2,4,7};
				requiredPerkPoints[] = {1,2,3,4};
				values[] = {0.20,0.35,0.45,0.50};
			};
			class ReliableGear
			{
				enabled = 1;
				stagesCount = 2;
				requiredSkillLevels[] = {2,7};
				requiredPerkPoints[] = {2,2};
				values[] = {0.30,0.75};
			};
			class WormHunter
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {1.00,2.00,3.00};
			};
			class CraftsMan
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = {1,3,6};
				requiredPerkPoints[] = {1,2,3};
				values[] = {0.50,0.75,1.00};
			};
			class RemoveRottenFish
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = {10};
				requiredPerkPoints[] = {2};
				values[] = {0};
			};
		};
	};
};