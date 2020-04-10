RocketHideout_B1F_MapScripts::
	.byte 0

Rocket_B1F_EventScript_GiovanniFight::
	lockall
	playbgm MUS_AQA_0, 0
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_B1F_MoveUp
	waitmovement 0
	msgbox RocketHideout_B1F_Text_MeowthIntro, MSGBOX_DEFAULT
	applymovement 8, Common_Movement_FaceLeft
	applymovement 7, Common_Movement_FaceRight
	waitmovement 0
	msgbox RocketHideout_B1F_Text_FightTime, MSGBOX_DEFAULT
	applymovement 8, Common_Movement_FaceDown
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	trainerbattle_no_intro TRAINER_GIOVANNI, RocketHideout_B1F_Text_GiovanniDefeated
	msgbox RocketHideout_B1F_Text_MeowthItsOver, MSGBOX_DEFAULT
	givemon SPECIES_CELEBI, 5, ITEM_NONE
	playfanfare MUS_FANFA4
	message RocketHideout_B1F_Text_ObtainedCelebi
	waitmessage
	waitfanfare
	msgbox RocketHideout_B1F_Text_MeowthLetsLeave, MSGBOX_DEFAULT
	setvar VAR_ROCKET_GIOVANNI, 1
	fadescreen FADE_TO_BLACK
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	setflag FLAG_ROCKET_HIDE_EVERYONE
	fadescreen FADE_FROM_BLACK
	releaseall
	end

RocketHideout_B1F_MoveUp:
	walk_up
	walk_up
	step_end


RocketHideout_B1F_EventScript_RocketGruntHideout1::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_1, RocketHideout_B1F_Text_RocketGruntHideout1Intro, RocketHideout_B1F_Text_RocketGruntHideout1Defeat
	msgbox RocketHideout_B1F_Text_RocketGruntHideout1PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_RocketGruntHideout2::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_2, RocketHideout_B1F_Text_RocketGruntHideout2Intro, RocketHideout_B1F_Text_RocketGruntHideout2Defeat
	msgbox RocketHideout_B1F_Text_RocketGruntHideout2PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_RocketGruntHideout3::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_3, RocketHideout_B1F_Text_RocketGruntHideout3Intro, RocketHideout_B1F_Text_RocketGruntHideout3Defeat
	msgbox RocketHideout_B1F_Text_RocketGruntHideout3PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_RocketGruntHideout4::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_4, RocketHideout_B1F_Text_RocketGruntHideout4Intro, RocketHideout_B1F_Text_RocketGruntHideout4Defeat
	msgbox RocketHideout_B1F_Text_RocketGruntHideout4PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_RocketGruntHideout5::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_5, RocketHideout_B1F_Text_RocketGruntHideout5Intro, RocketHideout_B1F_Text_RocketGruntHideout5Defeat
	msgbox RocketHideout_B1F_Text_RocketGruntHideout5PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_RocketGruntHideout6::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_6, RocketHideout_B1F_Text_RocketGruntHideout6Intro, RocketHideout_B1F_Text_RocketGruntHideout6Defeat
	msgbox RocketHideout_B1F_Text_RocketGruntHideout6PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_Text_RocketGruntHideout1Intro:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout1Defeat:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout1PostBattle:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout2Intro:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout2Defeat:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout2PostBattle:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout3Intro:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout3Defeat:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout3PostBattle:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout4Intro:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout4Defeat:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout4PostBattle:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout5Intro:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout5Defeat:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout5PostBattle:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout6Intro:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout6Defeat:
	.string "oh?$"

RocketHideout_B1F_Text_RocketGruntHideout6PostBattle:
	.string "oh?$"


RocketHideout_B1F_Text_MeowthIntro:
	.string "MEOWTH: So this is the kid who is\n"
	.string "messing with all our plans??\p"
	.string "We had everything in control...\n"
	.string "Everything was setup perfectly!\p"
	.string "MAXIE and ARCHIE were fools and easy\n"
	.string "to manipulate. They were just puppets\p"
	.string "under our control. You were a consistent \n"
	.string "problem that we had to deal with. \p"
	.string "Of course it was us, TEAM ROCKET, who\n"
	.string "was causing all the trouble.\p"
	.string "And I am their gracious leader. Surprised?\n"
	.string "Thought so...\p"
	.string "I do not want you meddling again!$" 

RocketHideout_B1F_Text_FightTime:
	.string "MEOWTH: Giovanni dear can you take\n"
	.string "care of him?\p"
	.string "GIOVANNI: It would be my pleasure$"

RocketHideout_B1F_Text_GiovanniDefeated:
	.string "A devastating loss for our organization$"

RocketHideout_B1F_Text_MeowthItsOver:
	.string ".................\p"
	.string "You have almost disbanded us \n"
	.string "singlehandedly. I give you credit\l"
	.string "for that. Our last remaining treasure is\l"
	.string "something we stole a long time ago...$"

RocketHideout_B1F_Text_MeowthLetsLeave:
	.string "We have to get out of here now!\p"
	.string "It's time to rebuild the Rocket franchise$"

RocketHideout_B1F_Text_ObtainedCelebi:
	.string "{PLAYER} obtained a CELEBI.$"