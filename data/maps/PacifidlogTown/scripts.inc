PacifidlogTown_MapScripts:: @ 81EBAB1
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition: @ 81EBABC
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume: @ 81EBAC0
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_RocketMember:: @ 81EBAC3
	goto_if_set FLAG_IS_CHAMPION, PacifidlogTown_EventScript_RocketRefused
	trainerbattle_single TRAINER_ROCKET_GUARD, PacifidlogTown_Text_RocketGuardIntro, PacifidlogTown_Text_RocketGuardDefeat, PacifidlogTown_EventScript_RocketMember_Defeated
	release
	end

PacifidlogTown_EventScript_RocketMember_Defeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox PacifidlogTown_Text_RocketGuardPostBattle, MSGBOX_DEFAULT
	applymovement 3 PacifidlogTown_Movement_RocketGuardGoingExit
	waitmovement 0
	opendoor 2, 12
	waitdooranim
	applymovement 3 PacifidlogTown_Movement_RocketGuardExit
	waitmovement 0
	closedoor 2, 12
	waitdooranim
	setflag FLAG_ROCKET_GUARD
	release
	end

PacifidlogTown_Movement_RocketGuardGoingExit: @ 823504E
	walk_in_place_up
	step_end

PacifidlogTown_Movement_RocketGuardExit: @ 81E7FA1
	walk_up
	set_invisible
	step_end


PacifidlogTown_EventScript_RocketRefused:
	lock
	faceplayer
	msgbox PacifidlogTown_Text_RocketComeBack, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_EventScript_Girl:: @ 81EBACC
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman:: @ 81EBAD5
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign:: @ 81EBADE
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent: @ 81EBAE7
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"

PacifidlogTown_Text_NeatHousesOnWater: @ 81EBB6C
	.string "See, isn't it neat?\n"
	.string "These houses are on water!\p"
	.string "I was born here!$"

PacifidlogTown_Text_SkyPillarTooScary: @ 81EBBAC
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"

PacifidlogTown_Text_TownSign: @ 81EBC7A
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"

PacifidlogTown_Text_RocketComeBack:
	.string "Ugh, you again! I hate how many times\n"
	.string "I have seen you.\p"
	.string "I know you played a role in destroying\n"
	.string "TEAM AQUA and TEAM MAGMA plans\p"
	.string "If you think you are getting in here\n"
	.string "then you are sorely mistaken.\p"
	.string "I guess if you were champion I would care\n"
	.string "but you are not worth my time\p"
	.string "Just leave me alone!!$"

PacifidlogTown_Text_RocketGuardIntro:
	.string "I honestly think I have never hated\n"
	.string "someone more than you.\p"
	.string "Wow, now you are champion too! I guess\n"
	.string "that's cool. I'm not supposed to do this\l"
	.string "but I will let you in if you can beat me\n"
	.string "again, okay?\p"
	.string "I am much stronger now so be afraid!$"

PacifidlogTown_Text_RocketGuardDefeat:
	.string "Oh fuck... I think I just lost my job.$"

PacifidlogTown_Text_RocketGuardPostBattle:
	.string "I probably should not have been so\n"
	.string "cocky$"