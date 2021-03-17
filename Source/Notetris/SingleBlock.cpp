// Fill out your copyright notice in the Description page of Project Settings.


#include "SingleBlock.h"
#include "Definitions.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

#include "Containers/UnrealString.h"

// Sets default values
ASingleBlock::ASingleBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	BlockRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BlockRoot"));
	SetRootComponent(BlockRoot);

	BlockSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BlockSprite"));
	BlockSprite->SetupAttachment(RootComponent);;

}

// Called when the game starts or when spawned
void ASingleBlock::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASingleBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UPaperSpriteComponent* ASingleBlock::GetSpriteComponent()
{
	if (BlockSprite != nullptr)
	{
		return this->BlockSprite;
	}
	else
	{
		return nullptr;
	}
}

bool ASingleBlock::CanMoveLeft() {
	if (GameGrid != nullptr)
	{
		return !GameGrid->IsGridBoxOccupied(FVector2D(GridIndex.X - 1, GridIndex.Y));
	}
	else
	{
		return true;
	}
}

void ASingleBlock::MoveBlockLeft()
{
	FVector NewLocation;
	NewLocation = this->GetActorLocation() + FVector(-BLOCK_SIZE, 0, 0);

	this->SetActorLocation(NewLocation);
}

bool ASingleBlock::CanMoveRight()
{
	if (GameGrid != nullptr)
	{
		return !GameGrid->IsGridBoxOccupied(FVector2D(GridIndex.X + 1, GridIndex.Y));
	}
	else
	{
		return true;
	}
}

void ASingleBlock::MoveBlockRight()
{
	FVector NewLocation;
	NewLocation = this->GetActorLocation() + FVector(BLOCK_SIZE, 0, 0);

	this->SetActorLocation(NewLocation);
}

bool ASingleBlock::CanMoveDown()
{
	if (GameGrid != nullptr)
	{
		return !GameGrid->IsGridBoxOccupied(FVector2D(GridIndex.X, GridIndex.Y - 1));
	}
	else
	{
		return true;
	}
}

void ASingleBlock::MoveBlockDown()
{
	FVector NewLocation;
	NewLocation = this->GetActorLocation() + FVector(0, 0, -BLOCK_SIZE);

	this->SetActorLocation(NewLocation);
}

void ASingleBlock::FallDown()
{
	GameGrid->GetRow(GridIndex.Y).NumberOfBlocksInRow--;
	GameGrid->GetRow(GridIndex.Y - 1).NumberOfBlocksInRow++;

	GameGrid->GetRow(GridIndex.Y).GridColumn[GridIndex.X]->SetIsSpaceOccupied(false);
	GameGrid->GetRow(GridIndex.Y - 1).GridColumn[GridIndex.X]->SetIsSpaceOccupied(true);
	
	FVector NewLocation;
	NewLocation = this->GetActorLocation() + FVector(0, 0, -BLOCK_SIZE);

	this->SetActorLocation(NewLocation);
}

int32 ASingleBlock::FindNumberOfRowsToDrop()
{
	if (GameGrid != nullptr) {
		int Index = GridIndex.Y - 1;
		for (int32 i{ Index }; i >= 0; i--)
		{
			if (GameGrid->GetRow(i).GridColumn[GridIndex.X]->GetIsSpaceOccupied())
			{
				return GridIndex.Y - i - 1;
			}
		}

		return 0;
	}
	else
	{
		return 0;
	}
}

void ASingleBlock::SetGameGrid(AGameGrid* NewGameGrid)
{
	this->GameGrid = NewGameGrid;
}

void ASingleBlock::SetGridIndex(FVector2D NewGridIndex)
{
	this->GridIndex = NewGridIndex;
}

FVector2D ASingleBlock::GetGridIndex()
{
	return this->GridIndex;
}

void ASingleBlock::SetGridBoxOccupied(bool IsOccupied)
{
	GameGrid->SetIsGridBoxOccupied(this->GridIndex, IsOccupied);
}


