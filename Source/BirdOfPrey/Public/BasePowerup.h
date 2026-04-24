#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

class UStaticMeshComponent;
class USoundCue;
class UParticleSystem;
class APlayerShip;

UCLASS()
class BIRDOFPREY_API ABasePowerup : public AActor
{
    GENERATED_BODY()

public:

    ABasePowerup();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UStaticMeshComponent* Mesh;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* PickUpSoundCue;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* PickUpParticleSystem;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Apply(APlayerShip* PlayerShip);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayEffects();
};