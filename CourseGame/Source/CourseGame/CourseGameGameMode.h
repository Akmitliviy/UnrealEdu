// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CourseGameGameMode.generated.h"

UCLASS(minimalapi)
class ACourseGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACourseGameGameMode();

	void MyFunc();

	// virtual void InitGame() override; // створення гри
	// virtual void PreLogin() override; // перевірка
	// virtual void PostLogin() override; // після логіну
	// virtual void Logout() override; //коли відбувається вихід з гри
	
};



