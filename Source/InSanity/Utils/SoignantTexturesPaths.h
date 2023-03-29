// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoignantTexturesPaths.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct INSANITY_API FSoignantTexturesPaths
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
		FString Bust;
	UPROPERTY(BlueprintReadWrite)
		FString Top;
	UPROPERTY(BlueprintReadWrite)
		FString Face;
	UPROPERTY(BlueprintReadWrite)
		FString Left_Eye;
	UPROPERTY(BlueprintReadWrite)
		FString Right_Eye;
	UPROPERTY(BlueprintReadWrite)
		FString Nose;
	UPROPERTY(BlueprintReadWrite)
		FString Mouth;
	UPROPERTY(BlueprintReadWrite)
		FString Eyebrow;
	UPROPERTY(BlueprintReadWrite)
		FString Hair;
	
};
