// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameStates.generated.h"

UENUM(BlueprintType)
enum EState
{
	GSE_RoundWait	UMETA(DisplayName = "RoundWait"),
	GSE_RoundPlay	UMETA(DisplayName = "RoundPlay"),
	GSE_RoundPause	UMETA(DisplayName = "RoundPause"),
	GSE_GameOver	UMETA(DisplayName = "GameOver"),
	GSE_GameMenu	UMETA(DisplayName = "GameMenu")
};