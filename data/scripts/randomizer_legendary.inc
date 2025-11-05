AncientTomb_EventScript_Registeel::
        lock
        faceplayer
        waitse
        playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
        delay 40
        waitmoncry
        setwildbattle SPECIES_ARCEUS, 40
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special StartRegiBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedRegisteel
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromRegisteel
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromRegisteel
        setflag FLAG_DEFEATED_REGISTEEL
        release
        end
    
    BirthIsland_Exterior_EventScript_Deoxys::
        waitse
        setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
        setfieldeffectargument 1, MAP_NUM(MAP_BIRTH_ISLAND_EXTERIOR)
        setfieldeffectargument 2, MAP_GROUP(MAP_BIRTH_ISLAND_EXTERIOR)
        dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
        playbgm MUS_RG_ENCOUNTER_DEOXYS, FALSE
        waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
        addobject LOCALID_BIRTH_ISLAND_DEOXYS
        applymovement LOCALID_BIRTH_ISLAND_DEOXYS, BirthIsland_Exterior_Movement_DeoxysApproach
        waitmovement 0
        waitse
        playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
        delay 40
        waitmoncry
        setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
        seteventmon SPECIES_ZAPDOS, 30
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special BattleSetup_StartLegendaryBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_EventScript_DefeatedDeoxys
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_RanFromDeoxys
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_RanFromDeoxys
        setflag FLAG_BATTLED_DEOXYS
        release
        end
    
    DesertRuins_EventScript_Regirock::
        lock
        faceplayer
        waitse
        playmoncry SPECIES_ZARUDE, CRY_MODE_ENCOUNTER
        delay 40
        waitmoncry
        setwildbattle SPECIES_ZARUDE, 40
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special StartRegiBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedRegirock
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromRegirock
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromRegirock
        setflag FLAG_DEFEATED_REGIROCK
        release
        end
    
    FarawayIsland_Interior_EventScript_Mew::
        lock
        faceplayer
        applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewAppear
        waitmovement 0
        setvar VAR_0x8004, 0
        special SetMewAboveGrass
        message FarawayIsland_Interior_Text_Mew
        waitse
        playmoncry SPECIES_MANAPHY, CRY_MODE_ENCOUNTER
        call_if_eq VAR_FACING, DIR_NORTH, FarawayIsland_Interior_EventScript_FoundMewNorth
        call_if_eq VAR_FACING, DIR_SOUTH, FarawayIsland_Interior_EventScript_FoundMewSouth
        call_if_eq VAR_FACING, DIR_WEST, FarawayIsland_Interior_EventScript_FoundMewWest
        call_if_eq VAR_FACING, DIR_EAST, FarawayIsland_Interior_EventScript_FoundMewEast
        special DestroyMewEmergingGrassSprite
        delay 40
        waitmoncry
        seteventmon SPECIES_MANAPHY, 30
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special BattleSetup_StartLegendaryBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, FarawayIsland_Interior_EventScript_MewDefeated
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FarawayIsland_Interior_EventScript_PlayerOrMewRan
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FarawayIsland_Interior_EventScript_PlayerOrMewRan
        goto_if_eq VAR_RESULT, B_OUTCOME_MON_TELEPORTED, FarawayIsland_Interior_EventScript_PlayerOrMewRan
        setflag FLAG_CAUGHT_MEW
        release
        end
    
    IslandCave_EventScript_Regice::
        lock
        faceplayer
        waitse
        playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
        delay 40
        waitmoncry
        setwildbattle SPECIES_HO_OH, 40
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special StartRegiBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, IslandCave_EventScript_DefeatedRegice
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IslandCave_EventScript_RanFromRegice
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IslandCave_EventScript_RanFromRegice
        setflag FLAG_DEFEATED_REGICE
        release
        end
    
    MarineCave_End_EventScript_Kyogre::
        lockall
        applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
        waitmovement 0
        applymovement LOCALID_MARINE_CAVE_KYOGRE, MarineCave_End_Movement_KyogreApproach
        waitmovement 0
        waitse
        playmoncry SPECIES_RAYQUAZA_MEGA, CRY_MODE_ENCOUNTER
        delay 40
        waitmoncry
        setvar VAR_LAST_TALKED, LOCALID_MARINE_CAVE_KYOGRE
        setwildbattle SPECIES_RAYQUAZA_MEGA, 70
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special BattleSetup_StartLegendaryBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        setvar VAR_TEMP_1, 0
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, MarineCave_End_EventScript_DefeatedKyogre
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MarineCave_End_EventScript_RanFromKyogre
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MarineCave_End_EventScript_RanFromKyogre
        setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
        setflag FLAG_DEFEATED_KYOGRE
        releaseall
        end
    
    NavelRock_Top_EventScript_HoOh::
        lockall
        setvar VAR_TEMP_1, 1
        special SpawnCameraObject
        setvar VAR_0x8004, 3  @ num loops
        setvar VAR_0x8005, 35 @ delay
        special LoopWingFlapSE
        applymovement LOCALID_NAVEL_ROCK_HO_OH, NavelRock_Top_Movement_HoOhAppear
        applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
        waitmovement 0
        delay 50
        setweather WEATHER_NONE
        doweather
        waitse
        playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
        delay 30
        waitmoncry
        delay 60
        setvar VAR_0x8004, 3  @ num loops
        setvar VAR_0x8005, 35 @ delay
        special LoopWingFlapSE
        applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
        applymovement LOCALID_NAVEL_ROCK_HO_OH, NavelRock_Top_Movement_HoOhApproach
        waitmovement 0
        special RemoveCameraObject
        seteventmon SPECIES_LANDORUS, 70
        setflag FLAG_SYS_CTRL_OBJ_DELETE
        special BattleSetup_StartLegendaryBattle
        waitstate
        clearflag FLAG_SYS_CTRL_OBJ_DELETE
        setvar VAR_LAST_TALKED, LOCALID_NAVEL_ROCK_HO_OH
        specialvar VAR_RESULT, GetBattleOutcome
        goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Top_EventScript_DefeatedHoOh
        goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Top_EventScript_RanFromHoOh
        goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Top_EventScript_RanFromHoOh
        setflag FLAG_CAUGHT_HO_OH
        releaseall
        end
        
SkyPillar_Top_EventScript_Rayquaza::
	lockall
	waitse
	playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_YVELTAL, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
	setflag FLAG_DEFEATED_RAYQUAZA
	releaseall
	end

TerraCave_End_EventScript_Groudon::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_TERRA_CAVE_GROUDON, TerraCave_End_Movement_GroudonApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_TERRA_CAVE_GROUDON
	setwildbattle SPECIES_XERNEAS, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_TEMP_1, 0
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, TerraCave_End_EventScript_DefeatedGroudon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, TerraCave_End_EventScript_RanFromGroudon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, TerraCave_End_EventScript_RanFromGroudon
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_GROUDON
	releaseall
	end