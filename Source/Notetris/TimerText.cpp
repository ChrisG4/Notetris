// Fill out your copyright notice in the Description page of Project Settings.
#define TIME_NUMBER_PLACES 4

#include "TimerText.h"

void ATimerText::BeginPlay()
{
	Super::BeginPlay();

	GameTime = StartingTime;
}

void ATimerText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (IsCountingUp == true)
	{
		GameTime += DeltaTime;
	}
	else
	{
		GameTime -= DeltaTime;
	}

	if (HasTimeRunOut() && CurrentGameGrid != nullptr)
	{
		CurrentGameGrid->GameOver();
	}
	
	ConvertFloatToTime(GameTime);
	this->SetText(DisplayTime);
}

void ATimerText::ConvertFloatToTime(float DirtyFloat)
{
	int32 TimeInteger = FMath::Floor(DirtyFloat);
	int32 IntLength = FString::FromInt(TimeInteger).Len();

	if (IntLength <= TIME_NUMBER_PLACES)
	{
		DisplayZeros = LeadingZeros.Left(TIME_NUMBER_PLACES - IntLength);
	}

	FString TrueTime = FString::SanitizeFloat(GameTime);
	DisplayTime = DisplayZeros + TrueTime.Left(IntLength + 3);
}

float ATimerText::GetGameTime()
{
	return this->GameTime;
}

bool ATimerText::HasTimeRunOut()
{
	if (GameTime < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}