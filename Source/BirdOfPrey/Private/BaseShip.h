#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseGameInstance.h"
#include "BaseShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseShip : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AActor> DefaultWeapon;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool CheckForOutOfBounds;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsDistance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocket;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DeathParticle;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* DeathSoundCue;
};