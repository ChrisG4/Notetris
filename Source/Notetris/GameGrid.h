// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTriggerBox.h"
#include "Score.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameGrid.generated.h"

USTRUCT()
struct FGridBoxRow
{
	GENERATED_BODY()

public:

	TArray<AGridTriggerBox*> GridColumn;

	UPROPERTY(VisibleAnywhere);
	int32 NumberOfBlocksInRow = 0;

	TArray<AActor*> BlocksInRow;
};

UCLASS()
class NOTETRIS_API AGameGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AGridTriggerBox> GridBox;

	UPROPERTY(VisibleAnywhere)
	TArray<FGridBoxRow> GridRow;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* GameOverLine;

	UPROPERTY(EditAnywhere)
	AScore* ScoreText;

	UPROPERTY(EditDefaultsOnly)
	UAudioComponent* GameMusic;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* RowFilledSound;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* GameOverSound;

	TMap<int32, int32> ScoreValues;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateGrid();

	void SetWallsOccupied();

	void CreateGameOverLine();

	FGridBoxRow& GetRow(int32 RowNumber);
	void RemoveBlocksInRow(int32 RowNumber);

	void MoveBlocksDown(int32 BottomRowNumber);

	UFUNCTION()
	bool IsGridBoxOccupied(FVector2D GridIndex);
	void SetIsGridBoxOccupied(FVector2D GridIndex, bool IsOccupied);

	void ChangePlayerScore(int32 ScoreChange);
	void SetScoreValues();
	int32 GetScoreValue(int32 NumberOfRowsCleared);

	void PlayRowFilledSound();

	UFUNCTION(BlueprintImplementableEvent)
	void CallGameOver();

	void GameOver();
};
