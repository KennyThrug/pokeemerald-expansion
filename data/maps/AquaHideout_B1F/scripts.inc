# 1 "data/maps/AquaHideout_B1F/scripts.pory"

# 2 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_MapScripts::
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
# 4 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
# 5 "data/maps/AquaHideout_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/AquaHideout_B1F/scripts.pory"

# 7 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume:
# 8 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_EventScript_TryRemoveElectrode
# 9 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 10 "data/maps/AquaHideout_B1F/scripts.pory"

# 11 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_TryRemoveElectrode::
# 12 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B1F/scripts.pory"

# 17 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition:
# 18 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode1
# 19 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode2
# 20 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 21 "data/maps/AquaHideout_B1F/scripts.pory"

# 22 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode1::
# 23 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
# 24 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 25 "data/maps/AquaHideout_B1F/scripts.pory"

# 26 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode2::
# 27 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
# 28 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 29 "data/maps/AquaHideout_B1F/scripts.pory"

# 30 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1::
# 31 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Electrode1_Item
# 32 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 35 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 36 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 37 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 38 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 39 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 40 "data/maps/AquaHideout_B1F/scripts.pory"

# 41 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode1::
# 42 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 44 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 45 "data/maps/AquaHideout_B1F/scripts.pory"

# 46 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2::
# 47 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Electrode2_Item
# 48 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 49 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 51 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 53 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 54 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 55 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 56 "data/maps/AquaHideout_B1F/scripts.pory"

# 57 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode2::
# 58 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 59 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 60 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 61 "data/maps/AquaHideout_B1F/scripts.pory"

# 62 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2::
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Grunt2_Item
# 66 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 67 "data/maps/AquaHideout_B1F/scripts.pory"

# 68 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2Defeated::
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 72 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 73 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 74 "data/maps/AquaHideout_B1F/scripts.pory"

# 75 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3::
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
# 77 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Grunt3_Item
# 79 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 80 "data/maps/AquaHideout_B1F/scripts.pory"

# 81 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3Defeated::
# 82 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
# 83 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 84 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 85 "data/maps/AquaHideout_B1F/scripts.pory"

# 86 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5::
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
# 88 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Grunt5_Item
# 90 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 91 "data/maps/AquaHideout_B1F/scripts.pory"

# 92 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7::
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
# 94 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Grunt7_Item
# 96 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 97 "data/maps/AquaHideout_B1F/scripts.pory"

# 98 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Intro:
# 99 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you want to know the secret about\n"
# 100 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "our HIDEOUT, you have me to beat!$"
# 101 "data/maps/AquaHideout_B1F/scripts.pory"

# 102 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Defeat:
# 103 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I can't win at all…$"
# 104 "data/maps/AquaHideout_B1F/scripts.pory"

# 105 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2PostBattle:
# 106 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Our HIDEOUT's secret?\p"
# 107 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Well, let's just say…\n"
# 108 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "There's a submarine at the far end!\p"
# 109 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "But, by now…\n"
# 110 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Kekekeke…$"
# 111 "data/maps/AquaHideout_B1F/scripts.pory"

# 112 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Intro:
# 113 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Fuel supply loaded A-OK!\n"
# 114 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "In-cruise snacks loaded A-OK!\p"
# 115 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Nothing left to do but KO a pesky\n"
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "meddler!$"
# 117 "data/maps/AquaHideout_B1F/scripts.pory"

# 118 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Defeat:
# 119 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I took a serious licking!$"
# 120 "data/maps/AquaHideout_B1F/scripts.pory"

# 121 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3PostBattle:
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Humph!\n"
# 123 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "This was supposed to happen!\p"
# 124 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "My mission was to just hold you up!$"
# 125 "data/maps/AquaHideout_B1F/scripts.pory"

# 126 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Intro:
# 127 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn… Keeping watch over the\n"
# 128 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "HIDEOUT bores me. I'll take you on.$"
# 129 "data/maps/AquaHideout_B1F/scripts.pory"

# 130 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Defeat:
# 131 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn…\n"
# 132 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Oh, I lost…$"
# 133 "data/maps/AquaHideout_B1F/scripts.pory"

# 134 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5PostBattle:
# 135 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you scurry too much, other TEAM\n"
# 136 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "AQUA members might get you.$"
# 137 "data/maps/AquaHideout_B1F/scripts.pory"

# 138 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Intro:
# 139 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Hey!\n"
# 140 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "You there!\p"
# 141 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Which do you think is cooler?\n"
# 142 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"
# 143 "data/maps/AquaHideout_B1F/scripts.pory"

# 144 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Defeat:
# 145 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I lost in a cool way…$"
# 146 "data/maps/AquaHideout_B1F/scripts.pory"

# 147 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7PostBattle:
# 148 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you have a cool uniform, you look\n"
# 149 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "good even in a loss, don't you think?$"
