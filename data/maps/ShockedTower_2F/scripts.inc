ShockedTower_2F_MapScripts::
	.byte 0

ShockedTower_2F_EventScript_Numaan::
	trainerbattle_single TRAINER_NUMAAN, ShockedTower_2F_Text_NumaanIntro, ShockedTower_2F_Text_NumaanDefeated, ShockedTower_2F_EventScript_NumaanDefeated
	msgbox ShockedTower_2F_Text_NumaanPostBattle, MSGBOX_AUTOCLOSE
	end

ShockedTower_2F_EventScript_NumaanDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox ShockedTower_2F_Text_NumaanPostBattle, MSGBOX_DEFAULT
	release
	end

ShockedTower_2F_EventScript_Monica::
	trainerbattle_single TRAINER_MONICA, ShockedTower_2F_Text_MonicaIntro, ShockedTower_2F_Text_MonicaDefeated, ShockedTower_2F_EventScript_MonicaDefeated
	msgbox ShockedTower_2F_Text_MonicaPostBattle, MSGBOX_AUTOCLOSE
	end

ShockedTower_2F_EventScript_MonicaDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox ShockedTower_2F_Text_MonicaPostBattle, MSGBOX_DEFAULT
	release
	end

ShockedTower_2F_Text_NumaanIntro:
	.string "FINALLY! A trainer has reached this far!\n"
	.string "I have been itching for a battle.\p"
	.string "Bring your best!$"

ShockedTower_2F_Text_NumaanDefeated:
	.string "First trainer in years and I lose\n"
	.string "like that? FUCK$"

ShockedTower_2F_Text_NumaanPostBattle:
	.string "The final sage is the strongest.\n"
	.string "However, I see greatness in you.$"

ShockedTower_2F_Text_MonicaIntro:
	.string "I am the last of the THUNDER SAGES!\n"
	.string "Impressive you have made it this far\p"
	.string "Let me warn you, I will not hold back!$"

ShockedTower_2F_Text_MonicaDefeated:
	.string "Master will not be pleased\n"
	.string "with our performance today...$"

ShockedTower_2F_Text_MonicaPostBattle:
	.string "I tried to protect our lord. I have not\n"
	.string "failed... You are just worthy\p"
	.string "Go, see for yourself who lies at\n"
	.string "the top.$"
