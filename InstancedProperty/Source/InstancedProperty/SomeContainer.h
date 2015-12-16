#pragma once

#include "SomeInstanced.h"
#include "SomeContainer.generated.h"

UCLASS(Blueprintable, BlueprintType, editinlinenew, DefaultToInstanced)
class USomeContainer : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadOnly, Category = Test)
	USomeInstanced *InstancedFoo;
};
