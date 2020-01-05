MeteorFalls_StevensCave_MapScripts:: @ 823B181
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven:: @ 823B182
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	vgoto MeteorFalls_StevensCave_EventScript_Defeated
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	goto_if_unset FLAG_RECEIVED_AURORA_TICKET, MeteorFalls_StevensCave_EventScript_GiveTicket
	release
	end

MeteorFalls_StevensCave_EventScript_GiveTicket::
	checkitemspace ITEM_AURORA_TICKET, 1
	compare VAR_RESULT, FALSE
	vgoto_if_eq MeteorFalls_StevensCave_AuroraTicket_NoBagSpace
	giveitem_std ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage MeteorFalls_StevensCave_Text_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

MeteorFalls_StevensCave_AuroraTicket_NoBagSpace: @ 8675397
	vmessage MeteorFalls_StevensCave_Text_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

MeteorFalls_StevensCave_Text_AuroraTicketUseAtPort:
	.string "It appears to be for use at the\n"
	.string "LILYCOVE CITY port.\p"
	.string "Have fun over there, you will like\n"
	.string "what you find$"

MeteorFalls_StevensCave_Text_AuroraTicketBagFull:
	.string "Oh, I'm sorry, {PLAYER}.\n"
	.string "Your BAG's KEY ITEMS POCKET is full.\p"
	.string "Please store something on your PC,\n"
	.string "then come back for this.$"

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst: @ 823B1E1
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm surprised you found me here\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock guy?\p"
	.string "Well, that is just insulting\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_StevenDefeat: @ 823B32D
	.string "You…\n"
	.string "I had no idea you could do that…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue: @ 823B358
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Haha, even I couldn't tell you that ho.\p"
	.string "I came across this and now I hand\nit to you$"
