# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 3 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 6 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 7 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
# 9 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_6F/scripts.pory"
	release
# 11 "data/maps/MtPyre_6F/scripts.pory"
	call MtPyre_6F_EventScript_Valerie_Item
# 12 "data/maps/MtPyre_6F/scripts.pory"
	end
# 13 "data/maps/MtPyre_6F/scripts.pory"

# 14 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 15 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 16 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 17 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 18 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 19 "data/maps/MtPyre_6F/scripts.pory"
	release
# 20 "data/maps/MtPyre_6F/scripts.pory"
	end
# 21 "data/maps/MtPyre_6F/scripts.pory"

# 22 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 23 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 24 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 25 "data/maps/MtPyre_6F/scripts.pory"
	end
# 26 "data/maps/MtPyre_6F/scripts.pory"

# 27 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 28 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 29 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/MtPyre_6F/scripts.pory"
	call MtPyre_6F_EventScript_Cedric_Item
# 31 "data/maps/MtPyre_6F/scripts.pory"
	end
# 32 "data/maps/MtPyre_6F/scripts.pory"

# 33 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 34 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
# 35 "data/maps/MtPyre_6F/scripts.pory"
	.string "A curious power flows into me…$"
# 36 "data/maps/MtPyre_6F/scripts.pory"

# 37 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 38 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…$"
# 39 "data/maps/MtPyre_6F/scripts.pory"

# 40 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 41 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
# 42 "data/maps/MtPyre_6F/scripts.pory"
	.string "of POKéMON in fitful sleep here…$"
# 43 "data/maps/MtPyre_6F/scripts.pory"

# 44 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 47 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 48 "data/maps/MtPyre_6F/scripts.pory"
	.string "your POKéNAV… Hiyah!$"
# 49 "data/maps/MtPyre_6F/scripts.pory"

# 50 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 51 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 52 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 53 "data/maps/MtPyre_6F/scripts.pory"

# 54 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 55 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 56 "data/maps/MtPyre_6F/scripts.pory"

# 57 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 58 "data/maps/MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here…\n"
# 59 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 60 "data/maps/MtPyre_6F/scripts.pory"

# 61 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 62 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
# 63 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have no fear for I am here!$"
# 64 "data/maps/MtPyre_6F/scripts.pory"

# 65 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 66 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"
# 67 "data/maps/MtPyre_6F/scripts.pory"

# 68 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 69 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost TRAINER\n"
# 70 "data/maps/MtPyre_6F/scripts.pory"
	.string "would be panicked and easy to beat.\p"
# 71 "data/maps/MtPyre_6F/scripts.pory"
	.string "It's dirty and I won't try it again…$"
