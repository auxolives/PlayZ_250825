modded class ActionCreateGreenhouseGardenPlot
{
    bool SkipColdAreaCheckForGreenhouses = true;

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        if (!target) 
            return false;

        if (player.IsPlacingLocal() || (!SkipColdAreaCheckForGreenhouses && player.GetInColdArea()))
            return false;

        Object target_object = target.GetObject();

        Land_Misc_Greenhouse greenHouse = Land_Misc_Greenhouse.Cast(target_object);
        Land_Misc_Polytunnel polytunnel = Land_Misc_Polytunnel.Cast(target_object);

        if (target_object && (greenHouse || polytunnel))
        {
            string action_selection = target_object.GetActionComponentName(target.GetComponentIndex());
            if (action_selection != "soil")
                return false;

            ref array<Object> nearest_objects = new array<Object>;
            ref array<CargoBase> proxy_cargos = new array<CargoBase>;
            vector pos = target_object.GetPosition();
            pos[1] = pos[1] - 1;
            GetGame().GetObjectsAtPosition3D(pos, 2, nearest_objects, proxy_cargos);

            for (int i = 0; i < nearest_objects.Count(); ++i)
            {
                Object object = nearest_objects.Get(i);

                if (object.IsInherited(GardenPlot))
                {
                    return false;
                }
            }

            return true;
        }

        return false;
    }
}