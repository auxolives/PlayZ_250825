modded class ActionCPR
{	
	override void OnFinishProgressServer(ActionData action_data)
	{
		PlayerBase other_player = PlayerBase.Cast(action_data.m_Target.GetObject());
		other_player.GiveShock(6);
	}
}
