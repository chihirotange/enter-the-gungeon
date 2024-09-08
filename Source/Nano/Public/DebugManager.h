// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DebugObject.h"
#include "DebugManager.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDebugManager : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class NANO_API IDebugManager
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void RegisterDebugObject(UObject* DebugObject);

	virtual void RegisterDebugObject_Implementation(UObject* DebugObject) = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DrawDebug();

	virtual void DrawDebug_Implementation()= 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StopDrawDebug();

	virtual void StopDrawDebug_Implementation() = 0;
};
