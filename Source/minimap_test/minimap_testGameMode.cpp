// Copyright Epic Games, Inc. All Rights Reserved.

#include "minimap_testGameMode.h"
#include "minimap_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aminimap_testGameMode::Aminimap_testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
