// Fill out your copyright notice in the Description page of Project Settings.


#include "GameGrid.h"
#include "Definitions.h"
#include "SingleBlock.h"
#include "Kismet/GameplayStatics.h"
#include <Engine/World.h>

// Sets default values
AGameGrid::AGameGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GameOverLine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GameOverLine"));

	GameMusic = CreateDefaultSubobject<UAudioComponent>(TEXT("GameMusic"));

}

// Called when the game starts or when spawned
void AGameGrid::BeginPlay()
{
	Super::BeginPlay();

	CreateGrid();
	if (GameOverLine != nullptr) {
		CreateGameOverLine();
	}
	SetWallsOccupied();
	SetScoreValues();

	if (GameMusic != nullptr)
	{
		GameMusic->Play();
	}
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

void AGameGrid::CreateGameOverLine()
{
	GameOverLine->SetWorldScale3D(FVector(BLOCK_SIZE * (WALL_LENGTH - 2), 0, BLOCK_SIZE / 10));
	GameOverLine->SetWorldLocation(this->GetActorLocation() + FVector((BLOCK_SIZE / 2) + (BLOCK_SIZE * ((WALL_LENGTH - 2) / 2)),  -0.1, BLOCK_SIZE * GAME_OVER_HEIGHT));
}

FGridBoxRow& AGameGrid::GetRow(int32 RowNumber)
{
	{
		return GridRow[RowNumber];
	}
	
}

void AGameGrid::RemoveBlocksInRow(int32 RowNumber)
{
	for (int i{ 0 }; i < (GridRow[RowNumber].BlocksInRow.Num()); i++) {
		GridRow[RowNumber].BlocksInRow[i]->Destroy();
	}
	GridRow[RowNumber].BlocksInRow.Empty();
	GridRow[RowNumber].NumberOfBlocksInRow = 0;

	MoveBlocksDown(RowNumber + 1);
}

void AGameGrid::MoveBlocksDown(int32 BottomRowNumber)
{
	for (int i{ BottomRowNumber }; i < WALL_HEIGHT; i++)
	{
		if (GridRow[i].BlocksInRow.Num() > 0) {
			for (int j{ 0 }; j < GridRow[i].BlocksInRow.Num(); j++) {
				if (Cast<ASingleBlock>(GridRow[i].BlocksInRow[j])) {
					Cast<ASingleBlock>(GridRow[i].BlocksInRow[j])->FallDown();

				}
			}
		}
		GridRow[i - 1].BlocksInRow = GridRow[i].BlocksInRow;
		GridRow[i].BlocksInRow.Empty();
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

void AGameGrid::ChangePlayerScore(int32 ScoreChange)
{
	if (ScoreText != nullptr)
	{
		int32 CurrentScore = ScoreText->GetScore();

		ScoreText->SetScore(CurrentScore + ScoreChange);

		PlayRowFilledSound();
	}
}

void AGameGrid::SetScoreValues()
{
	ScoreValues.Add(1, ROW_FILLED_SCORE);
	ScoreValues.Add(2, TWO_ROWS_FILLED_SCORE);
	ScoreValues.Add(3, THREE_ROWS_FILLED_SCORE);
	ScoreValues.Add(4, FOUR_ROWS_FILLED_SCORE);
}

int32 AGameGrid::GetScoreValue(int32 NumberOfRowsFilled)
{
	if (ScoreValues.Contains(NumberOfRowsFilled))
	{
		return this->ScoreValues[NumberOfRowsFilled];
	}
	else
	{
		return 0;
	}
}

void AGameGrid::PlayRowFilledSound()
{
	if (RowFilledSound != nullptr)
	{
		UGameplayStatics::PlaySound2D(this, RowFilledSound, 1.0f, 1.0f, 0.0f);
	}
}

void AGameGrid::GameOver()
{
	if (RowFilledSound != nullptr)
	{
		GameMusic->Stop();
		UGameplayStatics::PlaySound2D(this, GameOverSound, 1.0f, 1.0f, 0.0f);
		
	}
}