class CfgPatches
{
	class DZ_Gear_Food_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Food"
		};
	};
};
class BaseFoodStageTransitions
{
	class Raw
	{
		class ToBaked
		{
			transition_to = 2;
			cooking_method = 1;
		};
		class ToBoiled
		{
			transition_to = 3;
			cooking_method = 2;
		};
		class ToDried
		{
			transition_to = 4;
			cooking_method = 3;
		};
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Rotten
	{
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 1;
		};
	};
	class Baked
	{
		class ToBaked
		{
			transition_to = 5;
			cooking_method = 1;
		};
		class ToBoiled
		{
			transition_to = 5;
			cooking_method = 2;
		};
		class ToDried
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Boiled
	{
		class ToBaked
		{
			transition_to = 5;
			cooking_method = 1;
		};
		class ToBoiled
		{
			transition_to = 5;
			cooking_method = 2;
		};
		class ToDried
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Dried
	{
		class ToBaked
		{
			transition_to = 5;
			cooking_method = 1;
		};
		class ToBoiled
		{
			transition_to = 5;
			cooking_method = 2;
		};
		class ToDried
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Burned
	{};
};
class FoodAnimationSources
{
	class CS_Raw
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Rotten
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Baked
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Boiled
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Dried
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Burned
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
};
class NutritionModifiers
{
	class General
	{
		base_stage = "Raw";
		class Raw
		{
			nutrition_properties[] = {
				1,
				1,
				1,
				1,
				1
			};
		};
		class Rotten
		{
			nutrition_properties[] = {
				0.5,
				0.75,
				1,
				0.25,
				1
			};
		};
		class Baked
		{
			nutrition_properties[] = {
				2,
				0.5,
				0.75,
				0.75,
				1
			};
		};
		class Boiled
		{
			nutrition_properties[] = {
				1,
				1,
				0.80000001,
				0.80000001,
				1
			};
		};
		class Dried
		{
			nutrition_properties[] = {
				4,
				0.1,
				0.5,
				0.80000001,
				1
			};
		};
		class Burned
		{
			nutrition_properties[] = {
				1,
				0.25,
				0.75,
				0.1,
				1
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Snack_ColorBase: Edible_Base
	{
		itemSize[]={1,1};
	};
	class BoxCerealCrunchin: Edible_Base
	{
		itemSize[]={2,2};
	};
	class Candycane_Colorbase: Edible_Base
	{
		itemSize[]={1,1};
		class Nutrition
		{
			energy = 40;
			water = 0;
		};
	};
	class FoodCan_250g_ColorBase: Edible_Base
	{
		itemSize[]={1,1};
	};
	class FoodCan_250g_Opened_ColorBase: Edible_Base
	{
		itemSize[]={1,1};
	};
	class DogFoodCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		class Nutrition
		{
			fullnessIndex=3;
		};
	};
	class CatFoodCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		class Nutrition
		{
			fullnessIndex=3;
		};
	};
	class GreenBellPepper: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Potato: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Pear: Edible_Base
	{
		itemSize[]={1,1};
	};
	class UnknownFoodCan_Opened: Edible_Base
	{
		class Nutrition
		{
			fullnessIndex=4;
		};
	};
	class MushroomBase;
	class AgaricusMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class AmanitaMushroom: MushroomBase
	{
		itemSize[]={1,1};
		inventorySlot[] = {"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Trap_Bait_2"};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					nutrition_properties[] = {2.5, 120, 150, 1, 160, 16, 0.9, 3};
				};
				class Rotten
				{
					nutrition_properties[] = {2.0, 90, 40, 1, 190, 16, 0.7, 4};
				};
				class Baked
				{
					nutrition_properties[] = {1.75, 300, 60, 1, 60, 0, 1.0, 0};
				};
				class Boiled
				{
					nutrition_properties[] = {1.5, 250, 160, 1, 40, 0, 1.1, 0};
				};
				class Dried
				{
					nutrition_properties[] = {0.75, 250, 20, 1, 55, 0, 0.7, 0};
				};
				class Burned
				{
					nutrition_properties[] = {2.0, 90, 0, 1, 100, 16, 0.6, 2};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[] = {0.08,0.01,0.0};
				orientation[] = {100,65,0};
			};
			class DirectCookingB
			{
				position[] = {0.04,0.01,0.0};
				orientation[] = {30,65,0};
			};
			class DirectCookingC
			{
				position[] = {0.06,0.01,0.0};
				orientation[] = {140,65,0};
			};
		};
	};
	class MacrolepiotaMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class LactariusMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class PsilocybeMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class AuriculariaMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class BoletusMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class PleurotusMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
	class CraterellusMushroom: MushroomBase
	{
		itemSize[]={1,1};
	};
};