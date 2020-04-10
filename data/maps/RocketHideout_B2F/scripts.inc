RocketHideout_B2F_MapScripts::
	.byte 0

RocketHideout_B2F_EventScript_RocketGruntHideout7::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_7, RocketHideout_B2F_Text_RocketGruntHideout7Intro, RocketHideout_B2F_Text_RocketGruntHideout7Defeat
	msgbox RocketHideout_B2F_Text_RocketGruntHideout7PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout8::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_8, RocketHideout_B2F_Text_RocketGruntHideout8Intro, RocketHideout_B2F_Text_RocketGruntHideout8Defeat
	msgbox RocketHideout_B2F_Text_RocketGruntHideout8PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout9::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_9, RocketHideout_B2F_Text_RocketGruntHideout9Intro, RocketHideout_B2F_Text_RocketGruntHideout9Defeat
	msgbox RocketHideout_B2F_Text_RocketGruntHideout9PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout13::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_13, RocketHideout_B2F_Text_RocketGruntHideout13Intro, RocketHideout_B2F_Text_RocketGruntHideout13Defeat
	msgbox RocketHideout_B2F_Text_RocketGruntHideout13PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout14::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_14, RocketHideout_B2F_Text_RocketGruntHideout14Intro, RocketHideout_B2F_Text_RocketGruntHideout14Defeat
	msgbox RocketHideout_B2F_Text_RocketGruntHideout14PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout15::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_15, RocketHideout_B2F_Text_RocketGruntHideout15Intro, RocketHideout_B2F_Text_RocketGruntHideout15Defeat
	msgbox RocketHideout_B2F_Text_RocketGruntHideout15PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B2F_EventScript_RocketGruntHideout10::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_10, RocketHideout_B2F_Text_RocketGruntHideout10Intro, RocketHideout_B2F_Text_RocketGruntHideout10Defeat, RocketHideout_B2F_EventScript_RocketGruntHideout10Pokemon
	msgbox RocketHideout_B2F_Text_RocketGruntHideout10PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout10Pokemon::
	lockall
	msgbox RocketHideout_B2F_Text_RocketGruntHideout10PostBattle, MSGBOX_DEFAULT
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
	playfanfare MUS_FANFA4
	message RocketHideout_B2F_Text_RocketGruntHideout10Pokemon 
	waitmessage
	waitfanfare
	setflag FLAG_ITEM_ROCKET_HIDEOUT_CHARMANDER
	removeobject 11
	releaseall
	end

RocketHideout_B2F_EventScript_RocketGruntHideout11::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_11, RocketHideout_B2F_Text_RocketGruntHideout11Intro, RocketHideout_B2F_Text_RocketGruntHideout11Defeat, RocketHideout_B2F_EventScript_RocketGruntHideout11Pokemon
	msgbox RocketHideout_B2F_Text_RocketGruntHideout11PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout11Pokemon::
	lockall
	msgbox RocketHideout_B2F_Text_RocketGruntHideout11PostBattle, MSGBOX_DEFAULT
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
	playfanfare MUS_FANFA4
	message RocketHideout_B2F_Text_RocketGruntHideout11Pokemon 
	waitmessage
	waitfanfare
	setflag FLAG_ITEM_ROCKET_HIDEOUT_SQUIRTLE
	removeobject 12
	releaseall
	end

RocketHideout_B2F_EventScript_RocketGruntHideout12::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_12, RocketHideout_B2F_Text_RocketGruntHideout12Intro, RocketHideout_B2F_Text_RocketGruntHideout12Defeat, RocketHideout_B2F_EventScript_RocketGruntHideout12Pokemon
	msgbox RocketHideout_B2F_Text_RocketGruntHideout12PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_EventScript_RocketGruntHideout12Pokemon::
	lockall
	msgbox RocketHideout_B2F_Text_RocketGruntHideout12PostBattle, MSGBOX_DEFAULT
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	playfanfare MUS_FANFA4
	message RocketHideout_B2F_Text_RocketGruntHideout12Pokemon 
	waitmessage
	waitfanfare
	setflag FLAG_ITEM_ROCKET_HIDEOUT_BULBASAUR
	removeobject 13
	releaseall
	end

RocketHideout_B2F_Text_RocketGruntHideout7Intro:
	.string "How did you get down here??$"

RocketHideout_B2F_Text_RocketGruntHideout7Defeat:
	.string "The rest of them will have to handle you$"

RocketHideout_B2F_Text_RocketGruntHideout7PostBattle:
	.string "Get away from me$"

RocketHideout_B2F_Text_RocketGruntHideout8Intro:
	.string "$"

RocketHideout_B2F_Text_RocketGruntHideout8Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout8PostBattle:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout9Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout9Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout9PostBattle:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout10Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout10Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout10PostBattle:
	.string "FINE you earned it!!$"

RocketHideout_B2F_Text_RocketGruntHideout10Pokemon:
	.string "{PLAYER} obtained a CHARMANDER.$"

RocketHideout_B2F_Text_RocketGruntHideout11Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout11Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout11PostBattle:
	.string "Ugh okay you can take it$"

RocketHideout_B2F_Text_RocketGruntHideout11Pokemon:
	.string "{PLAYER} obtained a SQUIRTLE.$"

RocketHideout_B2F_Text_RocketGruntHideout12Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout12Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout12PostBattle:
	.string "I failed in protecting this$"

RocketHideout_B2F_Text_RocketGruntHideout12Pokemon:
	.string "{PLAYER} obtained a BULBASAUR.$"

RocketHideout_B2F_Text_RocketGruntHideout13Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout13Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout13PostBattle:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout14Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout14Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout14PostBattle:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout15Intro:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout15Defeat:
	.string "oh?$"

RocketHideout_B2F_Text_RocketGruntHideout15PostBattle:
	.string "oh?$"