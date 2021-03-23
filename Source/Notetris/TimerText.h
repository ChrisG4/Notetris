// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicText.h"
#include "GameGrid.h"
#include "TimerText.generated.h"

/**
 * 
 */
UCLASS()
class NOTETRIS_API ATimerText : public ADynamicText
{
	GENERATED_BODY()
	
protected:

	float GameTime = 0.0f;

	FString LeadingZeros = FString("0000");
	FString DisplayZeros;

	FString DisplayTime;

	UPROPERTY(EditAnywhere)
	bool IsCountingUp = true;

	UPROPERTY(EditAnywhere)
	float StartingTime;

	UPROPERTY(EditAnywhere)
	AGameGrid* CurrentGameGrid;

public:
	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	void ConvertFloatToTime(float DirtyFloat);

	float GetGameTime();

	bool HasTimeRunOut();
};
