// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class TIMEGUN_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		/** Starts an analytics session without any custom attributes specified */
		UFUNCTION(BlueprintCallable, Category = "TimeGunUtilities")
		static UMaterialInterface* StartSession(TArray<UMaterialInterface*> arr);
	
};
