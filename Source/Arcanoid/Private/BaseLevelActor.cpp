// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseLevelActor.h"

// Sets default values
ABaseLevelActor::ABaseLevelActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABaseLevelActor::BeginPlay()
{
	Super::BeginPlay();
	
}
