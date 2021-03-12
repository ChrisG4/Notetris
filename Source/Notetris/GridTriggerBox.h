// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text);

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "DrawDebugHelpers.h"
#include "GridTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class NOTETRIS_API AGridTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	int32 GridIndex = 0;

	UPROPERTY(VisibleAnywhere)
	bool bIsSpaceOccupied = false;
	
public:
	AGridTriggerBox();

	UFUNCTION()
	void OnBlockBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnBlockEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void SetIsSpaceOccupied(bool IsSpaceOccupied);
	
	UFUNCTION()
	bool GetIsSpaceOccupied();

	UFUNCTION()
	void SetGridIndex(int32 NewGridIndex);

};
