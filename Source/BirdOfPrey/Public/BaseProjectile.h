#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

class UStaticMeshComponent;
class UCapsuleComponent;
class UProjectileMovementComponent;
class UParticleSystem;
class USoundBase;
class ABaseGameAgent;

UCLASS()
class BIRDOFPREY_API ABaseProjectile : public AActor
{
    GENERATED_BODY()

public:

    ABaseProjectile();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UStaticMeshComponent* Mesh;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UCapsuleComponent* Capsule;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UProjectileMovementComponent* ProjectileMovement;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Damage;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckRadius;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* GroundTarget;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* ImpactSound;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void InitialiseProjectile(FVector Direction, float Speed);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    FVector GetInitialVelocity();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void DealDamageTo(AActor* Damaging, float DamageAmount);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    ECollisionChannel GetInstigatorCollisionChannel();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForGroundUnitTarget();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool ShouldCheckForGroundTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToTarget();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool IsEnemyProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToDesiredZ();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};