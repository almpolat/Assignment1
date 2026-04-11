#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* Target;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* ControlledAgent;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim();
};