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
		FActorSpawnParameters params;
		for (int i{ 0 }; i < WALL_HEIGHT; i++)
		{
			FGridBoxRow NewRow;

			for (int j{ 0 }; j < WALL_LENGTH; j++)
			{
				FVector SpawnLocation = this->GetActorLocation() + FVector(j * BLOCK_SIZE, 0, i * BLOCK_SIZE);
				
				AGridTriggerBox* NewBox = GetWorld()->SpawnActor<AGridTriggerBox>(GridBox, SpawnLocation, FRotator(0, 0, 0), params);
				NewBox->SetGridIndex(FVector2D(j, i));
			

				NewRow.GridColumn.Push(NewBox);
			}

			GridRow.Push(NewRow);
		}
	}
}

void AGameGrid::SetWallsOccupied()
{

	if (GridRow.Num() > 0) {
		//FLOOR
		for (int i{ 0 }; i < WALL_LENGTH; i++)
		{
			GridRow[0].GridColumn[i]->SetIsSpaceOccupied(true);
		}

		//SIDE WALLS
		for (int i{ 0 }; i < WALL_HEIGHT; i++)
		{
			GridRow[i].GridColumn[0]->SetIsSpaceOccupied(true);
			GridRow[i].GridColumn[WALL_LENGTH - 1]->SetIsSpaceOccupied(true);
		}
	}
}


bool AGameGrid::IsGridBoxOccupied(FVector2D GridIndex)
{
	if (GridRow[GridIndex.Y].GridColumn[GridIndex.X] != nullptr)
	{
		return GridRow[GridIndex.Y].GridColumn[GridIndex.X]->GetIsSpaceOccupied();
	}
	else
	{
		return false;
	}
}

void AGameGrid::SetIsGridBoxOccupied(FVector2D GridIndex, bool IsOccupied)
{
	if (GridIndex.X < WALL_LENGTH && GridIndex.Y < WALL_HEIGHT)
	{
		GridRow[GridIndex.Y].GridColumn[GridIndex.X]->SetIsSpaceOccupied(IsOccupied);
	}
}
