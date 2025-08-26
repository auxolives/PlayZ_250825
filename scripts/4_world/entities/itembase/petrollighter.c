modded class PetrolLighter
{
	override void OnIgnitedTarget( EntityAI ignited_item )
	{
		if ( GetGame().IsServer() )
		{
			AddQuantity( -1 );
		}
	}
	
	override void OnIgnitedTargetFailed( EntityAI target_item )
	{
		if ( GetGame().IsServer() )
		{
			AddQuantity( -1 );
		}
	}
}