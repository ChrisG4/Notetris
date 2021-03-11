// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CompositeBlock.h"
#include "GameGrid.h"
#include "BlockSpawner.generated.h"

UCLASS()
class NOTETRIS_API ABlockSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bCanSpawnBlock = true;

	UPROPERTY(EditAnywhere)
	AGameGrid* GameGrid;


	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ACompositeBlock>> SpawnableBlocks;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
