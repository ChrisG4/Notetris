// Fill out your copyright notice in the Description page of Project Settings.


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
	
	CreateBlocks();
}

// Called every frame
void ACompositeBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACompositeBlock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACompositeBlock::CreateBlocks()
{
	for (int i{ 0 }; i < BlockUnitPositions.Num(); i++)
	{
		FActorSpawnParameters params;
		params.Owner = this;

		FVector SpawnLocation = (BlockUnitPositions[i] * BLOCK_SIZE) + this->GetActorLocation();

		ASingleBlock* NewBlock = GetWorld()->SpawnActor<ASingleBlock>(SingleBlockActor, SpawnLocation, FRotator(0, 0, 0), params);
		SingleBlocks.Push(NewBlock);
	}
}

