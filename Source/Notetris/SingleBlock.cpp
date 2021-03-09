// Fill out your copyright notice in the Description page of Project Settings.


#include "SingleBlock.h"

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

UPaperSpriteComponent* ASingleBlock::GetSpriteComponent() {
	return this->BlockSprite;
}

