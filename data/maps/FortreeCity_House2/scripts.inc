# 1 "data/maps/FortreeCity_House2/scripts.pory"

# 2 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_MapScripts::
# 3 "data/maps/FortreeCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House2/scripts.pory"

# 5 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver::
# 6 "data/maps/FortreeCity_House2/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM10, FortreeCity_House2_EventScript_ExplainHiddenPower
# 9 "data/maps/FortreeCity_House2/scripts.pory"
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 11 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 12 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 14 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 16 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/FortreeCity_House2/scripts.pory"
	case 0, FortreeCity_House2_EventScript_WrongGuess
# 22 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
# 23 "data/maps/FortreeCity_House2/scripts.pory"
	call FortreeCity_House2_EventScript_HiddenPowerGiver_Item
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 25 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_Post::
# 26 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 27 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM10
# 28 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 29 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 30 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 31 "data/maps/FortreeCity_House2/scripts.pory"

# 32 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_Greeting::
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 34 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
# 35 "data/maps/FortreeCity_House2/scripts.pory"
	return
# 36 "data/maps/FortreeCity_House2/scripts.pory"

# 37 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_ExplainHiddenPower::
# 38 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 39 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 40 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 41 "data/maps/FortreeCity_House2/scripts.pory"

# 42 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_WrongGuess::
# 43 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 45 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 46 "data/maps/FortreeCity_House2/scripts.pory"

# 47 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_HiddenPowersArousedByNature:
# 48 "data/maps/FortreeCity_House2/scripts.pory"
	.string "People… POKéMON…\p"
# 49 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Their hidden powers are aroused by\n"
# 50 "data/maps/FortreeCity_House2/scripts.pory"
	.string "living in natural environments…$"
# 51 "data/maps/FortreeCity_House2/scripts.pory"

# 52 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CoinInWhichHand:
# 53 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Let this old woman see if your hidden\n"
# 54 "data/maps/FortreeCity_House2/scripts.pory"
	.string "power has awoken…\p"
# 55 "data/maps/FortreeCity_House2/scripts.pory"
	.string "I hold a coin in my hand.\p"
# 56 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Now, tell me, have I palmed it in\n"
# 57 "data/maps/FortreeCity_House2/scripts.pory"
	.string "the right hand? Or in the left?$"
# 58 "data/maps/FortreeCity_House2/scripts.pory"

# 59 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand:
# 60 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 61 "data/maps/FortreeCity_House2/scripts.pory"
	.string "We shall try again.\p"
# 62 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 63 "data/maps/FortreeCity_House2/scripts.pory"
	.string "The right or left?$"
# 64 "data/maps/FortreeCity_House2/scripts.pory"

# 65 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
# 66 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 67 "data/maps/FortreeCity_House2/scripts.pory"
	.string "We shall try again.\p"
# 68 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 69 "data/maps/FortreeCity_House2/scripts.pory"
	.string "The right or left?$"
# 70 "data/maps/FortreeCity_House2/scripts.pory"

# 71 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YourHiddenPowerHasAwoken:
# 72 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Splendid!\n"
# 73 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Your hidden power has awoken!\p"
# 74 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Here, take this and awaken the hidden\n"
# 75 "data/maps/FortreeCity_House2/scripts.pory"
	.string "power of your POKéMON.$"
# 76 "data/maps/FortreeCity_House2/scripts.pory"

# 77 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_ExplainHiddenPower:
# 78 "data/maps/FortreeCity_House2/scripts.pory"
	.string "HIDDEN POWER is a move that changes\n"
# 79 "data/maps/FortreeCity_House2/scripts.pory"
	.string "with the POKéMON.$"
# 80 "data/maps/FortreeCity_House2/scripts.pory"

# 81 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YouGuessedWrong:
# 82 "data/maps/FortreeCity_House2/scripts.pory"
	.string "No, too bad.\n"
# 83 "data/maps/FortreeCity_House2/scripts.pory"
	.string "You guessed wrong.$"
