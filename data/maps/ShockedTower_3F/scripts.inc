ShockedTower_3F_MapScripts::
	.byte 0

ShockedTower_3F_EventScript_Raikou::
	lockall
	msgbox ShockedTower_3F_Text_RaikouIntro, MSGBOX_AUTOCLOSE
	waitse
	playmoncry SPECIES_RAIKOU, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_RAIKOU, 60, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto ShockedTower_3F_EventScript_DefeatedRaikou
	releaseall
	end

ShockedTower_3F_EventScript_DefeatedRaikou::
	msgbox ShockedTower_3F_Text_RaikouDone, MSGBOX_AUTOCLOSE
	setflag FLAG_RAIKOU
	goto Common_EventScript_RemoveStaticPokemon
	end

ShockedTower_3F_Text_RaikouIntro:
	.string "RAIKOU: A visitor? How interesting.\n"
	.string "Your power must be great if you got\p"
	.string "past my sages. You have earned this\n"
	.string "battle. Show me your power!$"

ShockedTower_3F_Text_RaikouDone:
	.string "RAIKOU: Wow! I submit to you...$"
