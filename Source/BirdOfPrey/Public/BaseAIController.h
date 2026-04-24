#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

class ABasePlayerController;

UCLASS()
class BIRDOFPREY_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* Target;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* ControlledAgent;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ShouldStartFire() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ShouldStopFire() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ShouldUpdateAim() const;
};