# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	call AbandonedShip_Rooms2_1F_EventScript_Kira_Item
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	call AbandonedShip_Rooms2_1F_EventScript_Jani_Item
# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	call AbandonedShip_Rooms2_1F_EventScript_Garrison_Item
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: While searching for treasures,\n"
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we discovered a TRAINER!$"
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We couldn't win even though\n"
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we worked together…$"
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures…\n"
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I wonder if someone got them already?$"
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh?\n"
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We were searching for treasures.\l"
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "But we discovered a TRAINER instead!$"
# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Ooh, so strong!$"
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Where could the treasures be?\p"
# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I've already decided what I'm buying\n"
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "when we find the treasures!$"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you make me so angry!\n"
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm going to register you for that!$"
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We've been searching for\n"
# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "treasures all this time.\p"
# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Our POKéMON have grown stronger, too.\n"
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Let us show you, okay?$"
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You're strong, as usual!$"
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures,\n"
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we lose at POKéMON…\p"
# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I want to go home… But if I say that,\n"
# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "she gets all angry with me…$"
# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh? We meet again!\p"
# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Just like us, you still haven't given up\n"
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "searching for treasures, have you?\p"
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Want to make it so the loser has\n"
# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "to give up searching?$"
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, we lost again…$"
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: We're not leaving until we raise\n"
# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "our POKéMON some more and we find\l"
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "the treasures here!$"
# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "but I am good at battles!$"
# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "That didn't go very well.$"
# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "is kind of gross.$"
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Those are a TRAINER's treasures!$"
# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "that sparkles.$"
# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 151 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 152 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
# 153 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I saw something sparkle.$"
