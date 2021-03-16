// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text);

#include "CompositeBlock.h"
#include "Engine/World.h"
#include "Definitions.h"
#include "BlockSpawner.h"
#include "NotetrisMath.h"


// Sets default values
ACompositeBlock::ACompositeBlock()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACompositeBlock::BeginPlay()
{
	Super::BeginPlay();

	CreateBlocks();

	SetGridIndex();
}

// Called every frame
void ACompositeBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GridIndex == FVector2D(0, 0))
	{
		SetGridIndex();
	}
	
	MoveDownTimer += DeltaTime;
	if (MoveDownTimer >= MOVE_DOWN_RATE)
	{
		this->MoveBlockDown();
		MoveDownTimer = 0;
	}
}

// Called to bind functionality to input
void ACompositeBlock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("MoveBlockLeft", IE_Pressed, this, &ACompositeBlock::MoveBlockLeft);
	PlayerInputComponent->BindAction("MoveBlockRight", IE_Pressed, this, &ACompositeBlock::MoveBlockRight);
	PlayerInputComponent->BindAction("MoveBlockDown", IE_Pressed, this, &ACompositeBlock::MoveBlockDown);
	PlayerInputComponent->BindAction("RotateBlockClockwise", IE_Pressed, this, &ACompositeBlock::RotateBlockClockwise);
	PlayerInputComponent->BindAction("RotateBlockAnticlockwise", IE_Pressed, this, &ACompositeBlock::RotateBlockAnticlockwise);
}

void ACompositeBlock::CreateBlocks()
{
	if (BlockUnitPositions.Num() > 0 && SingleBlockActor != nullptr)
	{
		for (int i{ 0 }; i < BlockUnitPositions.Num(); i++)
		{
			FActorSpawnParameters params;

			FVector SpawnLocation = (BlockUnitPositions[i] * BLOCK_SIZE) + this->GetActorLocation();

			ASingleBlock* NewBlock = GetWorld()->SpawnActor<ASingleBlock>(SingleBlockActor, SpawnLocation, FRotator(0, 0, 0), params);
			SingleBlocks.Push(NewBlock);
		}
	}
}

void ACompositeBlock::MoveBlockLeft()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		if (!SingleBlocks[i]->CanMoveLeft())
			return;
	}
	this->SetActorLocation(FVector(-BLOCK_SIZE, 0, 0) + this->GetActorLocation());
	GridIndex += FVector2D(-1, 0);

	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->MoveBlockLeft();
	}
}


void ACompositeBlock::MoveBlockRight()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		if (!SingleBlocks[i]->CanMoveRight())
			return;
	}
	this->SetActorLocation(FVector(BLOCK_SIZE, 0, 0) + this->GetActorLocation());
	GridIndex += FVector2D(1, 0);
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->MoveBlockRight();
	}
}

void ACompositeBlock::MoveBlockDown()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		if (!SingleBlocks[i]->CanMoveDown())
		{
			PlaceBlock();
			return;
		}
	}
	this->SetActorLocation(FVector(0, 0, -BLOCK_SIZE) + this->GetActorLocation());
	GridIndex += FVector2D(0, -1);

	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->MoveBlockDown();
	}
	
	MoveDownTimer = 0;
}

bool ACompositeBlock::CanRotateClockwise()
{
	for (int i{ 0 }; i < BlockUnitPositions.Num(); i++)
	{
		FVector UnitPositionToCheck = BlockUnitPositions[i];
		NotetrisMath::RotateClockwise(UnitPositionToCheck);

		FVector2D GridIndexToCheck = FVector2D(GridIndex.X + UnitPositionToCheck.X, GridIndex.Y + UnitPositionToCheck.Z);

		if (GameGrid->IsGridBoxOccupied(GridIndexToCheck))
		{
			return false;
		}
	}
	return true;
}

void ACompositeBlock::RotateBlockClockwise()
{
	if (CanRotateClockwise()) {
		for (int i{ 0 }; i < BlockUnitPositions.Num(); i++)
		{
			NotetrisMath::RotateClockwise(BlockUnitPositions[i]);
			SingleBlocks[i]->SetActorLocation((BlockUnitPositions[i] * BLOCK_SIZE) + this->GetActorLocation());
		}
	}
}

bool ACompositeBlock::CanRotateAnticlockwise()
{
	for (int i{ 0 }; i < BlockUnitPositions.Num(); i++)
	{
		FVector UnitPositionToCheck = BlockUnitPositions[i];
		NotetrisMath::RotateAnticlockwise(UnitPositionToCheck);

		FVector2D GridIndexToCheck = FVector2D(GridIndex.X + UnitPositionToCheck.X, GridIndex.Y + UnitPositionToCheck.Z);

		if (GameGrid->IsGridBoxOccupied(GridIndexToCheck))
		{
			return false;
		}
	}
	return true;
}

void ACompositeBlock::RotateBlockAnticlockwise()
{
	if (CanRotateAnticlockwise()) {
		for (int i{ 0 }; i < BlockUnitPositions.Num(); i++)
		{
			NotetrisMath::RotateAnticlockwise(BlockUnitPositions[i]);
			SingleBlocks[i]->SetActorLocation((BlockUnitPositions[i] * BLOCK_SIZE) + this->GetActorLocation());
		}
	}
}

void ACompositeBlock::SetGameGrid(AGameGrid* NewGameGrid)
{
	this->GameGrid = NewGameGrid;
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->SetGameGrid(NewGameGrid);
	}
}

void ACompositeBlock::SetGridIndex()
{
	if (BlockUnitPositions.Num() > 0 && SingleBlocks.Num() > 0)
	{
		FVector2D RelativeIndex = SingleBlocks[0]->GetGridIndex();
		GridIndex = FVector2D(RelativeIndex.X - BlockUnitPositions[0].X, RelativeIndex.Y - BlockUnitPositions[0].Z);
	}
}

void ACompositeBlock::PlaceBlock()
{
	this->DisableInput(GetWorld()->GetFirstPlayerController());
	this->SetActorTickEnabled(false);
	SetBlockBoxesOccupied();

	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		int32 RowPlaced = SingleBlocks[i]->GetGridIndex().Y;
		
		GameGrid->GetRow(RowPlaced).BlocksInRow.Push(SingleBlocks[i]);
		GameGrid->GetRow(RowPlaced).NumberOfBlocksInRow++;

	}

	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		int32 RowPlaced = SingleBlocks[i]->GetGridIndex().Y;
		if (IsRowFull(RowPlaced))
		{
			GameGrid->RemoveBlocksInRow(RowPlaced);
		}
	}
	
	if (Cast<ABlockSpawner>(this->GetOwner()))
	{
		Cast<ABlockSpawner>(this->GetOwner())->SpawnBlock();
	}
}

bool ACompositeBlock::IsRowFull(int32 RowNumber)
{
	if (GameGrid->GetRow(RowNumber).NumberOfBlocksInRow == WALL_LENGTH - 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ACompositeBlock::SetBlockBoxesOccupied()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->SetGridBoxOccupied(true);
	}
}