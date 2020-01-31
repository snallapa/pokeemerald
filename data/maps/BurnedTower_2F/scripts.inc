BurnedTower_2F_MapScripts::
	.byte 0

BurnedTower_2F_EventScript_Angela::
	trainerbattle_single TRAINER_ANGELA, BurnedTower_2F_Text_AngelaIntro, BurnedTower_2F_Text_AngelaDefeated, BurnedTower_2F_EventScript_AngelaDefeated
	msgbox BurnedTower_2F_Text_AngelaPostBattle, MSGBOX_AUTOCLOSE
	end

BurnedTower_2F_EventScript_AngelaDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox BurnedTower_2F_Text_AngelaPostBattle, MSGBOX_DEFAULT
	release
	end

BurnedTower_2F_EventScript_Rosa::
	trainerbattle_single TRAINER_ROSA, BurnedTower_2F_Text_RosaIntro, BurnedTower_2F_Text_RosaDefeated, BurnedTower_2F_EventScript_RosaDefeated
	msgbox BurnedTower_2F_Text_RosaPostBattle, MSGBOX_AUTOCLOSE
	end

BurnedTower_2F_EventScript_RosaDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox BurnedTower_2F_Text_RosaPostBattle, MSGBOX_DEFAULT
	release
	end

BurnedTower_2F_Text_AngelaIntro:
	.string "Interesting... A worthy opponent?\n"
	.string "No small talk here. Let's fight!$"

BurnedTower_2F_Text_AngelaDefeated:
	.string "..............\n"
	.string "fUCK$"

BurnedTower_2F_Text_AngelaPostBattle:
	.string "The final sage is the strongest.\n"
	.string "Good luck then...$"

BurnedTower_2F_Text_RosaIntro:
	.string "I am the last FIRE SAGE!\n"
	.string "I have not seen anyone in years.\p"
	.string "Finally, a chance to make ENTEI proud$"

BurnedTower_2F_Text_RosaDefeated:
	.string "ENTEI... forgive me.$"

BurnedTower_2F_Text_RosaPostBattle:
	.string "Even the sages do not disturb\n"
	.string "ENTEI. I warn you of his might.\p"
	.string "Proceed at your own caution as\n"
	.string "you have earned the right.$"
