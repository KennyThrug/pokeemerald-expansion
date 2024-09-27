# 1 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle4_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Cora::
# 17 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
# 18 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	call Route110_TrickHousePuzzle4_EventScript_Cora_Item
# 20 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 21 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 22 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Yuji::
# 23 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
# 24 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	call Route110_TrickHousePuzzle4_EventScript_Yuji_Item
# 26 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 27 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 28 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Paula::
# 29 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
# 30 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	call Route110_TrickHousePuzzle4_EventScript_Paula_Item
# 32 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 33 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 34 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
# 35 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 36 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "on the door.\p"
# 37 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "“TRICK MASTER is cool.”\n"
# 38 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "… … … … … … … …\p"
# 39 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "The lock clicked open!$"
# 40 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 41 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraIntro:
# 42 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "It's too much bother to think this out.\n"
# 43 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "I only wanted to battle!$"
# 44 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 45 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraDefeat:
# 46 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Even though I lost, I still like battling\n"
# 47 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "the best!$"
# 48 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraPostBattle:
# 50 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Wouldn't you agree? You would go\n"
# 51 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "anywhere if TRAINERS were there.$"
# 52 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 53 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiIntro:
# 54 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Heh! Boulders like this, I can brush\n"
# 55 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "aside with one finger!$"
# 56 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 57 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiDefeat:
# 58 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "I can push boulders, but I can't solve\n"
# 59 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "the puzzle…$"
# 60 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 61 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiPostBattle:
# 62 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "It's not good enough to be brawny…\n"
# 63 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "You have to use your head. Be brainy!$"
# 64 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 65 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaIntro:
# 66 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "The TRICK HOUSE is getting trickier,\n"
# 67 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "isn't it?$"
# 68 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 69 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaDefeat:
# 70 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Aaak!$"
# 71 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 72 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
# 73 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Has anyone made it to the end?$"
