// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/SceneComponent.h"

#include "../Game Grid/GameGrid.h"
#include "GhostBlock.h"

#include "SingleBlock.generated.h"

UCLASS()
class NOTETRIS_API ASingleBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingleBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* BlockRoot;

	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* BlockSprite;

	UPROPERTY(VisibleAnywhere)
	AGameGrid* GameGrid;

	UPROPERTY(VisibleAnywhere)
	FVector2D GridIndex;

	FVector* UnitPosition;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGhostBlock> GhostBlockType;

	UPROPERTY(VisibleAnywhere)
	AGhostBlock* GhostBlock;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPaperSpriteComponent* GetSpriteComponent();

	bool CanMoveLeft();
	void MoveBlockLeft();

	bool CanMoveRight();
	void MoveBlockRight();

	UFUNCTION()
	bool CanMoveDown();
	void MoveBlockDown();

	void PlaceBlock();
	void FallDown();

	int32 FindNumberOfRowsToDrop();

	bool IsBlockAboveGameOverLine();

	UFUNCTION()
	void SetGameGrid(AGameGrid* NewGameGrid);

	UFUNCTION()
	void SetGridIndex(FVector2D NewGridIndex);
	FVector2D GetGridIndex();

	void SetGridBoxOccupied(bool IsOccupied);

	void CreateGhostBlock();
	void DestroyGhostBlock();
	void SetGhostBlockLocation(FVector NewLocation);
};
