// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerText.h"

void ATimerText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (IsCountingUp == true)
	{
		GameTime += DeltaTime;
	}

	ConvertFloatToTime(GameTime);

	this->SetText(DisplayTime);
}

void ATimerText::ConvertFloatToTime(float DirtyFloat)
{
	int32 TimeInteger = FMath::Floor(DirtyFloat);
	int32 IntLength = FString::FromInt(TimeInteger).Len();

	if (IntLength < 5)
	{
		DisplayZeros = LeadingZeros.Left(4 - IntLength);
	}

	FString TrueTime = FString::SanitizeFloat(GameTime);
	DisplayTime = DisplayZeros + TrueTime.Left(IntLength + 3);
}