#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseGameInstance.h"
#include "Engine/EngineTypes.h"
#include "BaseGameAgent.generated.h"

class ABaseWeapon;

UCLASS()
class BIRDOFPREY_API ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* WeaponSpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseWeapon* Weapon;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> DefaultWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(ABaseWeapon* NewWeaponType);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float TakeDamage(float Damage);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Died(AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBounds();
};