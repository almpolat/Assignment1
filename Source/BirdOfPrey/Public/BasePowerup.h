#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePowerup : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();
};