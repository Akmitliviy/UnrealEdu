// Copyright Epic Games, Inc. All Rights Reserved.

#include "CourseGameGameMode.h"
#include "CourseGameCharacter.h"
#include "GameFramework/GameStateBase.h"
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

void ACourseGameGameMode::MyFunc()
{
	UObject* Obj = NewObject<UObject>();
	TSubclassOf<UObject> Class;

	UGameInstance* GameInstance = GetWorld()->GetGameInstance();
	// GetWorld()->GetAuthGameMode()->GetGameState();
	// GetWorld()->GetGameState();
	// GetWorld()->GetGameState()->PlayerArray;
	// GetWorld()->GetGameState()->GetGameTimeSinceCreation();
	// GetWorld()->GetGameState()->HasBegunPlay(); // тру якщо всі підключилися і гра почалася
	
	
}
