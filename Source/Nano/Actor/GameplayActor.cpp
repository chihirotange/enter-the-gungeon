// Fill out your copyright notice in the Description page of Project Settings.


#include "Nano/Actor/GameplayActor.h"

// Sets default values
AGameplayActor::AGameplayActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGameplayActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGameplayActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

