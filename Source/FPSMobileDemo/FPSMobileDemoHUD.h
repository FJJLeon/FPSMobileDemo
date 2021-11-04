// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSMobileDemoHUD.generated.h"

UCLASS()
class AFPSMobileDemoHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSMobileDemoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

