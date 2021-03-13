// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTriggerBox.h"
#include "GameGrid.generated.h"

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

	UPROPERTY(EditAnywhere)
	TArray<AGridTriggerBox*> GridBoxes;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateGrid();

	void SetWallsOccupied();


	UFUNCTION()
	bool IsGridBoxOccupied(int32 GridBoxIndex);

	void SetIsGridBoxOccupied(int32 GridBoxIndex, bool IsOccupied);

};
