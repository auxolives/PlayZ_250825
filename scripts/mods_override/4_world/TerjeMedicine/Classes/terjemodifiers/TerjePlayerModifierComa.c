modded class TerjePlayerModifierComa
{
    private bool  m_InComa              = false;
    private float m_TimerOutOfComa      = 0;
    private float m_ComaTimer           = 0;
    private float m_ComaDurationThreshold;

    private const float MIN_COMA_DURATION = 60;
    private const float MAX_COMA_DURATION = 360;

    private const float MIN_AWAKE_GRACE   = 60;
    private const float MAX_AWAKE_GRACE   = 360;

    override float GetTimeout() { return 1; }

    override void OnServerFixedTick(PlayerBase player, float deltaTime)
    {
        if (!player.GetAllowDamage())
            return;

        if (!m_InComa)
        {
            if (m_TimerOutOfComa > 0)
            {
                m_TimerOutOfComa = Math.Max(m_TimerOutOfComa - deltaTime, 0);
                return;
            }

            if (IsCritical(player))
                EnterComa(player);
        }
        else
        {
            float curShock = player.GetHealth("", "Shock");

            bool stillCritical = IsCritical(player);

            if (curShock > PlayerConstants.UNCONSCIOUS_THRESHOLD / 5 || !stillCritical)
            {
                ExitComa(player);
                return;
            }

            player.SetHealth("", "Shock", 0);

            m_ComaTimer += deltaTime;
            if (m_ComaTimer >= m_ComaDurationThreshold)
                ExitComa(player);
        }
    }

    private bool IsCritical(PlayerBase p)
    {
        float immunityMod = 1.0;
        if (p.GetTerjeSkills() && p.GetTerjeSkills().GetSkillModifierValue("immunity", "resdiseasesmod", immunityMod))
        {
            immunityMod = 1.0 - Math.Clamp(immunityMod, 0, 1);
        }

        bool lowBlood  = p.GetHealth("GlobalHealth", "Blood")  < PlayerConstants.SL_BLOOD_CRITICAL  * immunityMod;
        bool lowHealth = p.GetHealth("GlobalHealth", "Health") < PlayerConstants.SL_HEALTH_CRITICAL * immunityMod;
        bool hasAdren  = p.GetTerjeStats() && p.GetTerjeStats().GetAdrenalinValue() > 0;

        return (lowBlood || lowHealth) && !hasAdren;
    }

    private void EnterComa(PlayerBase p)
    {
        m_InComa                = true;
        m_ComaTimer             = 0;
        m_ComaDurationThreshold = Math.RandomFloat(MIN_COMA_DURATION, MAX_COMA_DURATION);
        p.SetHealth("", "Shock", 0);
    }

    private void ExitComa(PlayerBase p)
    {
        m_InComa         = false;
        m_TimerOutOfComa = Math.RandomFloat(MIN_AWAKE_GRACE, MAX_AWAKE_GRACE);
        p.SetHealth("", "Shock", 30);
    }
}
