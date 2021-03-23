// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class NOTETRIS_API HighScores
{

private:

	TArray<int32> ClassicTimeTrialHighScores;

	TArray<int32> QuinTimeTrialHighScores;

public:
	HighScores();
	~HighScores();

	bool IsNewHighScore(int32 Score, TArray<int32>& CurrentHighScores);
	void AddHighScore(int32 NewHighScore, TArray<int32>& CurrentHighScores);

	UFUNCTION(BlueprintCallable)
	TArray<int32>& GetClassicHighScores();
	UFUNCTION(BlueprintCallable)
	TArray<int32>& GetQuinHighScores();

	void PrintClassicScores();
};
