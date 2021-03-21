// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text);

#include "CompositeBlock.h"
#include "Engine/World.h"
#include "Definitions.h"
#include "BlockSpawner.h"
#include "Kismet/GameplayStatics.h"
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

	UpdateGhostBlocks();
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

	UpdateGhostBlocks();
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
	PlayerInputComponent->BindAction("DropBlock", IE_Pressed, this, &ACompositeBlock::DropBlock);
	PlayerInputComponent->BindAction("StoreBlock", IE_Pressed, this, &ACompositeBlock::StoreBlock);
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

TArray<ASingleBlock*> ACompositeBlock::GetSingleBlocks()
{
	return this->SingleBlocks;
}

void ACompositeBlock::MoveBlock(FVector NewLocation)
{
	this->SetActorLocation(NewLocation);
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->SetActorLocation(NewLocation + BlockUnitPositions[i] * BLOCK_SIZE);
	}
}

void ACompositeBlock::MoveBlockLeft()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		if (!SingleBlocks[i]->CanMoveLeft())
			return;
	}

	MoveBlock(FVector(-BLOCK_SIZE, 0, 0) + this->GetActorLocation());
	GridIndex += FVector2D(-1, 0);

	PlaySound(MoveSound);
}


void ACompositeBlock::MoveBlockRight()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		if (!SingleBlocks[i]->CanMoveRight())
			return;
	}
	
	MoveBlock(FVector(BLOCK_SIZE, 0, 0) + this->GetActorLocation());
	GridIndex += FVector2D(1, 0);
	PlaySound(MoveSound);
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
	
	MoveBlock(FVector(0, 0, -BLOCK_SIZE) + this->GetActorLocation());
	GridIndex += FVector2D(0, -1);
	
	MoveDownTimer = 0;
	
	if (IsBlockDropping == false) {
		PlaySound(MoveSound);
	}
	
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
			PlaySound(FailSound);
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

	PlaySound(MoveSound);
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
			PlaySound(FailSound);
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
	
	PlaySound(MoveSound);
}

int32 ACompositeBlock::GetRowsToDrop()
{
	if (SingleBlocks[0] != nullptr) {
		int32 SmallestNumberOfDropRows = SingleBlocks[0]->FindNumberOfRowsToDrop();
		for (int i{ 1 }; i < SingleBlocks.Num(); i++)
		{
			int32 RowsToDrop = SingleBlocks[i]->FindNumberOfRowsToDrop();

			if (RowsToDrop < SmallestNumberOfDropRows)
			{
				SmallestNumberOfDropRows = RowsToDrop;
			}
		}
		return SmallestNumberOfDropRows;
	}
	return 0;
}

void ACompositeBlock::DropBlock()
{
	IsBlockDropping = true;

	int32 SmallestNumberOfDropRows = GetRowsToDrop();

	for (int i{ 0 }; i < SmallestNumberOfDropRows; i++) {
		MoveBlockDown();
	}

	IsBlockDropping = false;
	PlaySound(DropSound);

	PlaceBlock();
	
}

bool ACompositeBlock::CanStoreBlock(ACompositeBlock* OtherBlock)
{	
	TArray<FVector> UnitPostionsToCheck = OtherBlock->GetUnitPositions();
	for (int i{ 0 }; i < UnitPostionsToCheck.Num(); i++)
	{
		FVector2D IndexToCheck = FVector2D(GridIndex.X + UnitPostionsToCheck[i].X, GridIndex.Y + UnitPostionsToCheck[i].Z);
		if (GameGrid->IsGridBoxOccupied(IndexToCheck))
		{
			return false;
		}
	}
	
	return true;
}

void ACompositeBlock::StoreBlock()
{
	ABlockSpawner* BlockOwner = Cast<ABlockSpawner>(this->GetOwner());
	
	if(BlockOwner != nullptr)
	{
		BlockOwner->StoreBlock();
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

TArray<FVector> ACompositeBlock::GetUnitPositions()
{
	return this->BlockUnitPositions;
}

void ACompositeBlock::PlaceBlock()
{
	this->DisableInput(GetWorld()->GetFirstPlayerController());
	this->SetActorTickEnabled(false);
	SetBlockBoxesOccupied();

	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->PlaceBlock();
		int32 RowPlaced = SingleBlocks[i]->GetGridIndex().Y;
		
		GameGrid->GetRow(RowPlaced).BlocksInRow.Push(SingleBlocks[i]);
		GameGrid->GetRow(RowPlaced).NumberOfBlocksInRow++;
	}

	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{

		if (SingleBlocks[i]->IsBlockAboveGameOverLine())
		{
			GameGrid->GameOver();

			Cast<ABlockSpawner>(this->GetOwner())->Destroy();
			return;
		}
		
		int32 RowPlaced = SingleBlocks[i]->GetGridIndex().Y;
		if (IsRowFull(RowPlaced))
		{
			ScoreMultiplier++;
			GameGrid->RemoveBlocksInRow(RowPlaced);
		}
	}

	if (ScoreMultiplier > 0)
	{
		GameGrid->ChangePlayerScore(GameGrid->GetScoreValue(ScoreMultiplier));
		ScoreMultiplier = 0;
	}
	
	if (Cast<ABlockSpawner>(this->GetOwner()))
	{
		Cast<ABlockSpawner>(this->GetOwner())->SpawnBlock();
	}

	PlaySound(DropSound);
	this->Destroy();
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

void ACompositeBlock::CreateGhostBlocks()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->CreateGhostBlock();
	}
}

void ACompositeBlock::UpdateGhostBlocks()
{
	int32 RowsToDrop = GetRowsToDrop();
	
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->SetGhostBlockLocation(SingleBlocks[i]->GetActorLocation() - FVector(0, 0.5, BLOCK_SIZE * RowsToDrop));
	}
}

void ACompositeBlock::DestroyGhostBlocks()
{
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->DestroyGhostBlock();
	}
}


void ACompositeBlock::PlaySound(USoundBase* Sound)
{
	if (Sound != nullptr)
		UGameplayStatics::PlaySound2D(this, Sound, 1.0f, 1.0f, 0.0f);
}
