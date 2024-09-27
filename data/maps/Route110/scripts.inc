# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 28
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 6 "data/maps/Route110/scripts.pory"

# 7 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 10 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 11 "data/maps/Route110/scripts.pory"
	.byte 0
# 12 "data/maps/Route110/scripts.pory"

# 13 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 14 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 15 "data/maps/Route110/scripts.pory"
	end
# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 20 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 21 "data/maps/Route110/scripts.pory"
	end
# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 24 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 25 "data/maps/Route110/scripts.pory"
	return
# 26 "data/maps/Route110/scripts.pory"

# 27 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 28 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 29 "data/maps/Route110/scripts.pory"
	.2byte 0
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 32 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 33 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 34 "data/maps/Route110/scripts.pory"
	return
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 37 "data/maps/Route110/scripts.pory"
	lock
# 38 "data/maps/Route110/scripts.pory"
	faceplayer
# 39 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 40 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 41 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route110/scripts.pory"
	release
# 43 "data/maps/Route110/scripts.pory"
	end
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 46 "data/maps/Route110/scripts.pory"
	lock
# 47 "data/maps/Route110/scripts.pory"
	faceplayer
# 48 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 49 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 50 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route110/scripts.pory"
	release
# 52 "data/maps/Route110/scripts.pory"
	end
# 53 "data/maps/Route110/scripts.pory"

# 54 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 55 "data/maps/Route110/scripts.pory"
	lock
# 56 "data/maps/Route110/scripts.pory"
	faceplayer
# 57 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 58 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route110/scripts.pory"
	release
# 61 "data/maps/Route110/scripts.pory"
	end
# 62 "data/maps/Route110/scripts.pory"

# 63 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 64 "data/maps/Route110/scripts.pory"
	lock
# 65 "data/maps/Route110/scripts.pory"
	faceplayer
# 66 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 67 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 68 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route110/scripts.pory"
	release
# 70 "data/maps/Route110/scripts.pory"
	end
# 71 "data/maps/Route110/scripts.pory"

# 72 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 73 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 74 "data/maps/Route110/scripts.pory"
	end
# 75 "data/maps/Route110/scripts.pory"

# 76 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 77 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 78 "data/maps/Route110/scripts.pory"
	end
# 79 "data/maps/Route110/scripts.pory"

# 80 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 81 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 82 "data/maps/Route110/scripts.pory"
	end
# 83 "data/maps/Route110/scripts.pory"

# 84 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 86 "data/maps/Route110/scripts.pory"
	end
# 87 "data/maps/Route110/scripts.pory"

# 88 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 89 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 90 "data/maps/Route110/scripts.pory"
	end
# 91 "data/maps/Route110/scripts.pory"

# 92 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 93 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 94 "data/maps/Route110/scripts.pory"
	end
# 95 "data/maps/Route110/scripts.pory"

# 96 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 97 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 98 "data/maps/Route110/scripts.pory"
	end
# 99 "data/maps/Route110/scripts.pory"

# 100 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 102 "data/maps/Route110/scripts.pory"
	end
# 103 "data/maps/Route110/scripts.pory"

# 104 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 106 "data/maps/Route110/scripts.pory"
	end
# 107 "data/maps/Route110/scripts.pory"

# 108 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 110 "data/maps/Route110/scripts.pory"
	end
# 111 "data/maps/Route110/scripts.pory"

# 112 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 114 "data/maps/Route110/scripts.pory"
	end
# 115 "data/maps/Route110/scripts.pory"

# 116 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 118 "data/maps/Route110/scripts.pory"
	end
# 119 "data/maps/Route110/scripts.pory"

# 120 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 121 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 122 "data/maps/Route110/scripts.pory"
	end
# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 126 "data/maps/Route110/scripts.pory"
	end
# 127 "data/maps/Route110/scripts.pory"

# 128 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 129 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 130 "data/maps/Route110/scripts.pory"
	end
# 131 "data/maps/Route110/scripts.pory"

# 132 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 133 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 134 "data/maps/Route110/scripts.pory"
	end
# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 137 "data/maps/Route110/scripts.pory"
	lockall
# 138 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 139 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 141 "data/maps/Route110/scripts.pory"
	releaseall
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 146 "data/maps/Route110/scripts.pory"
	releaseall
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 150 "data/maps/Route110/scripts.pory"
	lock
# 151 "data/maps/Route110/scripts.pory"
	faceplayer
# 152 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 154 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	release
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 165 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 166 "data/maps/Route110/scripts.pory"
	release
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 170 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Edward_Item
# 173 "data/maps/Route110/scripts.pory"
	end
# 174 "data/maps/Route110/scripts.pory"

# 175 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 176 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 177 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Jaclyn_Item
# 179 "data/maps/Route110/scripts.pory"
	end
# 180 "data/maps/Route110/scripts.pory"

# 181 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 182 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 183 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 184 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 185 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 186 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Edwin_Item
# 187 "data/maps/Route110/scripts.pory"
	release
# 188 "data/maps/Route110/scripts.pory"
	end
# 189 "data/maps/Route110/scripts.pory"

# 190 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 191 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 192 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 194 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 195 "data/maps/Route110/scripts.pory"
	release
# 196 "data/maps/Route110/scripts.pory"
	end
# 197 "data/maps/Route110/scripts.pory"

# 198 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 199 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route110/scripts.pory"
	end
# 202 "data/maps/Route110/scripts.pory"

# 203 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 204 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 205 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Dale_Item
# 207 "data/maps/Route110/scripts.pory"
	end
# 208 "data/maps/Route110/scripts.pory"

# 209 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 210 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 211 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Jacob_Item
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Anthony_Item
# 219 "data/maps/Route110/scripts.pory"
	end
# 220 "data/maps/Route110/scripts.pory"

# 221 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 222 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 223 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 224 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 225 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 226 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Benjamin_Item
# 227 "data/maps/Route110/scripts.pory"
	release
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 231 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 232 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 234 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 235 "data/maps/Route110/scripts.pory"
	release
# 236 "data/maps/Route110/scripts.pory"
	end
# 237 "data/maps/Route110/scripts.pory"

# 238 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 239 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route110/scripts.pory"
	end
# 242 "data/maps/Route110/scripts.pory"

# 243 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 244 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 245 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Jasmine_Item
# 247 "data/maps/Route110/scripts.pory"
	end
# 248 "data/maps/Route110/scripts.pory"

# 249 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 250 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 251 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 252 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 253 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 254 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Abigail_Item
# 255 "data/maps/Route110/scripts.pory"
	release
# 256 "data/maps/Route110/scripts.pory"
	end
# 257 "data/maps/Route110/scripts.pory"

# 258 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 259 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 260 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 262 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 263 "data/maps/Route110/scripts.pory"
	release
# 264 "data/maps/Route110/scripts.pory"
	end
# 265 "data/maps/Route110/scripts.pory"

# 266 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 267 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route110/scripts.pory"
	end
# 270 "data/maps/Route110/scripts.pory"

# 271 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 272 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 273 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 274 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 275 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 276 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Isabel_Item
# 277 "data/maps/Route110/scripts.pory"
	release
# 278 "data/maps/Route110/scripts.pory"
	end
# 279 "data/maps/Route110/scripts.pory"

# 280 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 281 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 282 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 284 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 285 "data/maps/Route110/scripts.pory"
	release
# 286 "data/maps/Route110/scripts.pory"
	end
# 287 "data/maps/Route110/scripts.pory"

# 288 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 289 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 290 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route110/scripts.pory"
	end
# 292 "data/maps/Route110/scripts.pory"

# 293 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 294 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 295 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Timmy_Item
# 297 "data/maps/Route110/scripts.pory"
	end
# 298 "data/maps/Route110/scripts.pory"

# 299 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 300 "data/maps/Route110/scripts.pory"
	end
# 301 "data/maps/Route110/scripts.pory"

# 302 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 303 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 304 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Kaleb_Item
# 306 "data/maps/Route110/scripts.pory"
	end
# 307 "data/maps/Route110/scripts.pory"

# 308 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 309 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Joseph_Item
# 312 "data/maps/Route110/scripts.pory"
	end
# 313 "data/maps/Route110/scripts.pory"

# 314 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 315 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 316 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_Alyssa_Item
# 318 "data/maps/Route110/scripts.pory"
	end
# 319 "data/maps/Route110/scripts.pory"

# 320 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 321 "data/maps/Route110/scripts.pory"
	lockall
# 322 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 323 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 325 "data/maps/Route110/scripts.pory"
	releaseall
# 326 "data/maps/Route110/scripts.pory"
	end
# 327 "data/maps/Route110/scripts.pory"

# 328 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 329 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 330 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 331 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 332 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 333 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 334 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 335 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 336 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 337 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 338 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 339 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 340 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 341 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 342 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 343 "data/maps/Route110/scripts.pory"
	end
# 344 "data/maps/Route110/scripts.pory"

# 345 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 346 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 347 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 348 "data/maps/Route110/scripts.pory"
	end
# 349 "data/maps/Route110/scripts.pory"

# 350 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 351 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 352 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 353 "data/maps/Route110/scripts.pory"
	end
# 354 "data/maps/Route110/scripts.pory"

# 355 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 356 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 357 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 358 "data/maps/Route110/scripts.pory"
	end
# 359 "data/maps/Route110/scripts.pory"

# 360 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 361 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 362 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 363 "data/maps/Route110/scripts.pory"
	end
# 364 "data/maps/Route110/scripts.pory"

# 365 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 366 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 367 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 368 "data/maps/Route110/scripts.pory"
	end
# 369 "data/maps/Route110/scripts.pory"

# 370 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 371 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 372 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 373 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 374 "data/maps/Route110/scripts.pory"
	return
# 375 "data/maps/Route110/scripts.pory"

# 376 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 377 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 378 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 379 "data/maps/Route110/scripts.pory"
	end
# 380 "data/maps/Route110/scripts.pory"

# 381 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 382 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 383 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 384 "data/maps/Route110/scripts.pory"
	end
# 385 "data/maps/Route110/scripts.pory"

# 386 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 387 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 388 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 389 "data/maps/Route110/scripts.pory"
	end
# 390 "data/maps/Route110/scripts.pory"

# 391 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 392 "data/maps/Route110/scripts.pory"
	lockall
# 393 "data/maps/Route110/scripts.pory"
	checkplayergender
# 394 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 395 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 396 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 397 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 399 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 401 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route110/scripts.pory"
	delay 30
# 403 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 404 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 405 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 406 "data/maps/Route110/scripts.pory"
	checkplayergender
# 407 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 408 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 409 "data/maps/Route110/scripts.pory"
	releaseall
# 410 "data/maps/Route110/scripts.pory"
	end
# 411 "data/maps/Route110/scripts.pory"

# 412 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 413 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 414 "data/maps/Route110/scripts.pory"
	return
# 415 "data/maps/Route110/scripts.pory"

# 416 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 417 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 418 "data/maps/Route110/scripts.pory"
	return
# 419 "data/maps/Route110/scripts.pory"

# 420 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 421 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 422 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 423 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 424 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 425 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 426 "data/maps/Route110/scripts.pory"
	end
# 427 "data/maps/Route110/scripts.pory"

# 428 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 429 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 430 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 431 "data/maps/Route110/scripts.pory"
	end
# 432 "data/maps/Route110/scripts.pory"

# 433 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 434 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 435 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 436 "data/maps/Route110/scripts.pory"
	end
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 439 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 440 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 441 "data/maps/Route110/scripts.pory"
	end
# 442 "data/maps/Route110/scripts.pory"

# 443 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 444 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 445 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 446 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 447 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 448 "data/maps/Route110/scripts.pory"
	end
# 449 "data/maps/Route110/scripts.pory"

# 450 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 451 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 452 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 453 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 454 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 455 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 456 "data/maps/Route110/scripts.pory"
	end
# 457 "data/maps/Route110/scripts.pory"

# 458 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 459 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 460 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 461 "data/maps/Route110/scripts.pory"
	end
# 462 "data/maps/Route110/scripts.pory"

# 463 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 464 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 465 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 466 "data/maps/Route110/scripts.pory"
	end
# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 469 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 470 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 471 "data/maps/Route110/scripts.pory"
	end
# 472 "data/maps/Route110/scripts.pory"

# 473 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 474 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 475 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 476 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 477 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 478 "data/maps/Route110/scripts.pory"
	end
# 479 "data/maps/Route110/scripts.pory"

# 480 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 481 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder_Item
# 482 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder_Item2
# 483 "data/maps/Route110/scripts.pory"
	return
# 484 "data/maps/Route110/scripts.pory"

# 485 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 486 "data/maps/Route110/scripts.pory"
	closemessage
# 487 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 488 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 489 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 490 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 491 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 492 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 493 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 494 "data/maps/Route110/scripts.pory"
	delay 45
# 495 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 496 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 497 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 498 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 499 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 500 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 501 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 502 "data/maps/Route110/scripts.pory"
	releaseall
# 503 "data/maps/Route110/scripts.pory"
	end
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 506 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 507 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 508 "data/maps/Route110/scripts.pory"
	return
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 511 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 512 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route110/scripts.pory"
	return
# 514 "data/maps/Route110/scripts.pory"

# 515 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 516 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 517 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route110/scripts.pory"
	return
# 519 "data/maps/Route110/scripts.pory"

# 520 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 521 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 522 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 523 "data/maps/Route110/scripts.pory"
	return
# 524 "data/maps/Route110/scripts.pory"

# 525 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 526 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 527 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 528 "data/maps/Route110/scripts.pory"
	return
# 529 "data/maps/Route110/scripts.pory"

# 530 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 531 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 532 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 533 "data/maps/Route110/scripts.pory"
	return
# 534 "data/maps/Route110/scripts.pory"

# 535 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 536 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 537 "data/maps/Route110/scripts.pory"
	return
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 540 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 541 "data/maps/Route110/scripts.pory"
	return
# 542 "data/maps/Route110/scripts.pory"

# 543 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 544 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 545 "data/maps/Route110/scripts.pory"
	return
# 546 "data/maps/Route110/scripts.pory"

# 547 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 548 "data/maps/Route110/scripts.pory"
	walk_down
# 549 "data/maps/Route110/scripts.pory"
	walk_left
# 550 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 551 "data/maps/Route110/scripts.pory"
	step_end
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 554 "data/maps/Route110/scripts.pory"
	walk_down
# 555 "data/maps/Route110/scripts.pory"
	step_end
# 556 "data/maps/Route110/scripts.pory"

# 557 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 558 "data/maps/Route110/scripts.pory"
	walk_down
# 559 "data/maps/Route110/scripts.pory"
	walk_right
# 560 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 561 "data/maps/Route110/scripts.pory"
	step_end
# 562 "data/maps/Route110/scripts.pory"

# 563 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 564 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 566 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 567 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 568 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 569 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 570 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 571 "data/maps/Route110/scripts.pory"
	step_end
# 572 "data/maps/Route110/scripts.pory"

# 573 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 577 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 578 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 579 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 581 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 582 "data/maps/Route110/scripts.pory"
	step_end
# 583 "data/maps/Route110/scripts.pory"

# 584 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 587 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 588 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 589 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 590 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 591 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 592 "data/maps/Route110/scripts.pory"
	step_end
# 593 "data/maps/Route110/scripts.pory"

# 594 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 595 "data/maps/Route110/scripts.pory"
	lockall
# 596 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 597 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 598 "data/maps/Route110/scripts.pory"

# 599 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 600 "data/maps/Route110/scripts.pory"
	lockall
# 601 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 602 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 603 "data/maps/Route110/scripts.pory"

# 604 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 605 "data/maps/Route110/scripts.pory"
	lockall
# 606 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 607 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 608 "data/maps/Route110/scripts.pory"

# 609 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 610 "data/maps/Route110/scripts.pory"
	lockall
# 611 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 612 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 613 "data/maps/Route110/scripts.pory"

# 614 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 615 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 616 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 617 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 618 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 622 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 624 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 625 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 626 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 627 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 628 "data/maps/Route110/scripts.pory"
	closemessage
# 629 "data/maps/Route110/scripts.pory"
	delay 20
# 630 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 631 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route110/scripts.pory"
	delay 10
# 633 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 634 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110/scripts.pory"
	delay 20
# 636 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 637 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route110/scripts.pory"
	delay 30
# 639 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 640 "data/maps/Route110/scripts.pory"
	closemessage
# 641 "data/maps/Route110/scripts.pory"
	delay 30
# 642 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 643 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 644 "data/maps/Route110/scripts.pory"
	waitfanfare
# 645 "data/maps/Route110/scripts.pory"
	closemessage
# 646 "data/maps/Route110/scripts.pory"
	delay 30
# 647 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 648 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 649 "data/maps/Route110/scripts.pory"
	closemessage
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 652 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 653 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 654 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 655 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 656 "data/maps/Route110/scripts.pory"
	releaseall
# 657 "data/maps/Route110/scripts.pory"
	end
# 658 "data/maps/Route110/scripts.pory"

# 659 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 660 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 661 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 662 "data/maps/Route110/scripts.pory"
	return
# 663 "data/maps/Route110/scripts.pory"

# 664 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 665 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 666 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 667 "data/maps/Route110/scripts.pory"
	return
# 668 "data/maps/Route110/scripts.pory"

# 669 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 670 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 671 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 672 "data/maps/Route110/scripts.pory"
	return
# 673 "data/maps/Route110/scripts.pory"

# 674 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 675 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 676 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 677 "data/maps/Route110/scripts.pory"
	return
# 678 "data/maps/Route110/scripts.pory"

# 679 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 680 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 681 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 682 "data/maps/Route110/scripts.pory"
	return
# 683 "data/maps/Route110/scripts.pory"

# 684 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 685 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 686 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 687 "data/maps/Route110/scripts.pory"
	return
# 688 "data/maps/Route110/scripts.pory"

# 689 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 690 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 691 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 692 "data/maps/Route110/scripts.pory"
	return
# 693 "data/maps/Route110/scripts.pory"

# 694 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 695 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 696 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 697 "data/maps/Route110/scripts.pory"
	return
# 698 "data/maps/Route110/scripts.pory"

# 699 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	walk_down
# 702 "data/maps/Route110/scripts.pory"
	walk_down
# 703 "data/maps/Route110/scripts.pory"
	step_end
# 704 "data/maps/Route110/scripts.pory"

# 705 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 706 "data/maps/Route110/scripts.pory"
	walk_down
# 707 "data/maps/Route110/scripts.pory"
	walk_left
# 708 "data/maps/Route110/scripts.pory"
	walk_left
# 709 "data/maps/Route110/scripts.pory"
	walk_down
# 710 "data/maps/Route110/scripts.pory"
	step_end
# 711 "data/maps/Route110/scripts.pory"

# 712 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 713 "data/maps/Route110/scripts.pory"
	walk_down
# 714 "data/maps/Route110/scripts.pory"
	walk_left
# 715 "data/maps/Route110/scripts.pory"
	walk_down
# 716 "data/maps/Route110/scripts.pory"
	step_end
# 717 "data/maps/Route110/scripts.pory"

# 718 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 719 "data/maps/Route110/scripts.pory"
	walk_down
# 720 "data/maps/Route110/scripts.pory"
	walk_down
# 721 "data/maps/Route110/scripts.pory"
	step_end
# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 724 "data/maps/Route110/scripts.pory"
	walk_down
# 725 "data/maps/Route110/scripts.pory"
	walk_right
# 726 "data/maps/Route110/scripts.pory"
	walk_down
# 727 "data/maps/Route110/scripts.pory"
	step_end
# 728 "data/maps/Route110/scripts.pory"

# 729 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 730 "data/maps/Route110/scripts.pory"
	walk_up
# 731 "data/maps/Route110/scripts.pory"
	walk_up
# 732 "data/maps/Route110/scripts.pory"
	walk_right
# 733 "data/maps/Route110/scripts.pory"
	walk_up
# 734 "data/maps/Route110/scripts.pory"
	walk_up
# 735 "data/maps/Route110/scripts.pory"
	walk_up
# 736 "data/maps/Route110/scripts.pory"
	step_end
# 737 "data/maps/Route110/scripts.pory"

# 738 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	walk_up
# 743 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	step_end
# 745 "data/maps/Route110/scripts.pory"

# 746 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	walk_up
# 751 "data/maps/Route110/scripts.pory"
	walk_up
# 752 "data/maps/Route110/scripts.pory"
	step_end
# 753 "data/maps/Route110/scripts.pory"

# 754 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	walk_up
# 759 "data/maps/Route110/scripts.pory"
	walk_up
# 760 "data/maps/Route110/scripts.pory"
	step_end
# 761 "data/maps/Route110/scripts.pory"

# 762 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 763 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 764 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 765 "data/maps/Route110/scripts.pory"

# 766 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 767 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 768 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 769 "data/maps/Route110/scripts.pory"

# 770 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 771 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 772 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 773 "data/maps/Route110/scripts.pory"

# 774 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 775 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 776 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 777 "data/maps/Route110/scripts.pory"

# 778 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 779 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 780 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 782 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 783 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 784 "data/maps/Route110/scripts.pory"

# 785 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 786 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 787 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 788 "data/maps/Route110/scripts.pory"

# 789 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 790 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 791 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 792 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 793 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 794 "data/maps/Route110/scripts.pory"

# 795 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 796 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 798 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 799 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 800 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 801 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 802 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 803 "data/maps/Route110/scripts.pory"

# 804 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 805 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 806 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 807 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 808 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 809 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 810 "data/maps/Route110/scripts.pory"

# 811 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 812 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 813 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 814 "data/maps/Route110/scripts.pory"

# 815 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 816 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 817 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 818 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 819 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 820 "data/maps/Route110/scripts.pory"

# 821 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 822 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 823 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 825 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 827 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 828 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 829 "data/maps/Route110/scripts.pory"

# 830 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 831 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 832 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 833 "data/maps/Route110/scripts.pory"

# 834 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 835 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 836 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 837 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 838 "data/maps/Route110/scripts.pory"

# 839 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 840 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 841 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 844 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 845 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 846 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 847 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 849 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 851 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 853 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 854 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 855 "data/maps/Route110/scripts.pory"

# 856 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 857 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 858 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 859 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 860 "data/maps/Route110/scripts.pory"

# 861 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 862 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 864 "data/maps/Route110/scripts.pory"

# 865 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 866 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 867 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 868 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 869 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 870 "data/maps/Route110/scripts.pory"

# 871 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 872 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 873 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 874 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 875 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 878 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 879 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 880 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 881 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 882 "data/maps/Route110/scripts.pory"

# 883 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 884 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 885 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 887 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 888 "data/maps/Route110/scripts.pory"

# 889 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 890 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 891 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 892 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 893 "data/maps/Route110/scripts.pory"

# 894 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 895 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 897 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 898 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 901 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 903 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 904 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 905 "data/maps/Route110/scripts.pory"

# 906 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 907 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 908 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 909 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 910 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 911 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 912 "data/maps/Route110/scripts.pory"

# 913 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 914 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 915 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 917 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 918 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 919 "data/maps/Route110/scripts.pory"

# 920 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 921 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 922 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 923 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 926 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 927 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 928 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 929 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 930 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 933 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 934 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 935 "data/maps/Route110/scripts.pory"

# 936 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 937 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 938 "data/maps/Route110/scripts.pory"

# 939 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 940 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 941 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 943 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 944 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 945 "data/maps/Route110/scripts.pory"

# 946 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 947 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 948 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 949 "data/maps/Route110/scripts.pory"

# 950 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 951 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 952 "data/maps/Route110/scripts.pory"

# 953 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 954 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 955 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 956 "data/maps/Route110/scripts.pory"

# 957 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 958 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 959 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 960 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 961 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 962 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 963 "data/maps/Route110/scripts.pory"

# 964 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 965 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 966 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 967 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 968 "data/maps/Route110/scripts.pory"

# 969 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 970 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 971 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 972 "data/maps/Route110/scripts.pory"

# 973 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 974 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 975 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 976 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 977 "data/maps/Route110/scripts.pory"

# 978 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 979 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 980 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 981 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 982 "data/maps/Route110/scripts.pory"

# 983 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 984 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 985 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 986 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 987 "data/maps/Route110/scripts.pory"

# 988 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 989 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 990 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 991 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 992 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 993 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 994 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 995 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 996 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 997 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 998 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 999 "data/maps/Route110/scripts.pory"

# 1000 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1001 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1002 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1003 "data/maps/Route110/scripts.pory"

# 1004 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1005 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1006 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1007 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1008 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1009 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
