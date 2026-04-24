#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

class UPointLightComponent;
class UAudioComponent;
class ABasePlayerController;

UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:

	APlayerShip();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UAudioComponent* HoverAudio;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTimer;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasDiedRecently();
};