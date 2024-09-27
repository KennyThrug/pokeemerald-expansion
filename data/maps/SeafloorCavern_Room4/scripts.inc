# 1 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_MapScripts::
# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3::
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
	call SeafloorCavern_Room4_EventScript_Grunt3_Item
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 12 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 13 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"
	call SeafloorCavern_Room4_EventScript_Grunt4_Item
# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 16 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 17 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Intro:
# 18 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where did you come in from?$"
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 21 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Defeat:
# 22 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Lost it…$"
# 23 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 24 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3PostBattle:
# 25 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I can't find the way out!\p"
# 26 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I'm not afraid. Don't get me wrong!$"
# 27 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 28 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Intro:
# 29 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 30 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where do you think you're going?$"
# 31 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 32 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Defeat:
# 33 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I failed to win!$"
# 34 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 35 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 36 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "My partner forgot the map in that\n"
# 37 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "submarine!\p"
# 38 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "How's that for being useless?$"
