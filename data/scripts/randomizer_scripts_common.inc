@Eventscipt called by map.json to give pokemon from item balls. Uses trainer_sight_or_berry_tree_id to determine which pokemon to give
Randomizer_Eventscript_Give_Pokemon_From_Template::
	callnative GetItemBallIdAndAmountFromTemplate
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	call Randomizer_Eventscript_Give_Pokemon
	end

@Eventscript called by other scripts. Must set VAR_TEMP_TRANSFERRED_SPECIES to the pokemon you want before calling
Randomizer_Eventscript_Give_Pokemon::
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Randomizer_Recieve_Pokemon_Party
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Randomizer_Recieve_Pokemon_PC
	goto Common_EventScript_NoMoreRoomForPokemon
	return

Randomizer_Recieve_Pokemon_Party::
	call Randomizer_Recieve_Pokemon_Fanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return

Randomizer_Recieve_Pokemon_PC::
	call Randomizer_Recieve_Pokemon_Fanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Randomizer_Send_Pokemon_PC
	call Common_EventScript_NameReceivedBoxMon
	goto Randomizer_Send_Pokemon_PC
	return

Randomizer_Send_Pokemon_PC::
	call Common_EventScript_TransferredToPC
	return

Randomizer_Recieve_Pokemon_Fanfare::
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	message Randomizer_Message_Text
	waitmessage
	waitfanfare
	return

@Eventscipt called by map.json to give pokemon from item balls. Uses trainer_sight_or_berry_tree_id to determine which pokemon to give
Randomizer_Eventscript_Give_Egg_From_Template::
	callnative GetItemBallIdAndAmountFromTemplate
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	call Randomizer_Eventscript_Give_Pokemon
	end

@Eventscript called by other scripts. Must set VAR_TEMP_TRANSFERRED_SPECIES to the pokemon you want before calling
Randomizer_Eventscript_Give_Egg::
	getpartysize
	playfanfare MUS_OBTAIN_ITEM
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg VAR_TEMP_TRANSFERRED_SPECIES

@Eventscipt called by map.json to give pokemon from item balls. Uses trainer_sight_or_berry_tree_id to determine which pokemon to give
Randomizer_Eventscript_Do_Trap_From_Template::
	callnative GetItemBallIdAndAmountFromTemplate
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	call Randomizer_Eventscript_Give_Pokemon
	end

Randomizer_Message_Text:
	.string "{PLAYER} received {STR_VAR_1}!$"
