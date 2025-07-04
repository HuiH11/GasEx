// Copyright Epic Games, Inc. All Rights Reserved.

#include "GasExGameMode.h"
#include "GasExCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGasExGameMode::AGasExGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
