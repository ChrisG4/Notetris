// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveData.generated.h"

/**
 * 
 */
UCLASS()
class NOTETRIS_API USaveData : public USaveGame
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere)
	TArray<int32> ClassicHighScores;

	UPROPERTY(VisibleAnywhere)
	TArray<int32> QuinHighScores;

	UPROPERTY()
	FString SaveDataName;

	UPROPERTY()
	int32 UserIndex;

	USaveData();
};
