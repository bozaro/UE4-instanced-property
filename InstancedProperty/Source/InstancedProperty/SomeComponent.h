// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "SomeInstanced.h"
#include "SomeComponent.generated.h"

UCLASS(MinimalAPI, BlueprintType, Const, NotBlueprintable, collapseCategories, ClassGroup = Test, meta = (BlueprintSpawnableComponent))
class USomeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadOnly, Category = Test)
	USomeInstanced *InstancedFoo;
};
