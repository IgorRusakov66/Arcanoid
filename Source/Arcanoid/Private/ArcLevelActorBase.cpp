// Project by Igor Rusakov.


#include "ArcLevelActorBase.h"


AArcLevelActorBase::AArcLevelActorBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AArcLevelActorBase::BeginPlay()
{
	Super::BeginPlay();
}
