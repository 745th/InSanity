// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SoignantTexturesPaths.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Misc/Paths.h"
#include "SoignantsGenerator.generated.h"

#define LOG(x, ...) UE_LOG(LogTemp, Log, TEXT(x), __VA_ARGS__)

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class INSANITY_API ASoignantsGenerator : public AActor
{
	GENERATED_BODY()

public:
	ASoignantsGenerator();
	UFUNCTION(BlueprintCallable)
		void FindPaths(int Bust, int Top, int Face,int LE, int RE, int Nose, int Mouth,int Eyebrow, int Hair,int Character);
	UFUNCTION(BlueprintCallable)
		UTexture2D* GenerateSoignant();
	UFUNCTION(BlueprintCallable)
		UTexture2D* LoadBakedSoignant(int id);

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite)
		UTexture2D* Baked;
private:

	UTexture2D* BuildTexture(UTextureRenderTarget2D* Rendertarget);

	FSoignantTexturesPaths Paths;
	FSoignantTexturesPaths Color_Paths;

	UPROPERTY()
		UStaticMeshComponent* Mesh;
	UPROPERTY()
		UMaterial* Mat;

	
};
