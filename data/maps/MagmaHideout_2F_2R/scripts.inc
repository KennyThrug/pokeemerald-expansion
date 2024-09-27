# 1 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15::
# 6 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Intro, MagmaHideout_2F_2R_Text_Grunt15Defeat
# 7 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	call MagmaHideout_2F_2R_EventScript_Grunt15_Item
# 9 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 10 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 11 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt6::
# 12 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Intro, MagmaHideout_2F_2R_Text_Grunt6Defeat
# 13 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	call MagmaHideout_2F_2R_EventScript_Grunt6_Item
# 15 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 16 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 17 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7::
# 18 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Intro, MagmaHideout_2F_2R_Text_Grunt7Defeat
# 19 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	call MagmaHideout_2F_2R_EventScript_Grunt7_Item
# 21 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 22 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 23 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt8::
# 24 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Intro, MagmaHideout_2F_2R_Text_Grunt8Defeat
# 25 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	call MagmaHideout_2F_2R_EventScript_Grunt8_Item
# 27 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 28 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 29 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Intro:
# 30 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I don't have a bone to pick with you.\n"
# 31 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm just following orders!$"
# 32 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 33 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Defeat:
# 34 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I may have lost, but…$"
# 35 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 36 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15PostBattle:
# 37 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "We dug up something beyond belief!\n"
# 38 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "And, we got the BLUE ORB!\p"
# 39 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "All that's left is for our leader to…\n"
# 40 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Fufufu… Fwahahaha!$"
# 41 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 42 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Intro:
# 43 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I can't stand heat. Maybe I should've\n"
# 44 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "joined TEAM AQUA instead…$"
# 45 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 46 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Defeat:
# 47 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Yeah, I really may not be right for\n"
# 48 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA…$"
# 49 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 50 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6PostBattle:
# 51 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Don't you get lonely for the sea\n"
# 52 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "being in a place like this?$"
# 53 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 54 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Intro:
# 55 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You can hear tremors here sometimes.\p"
# 56 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Could it be the volcano rattling?\n"
# 57 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Or is it GROU…\p"
# 58 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Whoops!\n"
# 59 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "No, no, never mind!$"
# 60 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 61 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Defeat:
# 62 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You're a fiery battler.\n"
# 63 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Just like a volcano!$"
# 64 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 65 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7PostBattle:
# 66 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You just happened to win this time,\n"
# 67 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "but that doesn't matter.\p"
# 68 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA's goal is about to be\n"
# 69 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "reached!$"
# 70 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 71 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Intro:
# 72 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "One of our guys was freaking out that\n"
# 73 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "he lost his MAGMA EMBLEM…\p"
# 74 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Wait a minute!\n"
# 75 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Was it you who found it?$"
# 76 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 77 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Defeat:
# 78 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm having trouble believing this…$"
# 79 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 80 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8PostBattle:
# 81 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm getting this feeling that our plan\n"
# 82 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "is going to end in failure…$"
