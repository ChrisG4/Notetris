// Fill out your copyright notice in the Description page of Project Settings.


#include "GameGrid.h"
#include "Definitions.h"
#include <Engine/World.h>

// Sets default values
AGameGrid::AGameGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameGrid::BeginPlay()
{
	Super::BeginPlay();

	CreateGrid();

	SetWallsOccupied();
}

// Called every frame
void AGameGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameGrid::CreateGrid()
{
	if (GridBox != nullptr)
	{
		for (int i{ 0 }; i < WALL_LENGTH; i++)
		{
			for (int j{ 0 }; j < WALL_HEIGHT; j++)
			{
				FActorSpawnParameters params;
				AGridTriggerBox* NewTriggerBox = GetWorld()->SpawnActor<AGridTriggerBox>(GridBox, params);
				NewTriggerBox->SetGridIndex(i + j * WALL_LENGTH);
				NewTriggerBox->SetActorLocation(FVector(i * BLOCK_SIZE, 0, j * BLOCK_SIZE) + this->GetActorLocation());
				GridBoxes.Push(NewTriggerBox);
			}
		}
	}
}

void AGameGrid::SetWallsOccupied()
{
	//FLOOR
	for (int i{ 0 }; i < WALL_LENGTH; i++)
	{
		GridBoxes[i]->SetIsSpaceOccupied(true);
	}

	//LEFT WALL
	for (int i{ 0 }; i < WALL_HEIGHT; i++)
	{
		GridBoxes[i * WALL_LENGTH]->SetIsSpaceOccupied(true);
	}

	//RIGHT WALL
	for (int i{ 1 }; i <= WALL_HEIGHT; i++)
	{
		GridBoxes[(i * WALL_LENGTH) - 1]->SetIsSpaceOccupied(true);
	}
}


bool AGameGrid::IsGridBoxOccupied(int32 GridBoxIndex)
{
	if (GridBoxIndex >= 0 && GridBoxIndex < GridBoxes.Num())
	{
		return GridBoxes[GridBoxIndex]->GetIsSpaceOccupied();
	}
	else
	{
		print("Grid Box not found");
		return false;
	}
}

