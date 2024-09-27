# 1 "data/maps/VictoryRoad_B1F/scripts.pory"

# 2 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_MapScripts::
# 3 "data/maps/VictoryRoad_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B1F/scripts.pory"

# 5 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Samuel::
# 6 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
# 7 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/VictoryRoad_B1F/scripts.pory"
	call VictoryRoad_B1F_EventScript_Samuel_Item
# 9 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 10 "data/maps/VictoryRoad_B1F/scripts.pory"

# 11 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Shannon::
# 12 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
# 13 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/VictoryRoad_B1F/scripts.pory"
	call VictoryRoad_B1F_EventScript_Shannon_Item
# 15 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 16 "data/maps/VictoryRoad_B1F/scripts.pory"

# 17 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Michelle::
# 18 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
# 19 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/VictoryRoad_B1F/scripts.pory"
	call VictoryRoad_B1F_EventScript_Michelle_Item
# 21 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 22 "data/maps/VictoryRoad_B1F/scripts.pory"

# 23 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Mitchell::
# 24 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
# 25 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/VictoryRoad_B1F/scripts.pory"
	call VictoryRoad_B1F_EventScript_Mitchell_Item
# 27 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 28 "data/maps/VictoryRoad_B1F/scripts.pory"

# 29 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Halle::
# 30 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
# 31 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/VictoryRoad_B1F/scripts.pory"
	call VictoryRoad_B1F_EventScript_Halle_Item
# 33 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 34 "data/maps/VictoryRoad_B1F/scripts.pory"

# 35 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelIntro:
# 36 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The thought that I'm getting closer to\n"
# 37 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the POKéMON LEAGUE…\p"
# 38 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I'm getting stage fright…$"
# 39 "data/maps/VictoryRoad_B1F/scripts.pory"

# 40 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelDefeat:
# 41 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I couldn't do a thing…$"
# 42 "data/maps/VictoryRoad_B1F/scripts.pory"

# 43 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelPostBattle:
# 44 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The POKéMON LEAGUE became distant\n"
# 45 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "again… What a letdown…$"
# 46 "data/maps/VictoryRoad_B1F/scripts.pory"

# 47 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonIntro:
# 48 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "To win your way through the POKéMON\n"
# 49 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "LEAGUE, you need the trust of your\l"
# 50 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "POKéMON.$"
# 51 "data/maps/VictoryRoad_B1F/scripts.pory"

# 52 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonDefeat:
# 53 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your relationship is based on\n"
# 54 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "solid trust.$"
# 55 "data/maps/VictoryRoad_B1F/scripts.pory"

# 56 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonPostBattle:
# 57 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "By being together all the time, trust\n"
# 58 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "grows between POKéMON and TRAINERS.$"
# 59 "data/maps/VictoryRoad_B1F/scripts.pory"

# 60 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleIntro:
# 61 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "This isn't the goal. It's only a place\n"
# 62 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "on the way to the POKéMON LEAGUE.$"
# 63 "data/maps/VictoryRoad_B1F/scripts.pory"

# 64 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleDefeat:
# 65 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "That's the way!$"
# 66 "data/maps/VictoryRoad_B1F/scripts.pory"

# 67 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichellePostBattle:
# 68 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "You'll do fine, for sure!\n"
# 69 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your POKéMON are all eager to go!$"
# 70 "data/maps/VictoryRoad_B1F/scripts.pory"

# 71 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellIntro:
# 72 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "My POKéMON are cosmically\n"
# 73 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "awe inspiring!$"
# 74 "data/maps/VictoryRoad_B1F/scripts.pory"

# 75 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellDefeat:
# 76 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I've never met anyone like you before.$"
# 77 "data/maps/VictoryRoad_B1F/scripts.pory"

# 78 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellPostBattle:
# 79 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Even outside of battle, I sense\n"
# 80 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "incredible power emanating from you\l"
# 81 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "and your POKéMON.$"
# 82 "data/maps/VictoryRoad_B1F/scripts.pory"

# 83 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleIntro:
# 84 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Okay, no need to get your back up!\n"
# 85 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Relax, let's take it easy!$"
# 86 "data/maps/VictoryRoad_B1F/scripts.pory"

# 87 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleDefeat:
# 88 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Whoa!\n"
# 89 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Wonderful!$"
# 90 "data/maps/VictoryRoad_B1F/scripts.pory"

# 91 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HallePostBattle:
# 92 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Sure, this is VICTORY ROAD.\p"
# 93 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "But it's not all that different from\n"
# 94 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the path you've taken so far.\p"
# 95 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Try to enjoy things the rest of\n"
# 96 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the way!$"
