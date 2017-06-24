// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NewProject.h"
#include "NewProjectGameMode.h"
#include "NewProjectCharacter.h"

ANewProjectGameMode::ANewProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
