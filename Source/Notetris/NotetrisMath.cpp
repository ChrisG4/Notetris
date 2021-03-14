// Fill out your copyright notice in the Description page of Project Settings.


#include "NotetrisMath.h"

NotetrisMath::NotetrisMath()
{
}

NotetrisMath::~NotetrisMath()
{
}

void NotetrisMath::RotateClockwise(FVector& VectorToRotate)
{
	//DERIVED FROM ROTATION MATRIX CALCULATION
	int32 VectorX = VectorToRotate.X;
	int32 VectorZ = VectorToRotate.Z;
	
	VectorToRotate.X = VectorZ;
	VectorToRotate.Z = VectorX * (-1);
}

void NotetrisMath::RotateAnticlockwise(FVector& VectorToRotate)
{
	//DERIVED FROM ROTATION MATRIX CALCULATION
	int32 VectorX = VectorToRotate.X;
	int32 VectorZ = VectorToRotate.Z;

	VectorToRotate.X = VectorZ * (-1);
	VectorToRotate.Z = VectorX;
}