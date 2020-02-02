SunkenTower_2F_MapScripts::
	.byte 0

SunkenTower_2F_EventScript_Kenny::
	trainerbattle_single TRAINER_KENNY, SunkenTower_2F_Text_KennyIntro, SunkenTower_2F_Text_KennyDefeated, SunkenTower_2F_EventScript_KennyDefeated
	msgbox SunkenTower_2F_Text_KennyPostBattle, MSGBOX_AUTOCLOSE
	end

SunkenTower_2F_EventScript_KennyDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox SunkenTower_2F_Text_KennyPostBattle, MSGBOX_DEFAULT
	release
	end

SunkenTower_2F_EventScript_Chance::
	trainerbattle_single TRAINER_CHANCE, SunkenTower_2F_Text_ChanceIntro, SunkenTower_2F_Text_ChanceDefeated, SunkenTower_2F_EventScript_ChanceDefeated
	msgbox SunkenTower_2F_Text_ChancePostBattle, MSGBOX_AUTOCLOSE
	end

SunkenTower_2F_EventScript_ChanceDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox SunkenTower_2F_Text_ChancePostBattle, MSGBOX_DEFAULT
	release
	end

SunkenTower_2F_Text_KennyIntro:
	.string "Wow, someone who has made it to\n"
	.string "the second floor! Show me how!$"

SunkenTower_2F_Text_KennyDefeated:
	.string "Now it all makes sense...$"

SunkenTower_2F_Text_KennyPostBattle:
	.string "Hopefully, my brother atones for my\n"
	.string "mistake.$"

SunkenTower_2F_Text_ChanceIntro:
	.string "I am the last WATER SAGE! Please,\n"
	.string "make this worth my time.$"

SunkenTower_2F_Text_ChanceDefeated:
	.string "Oh no...$"

SunkenTower_2F_Text_ChancePostBattle:
	.string "SUICUNE is no joke. It will not\n"
	.string "be an easy battle.\p"
	.string "Be careful, but you may proceed\n"
	.string "to the next floor$"
