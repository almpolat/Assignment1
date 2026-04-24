#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameAgent.h"
#include "BaseGameMode.generated.h"

class ABasePlayerController;
class ABasePowerup;

UCLASS()
class BIRDOFPREY_API ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AActor* WorldCameraActor;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<TSubclassOf<ABasePowerup>> PowerUpList;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	AActor* GetWorldCameraActor() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetPowerUpSpawnLocation(AActor* Enemy, AActor* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TSubclassOf<ABaseGameAgent> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetDistanceTravelled() const;
};