STATS = {
    MAIN_CAMERA = {
        LENGTH = 1600
        },
        
        AI_CHAN = {
        HP = 10,
        SPEED = 400,
        JUMP_VELOCITY = 1000,
        AIR_CONTROL = 0.05,
        GRAVITY_SCALE = 3,
    },

    PIG = {
        SPEED = 400,
        HP = 12,
    },

    PROJECTILE = {
        SPEED = 2000,
        DAMAGE = 1,
        LIFESPAN = 2,
    },

    HANDGUN = {
        BULLET = 6,
        RELOAD_TIME = 2,
        FIRERATE = 0.5,
    }
}
function get_stat(id, stat_name)
    -- return 1000
    return STATS[id][stat_name]
end