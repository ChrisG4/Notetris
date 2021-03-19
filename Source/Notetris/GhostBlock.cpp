// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostBlock.h"

// Sets default values
AGhostBlock::AGhostBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	GhostRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BlockRoot"));
	SetRootComponent(GhostRoot);

	BlockSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BlockSprite"));
	BlockSprite->SetupAttachment(RootComponent);;

}

// Called when the game starts or when spawned
void AGhostBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGhostBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGhostBlock::DestroyGhost()
{
	this->Destroy();
}

