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
}

