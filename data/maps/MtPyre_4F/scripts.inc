# 1 "data/maps/MtPyre_4F/scripts.pory"

# 2 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_4F_MapScripts::
# 3 "data/maps/MtPyre_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_4F/scripts.pory"

# 5 "data/maps/MtPyre_4F/scripts.pory"
@ Seems like the scripts for the 4F and 5F were swapped
# 6 "data/maps/MtPyre_4F/scripts.pory"

# 7 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_EventScript_Atsushi::
# 8 "data/maps/MtPyre_4F/scripts.pory"
	trainerbattle_single TRAINER_ATSUSHI, MtPyre_5F_Text_AtsushiIntro, MtPyre_5F_Text_AtsushiDefeat
# 9 "data/maps/MtPyre_4F/scripts.pory"
	msgbox MtPyre_5F_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 10 "data/maps/MtPyre_4F/scripts.pory"
	call MtPyre_5F_EventScript_Atsushi_Item
# 11 "data/maps/MtPyre_4F/scripts.pory"
	end
# 12 "data/maps/MtPyre_4F/scripts.pory"

# 13 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_Text_AtsushiIntro:
# 14 "data/maps/MtPyre_4F/scripts.pory"
	.string "Teacher…\n"
# 15 "data/maps/MtPyre_4F/scripts.pory"
	.string "Please watch over my progress!$"
# 16 "data/maps/MtPyre_4F/scripts.pory"

# 17 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_Text_AtsushiDefeat:
# 18 "data/maps/MtPyre_4F/scripts.pory"
	.string "Teacher…\n"
# 19 "data/maps/MtPyre_4F/scripts.pory"
	.string "Please forgive me!$"
# 20 "data/maps/MtPyre_4F/scripts.pory"

# 21 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_Text_AtsushiPostBattle:
# 22 "data/maps/MtPyre_4F/scripts.pory"
	.string "Until I improve, my teacher, who rests\n"
# 23 "data/maps/MtPyre_4F/scripts.pory"
	.string "here, will never find true peace…$"
