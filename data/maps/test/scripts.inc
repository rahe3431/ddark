test_MapScripts::
	.byte 0

SetFollower::
    lock
    faceplayer
    setfollower 2 0x100   @ cause NPC (local ID = 2) to follow you with a custom following script
    release
    end