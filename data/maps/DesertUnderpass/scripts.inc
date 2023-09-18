.set LOCALID_FOSSIL, 1

DesertUnderpass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0

DesertUnderpass_OnTransition:
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end

DesertUnderpass_EventScript_Fossil::
	lock
	faceplayer
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_GiveClawFossil
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, DesertUnderpass_EventScript_GiveRootFossil
	release
	end

DesertUnderpass_EventScript_GiveClawFossil::
<<<<<<< HEAD
	giveitem ITEM_CLAW_FOSSIL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
||||||| parent of 11a076066 (A-LittleRoot Scripts)
	giveitem ITEM_CLAW_FOSSIL
=======
	goto DesertUnderpass_EventScript_GiveClawFossil_Item
	end
DesertUnderPass_EventScript_GiveClawFossil_Post::
>>>>>>> 11a076066 (A-LittleRoot Scripts)
	removeobject LOCALID_FOSSIL
	release
	end

DesertUnderpass_EventScript_GiveRootFossil::
<<<<<<< HEAD
	giveitem ITEM_ROOT_FOSSIL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
||||||| parent of 11a076066 (A-LittleRoot Scripts)
	giveitem ITEM_ROOT_FOSSIL
=======
	goto DesertUnderpass_EventScript_GiveRootFossil_Item
	end
DesertUnderpass_EventScript_GiveRootFossil_Post::
>>>>>>> 11a076066 (A-LittleRoot Scripts)
	removeobject LOCALID_FOSSIL
	release
	end

@ Unused
DesertUnderpass_Text_FoundRootFossil::
	.string "{PLAYER} found the ROOT FOSSIL.$"

@ Unused
DesertUnderpass_Text_FoundClawFossil::
	.string "{PLAYER} found the CLAW FOSSIL.$"

