// Copyright Epic Games, Inc. All Rights Reserved.

#include "battery_collectorGameMode.h"
#include "battery_collectorCharacter.h"
#include "UObject/ConstructorHelpers.h"

Abattery_collectorGameMode::Abattery_collectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
