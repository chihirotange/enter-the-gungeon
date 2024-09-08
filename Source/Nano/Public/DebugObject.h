// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DebugObject.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UDebugObject : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class NANO_API IDebugObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DrawDebug();

	virtual void DrawDebug_Implementation() = 0;
};
