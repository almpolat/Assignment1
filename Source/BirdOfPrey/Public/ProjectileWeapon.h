#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

class ABaseProjectile;

UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public ABaseWeapon
{
    GENERATED_BODY()

public:

    AProjectileWeapon();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseProjectile* ProjectileType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireTime;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    int32 NumShots;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsFiring;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    ABaseProjectile* SpawnProjectile(FTransform SpawnTransform);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    FTransform GetProjectileSpawnTransform(int32 ShotNumber);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool ReadyToFire();

    virtual bool IsFiring() override;
};