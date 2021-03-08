// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include "Block.generated.h"

UCLASS()
class NOTETRIS_API ABlock : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* BlockRoot;

	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* BlockSprite;

	UPROPERTY(EditDefaultsOnly)
	UPaperSprite* BlockSpriteColour;

	UPROPERTY(EditDefaultsOnly, meta = (MakeEditWidget = "true") )
	TArray<FVector> BlockStartingPositions;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
