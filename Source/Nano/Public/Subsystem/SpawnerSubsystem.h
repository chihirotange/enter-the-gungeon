// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SpawnerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class NANO_API USpawnerSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	AActor* SpawnActor(UClass* OfClass, FName ID, FTransform Transform);
};
