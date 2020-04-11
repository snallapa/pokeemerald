RocketHideout_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_B3F_OnFrame
	.byte 0

RocketHideout_B3F_OnFrame:
	map_script_2 VAR_TEMP_3, 0, RocketHideout_B3F_EventScript_RocketGruntHideoutAmbush
	.2byte 0

RocketHideout_B3F_EventScript_RocketGruntHideoutAmbush::
	goto_if_set FLAG_ROCKET_HIDE_EVERYONE, RocketHideout_B3F_EventScript_RocketGruntHideoutNoAmbush
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 17
	goto_if_lt RocketHideout_B3F_EventScript_RocketGruntHideoutNoAmbush
	compare VAR_ROCKET_AMBUSH, 1
	goto_if_eq RocketHideout_B3F_EventScript_RocketGruntHideoutNoAmbush
	lockall
	playse SE_PIN
	playbgm MUS_AQA_0, 0
	msgbox RocketHideout_B3F_Text_RocketAmbushBegin, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_ROCKET_GRUNT_HIDEOUT_18, RocketHideout_B3F_Text_RocketGruntHideout18Defeat
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox RocketHideout_B3F_Text_RocketGruntHideout19Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_ROCKET_GRUNT_HIDEOUT_19, RocketHideout_B3F_Text_RocketGruntHideout19Defeat
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox RocketHideout_B3F_Text_RocketGruntHideout20Intro, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_ROCKET_GRUNT_HIDEOUT_20, RocketHideout_B3F_Text_RocketGruntHideout20Defeat
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox RocketHideout_B3F_Text_RocketGruntHideout20PostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_ROCKET_AMBUSH, 1
	releaseall
	end

RocketHideout_B3F_EventScript_RocketGruntHideoutNoAmbush::
	setvar VAR_TEMP_3, 1
	end

RocketHideout_B3F_EventScript_RocketGruntHideout16::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_16, RocketHideout_B3F_Text_RocketGruntHideout16Intro, RocketHideout_B3F_Text_RocketGruntHideout16Defeat
	msgbox RocketHideout_B3F_Text_RocketGruntHideout16PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_RocketGruntHideout17::
	trainerbattle_single TRAINER_ROCKET_GRUNT_HIDEOUT_17, RocketHideout_B3F_Text_RocketGruntHideout17Intro, RocketHideout_B3F_Text_RocketGruntHideout17Defeat
	msgbox RocketHideout_B3F_Text_RocketGruntHideout17PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_RocketGruntHideout18::
	msgbox RocketHideout_B3F_Text_RocketGruntHideout18PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_RocketGruntHideout19::
	msgbox RocketHideout_B3F_Text_RocketGruntHideout19PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_RocketGruntHideout20::
	msgbox RocketHideout_B3F_Text_RocketGruntHideout20PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_Text_RocketAmbushBegin:
	.string "GOT YOU! You fell into our ambush!\p"
	.string "Prepare to face all of us!!\n"
	.string "Starting with me!$"

RocketHideout_B3F_Text_RocketGruntHideout16Intro:
	.string "Stay away from our treasure!$"

RocketHideout_B3F_Text_RocketGruntHideout16Defeat:
	.string "We needed to be stronger..$"

RocketHideout_B3F_Text_RocketGruntHideout16PostBattle:
	.string "If there is a next time, I will be better$"

RocketHideout_B3F_Text_RocketGruntHideout17Intro:
	.string "I worked so hard to find this...\n"
	.string "You cannot take it from me!$"

RocketHideout_B3F_Text_RocketGruntHideout17Defeat:
	.string "Now it will be gone...$"

RocketHideout_B3F_Text_RocketGruntHideout17PostBattle:
	.string "Take it I don't even care anymore$"

RocketHideout_B3F_Text_RocketGruntHideout18Defeat:
	.string "You're stronger than I thought$"

RocketHideout_B3F_Text_RocketGruntHideout18PostBattle:
	.string "I can't believe our ambush failed$"

RocketHideout_B3F_Text_RocketGruntHideout19Intro:
	.string "Huh you got past one. But here's another!$"

RocketHideout_B3F_Text_RocketGruntHideout19Defeat:
	.string "Oh no....$"

RocketHideout_B3F_Text_RocketGruntHideout19PostBattle:
	.string "I really thought we had a chance$"

RocketHideout_B3F_Text_RocketGruntHideout20Intro:
	.string "I'm our last hope? That does not scare\n"
	.string "me!$"

RocketHideout_B3F_Text_RocketGruntHideout20Defeat:
	.string "We really failed.$"

RocketHideout_B3F_Text_RocketGruntHideout20PostBattle:
	.string "This room is empty. We just wanted a room\n"
	.string "to suprise you$"