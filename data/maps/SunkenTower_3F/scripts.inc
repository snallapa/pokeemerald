SunkenTower_3F_MapScripts::
	.byte 0

SunkenTower_3F_EventScript_Suicune::
	lockall
	msgbox SunkenTower_3F_Text_SuicuneIntro, MSGBOX_AUTOCLOSE
	waitse
	playmoncry SPECIES_SUICUNE, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_SUICUNE, 65, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunkenTower_3F_EventScript_DefeatedSuicune
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	goto SunkenTower_3F_EventScript_DefeatedSuicune
	releaseall
	end

SunkenTower_3F_EventScript_DefeatedSuicune::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	setflag FLAG_SUICUNE
	msgbox SunkenTower_3F_Text_SuicuneDone, MSGBOX_AUTOCLOSE
	goto Common_EventScript_RemoveStaticPokemon
	end

SunkenTower_3F_Text_SuicuneIntro:
	.string "SUICUNE: What a surprise! Someone\n"
	.string "dares to come and face me!\p"
	.string "It has been a long time since I have\n"
	.string "fought. I will not back down!$"

SunkenTower_3F_Text_SuicuneDone:
	.string "SUICUNE: I cannot believe this...$"
