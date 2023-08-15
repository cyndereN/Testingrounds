// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestingroundsGameMode.h"
#include "TestingroundsHUD.h"
#include "TestingroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingroundsGameMode::ATestingroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingroundsHUD::StaticClass();
}
