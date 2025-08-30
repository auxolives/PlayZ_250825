#define UNUSED_PARAMS \
	luminanceRectCoef = 0.0; \
	luminanceRectCoefCloud = 0.0; \
	rayleigh[] = {0.0, 0.0, 0.0}; \
	mie[] = {0.0, 0.0, 0.0}; \
	cloudsColor[] = {0.0, 0.0, 0.0}; \
	swBrightness = 0;

class LightingNew
{
	// CLEAR SET
	class C_Night
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -18;
		sunOrMoon = 0.0;
		diffuse[] = {0.06,0.07,0.09};
		diffuseCloud[]= {0.06,0.07,0.09};		
		bidirect[]= {0.005,0.005,0.005};
		bidirectCloud[]= {0.005,0.005,0.005};		
		ambient[]= {0.015,0.020,0.028};
		ambientCloud[] = {0.015,0.020,0.028};
		groundReflection[]= {0.002,0.002,0.003};
		groundReflectionCloud[] = {0.002,0.002,0.003};
		sky[] = {{0.018, 0.028, 0.043}, -7.1};
		skyAroundSun[] = {{0.03, 0.05, 0.1}, -5.1};
		desiredLuminanceCoef = -0.18;
		desiredLuminanceCoefCloud = -0.18;
		EVMin = -5.0;
		EVMax = 2.0;
		filmGrainIntensity = 0.015;
		spaceIntensity = 0.95;
		atmosphereIntensity = 0.2;
		starsIntensity = 0.15;

		UNUSED_PARAMS
	};

	// astro
	class C_Astro1
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -17;
		sunOrMoon = 0.5; // Transitioning from Moon to Sun. Moonlight begins to fade.
		diffuse[] = {0.03, 0.035, 0.045}; // Fading moonlight.
		diffuseCloud[] = {0.03, 0.035, 0.045};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.01, 0.04, 0.08}; // Ambient shifts to pre-dawn blue.
		ambientCloud[] = {0.01, 0.04, 0.08};
		groundReflection[]= {0.003, 0.005, 0.008};
		groundReflectionCloud[] = {0.003, 0.005, 0.008};
		sky[]= {0.02, 0.03, 0.043};
		skyAroundSun[] = {0.08, 0.09, 0.12};
		desiredLuminanceCoef = -0.15;
		desiredLuminanceCoefCloud = -0.15;
		EVMin = -4.0;
		EVMax = 0.1;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.7;
		atmosphereIntensity = 0.3;
		starsIntensity = 0.1;

		UNUSED_PARAMS
	};
	class C_Astro2
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -16;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.015, 0.045, 0.085};
		ambientCloud[] = {0.015, 0.045, 0.085};
		groundReflection[]= {0.003, 0.006, 0.01};
		groundReflectionCloud[] = {0.003, 0.006, 0.01};
		sky[]= {0.02, 0.03, 0.043};
		skyAroundSun[] = {0.08, 0.08, 0.11};
		desiredLuminanceCoef = -0.20;
		desiredLuminanceCoefCloud = -0.20;
		EVMin = -4.0;
		EVMax = 0.1;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.6;
		atmosphereIntensity = 0.4;
		starsIntensity = 0.08;

		UNUSED_PARAMS
	};
	class C_Astro3
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -14;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.02, 0.05, 0.09}; // Ambient light starts to take on a deeper blue hue.
		ambientCloud[] = {0.02, 0.05, 0.09};
		groundReflection[]= {0.004, 0.0072, 0.012};
		groundReflectionCloud[] = {0.004, 0.0072, 0.012};
		sky[]= {0.02, 0.03, 0.043};
		skyAroundSun[] = {{0.1, 0.08, 0.1}, 0.5}; // First hint of purple/red glow at the horizon.
		desiredLuminanceCoef = -0.10;
		desiredLuminanceCoefCloud = -0.10;
		EVMin = -4.0;
		EVMax = 0.1;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.5;
		atmosphereIntensity = 0.5;
		starsIntensity = 0.05;

		UNUSED_PARAMS
	};

	// nautical
	class C_Nautical1
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -12;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.04, 0.06, 0.12}; // Ambient light becomes a stronger, cool blue.
		ambientCloud[] = {0.04, 0.06, 0.12};
		groundReflection[]= {0.01, 0.015, 0.02};
		groundReflectionCloud[] = {0.01, 0.015, 0.02};
		sky[]= {{0.086, 0.286, 0.541}, 0.0}; // sky[]color shifts to a rich Yale Blue.
		skyAroundSun[] = {{0.4, 0.2, 0.25}, 1.5}; // Horizon glow intensifies with reddish tones.
		desiredLuminanceCoef = 0.05;
		desiredLuminanceCoefCloud = 0.05;
		EVMin = -4.0;
		EVMax = 0.6;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.4;
		atmosphereIntensity = 0.6;
		starsIntensity = 0.01;

		UNUSED_PARAMS
	};
	class C_Nautical2
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -10;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.06, 0.09, 0.16}; // Blue ambient continues to brighten.
		ambientCloud[] = {0.06, 0.09, 0.16};
		groundReflection[]= {0.016, 0.02, 0.03};
		groundReflectionCloud[] = {0.016, 0.02, 0.03};
		sky[]= {{0.12, 0.2, 0.35}, 0.5};
		skyAroundSun[] = {{0.6, 0.3, 0.3}, 2.0}; // Horizon glow becomes more orange.
		desiredLuminanceCoef = 0.15;
		desiredLuminanceCoefCloud = 0.15;
		EVMin = -4.0;
		EVMax = 0.6;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.3;
		atmosphereIntensity = 0.7;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Nautical3
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -8;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.07, 0.11, 0.19};
		ambientCloud[] = {0.07, 0.11, 0.19};
		groundReflection[]= {0.02, 0.025, 0.035};
		groundReflectionCloud[] = {0.02, 0.025, 0.035};
		sky[]= {{0.15, 0.22, 0.4}, 0.8};
		skyAroundSun[] = {{0.8, 0.4, 0.3}, 2.2};
		desiredLuminanceCoef = 0.25;
		desiredLuminanceCoefCloud = 0.25;
		EVMin = -4.0;
		EVMax = 0.6;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.2;
		atmosphereIntensity = 0.8;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};

	// civil
	class C_Civil1
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -6;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.08, 0.12, 0.20}; // Shadows remain cool blue, creating contrast for the coming sunrise.
		ambientCloud[] = {0.08, 0.12, 0.20};
		groundReflection[]= {0.02, 0.03, 0.04};
		groundReflectionCloud[] = {0.02, 0.03, 0.04};
		sky[]= {{0.17, 0.25, 0.45}, 1.0}; // sky[]is a mix of blue and the approaching sun.
		skyAroundSun[] = {{0.945, 0.702, 0.318}, 2.5}; // Intense, warm orange glow (Maximum Yellow Red).
		desiredLuminanceCoef = 0.35;
		desiredLuminanceCoefCloud = 0.35;
		EVMin = -4.0;
		EVMax = 0.6;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.1;
		atmosphereIntensity = 0.9;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Civil2
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -4;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.09, 0.14, 0.24};
		ambientCloud[] = {0.09, 0.14, 0.24};
		groundReflection[]= {0.025, 0.035, 0.05};
		groundReflectionCloud[] = {0.025, 0.035, 0.05};
		sky[]= {{0.25, 0.4, 0.6}, 1.5};
		skyAroundSun[] = {{0.96, 0.75, 0.33}, 2.8};
		desiredLuminanceCoef = 0.40;
		desiredLuminanceCoefCloud = 0.40;
		EVMin = -4.0;
		EVMax = 0.3;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Civil3
	{
		height = 0;
		overcast = 0.35;
		sunAngle = -2;
		sunOrMoon = 1.0;
		diffuse[] = {0.0, 0.0, 0.0};
		diffuseCloud[] = {0.0, 0.0, 0.0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.10, 0.15, 0.28}; // Ambient light remains cool just before sun crests horizon.
		ambientCloud[] = {0.10, 0.15, 0.28};
		groundReflection[]= {0.03, 0.04, 0.06};
		groundReflectionCloud[] = {0.03, 0.04, 0.06};
		sky[]= {{0.3, 0.5, 0.7}, 1.8};
		skyAroundSun[] = {{0.98, 0.8, 0.3}, 3.0}; // Horizon is brilliantly lit.
		desiredLuminanceCoef = 0.45;
		desiredLuminanceCoefCloud = 0.45;
		EVMin = -4.0;
		EVMax = 0.3;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};

	// day
	class C_Day0
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 0;
		sunOrMoon = 1.0;
		diffuse[] = {{0.95, 0.65, 0.35}, 2.0}; // Direct light is a strong, warm orange as the sun rises.
		diffuseCloud[] = {{0.95, 0.65, 0.35}, 2.0};
		bidirect[]= {0.05, 0.05, 0.04};
		bidirectCloud[] = {0.05, 0.05, 0.04};
		ambient[] = {0.10, 0.15, 0.28}; // Ambient light remains cool for cinematic contrast.
		ambientCloud[] = {0.10, 0.15, 0.28};
		groundReflection[]= {0.03, 0.04, 0.06};
		groundReflectionCloud[] = {0.03, 0.04, 0.06};
		sky[]= {{0.349, 0.584, 0.718}, 2.0}; // sky[]is a brighter blue (Silver Lake Blue).
		skyAroundSun[] = {{0.992, 0.878, 0.314}, 3.0}; // Brilliant yellow halo (Minion Yellow).
		desiredLuminanceCoef = 0.62;
		desiredLuminanceCoefCloud = 0.62;
		EVMin = -4.0;
		EVMax = 0.2;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Day4
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 4;
		sunOrMoon = 1;
		diffuse[] = {{1.3, 0.8, 0.5}, 5.0}; // Light is still warm but getting brighter and less saturated.
		diffuseCloud[] = {{1.3, 0.8, 0.5}, 5.0};
		bidirect[]= {0.04, 0.04, 0.035};
		bidirectCloud[] = {0.04, 0.04, 0.035};
		ambient[] = {{0.09, 0.14, 0.23}, 3.0}; // Ambient light brightens but keeps a blue tint.
		ambientCloud[] = {{0.09, 0.14, 0.23}, 3.0};
		groundReflection[]= {{0.15, 0.18, 0.30}, 2.0};
		groundReflectionCloud[] = {{0.15, 0.18, 0.30}, 2.0};
		sky[]= {{0.4, 0.6, 0.85}, 6.0};
		skyAroundSun[] = {{1.5, 0.9, 0.4}, 8.0};
		desiredLuminanceCoef = 0.66;
		desiredLuminanceCoefCloud = 0.66;
		EVMin = -4.0;
		EVMax = 0.2;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Day8
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 8;
		sunOrMoon = 1;
		diffuse[] = {{1.1, 0.85, 0.6}, 11.1}; // Light continues to cool towards neutral.
		diffuseCloud[] = {{1.1, 0.85, 0.6}, 11.1};
		bidirect[]= {0.05, 0.05, 0.04};
		bidirectCloud[] = {0.05, 0.05, 0.04};
		ambient[] = {{0.08, 0.13, 0.22}, 8.8};
		ambientCloud[] = {{0.08, 0.13, 0.22}, 8.8};
		groundReflection[]= {{0.11, 0.16, 0.25}, 7.4};
		groundReflectionCloud[] = {{0.11, 0.16, 0.25}, 7.4};
		sky[]= {{0.38, 0.58, 0.90}, 11.4};
		skyAroundSun[] = {{1.4, 0.9, 0.5}, 13.8};
		desiredLuminanceCoef = 0.69;
		desiredLuminanceCoefCloud = 0.69;
		EVMin = -4.0;
		EVMax = 0.2;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Day12
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 12;
		sunOrMoon = 1;
		diffuse[] = {{1.05, 0.95, 0.85}, 12.1};
		diffuseCloud[] = {{1.05, 0.95, 0.85}, 12.1};
		bidirect[]= {0.06, 0.06, 0.05};
		bidirectCloud[] = {0.06, 0.06, 0.05};
		ambient[] = {{0.08, 0.13, 0.19}, 10.0};
		ambientCloud[] = {{0.08, 0.13, 0.19}, 10.0};
		groundReflection[]= {{0.10, 0.15, 0.22}, 8.1};
		groundReflectionCloud[] = {{0.10, 0.15, 0.22}, 8.1};
		sky[]= {{0.35, 0.55, 0.98}, 11.8}; // sky[]becomes a rich, deep blue.
		skyAroundSun[] = {{1.2, 1.1, 1.0}, 13.2};
		desiredLuminanceCoef = 0.71;
		desiredLuminanceCoefCloud = 0.71;
		EVMin = -4.0;
		EVMax = 0.2;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Day16
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 16;
		sunOrMoon = 1;
		diffuse[] = {{1.0, 0.98, 0.9}, 12.5}; // Light is bright with a very subtle warm tint.
		diffuseCloud[] = {{1.0, 0.98, 0.9}, 12.5};
		bidirect[]= {0.08, 0.08, 0.07}; // Increased backlight for better model separation.
		bidirectCloud[] = {0.08, 0.08, 0.07};
		ambient[] = {{0.08, 0.13, 0.18}, 9.8}; // Ambient is a subtle, cool sky-blue.
		ambientCloud[] = {{0.08, 0.13, 0.18}, 9.8};
		groundReflection[]= {{0.10, 0.15, 0.20}, 8.1}; // Reduced ground reflection for more contrast.
		groundReflectionCloud[] = {{0.10, 0.15, 0.20}, 8.1};
		sky[]= {{0.35, 0.55, 0.98}, 12.0};
		skyAroundSun[] = {{1.0, 1.0, 1.0}, 13.0}; // Sun halo is pure white and intense.
		desiredLuminanceCoef = 0.73;
		desiredLuminanceCoefCloud = 0.73;
		EVMin = -4.0;
		EVMax = 0.2;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Day35
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 35;
		sunOrMoon = 1;
		diffuse[] = {{1.0, 0.99, 0.94}, 13.5};
		diffuseCloud[] = {{1.0, 0.99, 0.94}, 13.5};
		bidirect[]= {0.08, 0.08, 0.07};
		bidirectCloud[] = {0.08, 0.08, 0.07};
		ambient[] = {{0.09, 0.14, 0.19}, 10.4};
		ambientCloud[] = {{0.09, 0.14, 0.19}, 10.4};
		groundReflection[]= {{0.11, 0.16, 0.21}, 8.0};
		groundReflectionCloud[] = {{0.11, 0.16, 0.21}, 8.0};
		sky[]= {{0.40, 0.65, 0.97}, 12.7}; // Bright, saturated blue sky.
		skyAroundSun[] = {{1.0, 1.0, 1.0}, 13.7};
		desiredLuminanceCoef = 0.74;
		desiredLuminanceCoefCloud = 0.74;
		EVMin = -4.0;
		EVMax = 0.3;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class C_Day60
	{
		height = 0;
		overcast = 0.35;
		sunAngle = 60;
		sunOrMoon = 1;
		diffuse[] = {{1.0, 0.99, 0.96}, 14.5}; // Brightest point of the day, slightly warm light.
		diffuseCloud[] = {{1.0, 0.99, 0.96}, 14.5};
		bidirect[]= {0.09, 0.09, 0.08}; // Strong backlight for a cinematic "rim light" effect on characters.
		bidirectCloud[] = {0.09, 0.09, 0.08};
		ambient[] = {{0.09, 0.14, 0.19}, 11.2}; // Cool ambient light from the sky[]provides fill.
		ambientCloud[] = {{0.09, 0.14, 0.19}, 11.2};
		groundReflection[]= {{0.11, 0.16, 0.21}, 7.8};
		groundReflectionCloud[] = {{0.11, 0.16, 0.21}, 7.8};
		sky[]= {{0.40, 0.65, 0.97}, 13.6};
		skyAroundSun[] = {{1.0, 1.0, 1.0}, 14.2};
		desiredLuminanceCoef = 0.75;
		desiredLuminanceCoefCloud = 0.75;
		EVMin = -4.0;
		EVMax = 0.3;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};



	// OVERCAST SET
	class O_Night
	{
		height = 0;
		overcast = 1.0;
		sunAngle = -18;
		sunOrMoon = 0.0; // Represents a moonless or heavily overcast night.
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.003,0.003,0.0035}; // Extremely dark to create oppressive darkness.
		ambientCloud[] = {0.003,0.003,0.0035};
		groundReflection[]= {0.001, 0.001, 0.001};
		groundReflectionCloud[] = {0.001, 0.001, 0.001};
		sky[]= {0.002, 0.002, 0.002}; // sky[]is pitch black.
		skyAroundSun[] = {0.002, 0.002, 0.002};
		desiredLuminanceCoef = -0.25;
		desiredLuminanceCoefCloud = -0.25;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.015; // Add subtle grain to the darkness.
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0; // Stars are completely obscured.

		UNUSED_PARAMS
	};
	class O_Astro1
	{
		height = 0;
		overcast = 1.0;
		sunAngle = -17;
		sunOrMoon = 0.5;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.01, 0.01, 0.012}; // A very faint, gloomy ambient light.
		ambientCloud[] = {0.01, 0.01, 0.012};
		groundReflection[]= {0.002, 0.002, 0.002};
		groundReflectionCloud[] = {0.002, 0.002, 0.002};
		sky[]= {0.005, 0.005, 0.005};
		skyAroundSun[] = {0.005, 0.005, 0.005};
		desiredLuminanceCoef = -0.22;
		desiredLuminanceCoefCloud = -0.22;
		EVMin = -6.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Nautical1
	{
		height = 0;
		overcast = 1.0;
		sunAngle = -12;
		sunOrMoon = 1.0;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.03, 0.035, 0.04}; // Desaturated, grey light increases.
		ambientCloud[] = {0.03, 0.035, 0.04};
		groundReflection[]= {0.005, 0.005, 0.006};
		groundReflectionCloud[] = {0.005, 0.005, 0.006};
		sky[]= {0.03, 0.03, 0.035};
		skyAroundSun[] = {0.04, 0.04, 0.045};
		desiredLuminanceCoef = -0.15;
		desiredLuminanceCoefCloud = -0.15;
		EVMin = -5.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Civil1
	{
		height = 0;
		overcast = 1.0;
		sunAngle = -6;
		sunOrMoon = 1;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.08, 0.09, 0.11}; // Ambient light is desaturated and grey.
		ambientCloud[] = {0.08, 0.09, 0.11};
		groundReflection[]= {0.01, 0.01, 0.015};
		groundReflectionCloud[] = {0.01, 0.01, 0.015};
		sky[]= {0.10, 0.11, 0.12}; // sky[]is a flat, gloomy grey.
		skyAroundSun[] = {0.12, 0.12, 0.13}; // A slightly brighter spot where the sun would be.
		desiredLuminanceCoef = -0.05; // Flatter, slower increase for overcast
		desiredLuminanceCoefCloud = -0.05;
		EVMin = -4.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Civil2
	{
		height = 0;
		overcast = 1.0;
		sunAngle = -2;
		sunOrMoon = 1;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.10, 0.11, 0.13};
		ambientCloud[] = {0.10, 0.11, 0.13};
		groundReflection[]= {0.015, 0.015, 0.018};
		groundReflectionCloud[] = {0.015, 0.015, 0.018};
		sky[]= {0.11, 0.12, 0.14};
		skyAroundSun[] = {0.13, 0.13, 0.15};
		desiredLuminanceCoef = 0.0;
		desiredLuminanceCoefCloud = 0.0;
		EVMin = -5.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Day0
	{
		height = 0;
		overcast = 1.0;
		sunAngle = 0;
		sunOrMoon = 1;
		diffuse[] = {0, 0, 0};
		diffuseCloud[] = {0, 0, 0};
		bidirect[]= {0.0, 0.0, 0.0};
		bidirectCloud[] = {0.0, 0.0, 0.0};
		ambient[] = {0.12, 0.13, 0.15};
		ambientCloud[] = {0.12, 0.13, 0.15};
		groundReflection[]= {0.03, 0.03, 0.035};
		groundReflectionCloud[] = {0.03, 0.03, 0.035};
		sky[]= {0.13, 0.14, 0.16};
		skyAroundSun[] = {0.14, 0.15, 0.17};
		desiredLuminanceCoef = 0.08;
		desiredLuminanceCoefCloud = 0.08;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Day4
	{
		height = 0;
		overcast = 1.0;
		sunAngle = 4;
		sunOrMoon = 1;
		diffuse[] = {{0.20, 0.21, 0.22}, 3.4};
		diffuseCloud[] = {{0.20, 0.21, 0.22}, 3.4};
		bidirect[]= {0.1, 0.1, 0.1};
		bidirectCloud[] = {0.1, 0.1, 0.1};
		ambient[] = {{0.15, 0.16, 0.18}, 5.8};
		ambientCloud[] = {{0.15, 0.16, 0.18}, 5.8};
		groundReflection[]= {{0.08, 0.09, 0.10}, 2.4};
		groundReflectionCloud[] = {{0.08, 0.09, 0.10}, 2.4};
		sky[]= {{0.8, 0.85, 0.9}, 4.65};
		skyAroundSun[] = {{0.9, 0.95, 1.0}, 5.0};
		desiredLuminanceCoef = 0.15;
		desiredLuminanceCoefCloud = 0.15;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Day8
	{
		height = 0;
		overcast = 1.0;
		sunAngle = 8;
		sunOrMoon = 1;
		diffuse[] = {{0.22, 0.23, 0.24}, 6.4};
		diffuseCloud[] = {{0.22, 0.23, 0.24}, 6.4};
		bidirect[]= {0.15, 0.15, 0.15};
		bidirectCloud[] = {0.15, 0.15, 0.15};
		ambient[] = {{0.18, 0.19, 0.21}, 8.8};
		ambientCloud[] = {{0.18, 0.19, 0.21}, 8.8};
		groundReflection[]= {{0.09, 0.10, 0.11}, 6.1};
		groundReflectionCloud[] = {{0.09, 0.10, 0.11}, 6.1};
		sky[]= {{0.8, 0.85, 0.9}, 8.2};
		skyAroundSun[] = {{0.9, 0.95, 1.0}, 9.0};
		desiredLuminanceCoef = 0.20;
		desiredLuminanceCoefCloud = 0.20;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Day12
	{
		height = 0;
		overcast = 1.0;
		sunAngle = 12;
		sunOrMoon = 1;
		diffuse[] = {{0.23, 0.24, 0.25}, 7.2};
		diffuseCloud[] = {{0.23, 0.24, 0.25}, 7.2};
		bidirect[]= {0.18, 0.18, 0.18};
		bidirectCloud[] = {0.18, 0.18, 0.18};
		ambient[] = {{0.19, 0.20, 0.22}, 10.8};
		ambientCloud[] = {{0.19, 0.20, 0.22}, 10.8};
		groundReflection[]= {{0.09, 0.10, 0.11}, 7.1};
		groundReflectionCloud[] = {{0.09, 0.10, 0.11}, 7.1};
		sky[]= {{0.8, 0.85, 0.9}, 9.2};
		skyAroundSun[] = {{0.9, 0.95, 1.0}, 10.0};
		desiredLuminanceCoef = 0.24;
		desiredLuminanceCoefCloud = 0.24;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Day35
	{
		height = 0;
		overcast = 1.0;
		sunAngle = 35;
		sunOrMoon = 1;
		diffuse[] = {{0.24, 0.25, 0.26}, 8.4};
		diffuseCloud[] = {{0.24, 0.25, 0.26}, 8.4};
		bidirect[] = {0.20, 0.21, 0.22};
		bidirectCloud[] = {0.20, 0.21, 0.22};
		ambient[] = {{0.20, 0.22, 0.24}, 11.8};
		ambientCloud[] = {{0.20, 0.22, 0.24}, 11.8};
		groundReflection[]= {{0.10, 0.11, 0.12}, 8.1};
		groundReflectionCloud[] = {{0.10, 0.11, 0.12}, 8.1};
		sky[]= {{0.8, 0.85, 0.9}, 11.2};
		skyAroundSun[] = {{0.9, 0.95, 1.0}, 12.0};
		desiredLuminanceCoef = 0.28;
		desiredLuminanceCoefCloud = 0.28;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
	class O_Day60
	{
		height = 0;
		overcast = 1.0;
		sunAngle = 60;
		sunOrMoon = 1;
		diffuse[] = {{0.25, 0.26, 0.27}, 9.8}; // Diffuse light is weak, grey, and scattered.
		diffuseCloud[] = {{0.25, 0.26, 0.27}, 9.8};
		bidirect[]= {0.20, 0.21, 0.22};
		bidirectCloud[] = {0.20, 0.21, 0.22};
		ambient[] = {{0.20, 0.22, 0.24}, 13.1}; // Ambient light is the primary source, creating soft, directionless shadows.
		ambientCloud[] = {{0.20, 0.22, 0.24}, 13.1};
		groundReflection[]= {{0.10, 0.11, 0.12}, 8.4};
		groundReflectionCloud[] = {{0.10, 0.11, 0.12}, 8.4};
		sky[]= {{0.8, 0.85, 0.9}, 12.2}; // sky[]is a bright, flat white-grey.
		skyAroundSun[] = {{0.9, 0.95, 1.0}, 13.0};
		desiredLuminanceCoef = 0.30;
		desiredLuminanceCoefCloud = 0.30;
		EVMin = -7.0;
		EVMax = 0.0;
		filmGrainIntensity = 0.0;
		spaceIntensity = 0.0;
		atmosphereIntensity = 1.0;
		starsIntensity = 0.0;

		UNUSED_PARAMS
	};
};
