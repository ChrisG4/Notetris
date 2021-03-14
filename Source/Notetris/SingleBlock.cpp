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

	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors, AGridTriggerBox::StaticClass());

	print(FString::FromInt(OverlappingActors.Num()))

	print(FString::FromInt(this->GridIndex));
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
		return !GameGrid->IsGridBoxOccupied(this->GridIndex - 1);
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
		return !GameGrid->IsGridBoxOccupied(this->GridIndex + 1);
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
		int32 GridIndexToCheck = this->GridIndex - WALL_LENGTH;
		return !GameGrid->IsGridBoxOccupied(GridIndexToCheck);
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

bool ASingleBlock::CanRotateClockwise()
{
	return true;
}

bool ASingleBlock::CanRotateAnticlockwise()
{
	return true;
}

void ASingleBlock::SetGameGrid(AGameGrid* NewGameGrid)
{
	this->GameGrid = NewGameGrid;
}

void ASingleBlock::SetGridIndex(int32 NewGridIndex)
{
	this->GridIndex = NewGridIndex;
}

int32 ASingleBlock::GetGridIndex()
{
	return this->GridIndex;
}

void ASingleBlock::SetGridBoxOccupied(bool IsOccupied)
{
	GameGrid->SetIsGridBoxOccupied(this->GridIndex, IsOccupied);
}


