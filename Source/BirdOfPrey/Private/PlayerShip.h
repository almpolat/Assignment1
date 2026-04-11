#pragma once
#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipAxisAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TakeDamage();
};