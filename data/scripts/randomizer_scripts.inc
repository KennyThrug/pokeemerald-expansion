Eventscript_Startup_Flags::
	setflag FLAG_ALL_BALLS_MASTERBALL
	clearflag FLAG_HMS_NEED_BADGES
	setflag FLAG_RARE_CANDY_MOD
	clearflag OW_FOLLOWERS_ENABLED
	giveitem ITEM_POKE_BALL, 
	return

Common_Eventscript_Give_Pokemon::
	callnative GetItemBallIdAndAmountFromTemplate
	finditem VAR_RESULT VAR_0x8009
	end