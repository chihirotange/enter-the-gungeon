// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystem/SpawnerSubsystem.h"

AActor* USpawnerSubsystem::SpawnActor(UClass* OfClass, FName ID, FTransform Transform)
{
	AActor* SpawnedActor = GetWorld()->SpawnActor(OfClass);
	if (IsValid(SpawnedActor))
	{
		SpawnedActor->SetActorTransform(Transform);
	}
	return SpawnedActor;
}