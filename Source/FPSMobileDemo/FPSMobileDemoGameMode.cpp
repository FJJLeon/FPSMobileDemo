// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSMobileDemoGameMode.h"
#include "FPSMobileDemoHUD.h"
#include "FPSMobileDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSMobileDemoGameMode::AFPSMobileDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSMobileDemoHUD::StaticClass();
}
