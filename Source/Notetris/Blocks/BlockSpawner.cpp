// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockSpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"

#include "../Definitions.h"

// Sets default values
ABlockSpawner::ABlockSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlockSpawner::BeginPlay()
{
	Super::BeginPlay();

	CreateUpcomingBlocks();

	HeldBlockLocation += this->GetActorLocation();
}

// Called every frame
void ABlockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timer += DeltaTime;

	//DELAY TO ENSURE GRID CREATED BEFORE BLOCK SPAWNED
	if (Timer >= 0.1)
	{
		SpawnBlock();
		SetActorTickEnabled(false);
	}
}


void ABlockSpawner::SpawnBlock()
{
	UpdateUpcomingBlocks();
	
	if (UpcomingBlocks.Num() > 0) {
		ACompositeBlock* NextBlock = UpcomingBlocks[0];


		if (NextBlock != nullptr) {
			NextBlock->MoveBlock(this->GetActorLocation());
			if (GameGrid != nullptr)
				NextBlock->SetGameGrid(this->GameGrid);

			ActivateBlock(NextBlock);
			ActiveBlock = NextBlock;
		}
		UpcomingBlocks.RemoveAt(0, 1, true);
	}
}

void ABlockSpawner::CreateUpcomingBlocks()
{
	FActorSpawnParameters params;
	
	for (int i{ 0 }; i < UPCOMING_BLOCKS_NUMBER; i++)
	{
		int32 BlockChoice = FMath::RandRange(0, SpawnableBlocks.Num() - 1);
		FVector SpawnLocation = this->GetActorLocation() + FVector(CLASSIC_WALL_LENGTH * BLOCK_SIZE, 0, -UPCOMING_BLOCK_GAP * (i + 1) * BLOCK_SIZE);

		ACompositeBlock* NewBlock = GetWorld()->SpawnActor<ACompositeBlock>(SpawnableBlocks[BlockChoice], SpawnLocation, FRotator(0, 0, 0), params);

		NewBlock->SetActorTickEnabled(false);
		UpcomingBlocks.Push(NewBlock);
	}
}

void ABlockSpawner::UpdateUpcomingBlocks()
{
	//MOVE EXISTING BLOCKS UP
	for (int i{ 0 }; i < UpcomingBlocks.Num(); i++)
	{
		UpcomingBlocks[i]->MoveBlock(UpcomingBlocks[i]->GetActorLocation() + FVector(0, 0, UPCOMING_BLOCK_GAP * BLOCK_SIZE));
	}
	
	//SPAWN NEW UPCOMING BLOCK

	FActorSpawnParameters params;
	int32 BlockChoice = FMath::RandRange(0, SpawnableBlocks.Num() - 1);
	FVector SpawnLocation = this->GetActorLocation() + FVector(CLASSIC_WALL_LENGTH * BLOCK_SIZE, 0, -UPCOMING_BLOCK_GAP * UPCOMING_BLOCKS_NUMBER * BLOCK_SIZE);

	ACompositeBlock* NewBlock = GetWorld()->SpawnActor<ACompositeBlock>(SpawnableBlocks[BlockChoice], SpawnLocation, FRotator(0, 0, 0), params);

	NewBlock->SetActorTickEnabled(false);
	UpcomingBlocks.Push(NewBlock);
}

void ABlockSpawner::StoreBlock()
{
	//IF NO BLOCK STORED CURRENTLY
	if (HeldBlock == nullptr)
	{
		ActiveBlock->MoveBlock(HeldBlockLocation);
		DisactivateBlock(ActiveBlock);
		HeldBlock = ActiveBlock;
		SpawnBlock();
	}
	else
	{
		if (ActiveBlock->CanStoreBlock(HeldBlock))
		{
			HeldBlock->MoveBlock(ActiveBlock->GetActorLocation());
			ActiveBlock->MoveBlock(HeldBlockLocation);
			DisactivateBlock(ActiveBlock);

			ACompositeBlock* TempPointer;
			TempPointer = ActiveBlock;
			ActiveBlock = HeldBlock;
			HeldBlock = TempPointer;

			ActivateBlock(ActiveBlock);
		}
	}
}

ACompositeBlock* ABlockSpawner::GetStoredBlock()
{
	return this->HeldBlock;
}

void ABlockSpawner::ActivateBlock(ACompositeBlock* Block)
{
	Block->SetActorTickEnabled(true);
	Block->SetGridIndex();
	Block->CreateGhostBlocks();
	GetWorld()->GetFirstPlayerController()->Possess(Block);
	Block->SetOwner(this);
}

void ABlockSpawner::DisactivateBlock(ACompositeBlock* Block)
{
	Block->SetActorTickEnabled(false);
	Block->DestroyGhostBlocks();
	GetWorld()->GetFirstPlayerController()->UnPossess();
}