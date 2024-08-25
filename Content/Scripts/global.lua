STATS = {
    MAIN_CAMERA = {
        SPRING_ARM_LENGTH = 500
    },
    AI_CHAN = {
        HP = 234,
        MOVE_SPEED = 500
    },
    PROJECTILE = {
        SPEED = 1000
    }
}
function get_stat(id, stat_name)
    return STATS[id][stat_name]
end

-- CAMERA
function get_camera_info(key)
    return STATS["MAIN_CAMERA"][key]
end