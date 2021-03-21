// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerText.h"

void ATimerText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	GameTime += DeltaTime;

	ConvertFloatToTime(GameTime);

	this->SetText(DisplayTime);
}

void ATimerText::ConvertFloatToTime(float DirtyFloat)
{
	int32 TimeInteger = FMath::Floor(DirtyFloat);
	int32 IntLength = FString::FromInt(TimeInteger).Len();

	if (IntLength < 6)
	{
		DisplayZeros = LeadingZeros.Left(5 - IntLength);
	}

	FString TrueTime = FString::SanitizeFloat(GameTime);
	DisplayTime = DisplayZeros + TrueTime.Left(IntLength + 3);
}