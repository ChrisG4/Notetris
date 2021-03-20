// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "DynamicText.generated.h"

UCLASS()
class NOTETRIS_API ADynamicText : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADynamicText();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* TextRoot;
	
	UPROPERTY(EditAnywhere)
	UTextRenderComponent* Text;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetText(FString NewText);

};
