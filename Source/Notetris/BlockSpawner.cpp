// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockSpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"

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

	if (SpawnableBlocks.Num() > 0 && bCanSpawnBlock == true)
	{
		FActorSpawnParameters params;
		int32 BlockChoice = FMath::RandRange(0, SpawnableBlocks.Num() - 1);
		GetWorld()->SpawnActor<ACompositeBlock>(SpawnableBlocks[BlockChoice], this->GetActorLocation(), FRotator(0, 0, 0), params);
	}
	
}

// Called every frame
void ABlockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

