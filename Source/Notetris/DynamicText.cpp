// Fill out your copyright notice in the Description page of Project Settings.


#include "DynamicText.h"

// Sets default values
ADynamicText::ADynamicText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TextRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TextRoot"));
	RootComponent = TextRoot;

	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
	Text->SetupAttachment(TextRoot);
}

// Called when the game starts or when spawned
void ADynamicText::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADynamicText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ADynamicText::SetText(FString NewText)
{
	Text->SetText(NewText);
}
