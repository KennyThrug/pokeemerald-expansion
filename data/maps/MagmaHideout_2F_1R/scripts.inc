# 1 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_MapScripts::
# 3 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 5 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14::
# 6 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
# 7 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	call MagmaHideout_2F_1R_EventScript_Grunt14_Item
# 9 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 10 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 11 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt3::
# 12 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
# 13 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	call MagmaHideout_2F_1R_EventScript_Grunt3_Item
# 15 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 16 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 17 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt4::
# 18 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
# 19 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	call MagmaHideout_2F_1R_EventScript_Grunt4_Item
# 21 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 22 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 23 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5::
# 24 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
# 25 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	call MagmaHideout_2F_1R_EventScript_Grunt5_Item
# 27 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 28 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 29 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Intro:
# 30 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "What, what, what?\p"
# 31 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Only TEAM MAGMA members are supposed\n"
# 32 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "to be in here!\p"
# 33 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "But you're not dressed in TEAM MAGMA's\n"
# 34 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "uniform…\p"
# 35 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "You rouse my suspicion!\n"
# 36 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Battle with me!$"
# 37 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 38 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Defeat:
# 39 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Aiyiyi…\n"
# 40 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "My pride as a TEAM MAGMA member…$"
# 41 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 42 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14PostBattle:
# 43 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "If you suffer from chills, you should\n"
# 44 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "join TEAM MAGMA.$"
# 45 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 46 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Intro:
# 47 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Hold it right there!\p"
# 48 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "You don't really expect me to keep\n"
# 49 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "my trap shut and let you waltz by me?$"
# 50 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 51 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Defeat:
# 52 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ooh wow!\n"
# 53 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "I concede!$"
# 54 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 55 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3PostBattle:
# 56 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Maybe it would've been better if I did\n"
# 57 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "just let you go unchallenged…$"
# 58 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 59 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Intro:
# 60 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ahah!\n"
# 61 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "An intruder!$"
# 62 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 63 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Defeat:
# 64 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Graaah!$"
# 65 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 66 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4PostBattle:
# 67 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "I've already lost.\p"
# 68 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Do I really need to keep running\n"
# 69 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "around in a circle?$"
# 70 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 71 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Intro:
# 72 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Oh, oh!\n"
# 73 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "An intruder!$"
# 74 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 75 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Defeat:
# 76 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Mutter…$"
# 77 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 78 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5PostBattle:
# 79 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Actually, I'm no expert at battling…$"
