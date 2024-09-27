# 1 "data/maps/SSTidalLowerDeck/scripts.pory"

# 2 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_MapScripts::
# 3 "data/maps/SSTidalLowerDeck/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalLowerDeck/scripts.pory"

# 5 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Phillip::
# 6 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
# 7 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSTidalLowerDeck/scripts.pory"
	call SSTidalLowerDeck_EventScript_Phillip_Item
# 9 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 10 "data/maps/SSTidalLowerDeck/scripts.pory"

# 11 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Leonard::
# 12 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
# 13 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/SSTidalLowerDeck/scripts.pory"
	call SSTidalLowerDeck_EventScript_Leonard_Item
# 15 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 16 "data/maps/SSTidalLowerDeck/scripts.pory"

# 17 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipIntro:
# 18 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Arrrgh! I'm fed up and dog-tired of\n"
# 19 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "cleaning this huge place!\p"
# 20 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Let's have a quick battle!$"
# 21 "data/maps/SSTidalLowerDeck/scripts.pory"

# 22 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipDefeat:
# 23 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Little bro, I lost!$"
# 24 "data/maps/SSTidalLowerDeck/scripts.pory"

# 25 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipPostBattle:
# 26 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "We're the CLEANUP BROTHERS!\p"
# 27 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "The old one dumps the detergent,\n"
# 28 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "and the young one does the scrubbing!$"
# 29 "data/maps/SSTidalLowerDeck/scripts.pory"

# 30 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardIntro:
# 31 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "This is the bottom of the ship's hull.\n"
# 32 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "There's plenty of room.\l"
# 33 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "It'll be alright for a POKéMON battle.$"
# 34 "data/maps/SSTidalLowerDeck/scripts.pory"

# 35 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardDefeat:
# 36 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Big bro, I lost!$"
# 37 "data/maps/SSTidalLowerDeck/scripts.pory"

# 38 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardPostBattle:
# 39 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "We're the CLEANUP BROTHERS!\p"
# 40 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "The old one dumps the detergent,\n"
# 41 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "and the young one does the scrubbing!$"
