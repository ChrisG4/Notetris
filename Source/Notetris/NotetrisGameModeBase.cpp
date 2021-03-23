// Copyright Epic Games, Inc. All Rights Reserved.


#include "NotetrisGameModeBase.h"
#include "Definitions.h"
#include "Kismet/GameplayStatics.h"

void ANotetrisGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	LoadHighScores();

}

void ANotetrisGameModeBase::SaveHighScores()
{
	if (USaveData* SaveDataInstance = Cast<USaveData>(UGameplayStatics::CreateSaveGameObject(USaveData::StaticClass())))
	{
		SaveDataInstance->ClassicHighScores = HighScoreData.GetClassicHighScores();
		SaveDataInstance->QuinHighScores = HighScoreData.GetQuinHighScores();

		if (UGameplayStatics::SaveGameToSlot(SaveDataInstance, SaveDataInstance->SaveDataName, SaveDataInstance->UserIndex))
		{
			print("Save Succesful");
		}
	}

}

void ANotetrisGameModeBase::LoadHighScores()
{
	if (USaveData* LoadedData = Cast<USaveData>(UGameplayStatics::LoadGameFromSlot(SAVE_DATA_NAME, SAVE_DATA_USER_INDEX)))
	{
		print("Game Loaded");

		HighScoreData.GetClassicHighScores() = LoadedData->ClassicHighScores;
		HighScoreData.GetQuinHighScores() = LoadedData->QuinHighScores;

		HighScoreData.PrintClassicScores();
	}

}

TArray<int32>& ANotetrisGameModeBase::GetClassicHighScores()
{
	return HighScoreData.GetClassicHighScores();
}

TArray<int32>& ANotetrisGameModeBase::GetQuinHighScores()
{
	return HighScoreData.GetQuinHighScores();
}

HighScores& ANotetrisGameModeBase::GetHighScoreData()
{
	return this->HighScoreData;
}
