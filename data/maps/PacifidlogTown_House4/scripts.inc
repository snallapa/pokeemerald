PacifidlogTown_House4_MapScripts:: @ 8203F4B
	.byte 0

PacifidlogTown_House4_EventScript_LittleGirl:: @ 8203F4C
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Woman:: @ 8203F55
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Boy:: @ 8203F5E
	lock
	faceplayer
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_NPC
	end

PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon: @ 8203F93
	.string "oh! A visitor... are you with TEAM ROCKET\n"
	.string "as well\p"
	.string "You're not!!! Please help us... They\n"
	.string "took our home away from us.\p"
	.string "They just barged in and we were \n"
	.string "powerless to stop. They're secret base\l"
	.string "is in there. I believe you can save us!$"

PacifidlogTown_House4_Text_SkyPokemon: @ 8204017
	.string "I am so scared of them...$"

PacifidlogTown_House4_Text_WhereDidYouComeFrom: @ 8204035
	.string "I want my house back :/$"