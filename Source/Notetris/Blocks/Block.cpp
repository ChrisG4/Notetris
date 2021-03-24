// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"
#include "Engine/World.h"

// Sets default values
ABlock::ABlock()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BlockRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BlockRoot"));
	SetRootComponent(BlockRoot);

	BlockSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BlockSprite"));
	BlockSprite->SetupAttachment(RootComponent);;

}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();

	for (int i{ 0 }; i < BlockStartingPositions.Num(); i++)
	{
		FActorSpawnParameters params;
		params.Owner = this;
		
		//GETWORLD -> SPAWN ACTOR <BLOCK ACTOR>
		//SO WE CAN HAVE SINGLE BLOCK CLASS, THEN COMPOSITE BLOCK CLASS, THEN BLUEPRINTS FOR EACH TYPE OF BLOCK
	}
	
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABlock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

