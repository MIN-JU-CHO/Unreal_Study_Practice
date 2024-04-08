// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameModeBase.h"
#include "MyProject2.h"

AABGameModeBase::AABGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> LoadedDefaultCharacter(TEXT("/Game/BluePrint/CharacterBP.CharacterBP_C"));
	if (LoadedDefaultCharacter.Class)
	{
		DefaultPawnClass = LoadedDefaultCharacter.Class;
	}
	static ConstructorHelpers::FClassFinder <APlayerController> LoadedPlayerController(TEXT("/Game/BluePrint/PlayerControllerBP.PlayerControllerBP_C"));
	if (LoadedPlayerController.Class)
	{
		PlayerControllerClass = LoadedPlayerController.Class;
	}
}

void AABGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}
