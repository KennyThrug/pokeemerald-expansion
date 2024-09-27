# 1 "data/maps/Route115/scripts.pory"

# 2 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 3 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 4 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 5 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 6 "data/maps/Route115/scripts.pory"
	.byte 0
# 7 "data/maps/Route115/scripts.pory"

# 8 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 9 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 10 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 11 "data/maps/Route115/scripts.pory"
	end
# 12 "data/maps/Route115/scripts.pory"

# 13 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 14 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 15 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 17 "data/maps/Route115/scripts.pory"
	end
# 18 "data/maps/Route115/scripts.pory"

# 19 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 20 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 21 "data/maps/Route115/scripts.pory"
	.2byte 0
# 22 "data/maps/Route115/scripts.pory"

# 23 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 24 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 25 "data/maps/Route115/scripts.pory"
	end
# 26 "data/maps/Route115/scripts.pory"

# 27 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 28 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 29 "data/maps/Route115/scripts.pory"
	end
# 30 "data/maps/Route115/scripts.pory"

# 31 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 32 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 33 "data/maps/Route115/scripts.pory"
	end
# 34 "data/maps/Route115/scripts.pory"

# 35 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 36 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 37 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 38 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 39 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 40 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Timothy_Item
# 41 "data/maps/Route115/scripts.pory"
	release
# 42 "data/maps/Route115/scripts.pory"
	end
# 43 "data/maps/Route115/scripts.pory"

# 44 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 45 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 46 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 48 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 49 "data/maps/Route115/scripts.pory"
	release
# 50 "data/maps/Route115/scripts.pory"
	end
# 51 "data/maps/Route115/scripts.pory"

# 52 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 53 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 54 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route115/scripts.pory"
	end
# 56 "data/maps/Route115/scripts.pory"

# 57 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 58 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 59 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Koichi_Item
# 61 "data/maps/Route115/scripts.pory"
	end
# 62 "data/maps/Route115/scripts.pory"

# 63 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 64 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
# 65 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 66 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchNob
# 67 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 68 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Nob_Item
# 69 "data/maps/Route115/scripts.pory"
	release
# 70 "data/maps/Route115/scripts.pory"
	end
# 71 "data/maps/Route115/scripts.pory"

# 72 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 73 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 74 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 76 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 77 "data/maps/Route115/scripts.pory"
	release
# 78 "data/maps/Route115/scripts.pory"
	end
# 79 "data/maps/Route115/scripts.pory"

# 80 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 81 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 82 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route115/scripts.pory"
	end
# 84 "data/maps/Route115/scripts.pory"

# 85 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 86 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 87 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 88 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 89 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Cyndy_Item
# 91 "data/maps/Route115/scripts.pory"
	release
# 92 "data/maps/Route115/scripts.pory"
	end
# 93 "data/maps/Route115/scripts.pory"

# 94 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 95 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 96 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 98 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 99 "data/maps/Route115/scripts.pory"
	release
# 100 "data/maps/Route115/scripts.pory"
	end
# 101 "data/maps/Route115/scripts.pory"

# 102 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 103 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 104 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route115/scripts.pory"
	end
# 106 "data/maps/Route115/scripts.pory"

# 107 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 108 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 109 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Hector_Item
# 111 "data/maps/Route115/scripts.pory"
	end
# 112 "data/maps/Route115/scripts.pory"

# 113 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 114 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 115 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Kyra_Item
# 117 "data/maps/Route115/scripts.pory"
	end
# 118 "data/maps/Route115/scripts.pory"

# 119 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 120 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 121 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Jaiden_Item
# 123 "data/maps/Route115/scripts.pory"
	end
# 124 "data/maps/Route115/scripts.pory"

# 125 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 126 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 127 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Alix_Item
# 129 "data/maps/Route115/scripts.pory"
	end
# 130 "data/maps/Route115/scripts.pory"

# 131 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 132 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 133 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Helene_Item
# 135 "data/maps/Route115/scripts.pory"
	end
# 136 "data/maps/Route115/scripts.pory"

# 137 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 138 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 139 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Marlene_Item
# 141 "data/maps/Route115/scripts.pory"
	end
# 142 "data/maps/Route115/scripts.pory"

# 143 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 144 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 145 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 146 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 147 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 148 "data/maps/Route115/scripts.pory"

# 149 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 150 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 151 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 152 "data/maps/Route115/scripts.pory"

# 153 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 154 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 155 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"
