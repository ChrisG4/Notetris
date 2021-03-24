// Fill out your copyright notice in the Description page of Project Settings.


#include "GridTriggerBox.h"
#include "../Definitions.h"
#include "../Blocks/SingleBlock.h"

AGridTriggerBox::AGridTriggerBox()
{
	PrimaryActorTick.bCanEverTick = true;
	OnActorBeginOverlap.AddDynamic(this, &AGridTriggerBox::OnBlockBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AGridTriggerBox::OnBlockEndOverlap);
}

void AGridTriggerBox::BeginPlay()
{
	//DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 2);
}

void AGridTriggerBox::OnBlockBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	ASingleBlock* OverlappingBlock = Cast<ASingleBlock>(OtherActor);

	if (OverlappingBlock)
	{
		OverlappingBlock->SetGridIndex(this->GridIndex);
	}
}

void AGridTriggerBox::OnBlockEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if(Cast<ASingleBlock>(OtherActor))
		this->bIsSpaceOccupied = false;
}

void AGridTriggerBox::SetIsSpaceOccupied(bool IsSpaceOccupied)
{
	this->bIsSpaceOccupied = IsSpaceOccupied;
}

bool AGridTriggerBox::GetIsSpaceOccupied()
{
	return this->bIsSpaceOccupied;
}

void AGridTriggerBox::SetGridIndex(FVector2D NewGridIndexVector)
{
	this->GridIndex = NewGridIndexVector;
}

