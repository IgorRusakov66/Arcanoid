// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseLevelActor.generated.h"

UCLASS()
class ARCANOID_API ABaseLevelActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseLevelActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
