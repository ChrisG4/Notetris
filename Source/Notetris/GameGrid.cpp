// Fill out your copyright notice in the Description page of Project Settings.


#include "GameGrid.h"
#include "Definitions.h"

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
	for (int i{ 0 }; i < WALL_LENGTH; i++)
		for (int j{ 0 }; j < WALL_HEIGHT; j++)
		{
			float XPos = (BLOCK_SIZE / 2) + (BLOCK_SIZE * i);
			float ZPos = (BLOCK_SIZE / 2) + (BLOCK_SIZE * j);
			FVector NewGridVector = FVector(XPos, 0, ZPos) + this->GetActorLocation();

			FGridSpace* GridSpace;
			GridSpace->GridVector = NewGridVector;

			GridSpaces.Push(GridSpace);
		
		}
}

void AGameGrid::SetWallsOccupied()
{
}

