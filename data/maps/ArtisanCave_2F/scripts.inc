ArtisanCave_2F_MapScripts::
	.byte 0

ArtisanCave_2F_EventScript_Hex::
	trainerbattle_single TRAINER_HEX, ArtisanCave_2F_Text_HexIntro, ArtisanCave_2F_Text_HexDefeated, ArtisanCave_2F_EventScript_HexDefeated
	msgbox ArtisanCave_2F_Text_HexPostBattle, MSGBOX_AUTOCLOSE
	end

ArtisanCave_2F_EventScript_HexDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox ArtisanCave_2F_Text_HexPostBattle, MSGBOX_DEFAULT
	goto_if_unset FLAG_RECEIVED_MYSTIC_TICKET, ArtisanCave_2F_EventScript_GiveTicket
	release
	end


ArtisanCave_2F_EventScript_GiveTicket::
	checkitemspace ITEM_MYSTIC_TICKET, 1
	compare VAR_RESULT, FALSE
	vgoto_if_eq ArtisanCave_2F_MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage ArtisanCave_2F_Text_MysticTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

ArtisanCave_2F_MysticTicket_NoBagSpace: @ 8675397
	vmessage ArtisanCave_2F_Text_MysticTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

ArtisanCave_2F_Text_MysticTicketUseAtPort:
	.string "You can use it over at Lillycove.\n"
	.string "Good luck to you then.$"

ArtisanCave_2F_Text_MysticTicketBagFull:
	.string "Oh, I'm sorry, {PLAYER}.\n"
	.string "Your BAG's KEY ITEMS POCKET is full.\p"
	.string "Please store something on your PC,\n"
	.string "then come back for this.$"

ArtisanCave_2F_Text_HexIntro:
	.string "I have been looking for a strong\n"
	.string "trainer to finally find me!\p"
	.string "That is why I have been waiting here\n"
	.string "at the BATTLE FRONTIER.\p"
	.string "I have travelled across the lands for\n"
	.string "years training, honing my skills.\p"
	.string "Would you like to see?$"

ArtisanCave_2F_Text_HexDefeated:
	.string "I guess there is still much to learn$"

ArtisanCave_2F_Text_HexPostBattle:
	.string "Thank you. You have taught me what\n"
	.string "it truly means to be strong.\p"
	.string "I want to train to become just like you.\n"
	.string "I want to be the best in the world.\p"
	.string "As a gift, I want you to take this. You\n"
	.string "will only find treasures there.$"