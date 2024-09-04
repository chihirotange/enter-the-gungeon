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
        HP = 2,
    },

    PROJECTILE = {
        SPEED = 2000,
        DAMAGE = 1,
        LIFESPAN = 2,
    }
}
function get_stat(id, stat_name)
    return STATS[id][stat_name]
end