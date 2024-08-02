.set LOCALID_ANABEL, 1

test_MapScripts::
	.byte 0

RevealFollower::
    addobject LOCALID_ANABEL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FART
	release
	end

SetFollower::
    lock
    faceplayer
    setfollower 2 0x100   @ cause NPC (local ID = 2) to follow you with a custom following script
    release
    end

Sign::
    msgbox Ree MSGBOX_SIGN
    end 

Ree::
    .string "fart!$"