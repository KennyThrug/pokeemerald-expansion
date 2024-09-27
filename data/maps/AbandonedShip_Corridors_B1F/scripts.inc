# 1 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_OnResume
# 4 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_OnLoad
# 5 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 7 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnResume:
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
# 9 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 10 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 11 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad:
# 12 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom
# 13 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 14 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 16 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 17 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
# 18 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 19 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 20 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 21 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 23 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 25 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
# 26 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 27 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 28 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 29 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 30 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
# 31 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
# 33 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 34 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 35 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 36 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 37 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 38 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 39 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 40 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 41 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 42 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 43 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 44 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 45 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 47 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 49 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 50 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 51 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 52 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 53 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 54 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_Duncan_Item
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 57 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 58 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanIntro:
# 59 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\n"
# 60 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "always bring our POKéMON.\l"
# 61 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "How about a quick battle?$"
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 63 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanDefeat:
# 64 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"
# 65 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 66 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanPostBattle:
# 67 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "depths.\p"
# 69 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "If a POKéMON knew how to go underwater,\n"
# 70 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "we might make some progress…$"
# 71 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 72 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_YayItsAShip:
# 73 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "It's a ship!$"
# 75 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 76 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DoorIsLocked:
# 77 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
# 78 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "“STORAGE” is painted on the door.$"
# 79 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 80 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_InsertedStorageKey:
# 81 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
# 82 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "STORAGE KEY.\p"
# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The inserted KEY stuck fast,\n"
# 84 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "but the door opened.$"
# 85 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 86 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Text_TheDoorIsOpen:
# 87 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
