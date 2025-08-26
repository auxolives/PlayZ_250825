modded class GunplayConstants
{
	// GENERAL
	static const float INVENTORY_WEIGHT_GRAMS_OVERLOADED  = 35000;  // weight limit; the player is carrying too much stuff
	static const float INVENTORY_WEIGHT_GRAMS_HEAVY       = 20000;  // inventory fairly full or with heavy items
	static const float INVENTORY_WEIGHT_GRAMS_MEDIUM      = 10000;  // average survivor inventory
	static const float INVENTORY_WEIGHT_GRAMS_LIGHT       = 5000;   // the player is carrying few items
	static const float INVENTORY_WEIGHT_GRAMS_VERYLIGHT   = 0;      // the player is carrying almost nothing

	// RECOIL CONTROL
	static const float RECOIL_CONTROL_STEEPNESS = 6.0;  // "steepness" of the arctan function curve (see arctan function). Increase to reduce recoil.

	// PLAYER INVENTORY WEIGHT
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_OVERLOADED  = -0.50;  // @see INVENTORY_WEIGHT_GRAMS_OVERLOADED
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_HEAVY       = -0.25;  // @see INVENTORY_WEIGHT_GRAMS_HEAVY
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_MEDIUM      = -0.10;  // @see INVENTORY_WEIGHT_GRAMS_MEDIUM
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_LIGHT       =  0.10;  // @see INVENTORY_WEIGHT_GRAMS_LIGHT
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_VERYLIGHT   =  0.50;  // @see INVENTORY_WEIGHT_GRAMS_VERYLIGHT
	
	// PLAYER STANCE
	static const float RECOIL_CONTROL_STANCE_ERECT                 =  0.00;   // how much the ERECT stance will affect final recoil calculation
	static const float RECOIL_CONTROL_STANCE_CROUCHED              =  0.50;   // how much the CROUCHED stance will affect final recoil calculation
	static const float RECOIL_CONTROL_STANCE_PRONE                 =  0.70;   // how much the PRONE stance will affect final recoil calculation
	
	// PLAYER MOVEMENT
	static const float RECOIL_CONTROL_MOVEMENT_STANDING            =  0.00;   // how much STANDING will affect final recoil calculation
	static const float RECOIL_CONTROL_MOVEMENT_WALKING             = -0.20;   // how much WALKING will affect final recoil calculation
	static const float RECOIL_CONTROL_MOVEMENT_JOGGING             = -0.40;   // how much JOGGING will affect final recoil calculation

	// SWAY
	static const float SWAY_AMPLITUDE[] = {2.25, 4.2};	//{X, Y} amplitude of sway with no modifiers
	static const float SWAY_FREQUENCY[] = {0.2, 1.1};	//{X, Y} frequency of sway with no modifiers
	static const float SWAY_MULTIPLEIR_ERECT = 1.5;		// Multiplier to be applied when the player is ERECT
	static const float SWAY_MULTIPLEIR_CROUCHED = 0.5;	// Multiplier to be applied when the player is CROUCHED
	static const float SWAY_MULTIPLEIR_PRONE = 0.2;		// Multiplier to be applied when the player is PRONE
	static const float SWAY_DECREASE_FOCUSING = 4;		// Amount of sway to reduce while holding breath
	static const float SWAY_MINIMUM = 0.4;				// This minimum will be added during the sway multiplication (even while holding breath)

	// AIMING MODEL
	static const float RESET_SPEED_INSPECTION = 0.1;	// how fast the camera will reset from inspection angles to default. 0.1 = fast | 0.4 = slow
	static const float RESET_SPEED_FREELOOK = 0.1;		// how fast the camera will reset from freelook angles to default. 0.1 = fast | 0.4 = slow
	static const float RESET_SPEED_DEADZONE = 0.3;		// how fast the camera will reset from deadzone angles to default. 0.1 = fast | 0.4 = slow

	// HIPFIRE
	static const bool AIMING_MODEL_USE_FILTER_HIPFIRE_DEADZONE = true;
	static const bool HIPFIRE_DEADZONE_RESET_ON_RAISE = true;
	static const float HIPFIRE_DEADZONE_AMOUNT_DEGREE[4] = {
		    8,
		-13,   13,
		   -8    };

	// WEAPON INERTIA
	static const float INERTIA_VELOCITY_LIMIT[] = {		// Velocity limit in inertia build up (degree per second ?)
		    10,
		-30,   30,
		   -10    };
	
	static const float INERTIA_MULTIPLIER_BASE = 2.00;	// Base multiplier of the amount of inertia to be applied
	static const float INERTIA_MIN_MULTIPLIER = 0.50;	// Minimum value of inertia
	static const float INERTIA_MAX_MULTIPLIER = 3.00;	// Maximum value of inertia

	// ADS
	static const float TIME_TO_ADS = 0.3;					//Entering ADS
	static const float TIME_FROM_ADS = 0.2;					//Exiting ADS	
	static const float TIME_BACKUP_SIGHT = 0.50;			//Switching beetween optic/ironsight and viceversa
	static const float ADS_LENS_ACTIVATION_DELAY = -250;	// Delay in milliseconds added to the camera transition time
	static const float ADS_HIDE_CLOTHING_DELAY = -200;		// Delay in milliseconds added to the camera transition time
}