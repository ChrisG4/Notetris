// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameGrid.generated.h"

USTRUCT()
struct FGridSpace {
	GENERATED_BODY()

	FVector GridVector = FVector(0, 0, 0);

	bool bIsSpaceOccupied = false;
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

	TArray<FGridSpace*> GridSpaces; //MAYBE MAKE THIS MULTIDIMENTIONAL ARRAY TO REPRESENT WHERE EACH GRID SPACE IS

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateGrid();

	void SetWallsOccupied();

};
