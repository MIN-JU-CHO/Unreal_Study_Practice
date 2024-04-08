// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API AABGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	AABGameModeBase();

	virtual void PostLogin(APlayerController* NewPlayer) override;
};
