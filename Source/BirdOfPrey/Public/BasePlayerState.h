#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int32 RemainingLives;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasRemainingLives() const;
};