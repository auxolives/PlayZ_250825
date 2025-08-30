class CfgPatches
{
	class DZ_Surfaces_PlayZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Surfaces", "DZ_Surfaces_Sakhal", "DZ_Surfaces_Bliss"};
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
			class Anthoxanthum: DefaultClutter
			{
				model = "dz\plants\clutter\c_Anthoxanthum.p3d";
				scaleMin = 0.35;
				scaleMax = 0.7;
				noSatColor = 0;
			};
			class Anthoxanthum_bended: DefaultClutter
			{
				model = "dz\plants\clutter\c_Anthoxanthum_bended.p3d";
				scaleMin = 0.35;
				scaleMax = 0.7;
				noSatColor = 0;
			};
			class Calamagrostis: DefaultClutter
			{
				model = "dz\plants\clutter\c_Calamagrostis.p3d";
				scaleMin = 0.8;
				scaleMax = 1.1;
				noSatColor = 1;
			};
			class Carduus: DefaultClutter
			{
				model = "dz\plants\clutter\c_Carduus.p3d";
				scaleMin = 0.6;
				scaleMax = 0.9;
				noSatColor = 0;
			};
			class Carduus_f: DefaultClutter
			{
				model = "dz\plants\clutter\c_Carduus_f.p3d";
				scaleMin = 0.6;
				scaleMax = 0.9;
				noSatColor = 1;
			};
			class Elytrigia: DefaultClutter
			{
				model = "dz\plants\clutter\c_Elytrigia.p3d";
				scaleMin = 0.7;
				scaleMax = 1.2;
				noSatColor = 0;
			};
			class ElytrigiaGreen: DefaultClutter
			{
				model = "dz\plants\clutter\c_Elytrigia_green.p3d";
				scaleMin = 1.3;
				scaleMax = 1.8;
				noSatColor = 1;
			};
			class ElytrigiaTall: DefaultClutter
			{
				model = "dz\plants\clutter\c_ElytrigiaTall.p3d";
				scaleMin = 0.7;
				scaleMax = 1.5;
				noSatColor = 1;
			};
			class Hypericum: DefaultClutter
			{
				model = "dz\plants\clutter\c_Hypericum.p3d";
				scaleMin = 0.6;
				scaleMax = 0.9;
				noSatColor = 0;
			};
			class Hypericum_f: DefaultClutter
			{
				model = "dz\plants\clutter\c_Hypericum_f.p3d";
				scaleMin = 0.6;
				scaleMax = 0.9;
				noSatColor = 1;
			};
			class Lolium: DefaultClutter
			{
				model = "dz\plants\clutter\c_Lolium.p3d";
				scaleMin = 0.88;
				scaleMax = 1.1;
				noSatColor = 1;
			};
			class Taraxacum: DefaultClutter
			{
				model = "dz\plants\clutter\c_Taraxacum.p3d";
				scaleMin = 0.8;
				scaleMax = 0.9;
				noSatColor = 1;
			};
			class ConcreteGrass: DefaultClutter
			{
				model = "DZ\plants\clutter\c_ConcreteGrass_bunch.p3d";
				scaleMin = 0.4;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class DirtGrass: DefaultClutter
			{
				model = "DZ\plants\clutter\c_DirtGrass_bunch.p3d";
				scaleMin = 0.4;
				scaleMax = 1.2;
				noSatColor = 0;
			};
			class ElytrigiaDirt: DefaultClutter
			{
				model = "dz\plants\clutter\c_ElytrigiaDirt.p3d";
				scaleMin = 0.8;
				scaleMax = 1.3;
				noSatColor = 0;
			};
			class Cones: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Cones.p3d";
				scaleMin = 0.8;
				scaleMax = 0.9;
				noSatColor = 1;
			};
			class ElytrigiaForest: DefaultClutter
			{
				model = "dz\plants\clutter\c_ElytrigiaForest.p3d";
				scaleMin = 0.8;
				scaleMax = 1.3;
				noSatColor = 1;
			};
			class Leafs_spread: DefaultClutter
			{
				model = "dz\plants\clutter\c_leafs_spread.p3d";
				scaleMin = 0.8;
				scaleMax = 0.9;
				noSatColor = 0;
			};
			class Broadleaf_Undergrowth: DefaultClutter
			{
				model = "dz\plants\clutter\c_undergrowth.p3d";
				scaleMin = 0.3;
				scaleMax = 0.75;
				noSatColor = 1;
			};
			class Broadleaf_Undergrowth_Red: DefaultClutter
			{
				model = "dz\plants\clutter\c_undergrowth_red.p3d";
				scaleMin = 0.3;
				scaleMax = 0.75;
				noSatColor = 1;
			};
			class c_Broadleaf_Sprouts: DefaultClutter
			{
				model = "dz\plants\clutter\c_broadleaf_sprouts.p3d";
				affectedByWind = 0.01;
				scaleMin = 0.3;
				noSatColor = 1;
				scaleMax = 0.5;
			};
			class c_Broadleaf_Sprouts_Tall: DefaultClutter
			{
				model = "dz\plants\clutter\c_broadleaf_sprouts_tall.p3d";
				scaleMin = 0.5;
				scaleMax = 1.0;
				noSatColor = 1;
			};
			class SmallPicea: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Pines.p3d";
				scaleMin = 0.5;
				scaleMax = 1.1;
				noSatColor = 1;
			};
			class Polypodiophyta: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Polypodiophyta.p3d";
				scaleMin = 0.5;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class Polypodiophyta_b: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Polypodiophyta_b.p3d";
				scaleMin = 0.5;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class Polypodiophyta_c: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Polypodiophyta_c.p3d";
				scaleMin = 0.5;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class PolypodiophytaTall: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Polypodiophyta_tall.p3d";
				scaleMin = 0.6;
				scaleMax = 1.0;
				noSatColor = 1;
			};
			class Vaccinium: DefaultClutter
			{
				model = "dz\plants\clutter\c_Vaccinium.p3d";
				scaleMin = 0.5;
				scaleMax = 1.6;
				noSatColor = 1;
			};
			class VacciniumGreen: DefaultClutter
			{
				model = "dz\plants\clutter\c_Vaccinium_green.p3d";
				scaleMin = 0.5;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class VacciniumRed: DefaultClutter
			{
				model = "dz\plants\clutter\c_Vaccinium_red.p3d";
				scaleMin = 0.5;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class VacciniumTall: DefaultClutter
			{
				model = "dz\plants\clutter\c_Vaccinium_tall.p3d";
				scaleMin = 0.5;
				scaleMax = 1.1;
				noSatColor = 1;
			};
			class Twigs: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Twigs.p3d";
				scaleMin = 0.8;
				scaleMax = 1.2;
				noSatColor = 1;
			};
			class Twigs_b: DefaultClutter
			{
				model = "DZ\plants\clutter\c_Twigs_b.p3d";
				scaleMin = 0.8;
				scaleMax = 1.8;
				noSatColor = 1;
			};
			class BrownGrass_Lump: DefaultClutter
			{
				model = "dz\plants_sakhal\clutter\c_BrownGrass_Lump.p3d";
				scaleMin = 0.02;
				scaleMax = 0.06;
				noSatColor = 1;
			};
			class Stubble_summer: DefaultClutter
			{
				model = "dz\plants_bliss\clutter\c_stubble_summer.p3d";
				scaleMin = 1.0;
				scaleMax = 1.4;
				noSatColor = 1;
			};
			class Wheat2_summer: DefaultClutter
			{
				model = "dz\plants_bliss\clutter\c_wheat2.p3d";
				affectedByWind = 0.2;
				scaleMin = 1.0;
				scaleMax = 1.7;
				noSatColor = 0;
			};
			class BrownGrass: DefaultClutter
			{
				model = "dz\plants_sakhal\clutter\c_BrownGrass.p3d";
				scaleMin = 1.0;
				scaleMax = 1.6;
				noSatColor = 0;
			};
			class branches_deciduous_summer: DefaultClutter
			{
				model = "dz\plants_bliss\clutter\c_branches_deciduous_summer.p3d";
				scaleMin = 0.01;
				scaleMax = 0.05;
				noSatColor = 0;
			};
		};
	};
};
class CfgSurfaceCharacters
{
	class cp_grass
	{
		probability[] = {0.0,		 0.0,	   0.0,	      0.09,		0.0,		  0.0,	     0.0,	0.0,	       0.16,		0.0,		0.0,		0.14,		0.17,		0.22};
		names[] = {"hypericumcarduus","bodlak","bodlak2","Anthoxanthum","Anthoxanthum_bended","Carduus","Hypericum","Elytrigia","ElytrigiaGreen","ElytrigiaTall","BrownGrass_Lump","Stubble_summer","Wheat2_summer","BrownGrass"};
	};
	class cp_grass_tall
	{
		probability[] = {0.0,		0.0,	  0.0,	      0.09,	        0.0,    	 0.0,      0.0,		0.0,	      0.08,		0.09,		0.1,		0.12,		0.15,		0.18};
		names[] = {"hypericumcarduus","bodlak","bodlak2","Anthoxanthum","Anthoxanthum_bended","Carduus","Hypericum","Elytrigia","ElytrigiaGreen","ElytrigiaTall","BrownGrass_Lump","Stubble_summer","Wheat2_summer","BrownGrass"};
	};
	class cp_broadleaf_sparse1
	{
		probability[] = {0.0,		0.0,		       0.0,	    0.0,	0.0,		0.0,		0.0,		0.0,		0.0,	    0.1,       0.0,	  0.0,		0.2,		    0.0,		    0.0,		    0.0,		0.0,		    0.0,			0.0,		  0.0,	      0.0,	0.0,	    0.1,	0.07};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus_f","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum_f","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","c_Broadleaf_Sprouts","c_Broadleaf_Sprouts_Tall","VacciniumTall","Cones","SmallPicea","Twigs_b","Stubble_summer"};
	};
	class cp_broadleaf_sparse2
	{
		probability[] = {0.0,		0.0,		       0.0,	    0.0,	0.0,		0.0,		0.03,		0.0,		0.0,	    0.1,       0.1,	  0.0,		0.15,		    0.02,		    0.02,		    0.0,		0.0,		   0.2,			    0.1,		  0.0,	      0.0,	0.0,	    0.1,	0.07,				0.03};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus_f","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum_f","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","c_Broadleaf_Sprouts","c_Broadleaf_Sprouts_Tall","VacciniumTall","Cones","SmallPicea","Twigs_b","Stubble_summer","branches_picea_deforested_summer"};
	};
	class cp_broadleaf_dense1
	{
		probability[] = {0.0,		   0.0,		      0.0,	   0.0,		0.0,		0.0,		0.01,		0.0,		0.0,	    0.0,     0.1,	  0.0,		0.4,		0.03,			0.03,			    0.0,	     0.0,		   0.2,			0.05,			  0.07,	     0.07,	 0.0,	    0.0,        0.1,			0.05};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus_f","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum_f","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","c_Broadleaf_Sprouts","c_Broadleaf_Sprouts_tall","Vaccinium","VacciniumRed","Cones","SmallPicea","Twigs_b","branches_picea_deforested_summer"};
	};
	class cp_broadleaf_dense2
	{
		probability[] = {0.0,		   0.0,		      0.0,	   0.0,		0.0,		0.0,		0.0,		0.0,		0.0,	    0.0,     0.15,	  0.0,		0.4,		0.0,			0.005,			    0.0,	     0.0,		   0.2,			0.03,			  0.0,	      0.0,	0.0,        0.1};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus_f","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum_f","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","c_Broadleaf_Sprouts","c_Broadleaf_Sprouts_tall","VacciniumTall","Cones","SmallPicea","Twigs_b"};
	};
	class cp_conifer_common1
	{
		probability[] = {0.0,		  0.0,			0.0,	    0.0,       0.0,	     0.0,	      0.01,		0.0,	      0.0,	0.08,	   0.0,	      0.0,	     0.0,		0.0,			0.0,			0.0,		    0.0,	  0.06,		 0.06,		0.0,	    0.2,       0.01,	 0.1,		0.06};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","Vaccinium","VacciniumRed","VacciniumTall","Cones","SmallPicea","Twigs","Stubble_summer"};
	};
	class cp_conifer_common2
	{
		probability[] = {0.0,		  0.0,			0.0,	    0.0,       0.0,	     0.0,	      0.02,		0.0,	      0.0,	0.05,	   0.0,	      0.0,	     0.0,		0.0,			0.0,			0.0,		    0.0,	  0.04,	 	0.0,		  0.0,	      0.25,	0.015,	   0.1,		0.02,			0.002};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","Vaccinium","VacciniumGreen","VacciniumTall","Cones","SmallPicea","Twigs","Stubble_summer","branches_picea_deforested_summer"};
	};
	class cp_conifer_moss1
	{
		probability[] = {0.0,		   0.0,		       0.0,	   0.0,	      0.0,	    0.0,	     0.0,		0.0,	      0.0,	0.0,	  0.0,	       0.0,	   0.0,			0.0,			0.0,			0.15,		0.0,		   0.15,	0.0,		0.0,	      0.3,	0.015,	   0.1};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","Vaccinium","VacciniumGreen","VacciniumTall","Cones","SmallPicea","Twigs"};
	};
	class cp_conifer_moss2
	{
		probability[] = {0.0,		   0.0,		       0.0,	   0.0,	      0.0,	    0.0,	     0.02,		0.0,	      0.0,	0.0,	  0.0,	       0.0,	   0.0,			0.0,			0.0,			0.0,		0.0,		   0.05,	0.0,		0.0,	      0.15,	0.01,	   0.1,		0.04};
		names[] = {"Anthoxanthum","Anthoxanthum_bended","Calamagrostis","Carduus","Elytrigia","ElytrigiaGreen","ElytrigiaTall","ElytrigiaForest","Hypericum","Lolium","Taraxacum","DirtGrass","Leafs_spread","Broadleaf_Undergrowth","Broadleaf_Undergrowth_Red","Polypodiophyta","PolypodiophytaTall","Vaccinium","VacciniumGreen","VacciniumTall","Cones","SmallPicea","Twigs","Stubble_summer"};
	};
	class cp_concrete_grass
	{
		probability[] = {0.0,		 0.0,	  0.0,	      0.0,	    0.0,      0.1,          0.0,		0.03};
		names[] = {"hypericumcarduus","bodlak","bodlak2","ElytrigiaGreen","Lolium","Taraxacum","ConcreteGrass","Stubble_summer"};
	};
	class cp_dirt_grass
	{
		probability[] = {0.0,		 0.0,	  0.0,	        0.0,	   0.0,	     0.04,	     0.05};
		names[] = {"hypericumcarduus","bodlak","bodlak2","ElytrigiaGreen","Lolium","Taraxacum","Anthoxanthum"};
	};
};
