modded class ActionSkinning
{
	override void TerjeProcessServerSpawnedItems(PlayerBase player)
	{
		float skillModifier = 0;
		if (player.GetTerjeSkills().GetSkillModifierValue("hunt", "meatcountmod", skillModifier))
		{
			set<string> uniqItemsCache();
			foreach (ItemBase item : m_terjeSpawnedItemsCache)
			{
				if (item)
				{
					string itemType = item.GetType();
					if (uniqItemsCache.Find(itemType) != -1)
					{
						if (Math.RandomFloat01() > skillModifier + 0.4)
						{
							item.Delete();
						}
					}
					else
					{
						uniqItemsCache.Insert(itemType);
					}
				}
			}
		}
		
		float meathuntSkill = 1.0;
		if (player.GetTerjeSkills().IsPerkRegistered("hunt", "meathunt"))
		{
			if (!player.GetTerjeSkills().GetPerkValue("hunt", "meathunt", meathuntSkill))
			{
				meathuntSkill = 0;
			}
		}
		
		float plmasterSkill = 1.0;
		if (player.GetTerjeSkills().IsPerkRegistered("hunt", "plmaster"))
		{
			if (!player.GetTerjeSkills().GetPerkValue("hunt", "plmaster", plmasterSkill))
			{
				plmasterSkill = 0;
			}
		}
		
		float meathunterInitSetting = GetTerjeSettingFloat(TerjeSettingsCollection.SKILLS_HUNTING_OVERRIDE_MEAT_INIT_QUANTITY);
		float meathunterMinSetting = GetTerjeSettingFloat(TerjeSettingsCollection.SKILLS_HUNTING_OVERRIDE_MEAT_MIN_QUANTITY);
		foreach (ItemBase item2 : m_terjeSpawnedItemsCache)
		{
			if (item2)
			{
				if (item2.IsMeat() && item2.HasQuantity())
				{
					float newQuantityMin = item2.GetQuantityMax() * meathunterMinSetting;
					float newQuantityInit = item2.GetQuantityMax() * Math.RandomFloat01() * meathunterInitSetting;
					float newQuantityAdd = (item2.GetQuantityMax() - newQuantityMin) * meathuntSkill;
					float newQuantityTotal = Math.Max(newQuantityMin, newQuantityInit + newQuantityAdd);
					item2.SetQuantity(newQuantityTotal);
				}
				else if (item2.IsPeltBase())
				{
					item2.SetHealth01("", "", plmasterSkill);
					if (item2.HasQuantity())
					{
						item2.SetQuantityNormalized(plmasterSkill);
					}
				}
				else if (item2.IsInherited(Bone))
				{
					item2.SetHealth01("", "", Math.Max(GetTerjeSettingFloat(TerjeSettingsCollection.SKILLS_HUNTING_OVERRIDE_BONES_INIT_HP), Math.Clamp(skillModifier, 0, 1)));
				}
				else
				{
					TerjeProcessServerSpawnedCustomItem(player, item2);
				}
			}
		}
	}
}