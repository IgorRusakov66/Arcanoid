// Project by Igor Rusakov.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArcLevelActorBase.generated.h"

UCLASS()
class ARCANOID_API AArcLevelActorBase : public AActor
{
	GENERATED_BODY()
	
public:
	AArcLevelActorBase();

protected:
	virtual void BeginPlay() override;

};
