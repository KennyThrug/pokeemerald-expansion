# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VIVI, 1
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTOR, 2
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTORIA, 3
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	call Route111_WinstrateFamilysHouse_EventScript_Victoria_Item
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	call Route111_WinstrateFamilysHouse_EventScript_Victoria_Item_Brace
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	call Route111_WinstrateFamilysHouse_EventScript_Vivi_Item
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	call Route111_WinstrateFamilysHouse_EventScript_Vicky_Item
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We use this MACHO BRACE to more\n"
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "effectively strengthen our POKéMON\l"
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "in training.\p"
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Since you've beaten all of us here,\n"
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I don't know if you need it, but we\l"
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "would like you to have our MACHO BRACE.$"
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
