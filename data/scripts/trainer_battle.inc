# 1 "data/scripts/trainer_battle.pory"

# 2 "data/scripts/trainer_battle.pory"
EventScript_StartTrainerApproach::
# 3 "data/scripts/trainer_battle.pory"
	selectapproachingtrainer
# 4 "data/scripts/trainer_battle.pory"
	lockfortrainer
# 5 "data/scripts/trainer_battle.pory"
EventScript_TrainerApproach::
# 6 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 7 "data/scripts/trainer_battle.pory"
	special DoTrainerApproach
# 8 "data/scripts/trainer_battle.pory"
	waitstate
# 9 "data/scripts/trainer_battle.pory"
	goto EventScript_ShowTrainerIntroMsg
# 10 "data/scripts/trainer_battle.pory"

# 11 "data/scripts/trainer_battle.pory"
EventScript_TryDoNormalTrainerBattle::
# 12 "data/scripts/trainer_battle.pory"
	lock
# 13 "data/scripts/trainer_battle.pory"
	faceplayer
# 14 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 15 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 16 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 17 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, FALSE, EventScript_NoNormalTrainerBattle
# 18 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 19 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 20 "data/scripts/trainer_battle.pory"
	goto EventScript_ShowTrainerIntroMsg
# 21 "data/scripts/trainer_battle.pory"

# 22 "data/scripts/trainer_battle.pory"
EventScript_NoNormalTrainerBattle::
# 23 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 24 "data/scripts/trainer_battle.pory"

# 25 "data/scripts/trainer_battle.pory"
EventScript_TryDoDoubleTrainerBattle::
# 26 "data/scripts/trainer_battle.pory"
	lock
# 27 "data/scripts/trainer_battle.pory"
	faceplayer
# 28 "data/scripts/trainer_battle.pory"
	call EventScript_RevealTrainer
# 29 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 30 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, FALSE, EventScript_NoDoubleTrainerBattle
# 31 "data/scripts/trainer_battle.pory"
	special HasEnoughMonsForDoubleBattle
# 32 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EventScript_NotEnoughMonsForDoubleBattle
# 33 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 34 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 35 "data/scripts/trainer_battle.pory"
	goto EventScript_ShowTrainerIntroMsg
# 36 "data/scripts/trainer_battle.pory"

# 37 "data/scripts/trainer_battle.pory"
EventScript_NotEnoughMonsForDoubleBattle::
# 38 "data/scripts/trainer_battle.pory"
	special ShowTrainerCantBattleSpeech
# 39 "data/scripts/trainer_battle.pory"
	waitmessage
# 40 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 41 "data/scripts/trainer_battle.pory"
	release
# 42 "data/scripts/trainer_battle.pory"
	end
# 43 "data/scripts/trainer_battle.pory"

# 44 "data/scripts/trainer_battle.pory"
EventScript_NoDoubleTrainerBattle::
# 45 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 46 "data/scripts/trainer_battle.pory"

# 47 "data/scripts/trainer_battle.pory"
EventScript_DoNoIntroTrainerBattle::
# 48 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 49 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 50 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 51 "data/scripts/trainer_battle.pory"
	dotrainerbattle
# 52 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 53 "data/scripts/trainer_battle.pory"

# 54 "data/scripts/trainer_battle.pory"
EventScript_TryDoRematchBattle::
# 55 "data/scripts/trainer_battle.pory"
	call EventScript_RevealTrainer
# 56 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 57 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_NoRematchTrainerBattle
# 58 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 59 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 60 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 61 "data/scripts/trainer_battle.pory"
	waitmessage
# 62 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 63 "data/scripts/trainer_battle.pory"
	special BattleSetup_StartRematchBattle
# 64 "data/scripts/trainer_battle.pory"
	waitstate
# 65 "data/scripts/trainer_battle.pory"
	releaseall
# 66 "data/scripts/trainer_battle.pory"
	end
# 67 "data/scripts/trainer_battle.pory"

# 68 "data/scripts/trainer_battle.pory"
EventScript_NoRematchTrainerBattle::
# 69 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 70 "data/scripts/trainer_battle.pory"

# 71 "data/scripts/trainer_battle.pory"
EventScript_TryDoDoubleRematchBattle::
# 72 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 73 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_NoDoubleRematchTrainerBattle
# 74 "data/scripts/trainer_battle.pory"
	special HasEnoughMonsForDoubleBattle
# 75 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EventScript_NotEnoughMonsForDoubleRematchBattle
# 76 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 77 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 78 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 79 "data/scripts/trainer_battle.pory"
	waitmessage
# 80 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 81 "data/scripts/trainer_battle.pory"
	special BattleSetup_StartRematchBattle
# 82 "data/scripts/trainer_battle.pory"
	waitstate
# 83 "data/scripts/trainer_battle.pory"
	releaseall
# 84 "data/scripts/trainer_battle.pory"
	end
# 85 "data/scripts/trainer_battle.pory"

# 86 "data/scripts/trainer_battle.pory"
EventScript_NoDoubleRematchTrainerBattle::
# 87 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 88 "data/scripts/trainer_battle.pory"

# 89 "data/scripts/trainer_battle.pory"
EventScript_NotEnoughMonsForDoubleRematchBattle::
# 90 "data/scripts/trainer_battle.pory"
	special ShowTrainerCantBattleSpeech
# 91 "data/scripts/trainer_battle.pory"
	waitmessage
# 92 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 93 "data/scripts/trainer_battle.pory"
	release
# 94 "data/scripts/trainer_battle.pory"
	end
# 95 "data/scripts/trainer_battle.pory"

# 96 "data/scripts/trainer_battle.pory"
EventScript_RevealTrainer::
# 97 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 98 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 99 "data/scripts/trainer_battle.pory"
	return
# 100 "data/scripts/trainer_battle.pory"

# 101 "data/scripts/trainer_battle.pory"
Movement_RevealTrainer:
# 102 "data/scripts/trainer_battle.pory"
	reveal_trainer
# 103 "data/scripts/trainer_battle.pory"
	step_end
# 104 "data/scripts/trainer_battle.pory"

# 105 "data/scripts/trainer_battle.pory"
EventScript_ShowTrainerIntroMsg::
# 106 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 107 "data/scripts/trainer_battle.pory"
	waitmessage
# 108 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 109 "data/scripts/trainer_battle.pory"
	special TryPrepareSecondApproachingTrainer
# 110 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_TrainerApproach
# 111 "data/scripts/trainer_battle.pory"
	goto EventScript_DoTrainerBattle
# 112 "data/scripts/trainer_battle.pory"

# 113 "data/scripts/trainer_battle.pory"
EventScript_DoTrainerBattle::
# 114 "data/scripts/trainer_battle.pory"
	dotrainerbattle
# 115 "data/scripts/trainer_battle.pory"
	@ Below battle mode check only needed in FRLG
# 116 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerBattleMode
# 117 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_SINGLE, EventScript_EndTrainerBattle
# 118 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT, EventScript_EndTrainerBattle
# 119 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, EventScript_EndTrainerBattle
# 120 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, EventScript_EndTrainerBattle
# 121 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, EventScript_EndTrainerBattle
# 122 "data/scripts/trainer_battle.pory"

# 123 "data/scripts/trainer_battle.pory"
EventScript_EndTrainerBattle::
# 124 "data/scripts/trainer_battle.pory"
	call trainer_items
# 125 "data/scripts/trainer_battle.pory"
	gotobeatenscript
# 126 "data/scripts/trainer_battle.pory"
	releaseall
# 127 "data/scripts/trainer_battle.pory"
	end
# 128 "data/scripts/trainer_battle.pory"

# 129 "data/scripts/trainer_battle.pory"
Std_MsgboxAutoclose::
# 130 "data/scripts/trainer_battle.pory"
	message NULL
# 131 "data/scripts/trainer_battle.pory"
	waitmessage
# 132 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 133 "data/scripts/trainer_battle.pory"
	release
# 134 "data/scripts/trainer_battle.pory"
	return
# 135 "data/scripts/trainer_battle.pory"

# 136 "data/scripts/trainer_battle.pory"
Text_LeadPartyMemberIsCute::
# 137 "data/scripts/trainer_battle.pory"
	.string "Aww, your {STR_VAR_1} is so cute!$"
