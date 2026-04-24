#pragma once
#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "BaseShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;
};