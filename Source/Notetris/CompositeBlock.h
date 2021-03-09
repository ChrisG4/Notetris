// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SingleBlock.h"
#include "Engine/Texture.h"
#include "Components/SceneComponent.h"
#include "CompositeBlock.generated.h"

UCLASS()
class NOTETRIS_API ACompositeBlock : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACompositeBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* CompositeBlockRoot;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASingleBlock> SingleBlockActor;

	//Multiplied by Sprite Size (e.g. (1, 0, 0) would be one block to the left)
	UPROPERTY(EditDefaultsOnly)
	TArray<FVector> BlockUnitPositions;

	UPROPERTY()
	TArray<ASingleBlock*> SingleBlocks;

	float MoveDownTimer = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateBlocks();

	UFUNCTION()
	void MoveBlockLeft();

	UFUNCTION()	
	void MoveBlockRight();

	UFUNCTION()
	void MoveBlockDown();

};