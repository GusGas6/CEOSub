// Copyright Epic Games, Inc. All Rights Reserved.

#include "CEOSubGameMode.h"
#include "CEOSubCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACEOSubGameMode::ACEOSubGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
