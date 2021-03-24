// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveData.h"
#include "../Definitions.h"

USaveData::USaveData() {

	SaveDataName = FString(SAVE_DATA_NAME);

	UserIndex = SAVE_DATA_USER_INDEX;
}