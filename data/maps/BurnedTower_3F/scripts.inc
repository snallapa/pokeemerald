BurnedTower_3F_MapScripts::
	.byte 0

BurnedTower_3F_EventScript_Entei::
	lockall
	msgbox BurnedTower_3F_Text_EnteiIntro, MSGBOX_AUTOCLOSE
	waitse
	playmoncry SPECIES_ENTEI, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_ENTEI, 65, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BurnedTower_3F_EventScript_DefeatedEntei
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	goto BurnedTower_3F_EventScript_DefeatedEntei
	releaseall
	end

BurnedTower_3F_EventScript_DefeatedEntei::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	setflag FLAG_ENTEI
	msgbox BurnedTower_3F_Text_EnteiDone, MSGBOX_AUTOCLOSE
	goto Common_EventScript_RemoveStaticPokemon
	end

BurnedTower_3F_Text_EnteiIntro:
	.string "ENTEI: Who dares to disturb my\n"
	.string "peace with their presence!\p"
	.string "Ah, an opponent I see...\n"
	.string "Well, I hope to not disappoint!$"

BurnedTower_3F_Text_EnteiDone:
	.string "ENTEI: Such great power indeed.$"
