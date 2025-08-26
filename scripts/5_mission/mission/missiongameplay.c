modded class MissionGameplay
{
	override void OnPlayerRespawned(Man player)
	{
		super.OnPlayerRespawned(player);

		PlayerBase pb = PlayerBase.Cast(player);
		if (!pb) return;

		GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(ForceReEnableHud, 10000, false, pb);
	}

	void ForceReEnableHud(PlayerBase player)
	{
		if (!player) return;
		if (!player.IsControlledPlayer()) return;

		player.m_Hud.ShowQuickbarUI(true);
		player.m_Hud.UpdateQuickbarGlobalVisibility();

		player.m_Hud.InitHeatBufferUI(player);

		player.m_Hud.OnPlayerLoaded();
	}
}