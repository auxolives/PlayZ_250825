modded class MissionBase
{    
    override void InitWorldYieldDataDefaults(CatchYieldBank bank)
    {
        super.InitWorldYieldDataDefaults(bank);

        if (bank)
        {
			bank.ClearAllRegisteredItems();
		
			bank.RegisterYieldItem(new YieldItemSardines(15));
			bank.RegisterYieldItem(new YieldItemBitterlings(15));
			bank.RegisterYieldItem(new YieldItemSteelheadTrout(16));
			bank.RegisterYieldItem(new YieldItemMackerel(21));
			bank.RegisterYieldItem(new YieldItemWalleyePollock(17));
			bank.RegisterYieldItem(new YieldItemCarp(21));

			bank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Brown"));
			bank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Grey"));
			bank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Green"));
			bank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Black"));
			bank.RegisterYieldItem(new YieldItemJunkEmpty(1,"Pot"));
			bank.RegisterYieldItem(new YieldItemJunkEmpty(1,"CanisterGasoline"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Bear_Beige"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Bear_Dark"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Bear_Pink"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Bear_White"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "MakarovIJ70"));
			bank.RegisterYieldItem(new YieldItemJunk(7, "WoodenStick"));
			bank.RegisterYieldItem(new YieldItemJunk(2, "Rope"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "MetalWire"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "BarbedWire"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Pliers"));
			bank.RegisterYieldItem(new YieldItemJunk(3, "BurlapSack"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "CanOpener"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Compass"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "DuctTape"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "FlashLight"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "AlarmClock_Blue"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "AlarmClock_Green"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "AlarmClock_Red"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Headtorch_Black"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Headtorch_Grey"));
			bank.RegisterYieldItem(new YieldItemJunk(2, "Pipe"));
			bank.RegisterYieldItem(new YieldItemJunk(3, "Netting"));
			bank.RegisterYieldItem(new YieldItemJunk(3, "Hook"));
			bank.RegisterYieldItem(new YieldItemJunk(2, "Jig"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "PipeWrench"));
			bank.RegisterYieldItem(new YieldItemJunk(1, "Crowbar"));

			bank.RegisterYieldItem(new YieldItemDeadRabbit(4));
			bank.RegisterYieldItem(new YieldItemDeadFox(2));
		}
	}
}