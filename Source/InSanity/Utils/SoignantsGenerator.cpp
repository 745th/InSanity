// Fill out your copyright notice in the Description page of Project Settings.


#include "SoignantsGenerator.h"

ASoignantsGenerator::ASoignantsGenerator()
{
	/*Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TheMesh"));
	static ConstructorHelpers::FObjectFinder<UMaterial> FoundMaterial(TEXT("Material'/Game/Characters/Blob/Material_001.Material_001'"));
	Mat = FoundMaterial.Object;
	Mesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh '/Game/Cube.Cube'")).Object);
	Mesh->SetupAttachment(RootComponent);*/
	
}


void ASoignantsGenerator::FindPaths(int Bust, int Top, int Face,int LE, int RE, int Nose, int Mouth, int Eyebrow, int Hair,int Character)
{
	
	FSoignantTexturesPaths tmp_paths;
	FSoignantTexturesPaths tmp_color_paths;
	FString root;
	FString tmp;
	root = TEXT("/Game/Characters/Soignants/Faces/FaceComponents");
	if (Character % 2)
	{
		root = root + TEXT("/Character1");
	}
	else
	{
		root = root + TEXT("/Character2");
	}
	tmp = TEXT("/bust"+FString::FromInt(Bust));
	if (FPaths::FileExists(root+tmp+"."+FPaths::GetBaseFilename(tmp)))
	{
		tmp_paths.Bust = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("File not found: "+root+tmp)); 
		
	}

	tmp = TEXT("/COLOR_bust" + FString::FromInt(Bust));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Bust = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/top" + FString::FromInt(Top));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Top = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/COLOR_top" + FString::FromInt(Top));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Top = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/Face/face" + FString::FromInt(Face));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Face = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/Face/COLOR_face" + FString::FromInt(Face));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Face = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/hair/hair" + FString::FromInt(Hair));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Hair = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/hair/COLOR_hair" + FString::FromInt(Hair));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Hair = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	root = root + TEXT("/Sets");
	tmp = TEXT("/eye/left_eye" + FString::FromInt(LE));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Left_Eye = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/eye/COLOR_left_eye" + FString::FromInt(LE));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Left_Eye = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/eye/right_eye" + FString::FromInt(LE));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Right_Eye = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/eye/COLOR_right_eye" + FString::FromInt(LE));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Right_Eye = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/eyebrow/eyebrow" + FString::FromInt(Eyebrow));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Eyebrow = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	
	tmp = TEXT("/eyebrow/COLOR_eyebrow" + FString::FromInt(Eyebrow));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Eyebrow = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/mouth/mouth" + FString::FromInt(Mouth));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Mouth = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/mouth/COLOR_mouth" + FString::FromInt(Mouth));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Mouth = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	///
	///
	tmp = TEXT("/nose/nose" + FString::FromInt(Nose));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_paths.Nose = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}

	tmp = TEXT("/nose/COLOR_nose" + FString::FromInt(Nose));
	if (FPaths::FileExists(root + tmp))
	{
		tmp_color_paths.Nose = root + tmp;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: "+tmp)); 
		
	}
	tmp_color_paths.Bust+=TEXT("."+FPaths::GetBaseFilename(tmp_color_paths.Bust));
	tmp_color_paths.Top += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Top));
	tmp_color_paths.Eyebrow += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Eyebrow));
	tmp_color_paths.Face += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Face));
	tmp_color_paths.Hair += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Hair));
	tmp_color_paths.Left_Eye += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Left_Eye));
	tmp_color_paths.Mouth += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Mouth));
	tmp_color_paths.Nose += TEXT("." + FPaths::GetBaseFilename(tmp_color_paths.Nose));

	tmp_paths.Bust += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Bust));
	tmp_paths.Top += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Top));
	tmp_paths.Eyebrow += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Eyebrow));
	tmp_paths.Face += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Face));
	tmp_paths.Hair += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Hair));
	tmp_paths.Left_Eye += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Left_Eye));
	tmp_paths.Mouth += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Mouth));
	tmp_paths.Nose += TEXT("." + FPaths::GetBaseFilename(tmp_paths.Nose));

	Paths = tmp_paths;
	Color_Paths = tmp_color_paths;
	
}

UTexture2D* ASoignantsGenerator::GenerateSoignant()
{
	UTexture2D* Result=UTexture2D::CreateTransient(512,512);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("PassA"));
	UMaterialInstanceDynamic* BodyMaker = UMaterialInstanceDynamic::Create(Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(),NULL,TEXT("/Game/Characters/Soignants/Faces/m_BodyMaker_Inst.m_BodyMaker_Inst"))),this);
	UMaterialInstanceDynamic* FaceMaker = UMaterialInstanceDynamic::Create(Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/Game/Characters/Soignants/Faces/m_FaceMaker_Inst.m_FaceMaker_Inst"))),this);
	UTextureRenderTarget2D* RenderTarget = Cast<UTextureRenderTarget2D>(StaticLoadObject(UTextureRenderTarget2D::StaticClass(), NULL, TEXT("/Game/Characters/Soignants/Faces/FaceMaker.FaceMaker")));	
	LOG("%s", *Paths.Eyebrow);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("PassB"));
	RenderTarget->InitCustomFormat(512, 512, Result->GetPixelFormat(), false);
	RenderTarget->SRGB = false;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("PassC"));
	/*FaceMaker->SetTextureParameterValue(FName("Eyebrow"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Eyebrow)));
	FaceMaker->SetTextureParameterValue(FName("Face"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Face)));
	FaceMaker->SetTextureParameterValue(FName("Mouth"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Mouth)));
	FaceMaker->SetTextureParameterValue(FName("Nose"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Nose)));
	FaceMaker->SetTextureParameterValue(FName("Left_Eye"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Left_Eye)));
	FaceMaker->SetTextureParameterValue(FName("Right_Eye"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Right_Eye)));
	
	FaceMaker->SetTextureParameterValue(FName("COLOR_Eyebrow"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Eyebrow)));
	FaceMaker->SetTextureParameterValue(FName("COLOR_Face"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Face)));
	FaceMaker->SetTextureParameterValue(FName("COLOR_Mouth"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Mouth)));
	FaceMaker->SetTextureParameterValue(FName("COLOR_Nose"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Nose)));
	FaceMaker->SetTextureParameterValue(FName("COLOR_Left_Eye"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Left_Eye)));
	FaceMaker->SetTextureParameterValue(FName("COLOR_Right_Eye"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Right_Eye)));
	*/UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, RenderTarget, FaceMaker);
	//Result=RenderTarget->ConstructTexture2D(this, TEXT("BakedFace"), EObjectFlags::RF_ClassDefaultObject);
	Result=BuildTexture(RenderTarget);
	//Body and the final face
	/*BodyMaker->SetTextureParameterValue(FName("Bust"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Bust)));
	BodyMaker->SetTextureParameterValue(FName("Face"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Face)));
	BodyMaker->SetTextureParameterValue(FName("Top"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Top)));
	BodyMaker->SetTextureParameterValue(FName("Hair"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Paths.Hair)));
	BodyMaker->SetTextureParameterValue(FName("COLOR_Bust"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Bust)));
	BodyMaker->SetTextureParameterValue(FName("COLOR_Face"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Face)));
	BodyMaker->SetTextureParameterValue(FName("COLOR_Top"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Top)));
	BodyMaker->SetTextureParameterValue(FName("COLOR_Hair"), Cast<UTexture>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *Color_Paths.Hair)));
	
	RenderTarget->InitCustomFormat(512, 512, Result->GetPixelFormat(), false);
	UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, RenderTarget, BodyMaker);
	//Result = RenderTarget->ConstructTexture2D(this, TEXT("FinalFace"), EObjectFlags::RF_ClassDefaultObject);
	Result = BuildTexture(RenderTarget);*/
	BodyMaker->SetTextureParameterValue(FName("BakedFace"), Cast<UTexture>(Result));
	//Mesh->GetStaticMesh()->SetMaterial(0, FaceMaker);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Pass"));
	return Result;
}

UTexture2D* ASoignantsGenerator::BuildTexture(UTextureRenderTarget2D* Rendertarget)
{
	FTextureRenderTargetResource* RT_Ressource = Rendertarget->GameThread_GetRenderTargetResource();

	TArray<FLinearColor> pixels;
	UTexture2D* Bake;
	//UE_LOG(LogTemp, Log, TEXT("RM: ok? %i"), RT_Ressource->ReadLinearColorPixels(pixels));
	FReadSurfaceDataFlags flag = FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX);
	flag.SetLinearToGamma(true);
	RT_Ressource->ReadLinearColorPixels(pixels, flag);


	UE_LOG(LogTemp, Log, TEXT("RM: UpdateMap3"));
	Bake = UTexture2D::CreateTransient(512, 512);
	Bake->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	Bake->SRGB = false;
	Bake->UpdateResource();
	UE_LOG(LogTemp, Log, TEXT("RM: UpdateMap4"));
	if (!Bake->PlatformData->Mips[0].BulkData.IsLocked())
	{
		UE_LOG(LogTemp, Log, TEXT("RM: Lock114_A"));
		FColor* RawImageData = reinterpret_cast<FColor*>(Bake->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
		int max = Bake->GetSizeX() * Bake->GetSizeY();
		for (int i = 0; i < max; i++)
		{
			RawImageData[i] = pixels[i].ToFColor(true);
			UE_LOG(LogTemp, Log, TEXT("RM: %i"),pixels[i].B);

		}

		UE_LOG(LogTemp, Log, TEXT("RM: Unlock124_A"));
		Bake->PlatformData->Mips[0].BulkData.Unlock();
		//tmp->PlatformData->Mips[0].BulkData.Unlock();
		Bake->UpdateResource();
		//UKismetRenderingLibrary::ClearRenderTarget2D(this, Height_RT,FLinearColor(0,0,0,0));
		/*if (!srv)
			srv_Bake = CopyMap(Bake, false);*/
	}
	return Bake;
}

UTexture2D* ASoignantsGenerator::LoadBakedSoignant(int id)
{
	FString path = "/Game/Characters/Soignants/Baked_Faces/";
	FString filename = TEXT("face_" + FString::FromInt(id));
	filename = TEXT("" + filename + "." + filename);
	path = path + filename;
	if(FPaths::FileExists(path))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("File not found: " + path));
		return nullptr;
	}
	else
	{
		UTexture2D* tmp = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *path));
		return tmp;

	}
}
