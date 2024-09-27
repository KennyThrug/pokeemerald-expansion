# 1 "data/maps/FortreeCity_House4/scripts.pory"

# 2 "data/maps/FortreeCity_House4/scripts.pory"
.set LOCALID_WINGULL, 3
# 3 "data/maps/FortreeCity_House4/scripts.pory"

# 4 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_MapScripts::
# 5 "data/maps/FortreeCity_House4/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_House4/scripts.pory"

# 7 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Woman::
# 8 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
# 9 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 10 "data/maps/FortreeCity_House4/scripts.pory"

# 11 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy::
# 12 "data/maps/FortreeCity_House4/scripts.pory"
	lockall
# 13 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_ReceivedMentalHerb
# 14 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_WingullReturned
# 15 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_WingullOnErrand
# 16 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
# 17 "data/maps/FortreeCity_House4/scripts.pory"
	closemessage
# 18 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_WINGULL_SENT_ON_ERRAND
# 19 "data/maps/FortreeCity_House4/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 20 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement LOCALID_WINGULL, FortreeCity_House4_Movement_WingullExit
# 21 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 22 "data/maps/FortreeCity_House4/scripts.pory"
	removeobject LOCALID_WINGULL
# 23 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 24 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 25 "data/maps/FortreeCity_House4/scripts.pory"

# 26 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullOnErrand::
# 27 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 28 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 29 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
# 30 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 32 "data/maps/FortreeCity_House4/scripts.pory"

# 33 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned::
# 34 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 35 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 36 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House4/scripts.pory"
	call FortreeCity_House4_EventScript_WingullReturned_Item
# 38 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 39 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned_Post::
# 40 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 41 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MENTAL_HERB
# 42 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 43 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 44 "data/maps/FortreeCity_House4/scripts.pory"

# 45 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_ReceivedMentalHerb::
# 46 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 47 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 48 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
# 49 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 50 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 51 "data/maps/FortreeCity_House4/scripts.pory"

# 52 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Movement_WingullExit:
# 53 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 54 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 55 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_right
# 56 "data/maps/FortreeCity_House4/scripts.pory"
	walk_in_place_faster_down
# 57 "data/maps/FortreeCity_House4/scripts.pory"
	delay_8
# 58 "data/maps/FortreeCity_House4/scripts.pory"
	step_end
# 59 "data/maps/FortreeCity_House4/scripts.pory"

# 60 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Wingull::
# 61 "data/maps/FortreeCity_House4/scripts.pory"
	lock
# 62 "data/maps/FortreeCity_House4/scripts.pory"
	faceplayer
# 63 "data/maps/FortreeCity_House4/scripts.pory"
	waitse
# 64 "data/maps/FortreeCity_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 65 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_Wingull, MSGBOX_DEFAULT
# 66 "data/maps/FortreeCity_House4/scripts.pory"
	waitmoncry
# 67 "data/maps/FortreeCity_House4/scripts.pory"
	release
# 68 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 69 "data/maps/FortreeCity_House4/scripts.pory"

# 70 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_BringsWorldCloserTogether:
# 71 "data/maps/FortreeCity_House4/scripts.pory"
	.string "By being together with POKéMON,\n"
# 72 "data/maps/FortreeCity_House4/scripts.pory"
	.string "people make more and more friends.\p"
# 73 "data/maps/FortreeCity_House4/scripts.pory"
	.string "And that brings the world closer\n"
# 74 "data/maps/FortreeCity_House4/scripts.pory"
	.string "together. I think it's wonderful!$"
# 75 "data/maps/FortreeCity_House4/scripts.pory"

# 76 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_GoBirdPokemon:
# 77 "data/maps/FortreeCity_House4/scripts.pory"
	.string "There!\n"
# 78 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Go, BIRD POKéMON!$"
# 79 "data/maps/FortreeCity_House4/scripts.pory"

# 80 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_AskedWingullToRunErrand:
# 81 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Heheh, I asked my WINGULL to run\n"
# 82 "data/maps/FortreeCity_House4/scripts.pory"
	.string "an errand for me.$"
# 83 "data/maps/FortreeCity_House4/scripts.pory"

# 84 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb:
# 85 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Good!\n"
# 86 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Welcome back, WINGULL!\p"
# 87 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Huh? What is this?\n"
# 88 "data/maps/FortreeCity_House4/scripts.pory"
	.string "What is it holding?\p"
# 89 "data/maps/FortreeCity_House4/scripts.pory"
	.string "A MENTAL HERB?\n"
# 90 "data/maps/FortreeCity_House4/scripts.pory"
	.string "It must have picked it up somewhere.\p"
# 91 "data/maps/FortreeCity_House4/scripts.pory"
	.string "But I'm not a TRAINER, so you can\n"
# 92 "data/maps/FortreeCity_House4/scripts.pory"
	.string "have it.$"
# 93 "data/maps/FortreeCity_House4/scripts.pory"

# 94 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_FriendsFarAwayThanksToWingull:
# 95 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Thanks to my WINGULL, I have friends\n"
# 96 "data/maps/FortreeCity_House4/scripts.pory"
	.string "who live far away.$"
# 97 "data/maps/FortreeCity_House4/scripts.pory"

# 98 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_Wingull:
# 99 "data/maps/FortreeCity_House4/scripts.pory"
	.string "WINGULL: Pihyoh!$"
