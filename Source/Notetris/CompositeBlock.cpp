// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text);

#include "CompositeBlock.h"
#include "Engine/World.h"
#include "Definitions.h"

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

	//CompositeBlockRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CompositeBlockRoot"));
	//SetRootComponent(CompositeBlockRoot);

	CreateBlocks();
}

// Called every frame
void ACompositeBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
	print("Block Moved Left");
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->MoveBlockLeft();
	}
}


void ACompositeBlock::MoveBlockRight()
{
	print("Block Moved Right");
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->MoveBlockRight();
	}
}


void ACompositeBlock::MoveBlockDown()
{
	print("Block Moved Down");
	for (int i{ 0 }; i < SingleBlocks.Num(); i++)
	{
		SingleBlocks[i]->MoveBlockDown();
	}
}
