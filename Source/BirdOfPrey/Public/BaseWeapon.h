#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS()
class BIRDOFPREY_API ABaseWeapon : public AActor
{
    GENERATED_BODY()

public:

    ABaseWeapon();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* FireParticleEffect;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* FireSoundCue;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bRequiresAimFor;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsAutomatic;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayFireEffects();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    FTransform GetFireEffectSpawnTransform();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool HasFinishedFiring();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    virtual bool IsFiring();
};