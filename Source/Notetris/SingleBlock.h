// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include "SingleBlock.generated.h"

UCLASS()
class NOTETRIS_API ASingleBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingleBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* BlockRoot;

	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* BlockSprite;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPaperSpriteComponent* GetSpriteComponent();

	void MoveBlockLeft();

	void MoveBlockRight();

	void MoveBlockDown();

};