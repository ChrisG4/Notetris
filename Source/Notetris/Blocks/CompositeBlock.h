// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperSprite.h"
#include "Sound/SoundBase.h"
#include "Engine/Texture.h"
#include "Components/SceneComponent.h"

#include "SingleBlock.h"
#include "../Game Grid/GameGrid.h"
#include "GhostBlock.h"

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

	UPROPERTY()
		AGameGrid* GameGrid;

	UPROPERTY(VisibleAnywhere)
		FVector2D GridIndex = FVector2D(0, 0);

	UPROPERTY(EditDefaultsOnly)
	USoundBase* MoveSound;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* DropSound;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* FailSound;

	UPROPERTY(EditDefaultsOnly)
		USoundBase* SwapSound;

	bool IsBlockDropping = false;

	int32 ScoreMultiplier = 0;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateBlocks();
	TArray<ASingleBlock*> GetSingleBlocks();

	void MoveBlock(FVector NewLocation);

	UFUNCTION()
		void MoveBlockLeft();

	UFUNCTION()
		void MoveBlockRight();

	UFUNCTION()
		void MoveBlockDown();

	bool CanRotateClockwise();
	void RotateBlockClockwise();
	bool CanRotateAnticlockwise();
	void RotateBlockAnticlockwise();

	int32 GetRowsToDrop();
	void DropBlock();

	bool CanStoreBlock(ACompositeBlock* OtherBlock);
	void StoreBlock();

	void SetGameGrid(AGameGrid* NewGameGrid);
	void SetGridIndex();

	TArray<FVector> GetUnitPositions();

	UFUNCTION()
	void PlaceBlock();
	void PlaceSingleBlocks();

	bool IsRowFull(int32 RowNumber);
	void SetBlockBoxesOccupied();

	void CreateGhostBlocks();
	void UpdateGhostBlocks();
	void DestroyGhostBlocks();

	void PlaySound(USoundBase* Sound);

};