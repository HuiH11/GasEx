// Fill out your copyright notice in the Description page of Project Settings.


#include "GasExAssetManager.h"
#include "AbilitySystemGlobals.h"

void UGasExAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
	UE_LOG(LogTemp, Warning, TEXT("Hello World!!!!!!!!!!!"));
}