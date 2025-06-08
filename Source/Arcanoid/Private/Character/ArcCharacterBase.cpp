// Project by Igor Rusakov.


#include "Character/ArcCharacterBase.h"


AArcCharacterBase::AArcCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AArcCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
