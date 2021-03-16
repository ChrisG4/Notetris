// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTriggerBox.h"
#include "GameGrid.generated.h"

USTRUCT()
struct FGridBoxRow
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY()
	TArray<AGridTriggerBox*> GridColumn;

	UPROPERTY()
	int32 BlocksInRow;
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

	UPROPERTY()
	TArray<FGridBoxRow> GridRow;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateGrid();

	void SetWallsOccupied();


	UFUNCTION()
	bool IsGridBoxOccupied(FVector2D GridIndex);

	void SetIsGridBoxOccupied(FVector2D GridIndex, bool IsOccupied);

};
