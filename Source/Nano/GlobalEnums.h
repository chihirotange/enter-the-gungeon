#pragma once

#include "GlobalEnums.generated.h"

UENUM(BlueprintType)
enum EStat
{
	HP UMETA(DisplayName = "HP"),

	SPEED UMETA(DisplayName = "SPEED"),

	LENGTH UMETA(DisplayName = "LENGTH"),

	JUMP_STAT UMETA(DisplayName = "JUMP_STAT"),

	DAMAGE UMETA(DiplayName = "DAMAGE"),

	LIFESPAN UMETA(DisplayName = "LIFESPAN"),

	JUMP_VELOCITY UMETA(DisplayName = "JUMP_VELOCITY"),

	AIR_CONTROL UMETA(DisplayName = "AIR_CONTROL"),

	GRAVITY_SCALE UMETA(DisplayName = "GRAVITY_SCALE"),

	BULLET UMETA(DisplayName = "BULLET"),

	FIRERATE UMETA(DisplayName = "FIRERATE"),

	RELOAD_TIME UMETA(DisplayName = "RELOAD_TIME")
};

UENUM(BlueprintType)
enum ETeam
{
	TEAM_NEUTRAL UMETA(DisplayName = "TEAM_NEUTRAL"),
	TEAM_PLAYER UMETA(DisplayName = "TEAM_PLAYER"),
	TEAM_ENEMY UMETA(DisplayName = "TEAM_ENEMY"),
};