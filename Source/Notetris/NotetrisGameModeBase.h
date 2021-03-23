// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SaveData.h"
#include "HighScores.h"
#include "NotetrisGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NOTETRIS_API ANotetrisGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:

	HighScores HighScoreData;

public:

	void BeginPlay() override;

	void SaveHighScores();

	void LoadHighScores();

	UFUNCTION(BlueprintCallable)
	TArray<int32>& GetClassicHighScores();

	UFUNCTION(BlueprintCallable)
	TArray<int32>& GetQuinHighScores();

	HighScores& GetHighScoreData();
};
