// Project by Igor Rusakov.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ArcCharacterBase.generated.h"

UCLASS(Abstract)
class ARCANOID_API AArcCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AArcCharacterBase();

protected:
	virtual void BeginPlay() override;

};
