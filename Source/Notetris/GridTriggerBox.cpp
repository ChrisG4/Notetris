// Fill out your copyright notice in the Description page of Project Settings.


#include "GridTriggerBox.h"
#include "Definitions.h"
#include "SingleBlock.h"

AGridTriggerBox::AGridTriggerBox()
{
	PrimaryActorTick.bCanEverTick = true;
	OnActorBeginOverlap.AddDynamic(this, &AGridTriggerBox::OnBlockBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AGridTriggerBox::OnBlockEndOverlap);
}

void AGridTriggerBox::BeginPlay()
{
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 2);
	print("Box Extent Drawn");
}

void AGridTriggerBox::OnBlockBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	ASingleBlock* OverlappingBlock = Cast<ASingleBlock>(OtherActor);

	if (OverlappingBlock)
	{
		print("BlockIndexSet");
		OverlappingBlock->SetGridIndex(this->GridIndex);
	}
}

void AGridTriggerBox::OnBlockEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
}

void AGridTriggerBox::SetGridIndex(int32 NewGridIndex)
{
	this->GridIndex = NewGridIndex;
}