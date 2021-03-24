// Fill out your copyright notice in the Description page of Project Settings.


#include "NotetrisGameInstance.h"
#include "Definitions.h"
#include "Kismet/GameplayStatics.h"
#include "SaveData.h"

UNotetrisGameInstance::UNotetrisGameInstance()
{
	LoadHighScores();
}

void UNotetrisGameInstance::SaveHighScores()
{
	if (USaveData* SaveDataInstance = Cast<USaveData>(UGameplayStatics::CreateSaveGameObject(USaveData::StaticClass())))
	{
		SaveDataInstance->ClassicHighScores = HighScoreData.GetClassicHighScores();
		SaveDataInstance->QuinHighScores = HighScoreData.GetQuinHighScores();

		if (UGameplayStatics::SaveGameToSlot(SaveDataInstance, SaveDataInstance->SaveDataName, SaveDataInstance->UserIndex))
		{

		}
	}
}

void UNotetrisGameInstance::LoadHighScores()
{
	if (USaveData* LoadedData = Cast<USaveData>(UGameplayStatics::LoadGameFromSlot(SAVE_DATA_NAME, SAVE_DATA_USER_INDEX)))
	{
		HighScoreData.GetClassicHighScores() = LoadedData->ClassicHighScores;
		HighScoreData.GetQuinHighScores() = LoadedData->QuinHighScores;

		print("Scores Loaded");
	}
}

TArray<int32>& UNotetrisGameInstance::GetClassicHighScores()
{
	return HighScoreData.GetClassicHighScores();
}

TArray<int32>& UNotetrisGameInstance::GetQuinHighScores()
{
	return HighScoreData.GetQuinHighScores();
}

HighScores& UNotetrisGameInstance::GetHighScoreData()
{
	return this->HighScoreData;
}