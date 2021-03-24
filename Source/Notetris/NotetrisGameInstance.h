// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "HighScores.h"
#include "NotetrisGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class NOTETRIS_API UNotetrisGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:

	HighScores HighScoreData;

public:
	UNotetrisGameInstance();

	void SaveHighScores();
	void LoadHighScores();

	UFUNCTION(BlueprintCallable)
	TArray<int32>& GetClassicHighScores();

	UFUNCTION(BlueprintCallable)
	TArray<int32>& GetQuinHighScores();

	HighScores& GetHighScoreData();
	
};
