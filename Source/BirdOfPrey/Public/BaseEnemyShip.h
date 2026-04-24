#pragma once
#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

class ABaseAIController;

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseAIController* ShipAIController;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();
};