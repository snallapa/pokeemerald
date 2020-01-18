CeruleanCave_B1F_MapScripts:: 
	.byte 0

Route112_EventScript_MewTwo::
	lockall
	waitse
	playmoncry SPECIES_MEWTWO, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_MEWTWO, 70, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto Route112_EventScript_DefeatedMewTwo
	releaseall
	end

Route112_EventScript_DefeatedMewTwo::
	setflag FLAG_MEWTWO
	goto Common_EventScript_RemoveStaticPokemon
	end