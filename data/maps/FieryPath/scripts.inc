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
	msgbox FieryPath_Text_JaelenGive, MSGBOX_DEFAULT
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	playfanfare MUS_FANFA4
	message FieryPath_Text_ObtainedCyndaquil
	waitmessage
	waitfanfare
	releaseall
	end


FieryPath_Text_JaelenIntro:
	.string "What's a lad like you \ndoing in this cave?\p"
	.string "Looking for a battle youngblood?$"

FieryPath_Text_JaelenGive:
	.string "Take this,\n"
	.string "it's a doggone keeper$"

FieryPath_Text_JaelenDefeated:
	.string "Well... Fuck$"

FieryPath_Text_ObtainedCyndaquil: 
	.string "{PLAYER} obtained a CYNDAQUIL.$"
