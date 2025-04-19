// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WhisperFunction.generated.h"

UCLASS()
class CAPSTONE_PROJECT_API UWhisperFunction : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Whisper")
    static void RunWhisperScript();
};
