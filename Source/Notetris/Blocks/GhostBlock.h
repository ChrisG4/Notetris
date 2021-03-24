// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include "GhostBlock.generated.h"

UCLASS()
class NOTETRIS_API AGhostBlock : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* GhostRoot;

	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* BlockSprite;

public:	
	AGhostBlock();

	virtual void Tick(float DeltaTime) override;

	void DestroyGhost();
};
