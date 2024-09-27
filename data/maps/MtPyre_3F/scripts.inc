# 1 "data/maps/MtPyre_3F/scripts.pory"

# 2 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_MapScripts::
# 3 "data/maps/MtPyre_3F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_3F/scripts.pory"

# 5 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_William::
# 6 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
# 7 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MtPyre_3F/scripts.pory"
	call MtPyre_3F_EventScript_William_Item
# 9 "data/maps/MtPyre_3F/scripts.pory"
	end
# 10 "data/maps/MtPyre_3F/scripts.pory"

# 11 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Kayla::
# 12 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 13 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/MtPyre_3F/scripts.pory"
	call MtPyre_3F_EventScript_Kayla_Item
# 15 "data/maps/MtPyre_3F/scripts.pory"
	end
# 16 "data/maps/MtPyre_3F/scripts.pory"

# 17 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle::
# 18 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
# 19 "data/maps/MtPyre_3F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 20 "data/maps/MtPyre_3F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
# 21 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
# 22 "data/maps/MtPyre_3F/scripts.pory"
	release
# 23 "data/maps/MtPyre_3F/scripts.pory"
	call MtPyre_3F_EventScript_Gabrielle_Item
# 24 "data/maps/MtPyre_3F/scripts.pory"
	end
# 25 "data/maps/MtPyre_3F/scripts.pory"

# 26 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RegisterGabrielle::
# 27 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 28 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 29 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 30 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_1
# 31 "data/maps/MtPyre_3F/scripts.pory"
	release
# 32 "data/maps/MtPyre_3F/scripts.pory"
	end
# 33 "data/maps/MtPyre_3F/scripts.pory"

# 34 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RematchGabrielle::
# 35 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 36 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
# 37 "data/maps/MtPyre_3F/scripts.pory"
	end
# 38 "data/maps/MtPyre_3F/scripts.pory"

# 39 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamIntro:
# 40 "data/maps/MtPyre_3F/scripts.pory"
	.string "The rich atmosphere of the mountain\n"
# 41 "data/maps/MtPyre_3F/scripts.pory"
	.string "has elevated my psychic power!\p"
# 42 "data/maps/MtPyre_3F/scripts.pory"
	.string "A mere child like you…\n"
# 43 "data/maps/MtPyre_3F/scripts.pory"
	.string "You dream of winning?$"
# 44 "data/maps/MtPyre_3F/scripts.pory"

# 45 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamDefeat:
# 46 "data/maps/MtPyre_3F/scripts.pory"
	.string "I drown in self-pity…$"
# 47 "data/maps/MtPyre_3F/scripts.pory"

# 48 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamPostBattle:
# 49 "data/maps/MtPyre_3F/scripts.pory"
	.string "My psychic powers have surely\n"
# 50 "data/maps/MtPyre_3F/scripts.pory"
	.string "grown several times, but…$"
# 51 "data/maps/MtPyre_3F/scripts.pory"

# 52 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaIntro:
# 53 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ahahahaha!\p"
# 54 "data/maps/MtPyre_3F/scripts.pory"
	.string "This is no place for children, least\n"
# 55 "data/maps/MtPyre_3F/scripts.pory"
	.string "of all you!$"
# 56 "data/maps/MtPyre_3F/scripts.pory"

# 57 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaDefeat:
# 58 "data/maps/MtPyre_3F/scripts.pory"
	.string "I lost that cleanly…$"
# 59 "data/maps/MtPyre_3F/scripts.pory"

# 60 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaPostBattle:
# 61 "data/maps/MtPyre_3F/scripts.pory"
	.string "This means my training is still not\n"
# 62 "data/maps/MtPyre_3F/scripts.pory"
	.string "enough…\p"
# 63 "data/maps/MtPyre_3F/scripts.pory"
	.string "I've got to keep working toward the\n"
# 64 "data/maps/MtPyre_3F/scripts.pory"
	.string "summit…\p"
# 65 "data/maps/MtPyre_3F/scripts.pory"
	.string "Go, me!$"
# 66 "data/maps/MtPyre_3F/scripts.pory"

# 67 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleIntro:
# 68 "data/maps/MtPyre_3F/scripts.pory"
	.string "Why have you come here?$"
# 69 "data/maps/MtPyre_3F/scripts.pory"

# 70 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleDefeat:
# 71 "data/maps/MtPyre_3F/scripts.pory"
	.string "That was amazing!\n"
# 72 "data/maps/MtPyre_3F/scripts.pory"
	.string "You're a very special TRAINER.$"
# 73 "data/maps/MtPyre_3F/scripts.pory"

# 74 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostBattle:
# 75 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
# 76 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON that are with you now.\p"
# 77 "data/maps/MtPyre_3F/scripts.pory"
	.string "And the POKéMON that you will meet\n"
# 78 "data/maps/MtPyre_3F/scripts.pory"
	.string "in the future…\p"
# 79 "data/maps/MtPyre_3F/scripts.pory"
	.string "They are all to be equally cherished.\n"
# 80 "data/maps/MtPyre_3F/scripts.pory"
	.string "Please remember that.$"
# 81 "data/maps/MtPyre_3F/scripts.pory"

# 82 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRegister:
# 83 "data/maps/MtPyre_3F/scripts.pory"
	.string "I would like to see your POKéMON\n"
# 84 "data/maps/MtPyre_3F/scripts.pory"
	.string "when they grow up some more…\p"
# 85 "data/maps/MtPyre_3F/scripts.pory"
	.string "Please, I need to see your POKéNAV.$"
# 86 "data/maps/MtPyre_3F/scripts.pory"

# 87 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchIntro:
# 88 "data/maps/MtPyre_3F/scripts.pory"
	.string "Oh, it's you…\p"
# 89 "data/maps/MtPyre_3F/scripts.pory"
	.string "Have you come to show me your grown\n"
# 90 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON?$"
# 91 "data/maps/MtPyre_3F/scripts.pory"

# 92 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchDefeat:
# 93 "data/maps/MtPyre_3F/scripts.pory"
	.string "How amazing!\n"
# 94 "data/maps/MtPyre_3F/scripts.pory"
	.string "You are a special person.$"
# 95 "data/maps/MtPyre_3F/scripts.pory"

# 96 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostRematch:
# 97 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
# 98 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON that are with you now.\p"
# 99 "data/maps/MtPyre_3F/scripts.pory"
	.string "And the POKéMON that you will meet\n"
# 100 "data/maps/MtPyre_3F/scripts.pory"
	.string "in the future…\p"
# 101 "data/maps/MtPyre_3F/scripts.pory"
	.string "They are all to be equally cherished.\n"
# 102 "data/maps/MtPyre_3F/scripts.pory"
	.string "I see that you've remembered that.$"
