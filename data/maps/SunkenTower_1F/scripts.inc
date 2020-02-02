SunkenTower_1F_MapScripts::
	.byte 0


SunkenTower_1F_EventScript_Jake::
	trainerbattle_single TRAINER_JAKE, SunkenTower_1F_Text_JakeIntro, SunkenTower_1F_Text_JakeDefeated, SunkenTower_1F_EventScript_JakeDefeated
	msgbox SunkenTower_1F_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end

SunkenTower_1F_EventScript_JakeDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox SunkenTower_1F_Text_JakePostBattle, MSGBOX_DEFAULT
	release
	end

SunkenTower_1F_EventScript_Charles::
	trainerbattle_single TRAINER_CHARLES, SunkenTower_1F_Text_CharlesIntro, SunkenTower_1F_Text_CharlesDefeated, SunkenTower_1F_EventScript_CharlesDefeated
	msgbox SunkenTower_1F_Text_CharlesPostBattle, MSGBOX_AUTOCLOSE
	end

SunkenTower_1F_EventScript_CharlesDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox SunkenTower_1F_Text_CharlesPostBattle, MSGBOX_DEFAULT
	release
	end

SunkenTower_1F_EventScript_Frank::
	trainerbattle_single TRAINER_FRANK, SunkenTower_1F_Text_FrankIntro, SunkenTower_1F_Text_FrankDefeated, SunkenTower_1F_EventScript_FrankDefeated
	msgbox SunkenTower_1F_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end

SunkenTower_1F_EventScript_FrankDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox SunkenTower_1F_Text_FrankPostBattle, MSGBOX_DEFAULT
	release
	end


SunkenTower_1F_Text_JakeIntro:
	.string "About time someone stumbled into this\n"
	.string "sacred palace.\p"
	.string "We are the WATER SAGES! Protectors of\n"
	.string "of our queen, SUICUNE!\p"
	.string "If you want to meet them, you will have\n"
	.string "to get through all of us!$"

SunkenTower_1F_Text_JakeDefeated:
	.string "Well fought...$"

SunkenTower_1F_Text_JakePostBattle:
	.string "My brothers are stronger... I still\n"
	.string "wish you the best.$"

SunkenTower_1F_Text_CharlesIntro:
	.string "Interesting... I will not let you down,\n"
	.string "SUICUNE!$"

SunkenTower_1F_Text_CharlesDefeated:
	.string "All I have are regrets.$"

SunkenTower_1F_Text_CharlesPostBattle:
	.string "Beating me is no achievement.\n"
	.string "Go on to the others...$"

SunkenTower_1F_Text_FrankIntro:
	.string "Wonderful, a visitor! Let us see what you\n"
	.string "got.$"

SunkenTower_1F_Text_FrankDefeated:
	.string "Don't look at me...$"

SunkenTower_1F_Text_FrankPostBattle:
	.string "I wish I had trained more. Proceed to \n"
	.string "the next floor.$"
