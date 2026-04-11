#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

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
	TArray<AActor*> PowerUpList;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetDistanceTravelled();
};