// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class NOTETRIS_API NotetrisMath
{
public:
	NotetrisMath();
	~NotetrisMath();
	
	static void RotateClockwise(FVector& VectorToRotate);

	static void RotateAnticlockwise(FVector& VectorToRotate);
};
