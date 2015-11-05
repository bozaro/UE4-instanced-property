// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SomeComponent.h"
#include "SomeContainer.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced)
class USomeContainer : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Test)
	USomeComponent* ComponentFoo;
};
