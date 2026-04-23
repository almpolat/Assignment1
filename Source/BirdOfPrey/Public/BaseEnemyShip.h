#pragma once
#include "CoreMinimal.h"
#include "BaseShip.h"
#include "AIController.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AAIController* ShipAIController;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();
};