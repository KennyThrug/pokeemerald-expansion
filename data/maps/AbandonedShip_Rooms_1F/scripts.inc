# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	call AbandonedShip_Rooms_1F_EventScript_Demetrius_Item
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	call AbandonedShip_Rooms_1F_Eventscript_Thalia_Item
# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ships of this sort are rare, so I'm\n"
# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "taking a look around.\p"
# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Hmhm…\n"
# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "There appear to be other cabins…$"
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come here? You must be curious!$"
# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Not just curious, but also strong…$"
# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "The man next door…\p"
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He says he's just sightseeing,\n"
# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "but I don't know about that.$"
# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "You're such a tough TRAINER!\n"
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Let me register you as a memento!$"
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
# 60 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 61 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come back? You must really be curious!$"
# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
# 64 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Aren't you too strong?$"
# 65 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 66 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm sure that man's up to something!\n"
# 68 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He just acts so suspiciously!$"
# 69 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Waaah!\n"
# 72 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I've been found! …Huh?$"
# 73 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 74 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Oh, you're not my mom.$"
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 78 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm in trouble with my mom, so I ran.\n"
# 79 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Keep it a secret where I am!$"
