// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcCharacterBase.h"

// Sets default values
AArcCharacterBase::AArcCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArcCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArcCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AArcCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

