#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FSAgentInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FText Name;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AActor> BaseWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UAnimInstance* AnimInstance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UTexture2D* Image;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAgentInfoChange);

UCLASS()
class BIRDOFPREY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<FSAgentInfo> PlayerAgentInfo;

	UPROPERTY(BlueprintAssignable, Category = "BirdOfPrey")
	FOnAgentInfoChange OnAgentInfoChange;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo AgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FSAgentInfo GetPlayerAgentInfoFor(int PlayerControllerID, bool& Success);
};