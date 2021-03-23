
// Fill out your copyright notice in the Description page of Project Settings.


#include "HighScores.h"
#include "Definitions.h"

HighScores::HighScores()
{
	ClassicTimeTrialHighScores.Init(0, HIGH_SCORE_SIZE);

	QuinTimeTrialHighScores.Init(0, HIGH_SCORE_SIZE);
}

HighScores::~HighScores()
{
}

bool HighScores::IsNewHighScore(int32 Score, TArray<int32>& CurrentHighScores)
{

	int32 LowestHighScore = CurrentHighScores[HIGH_SCORE_SIZE - 1];

	if (Score > LowestHighScore)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void HighScores::AddHighScore(int32 NewHighScore, TArray<int32>& CurrentHighScores)
{
	if (IsNewHighScore(NewHighScore, CurrentHighScores))
	{
		CurrentHighScores.RemoveAt(HIGH_SCORE_SIZE - 1);

		for (int i{ HIGH_SCORE_SIZE - 2 }; i >= 0; i--)
		{
			if (NewHighScore < CurrentHighScores[i])
			{
				CurrentHighScores.Insert(NewHighScore, i + 1);

				return;
			}
		}

			CurrentHighScores.Insert(NewHighScore, 0);
	}
}

TArray<int32>& HighScores::GetClassicHighScores()
{
	return this->ClassicTimeTrialHighScores;
}

TArray<int32>& HighScores::GetQuinHighScores()
{
	return this->QuinTimeTrialHighScores;
}

void HighScores::PrintClassicScores()
{
	for (int i{ 0 }; i < ClassicTimeTrialHighScores.Num(); i++)
	{
		print(FString::FromInt(ClassicTimeTrialHighScores[i]));
	}
}