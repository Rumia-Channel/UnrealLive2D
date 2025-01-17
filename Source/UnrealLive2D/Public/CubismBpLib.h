// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CubismBpLib.generated.h"

class UCubismAsset;
class UTexture2D;

/**
 * 
 */
UCLASS()
class UNREALLIVE2D_API UCubismBpLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Cubism")
	static void InitCubism();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Cubism")
	static FString Get_CubismPath();

};
