STATS = {
    MAIN_CAMERA = {
        SPRING_ARM_LENGTH = 1600
    },

    AI_CHAN = {
        HP = 10,
        SPEED = 500,
        JUMP_STAT = {
            VELOCITY = 1000,
            AIR_CONTROL = 0.05,
            GRAVITY_SCALE = 3,
        }

    },

    PIG = {
        SPEED = 400,
        HP = 2,
    },

    PROJECTILE = {
        SPEED = 1000,
        DAMAGE = 1,
        LIFESPAN = 2,
    }
}
function get_stat(id, stat_name)
    return STATS[id][stat_name]
end

-- CAMERA
function get_camera_info(key)
    return STATS["MAIN_CAMERA"][key]
end