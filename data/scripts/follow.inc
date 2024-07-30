SetFollower::
    lock
    faceplayer
    loadword 0 NewScript
    setfollower 1 0x100   @ cause NPC (local ID = 1) to follow you with a custom following script
    release
    end

NewScript:
    msgbox FollowYou MSGBOX_SIGN
    end
FollowYou:
    .string "I'll keep following you!$"