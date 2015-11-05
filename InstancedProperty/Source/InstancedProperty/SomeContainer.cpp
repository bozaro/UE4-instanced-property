// Fill out your copyright notice in the Description page of Project Settings.

#include "InstancedProperty.h"
#include "SomeContainer.h"

USomeContainer::USomeContainer(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ComponentFoo = CreateDefaultSubobject<USomeComponent>(TEXT("SomeComponent_Foo"));
}
