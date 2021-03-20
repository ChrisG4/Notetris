// Fill out your copyright notice in the Description page of Project Settings.


#include "Score.h"

void AScore::BeginPlay()
{
	Super::BeginPlay();

	this->SetText(FString::FromInt(0));
}

void AScore::SetScore(int32 NewScore)
{
	this->PlayerScore = NewScore;

	this->SetText(FString::FromInt(NewScore));
}

int32 AScore::GetScore()
{
	return this->PlayerScore;
}