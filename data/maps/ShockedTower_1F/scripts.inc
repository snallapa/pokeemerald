ShockedTower_1F_MapScripts::
	.byte 0


ShockedTower_1F_EventScript_Lee::
	trainerbattle_single TRAINER_LEE, ShockedTower_1F_Text_LeeIntro, ShockedTower_1F_Text_LeeDefeated, ShockedTower_1F_EventScript_LeeDefeated
	msgbox ShockedTower_1F_Text_LeePostBattle, MSGBOX_AUTOCLOSE
	end

ShockedTower_1F_EventScript_LeeDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox ShockedTower_1F_Text_LeePostBattle, MSGBOX_DEFAULT
	release
	end

ShockedTower_1F_EventScript_Mariam::
	trainerbattle_single TRAINER_MARIAM, ShockedTower_1F_Text_MariamIntro, ShockedTower_1F_Text_MariamDefeated, ShockedTower_1F_EventScript_MariamDefeated
	msgbox ShockedTower_1F_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
	end

ShockedTower_1F_EventScript_MariamDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox ShockedTower_1F_Text_MariamPostBattle, MSGBOX_DEFAULT
	release
	end

ShockedTower_1F_EventScript_Rio::
	trainerbattle_single TRAINER_RIO, ShockedTower_1F_Text_RioIntro, ShockedTower_1F_Text_RioDefeated, ShockedTower_1F_EventScript_RioDefeated
	msgbox ShockedTower_1F_Text_RioPostBattle, MSGBOX_AUTOCLOSE
	end

ShockedTower_1F_EventScript_RioDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox ShockedTower_1F_Text_RioPostBattle, MSGBOX_DEFAULT
	release
	end


ShockedTower_1F_Text_LeeIntro:
	.string "I see a new challenger has\n"
	.string "approached. WE ARE THE \p"
	.string "THUNDER SAGES. PROTECTORS\n"
	.string "OF OUR MASTER. Only those \p"
	.string "who are worthy will be allowed\n"
	.string "go through and meet our lord.\p"
	.string "Let me look inside your soul!$"

ShockedTower_1F_Text_LeeDefeated:
	.string "I am only the first.\n"
	.string "More challenges await...$"

ShockedTower_1F_Text_LeePostBattle:
	.string "You may proceed. It will only\n"
	.string "get more difficult from here.$"

ShockedTower_1F_Text_MariamIntro:
	.string "I heard a new trainer has entered!\n"
	.string "Try me, bitch!!$"

ShockedTower_1F_Text_MariamDefeated:
	.string "I have failed you master...$"

ShockedTower_1F_Text_MariamPostBattle:
	.string "Go on then, only three\n"
	.string "remain.$"

ShockedTower_1F_Text_RioIntro:
	.string "We protect our lord from\n"
	.string "outsiders like you.\p"
	.string "You can only wish to get a glimpse\n"
	.string "of our master's power!$"

ShockedTower_1F_Text_RioDefeated:
	.string "Can this be! Maybe you are worthy...$"

ShockedTower_1F_Text_RioPostBattle:
	.string "I underestimated you...\n"
	.string "Proceed to the next floor.$"
