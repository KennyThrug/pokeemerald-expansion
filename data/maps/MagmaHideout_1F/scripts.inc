# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MagmaHideout_1F/scripts.pory"

# 6 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition:
# 7 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_1F/scripts.pory"

# 10 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	call MagmaHideout_1F_EventScript_Grunt1_Item
# 14 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 15 "data/maps/MagmaHideout_1F/scripts.pory"

# 16 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
# 18 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/MagmaHideout_1F/scripts.pory"
	call MagmaHideout_1F_EventScript_Grunt2_Item
# 20 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 21 "data/maps/MagmaHideout_1F/scripts.pory"

# 22 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "When TEAM MAGMA has roll call, we get\n"
# 24 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "important guarding assignments in\l"
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "the order that we line up.\p"
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "That's why I'm stuck off in this corner.\n"
# 27 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late to roll call!$"
# 28 "data/maps/MagmaHideout_1F/scripts.pory"

# 29 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late for training sessions,\n"
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "too!\p"
# 32 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I hate to say it, but I'm wimpy…$"
# 33 "data/maps/MagmaHideout_1F/scripts.pory"

# 34 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 35 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, I'll try to put a little more\n"
# 36 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "effort into things from now on…$"
# 37 "data/maps/MagmaHideout_1F/scripts.pory"

# 38 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Our leader told us to dig into\n"
# 40 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "MT. CHIMNEY, so we dug and dug.\p"
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "And in the course of digging, we came\n"
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "across something that blew our minds!\p"
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "What did we find?\p"
# 44 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Fuhahaha!\n"
# 45 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'll tell you if you beat me!$"
# 46 "data/maps/MagmaHideout_1F/scripts.pory"

# 47 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 48 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Arrgh!\n"
# 49 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Taken down!$"
# 50 "data/maps/MagmaHideout_1F/scripts.pory"

# 51 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I won't tell you after all.\n"
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "You'll find out when you get there!\p"
# 54 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "It'd be better if you saved surprises\n"
# 55 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "to the end, don't you think?$"
