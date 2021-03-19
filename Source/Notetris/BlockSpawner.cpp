// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockSpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"
#include "Definitions.h"

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

	HeldBlockLocation = this->GetActorLocation() + FVector(-BLOCK_SIZE * WALL_LENGTH, 0, -BLOCK_SIZE * UPCOMING_BLOCK_GAP);
}

// Called every frame
void ABlockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timer += DeltaTime;

	if (Timer >= 0.1 && bCanSpawnBlock == true)
	{
		SpawnInitialBlock();
		SetActorTickEnabled(false);
	}
}

void ABlockSpawner::SpawnInitialBlock()
{
	if (SpawnableBlocks.Num() > 0 && GameGrid != nullptr)
	{
		FActorSpawnParameters params;

		int32 BlockChoice = FMath::RandRange(0, SpawnableBlocks.Num() - 1);

		ACompositeBlock * NewBlock = GetWorld()->SpawnActor<ACompositeBlock>(SpawnableBlocks[BlockChoice], this->GetActorLocation(), FRotator(0, 0, 0), params);
		ActiveBlock = NewBlock;

		if(GameGrid != nullptr)
			NewBlock->SetGameGrid(this->GameGrid);
		
		NewBlock->SetOwner(this);

		bCanSpawnBlock = false;
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

			NextBlock->SetActorTickEnabled(true);
			GetWorld()->GetFirstPlayerController()->Possess(NextBlock);
			NextBlock->SetOwner(this);
			ActiveBlock = NextBlock;

		}

		UpcomingBlocks.RemoveAt(0, 1, true);
		
	
	}
	print(FString::FromInt(UpcomingBlocks.Num()))
}

void ABlockSpawner::CreateUpcomingBlocks()
{
	FActorSpawnParameters params;
	
	for (int i{ 0 }; i < UPCOMING_BLOCKS_NUMBER; i++)
	{
		int32 BlockChoice = FMath::RandRange(0, SpawnableBlocks.Num() - 1);
		FVector SpawnLocation = this->GetActorLocation() + FVector(WALL_LENGTH * BLOCK_SIZE, 0, -UPCOMING_BLOCK_GAP * (i + 1) * BLOCK_SIZE);

		ACompositeBlock* NewBlock = GetWorld()->SpawnActor<ACompositeBlock>(SpawnableBlocks[BlockChoice], SpawnLocation, FRotator(0, 0, 0), params);

		NewBlock->SetActorTickEnabled(false);
		UpcomingBlocks.Push(NewBlock);
	}
}

void ABlockSpawner::UpdateUpcomingBlocks()
{
	for (int i{ 0 }; i < UpcomingBlocks.Num(); i++)
	{
		UpcomingBlocks[i]->MoveBlock(UpcomingBlocks[i]->GetActorLocation() + FVector(0, 0, UPCOMING_BLOCK_GAP * BLOCK_SIZE));
	}
	
	FActorSpawnParameters params;
	int32 BlockChoice = FMath::RandRange(0, SpawnableBlocks.Num() - 1);
	FVector SpawnLocation = this->GetActorLocation() + FVector(WALL_LENGTH * BLOCK_SIZE, 0, -UPCOMING_BLOCK_GAP * UPCOMING_BLOCKS_NUMBER * BLOCK_SIZE);

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
		ActiveBlock->SetActorTickEnabled(false);
		GetWorld()->GetFirstPlayerController()->UnPossess();
		HeldBlock = ActiveBlock;

		SpawnBlock();
	}
	else
	{
		HeldBlock->MoveBlock(ActiveBlock->GetActorLocation());
		ActiveBlock->MoveBlock(HeldBlockLocation);

		HeldBlock->SetActorTickEnabled(true);
		ActiveBlock->SetActorTickEnabled(false);

		GetWorld()->GetFirstPlayerController()->UnPossess();
		GetWorld()->GetFirstPlayerController()->Possess(HeldBlock);

		ACompositeBlock* TempPointer;
		TempPointer = ActiveBlock;
		ActiveBlock = HeldBlock;
		HeldBlock = TempPointer;

		ActiveBlock->SetOwner(this);
	}
}

ACompositeBlock* ABlockSpawner::GetStoredBlock()
{
	return this->HeldBlock;
}