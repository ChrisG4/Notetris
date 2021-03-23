// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HighScoreList.generated.h"

UCLASS()
class NOTETRIS_API AHighScoreList : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	AHighScoreList();
	
	virtual void Tick(float DeltaTime) override;

};
