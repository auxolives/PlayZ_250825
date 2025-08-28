class CfgPatches
{
	class TerjeSkillsOverride_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "TerjeCore", "TerjeSkills", "DZ_Gear_Medical", "TerjeMedicine" };
	};
};
class CfgTerjeSkills
{
	class Immunity
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Modifiers
		{
			class ResistDiseasesModifier
			{
				enabled = 1;
				value = 0.01;
			};
		};
		class Perks
		{
			class PoisonResist
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.30, 0.40, 0.50 };
			};
			class IntoxicResist
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.60, 0.75 };
			};
			class FastSleep
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 2, 8, 14, 21 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 0.20, 0.40, 0.60, 0.80 };
			};
			class RecoveryShock
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 3, 7, 13, 19, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.30, 0.40, 0.50 };
			};
			class ImpactResist
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 1, 6, 12, 18 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.25, 0.35 };
			};
			class DurableLeather
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 1, 6, 12, 18 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.25, 0.35 };
			};
			class ResistSepsis
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 3, 9, 15, 22 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 0.15, 0.25, 0.35, 0.50 };
			};
			class FeetWarm
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 5 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0.50 };
			};
			class ThickBlood
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 2, 7, 13, 19, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.40, -0.50 };
			};
			class LowPainTresh
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 25 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class ColdResist
			{
				enabled = 0;
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
			class IronMind
			{
				enabled = 0;
			};
			class ResistZmbVirus
			{
				enabled = 0;
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
			class RabiesResist
			{
				enabled = 0;
			};
		};
	};
	class Medicine
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Perks
		{
			class SurgeryStabWound
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.55, 0.65, 0.75 };
			};
			class SurgeryBulletWound
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.55, 0.65, 0.75 };
			};
			class SurgeryInternalWound
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.55, 0.65, 0.75 };
			};
			class MasterDressing
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 6, 12, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.40, -0.50 };
			};
			class Surgeon
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 6, 12, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.40, -0.50 };
			};
			class BringingLife
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 5 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class PillRecognition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 3 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class AmpouleRecognition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 8 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class InjectorRecognition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 14 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class Stethoscope
			{
				enabled = 1;
				stagesCount = 3;
				requiredSkillLevels[] = { 2, 7, 13 };
				requiredPerkPoints[] = { 1, 1, 1 };
				values[] = { 0, 0, 0 };
				hints[] = { "#STR_TERJEPERK_MED_STETHOSCOPE_HINT_1", "#STR_TERJEPERK_MED_STETHOSCOPE_HINT_2", "#STR_TERJEPERK_MED_STETHOSCOPE_HINT_3" };
			};
			class Anesthesiolog
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 25 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class CleanlinessSterility
			{
				enabled = 0;
			};
			class Pharmacologist
			{
				enabled = 0;
			};
			class ExpertAntibiotics
			{
				enabled = 0;
			};
		};
	};
	class Athletic
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Modifiers
		{
			class MaxStaminaModifier
			{
				enabled = 1;
				value = 0.01;
			};
		};
		class Perks
		{
			class QuickFeet
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.15, -0.20, -0.25, -0.30 };
			};
			class Marathoner
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.15, 0.20, 0.25, 0.30 };
			};
			class ProperBreathing
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.28, 0.41, 0.54, 0.67, 0.70 };
			};
			class NoPanting
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.35, -0.45, -0.50 };
			};
			class Enduring
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 2, 6, 11, 16, 21, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.05, 0.10, 0.15, 0.20, 0.25, 0.30 };
			};
			class Stuntman
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 3, 7, 12, 17, 22, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.35, -0.45, -0.50 };
			};
			class StrongBones
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 3, 7, 12, 17, 22, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.35, -0.45, -0.50 };
			};
			class Swimmer
			{
				enabled = 0;
			};
			class StairMaster
			{
				enabled = 0;
			};
		};
	};
	class Strength
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Modifiers
		{
			class MaxWeightModifier
			{
				enabled = 1;
				value = 0.01;
			};
		};
		class Perks
		{
			class HeavyWeight
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.15, 0.20, 0.25, 0.30 };
			};
			class Jumper
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.15, -0.30, -0.45, -0.60, -0.75 };
			};
			class MasterOfDefence
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.38, -0.45, -0.50 };
			};
			class MasterOfEvasion
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.30, 0.38, 0.45, 0.50 };
			};
			class HeavyAttacksSpeed
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 3, 7, 12, 17, 22, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.04, -0.08, -0.12, -0.15, -0.18, -0.20 };
			};
			class HeavyAttacksForce
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 3, 7, 12, 17, 22, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.04, 0.08, 0.12, 0.15, 0.18, 0.20 };
			};
			class LightweightArmor
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 2, 6, 11, 16, 21, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.38, -0.45, -0.50 };
			};
			class LightAttacksSpeed
			{
				enabled = 0;
			};
			class LightAttacksForce
			{
				enabled = 0;
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
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Modifiers
		{
			class EnergyConsumptionModifier
			{
				enabled = 1;
				value = -0.005;
			};
		};
		class Perks
		{
			class IncreasedCalorie
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.05, 0.10, 0.15, 0.20, 0.22, 0.25 };
			};
			class IncreasedHydration
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.05, 0.10, 0.15, 0.20, 0.22, 0.25 };
			};
			class EnergyControl
			{
				enabled = 1;
				stagesCount = 7;
				requiredSkillLevels[] = { 2, 6, 11, 16, 19, 22, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1, 1 };
				values[] = {-0.05, -0.10, -0.15, -0.18, -0.21, -0.23, -0.25 };
			};
			class HydrationControl
			{
				enabled = 1;
				stagesCount = 7;
				requiredSkillLevels[] = { 2, 6, 11, 16, 19, 22, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1, 1 };
				values[] = {-0.05, -0.10, -0.15, -0.18, -0.21, -0.23, -0.25 };
			};
			class EnregyContainment
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.05, -0.10, -0.15, -0.20, -0.25, -0.30 };
			};
			class WaterContainment
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.05, -0.10, -0.15, -0.20, -0.25, -0.30 };
			};
			class WildMeatLover
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 23 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class EnergySaving
			{
				enabled = 0;
			};
			class WaterSaving
			{
				enabled = 0;
			};
			class ResistWater
			{
				enabled = 0;
			};
			class ResistHunger
			{
				enabled = 0;
			};
		};
	};
	class Stealth
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Perks
		{
			class QuietStep
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.15, -0.30, -0.45, -0.60, -0.75, -0.90 };
			};
			class ColdBlooded
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.38, -0.45, -0.50 };
			};
			class QuietShooter
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.38, -0.45, -0.50 };
			};
			class FittingEquipment
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 2, 6, 11, 16, 21, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.38, -0.45, -0.50 };
			};
			class InvisibleMan
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 2, 6, 11, 16, 21, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.20, -0.30, -0.38, -0.45, -0.50 };
			};
			class WolfInstinct
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 3, 7, 12, 17, 22 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.15, -0.30, -0.45, -0.60, -0.75 };
			};
			class BearsFriend
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 3, 7, 12, 17, 22 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.15, -0.30, -0.45, -0.60, -0.75 };
			};
			class SilentKiller
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 20 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class ShadowTracker
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 25 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class CatVision
			{
				enabled = 0;
			};
			class Ninja
			{
				enabled = 0;
			};
		};
	};
	class Survival
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Modifiers
		{
			class ReducedTempModifier
			{
				enabled = 0;
				value = -0.01;
			};
			class ReducedZombDmgModifier
			{
				enabled = 1;
				value = -0.005;
			};
			class ReducedFireStartModifier
			{
				enabled = 1;
				value = -0.02;
			};
		};
		class Perks
		{
			class StartingFire
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.30, 0.38, 0.45, 0.50 };
			};
			class ColdResistance
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 3, 9, 15, 22 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 0.05, 0.10, 0.18, 0.25 };
			};
			class RoughHands
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 10 };
				requiredPerkPoints[] = { 1 };
				values[] = {-0.95 };
			};
			class RoughFeet
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 20 };
				requiredPerkPoints[] = { 1 };
				values[] = {-0.95 };
			};
			class AncestralTechnologies
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.55, 0.65, 0.75 };
			};
			class MaintainingFire
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.25, 0.50, 0.75, 1.0, 1.25, 1.5 };
			};
			class DurableEquipment
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 2, 7, 12, 19, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = {-0.10, -0.15, -0.20, -0.25, -0.30 };
			};
			class Bushcraft
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.20, 0.40, 0.60, 0.75, 0.90, 1.0 };
			};
			class Expert
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 12 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class SurvivalInstinct
			{
				enabled = 0;
			};
			class Stashes
			{
				enabled = 0;
			};
			class MushroomPremonition
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 20 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
		};
	};
	class Hunting
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Modifiers
		{
			class MeatCountModifier
			{
				enabled = 1;
				value = 0.02;
			};
		};
		class Perks
		{
			class MeatHunter
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.55, 0.65, 0.75 };
			};
			class QuickSkinning
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.40, -0.50, -0.60, -0.70, -0.80, -0.90 };
			};
			class MasterKnife
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 12 };
				requiredPerkPoints[] = { 1 };
				values[] = {-0.60 };
			};
			class PeltMaster
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 2, 7, 13, 19, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.60, 0.70, 0.80, 0.90, 1.00 };
			};
			class ExperiencedHunter
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.05, 0.10, 0.15, 0.18, 0.22, 0.25 };
			};
			class KnowledgeAnatomy
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.05, 0.10, 0.15, 0.18, 0.22, 0.25 };
			};
			class RemovingRot
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 20 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class Pathfinder
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 15 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class TrapExpert
			{
				enabled = 0;
			};
		};
	};
	class Fishing
	{
		enabled = 1;
		perkPointsPerLevel = 1;
		levels[] = { 200, 450, 750, 1100, 1500, 2000, 2600, 3300, 4100, 5000, 6000, 7100, 8300, 9600, 11000, 12500, 14150, 15950, 17900, 20000, 22200, 24500, 27000, 29600, 32300, 35100, 38300, 41900, 45900, 50000 };
		class Perks
		{
			class MasterFillet
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.15, 0.30, 0.45, 0.55, 0.65, 0.75 };
			};
			class QuickClean
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 5, 10, 15, 20, 25 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = {-0.40, -0.50, -0.60, -0.70, -0.80, -0.90 };
			};
			class StraightArms
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 12 };
				requiredPerkPoints[] = { 1 };
				values[] = {-0.60 };
			};
			class SkilledFisherman
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 2, 7, 13, 19, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.60, 0.70, 0.80, 0.90, 1.00 };
			};
			class FishermanLuck
			{
				enabled = 1;
				stagesCount = 6;
				requiredSkillLevels[] = { 1, 4, 8, 13, 18, 24 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1, 1 };
				values[] = { 0.10, 0.20, 0.30, 0.38, 0.45, 0.50 };
			};
			class ReliableGear
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 3, 9, 16, 22 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 0.40, 0.50, 0.60, 0.70 };
			};
			class WormHunter
			{
				enabled = 1;
				stagesCount = 4;
				requiredSkillLevels[] = { 2, 7, 13, 1 };
				requiredPerkPoints[] = { 1, 1, 1, 1 };
				values[] = { 1.20, 1.80, 2.40, 3.00 };
			};
			class CraftsMan
			{
				enabled = 1;
				stagesCount = 5;
				requiredSkillLevels[] = { 1, 6, 11, 17, 23 };
				requiredPerkPoints[] = { 1, 1, 1, 1, 1 };
				values[] = { 0.60, 0.70, 0.80, 0.90, 1.00 };
			};
			class RemoveRottenFish
			{
				enabled = 1;
				stagesCount = 1;
				requiredSkillLevels[] = { 20 };
				requiredPerkPoints[] = { 1 };
				values[] = { 0 };
			};
			class MasterTrap
			{
				enabled = 0;
			};
		};
	};
};