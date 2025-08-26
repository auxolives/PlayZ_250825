class CfgPatches
{
	class DZ_Surfaces_PlayZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces",
			"DZ_Surfaces_Sakhal"
		};
	};
};
class CfgWorlds
{
    class DefaultWorld;
    class CAWorld: DefaultWorld
    {
        class DefaultClutter;
        class Clutter
        {
            class BrownGrass           : DefaultClutter { model = "dz\plants_sakhal\clutter\c_BrownGrass.p3d";            scaleMin = 0.75; scaleMax = 1.20;  noSatColor = 1; };
            class BrownGrass_Tall      : DefaultClutter { model = "dz\plants_sakhal\clutter\c_BrownGrass_Tall.p3d";       scaleMin = 0.40; scaleMax = 0.70;  noSatColor = 1; };
            class GreenGrass_Tall      : DefaultClutter { model = "dz\plants_sakhal\clutter\c_GreenGrass_Tall.p3d";       scaleMin = 0.55; scaleMax = 0.90;  noSatColor = 1; };
            class GreenGrass_Tall2     : DefaultClutter { model = "dz\plants_sakhal\clutter\c_GreenGrass_Tall2.p3d";      scaleMin = 0.55; scaleMax = 0.90;  noSatColor = 1; };
            class DryThistle           : DefaultClutter { model = "dz\plants_sakhal\clutter\c_DryThistle.p3d";            scaleMin = 0.85; scaleMax = 1.00;  noSatColor = 1; };
            class BirchLeaves          : DefaultClutter { model = "dz\plants_sakhal\clutter\c_BirchLeaves.p3d";           scaleMin = 0.85; scaleMax = 1.00;  noSatColor = 1; };
            class Twigs1               : DefaultClutter { model = "dz\plants_sakhal\clutter\c_Twigs1.p3d";                scaleMin = 0.75; scaleMax = 1.00;  noSatColor = 0; };
            class Twigs2               : DefaultClutter { model = "dz\plants_sakhal\clutter\c_Twigs2.p3d";                scaleMin = 0.75; scaleMax = 1.00;  noSatColor = 0; };
            class PiceaCones           : DefaultClutter { model = "dz\plants_sakhal\clutter\c_PiceaCones.p3d";            scaleMin = 0.85; scaleMax = 1.00;  noSatColor = 1; };
        };
    };
};
class CfgSurfaceCharacters
{
	class cp_grass
	{
        probability[]={0.2, 0.1, 0.2, 0.1};
        names[]={"BrownGrass", "BrownGrass_Tall", "GreenGrass_Tall", "GreenGrass_Tall2"};
	};
	class cp_grass_tall
	{
        probability[]={0.3, 0.1, 0.2, 0.1};
        names[]={"BrownGrass", "BrownGrass_Tall", "GreenGrass_Tall", "GreenGrass_Tall2"};
	};
	class cp_broadleaf_sparse1
	{
        probability[]={0.3, 0.05, 0.05};
        names[]={"BirchLeaves", "Twigs1", "Twigs2"};
	};
	class cp_broadleaf_sparse2
	{
        probability[]={0.2, 0.15, 0.15};
        names[]={"BirchLeaves", "Twigs1", "Twigs2"};
	};
	class cp_broadleaf_dense1
	{
        probability[]={0.4, 0.1, 0.1};
        names[]={"BirchLeaves", "Twigs1", "Twigs2"};
	};
	class cp_broadleaf_dense2
	{
        probability[]={0.3, 0.1, 0.1};
        names[]={"BirchLeaves", "Twigs1", "Twigs2"};
	};
	class cp_conifer_common1
	{
        probability[]={0.4, 0.1, 0.4};
        names[]={"PiceaCones", "Twigs1", "Twigs2"};
	};
	class cp_conifer_common2
	{
        probability[]={0.2, 0.5, 0.1};
        names[]={"PiceaCones", "Twigs1", "Twigs2"};
	};
	class cp_conifer_moss1
	{
        probability[]={0.4, 0.2, 0.2};
        names[]={"PiceaCones", "Twigs1", "Twigs2"};
	};
	class cp_conifer_moss2
	{
        probability[]={0.3, 0.2, 0.3};
        names[]={"PiceaCones", "Twigs1", "Twigs2"};
	};
	class cp_concrete_grass
	{
        probability[]={0.03};
        names[]={"BrownGrass"};
	};
	class cp_dirt_grass
	{
        probability[]={0.07};
        names[]={"BrownGrass"};
	};
};