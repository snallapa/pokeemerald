FieryPath_MapScripts:: @ 8230F24
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0

FieryPath_OnTransition: @ 8230F2A
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_EventScript_MoveScottToFallarbor:: @ 8230F37
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	return

FieryPath_EventScript_Jaelen::
	trainerbattle_single TRAINER_JAELEN, FieryPath_Text_JaelenIntro, FieryPath_Text_JaelenDefeated, FieryPath_EventScript_JaelenGive
	end

FieryPath_EventScript_JaelenGive::
	lockall
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
	msgbox FieryPath_Text_JaelenGive, MSGBOX_DEFAULT
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq FieryPath_EventScript_SendCyndaquilParty
	compare VAR_RESULT, 1
	goto_if_eq FieryPath_EventScript_SendCyndaquilPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

FieryPath_EventScript_SendCyndaquilParty::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FieryPath_EventScript_ReceivedCyndaquil
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto FieryPath_EventScript_ReceivedCyndaquil
	end

FieryPath_EventScript_CyndaquilTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto FieryPath_EventScript_ReceivedCyndaquil
	end

FieryPath_EventScript_SendCyndaquilPC::
	call FieryPath_EventScript_ReceivedCyndaquilFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FieryPath_EventScript_CyndaquilTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto FieryPath_EventScript_CyndaquilTransferredToPC
	end

FieryPath_EventScript_ReceivedCyndaquilFanfare::
	bufferspeciesname 1, SPECIES_CYNDAQUIL
	removeobject 2
	playfanfare MUS_FANFA4
	message FieryPath_Text_ObtainedCyndaquil
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	return

FieryPath_EventScript_ReceivedCyndaquil::
	releaseall
	end

FieryPath_Text_JaelenIntro:
	.string "\n"
	.string "$"

FieryPath_Text_JaelenGive:
	.string "Take this,\n"
	.string "it's a doggone keeper$"

FieryPath_Text_JaelenDefeated:
	.string "Well... Fuck$"

FieryPath_Text_ObtainedCyndaquil: 
	.string "{PLAYER} obtained a CYNDAQUIL.$"