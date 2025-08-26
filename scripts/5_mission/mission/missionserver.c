modded class MissionServer
{
    override bool ShouldPlayerBeKilled(PlayerBase player)
    {
        if (!player) return false;

        if (player.IsUnconscious() || player.IsRestrained())
            return false;

        return super.ShouldPlayerBeKilled(player);
    }
}
