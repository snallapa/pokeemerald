BurnedTower_1F_MapScripts::
	.byte 0


BurnedTower_1F_EventScript_Nikol::
	trainerbattle_single TRAINER_NIKOL, BurnedTower_1F_Text_NikolIntro, BurnedTower_1F_Text_NikolDefeated, BurnedTower_1F_EventScript_NikolDefeated
	msgbox BurnedTower_1F_Text_NikolPostBattle, MSGBOX_AUTOCLOSE
	end

BurnedTower_1F_EventScript_NikolDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox BurnedTower_1F_Text_NikolPostBattle, MSGBOX_DEFAULT
	release
	end

BurnedTower_1F_EventScript_Rari::
	trainerbattle_single TRAINER_RARI, BurnedTower_1F_Text_RariIntro, BurnedTower_1F_Text_RariDefeated, BurnedTower_1F_EventScript_RariDefeated
	msgbox BurnedTower_1F_Text_RariPostBattle, MSGBOX_AUTOCLOSE
	end

BurnedTower_1F_EventScript_RariDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox BurnedTower_1F_Text_RariPostBattle, MSGBOX_DEFAULT
	release
	end

BurnedTower_1F_EventScript_Reshma::
	trainerbattle_single TRAINER_RESHMA, BurnedTower_1F_Text_ReshmaIntro, BurnedTower_1F_Text_ReshmaDefeated, BurnedTower_1F_EventScript_ReshmaDefeated
	msgbox BurnedTower_1F_Text_ReshmaPostBattle, MSGBOX_AUTOCLOSE
	end

BurnedTower_1F_EventScript_ReshmaDefeated:: @ 8233AA0
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox BurnedTower_1F_Text_ReshmaPostBattle, MSGBOX_DEFAULT
	release
	end


BurnedTower_1F_Text_NikolIntro:
	.string "What's this?! A new trainer?!\n"
	.string "How did you find this temple?\p"
	.string "The details are irrelevant now\n"
	.string "that you are here.\p"
	.string "We are the FIRE SAGES. Protector\n"
	.string "of the great ENTEI\p"
	.string "You must defeat all of us to reach\n"
	.string "our ruler. I welcome you then!$"

BurnedTower_1F_Text_NikolDefeated:
	.string "Well, that was not what I expected$"

BurnedTower_1F_Text_NikolPostBattle:
	.string "You are not here by mistake. Go\n"
	.string "forth and meet my friends.$"

BurnedTower_1F_Text_RariIntro:
	.string "Why hello there! About time we\n"
	.string "had some fresh meat\p"
	.string "Show me what you got!$"

BurnedTower_1F_Text_RariDefeated:
	.string "I hope ENTEI does not find out\n"
	.string "about this.$"

BurnedTower_1F_Text_RariPostBattle:
	.string "The other sages are stronger...$"

BurnedTower_1F_Text_ReshmaIntro:
	.string "I am the barrier to the next\n"
	.string "floor. ENTEI does not like \p"
	.string "any visitors. If you wish to see\n"
	.string "him you must go through me!$"

BurnedTower_1F_Text_ReshmaDefeated:
	.string "My my... we have a strong one$"

BurnedTower_1F_Text_ReshmaPostBattle:
	.string "I am not the last in line.\n"
	.string "Proceed to the next floor.$"
