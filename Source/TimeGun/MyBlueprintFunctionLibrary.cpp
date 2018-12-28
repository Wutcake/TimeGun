// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"
#include "Array.h"

UMaterialInterface* UMyBlueprintFunctionLibrary::StartSession(TArray<UMaterialInterface*> arr)
{
	int length = arr.Num();
	int randomI = rand() % length;
	int i;
	for (i = 0; i < length; i++) {
		if (randomI == i)
			return arr[i];
	}

	return arr[i];
}
