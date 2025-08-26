modded class PlayerBase
{
    override bool Save()
    {
        if (GetPlayerState() == EPlayerStates.ALIVE)
        {
            GetHive().CharacterSave(this);
            return true;
        }
        return false;
    }
}
