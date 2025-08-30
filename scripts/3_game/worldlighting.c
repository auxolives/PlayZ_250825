modded class WorldLighting
{
	protected string lighting_playz = "PlayZ_250825\\DZ\\data\\lighting\\lighting_playz.c";
	
	override void SetGlobalLighting( int lightingID )
	{
		switch ( lightingID )
		{
			case 3:
				GetGame().GetWorld().LoadNewLightingCfg( lighting_playz );
				break;
		}
	}
}
