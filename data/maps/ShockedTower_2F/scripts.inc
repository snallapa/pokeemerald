ShockedTower_2F_MapScripts::
	.byte 0

ShockedTower_2F_EventScript_Numaan::
	trainerbattle_single TRAINER_NUMAAN, ShockedTower_2F_Text_NumaanIntro, ShockedTower_2F_Text_NumaanDefeated
	msgbox ShockedTower_2F_Text_NumaanPostBattle, MSGBOX_AUTOCLOSE
	end

ShockedTower_2F_EventScript_Monica::
	trainerbattle_single TRAINER_MONICA, ShockedTower_2F_Text_MonicaIntro, ShockedTower_2F_Text_MonicaDefeated
	msgbox ShockedTower_2F_Text_MonicaPostBattle, MSGBOX_AUTOCLOSE
	end


ShockedTower_2F_Text_NumaanIntro:
	.string "FINALLY! A trainer has\n"
	.string "reached this far. I have\p"
	.string "itching for a battle. Bring\n"
	.string "your best!$"

ShockedTower_2F_Text_NumaanDefeated:
	.string "First trainer in years and\n"
	.string "I lose like that? FUCK$"

ShockedTower_2F_Text_NumaanPostBattle:
	.string "The final sage is the strongest\n"
	.string "However, I see greatness in you$"

ShockedTower_2F_Text_MonicaIntro:
	.string "I am the last of the THUNDER\n"
	.string "SAGES. Impressive you have\p"
	.string "made it this far! Let me warn\n"
	.string "you, I will not hold back!$"

ShockedTower_2F_Text_MonicaDefeated:
	.string "Master will not be pleased\n"
	.string "with our performance today...$"

ShockedTower_2F_Text_MonicaPostBattle:
	.string "I tried to protect our lord. I\n"
	.string "have not failed... You may be\p"
	.string "worthy. Go, see for yourself who\n"
	.string "lies at the top.$"
