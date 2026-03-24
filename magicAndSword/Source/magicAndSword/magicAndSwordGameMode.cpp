// Copyright Epic Games, Inc. All Rights Reserved.

#include "magicAndSwordGameMode.h"
#include "magicAndSwordCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmagicAndSwordGameMode::AmagicAndSwordGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
