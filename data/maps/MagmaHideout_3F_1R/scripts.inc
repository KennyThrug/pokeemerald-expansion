# 1 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9::
# 6 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Intro, MagmaHideout_3F_1R_Text_Grunt9Defeat
# 7 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	call MagmaHideout_3F_1R_EventScript_Grunt9_Item
# 9 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 10 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 11 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt16::
# 12 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
# 13 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	call MagmaHideout_3F_1R_EventScript_Grunt16_Item
# 15 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 16 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 17 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Intro:
# 18 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "What did I do to deserve this guard\n"
# 19 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "posting?\p"
# 20 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "My left ear is burning up!$"
# 21 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 22 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Defeat:
# 23 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I'm getting heat exhaustion…$"
# 24 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 25 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9PostBattle:
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Do you think it's odd that we're wearing\n"
# 27 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "hoods in this magma-filled volcano?$"
# 28 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 29 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Intro:
# 30 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "We joined so we can help our leader\n"
# 31 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "achieve his fantastic vision.\p"
# 32 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I don't care if you're with TEAM AQUA\n"
# 33 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "or if you're just some kid passing by.\p"
# 34 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "No one interferes with us and gets\n"
# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "away with it!$"
# 36 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 37 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Defeat:
# 38 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Oh, no!\n"
# 39 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "You're not to be trusted at all!$"
# 40 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 41 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16PostBattle:
# 42 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Listen to me.\n"
# 43 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "TEAM MAGMA is right!\p"
# 44 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't listen to TEAM AQUA.\n"
# 45 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't believe their lies!$"
