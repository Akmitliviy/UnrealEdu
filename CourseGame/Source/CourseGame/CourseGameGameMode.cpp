// Copyright Epic Games, Inc. All Rights Reserved.

#include "CourseGameGameMode.h"
#include "CourseGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACourseGameGameMode::ACourseGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
