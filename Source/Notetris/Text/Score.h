// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicText.h"
#include "Score.generated.h"

/**
 * 
 */
UCLASS()
class NOTETRIS_API AScore : public ADynamicText
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditAnywhere)
	int32 PlayerScore = 0;

public:
	void BeginPlay() override;

	void SetScore(int32 NewScore);
	int32 GetScore();
};
