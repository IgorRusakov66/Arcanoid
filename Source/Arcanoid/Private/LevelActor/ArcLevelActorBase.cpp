// Project by Igor Rusakov.


#include "LevelActor/ArcLevelActorBase.h"


AArcLevelActorBase::AArcLevelActorBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AArcLevelActorBase::BeginPlay()
{
	Super::BeginPlay();
}
