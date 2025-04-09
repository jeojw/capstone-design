// Fill out your copyright notice in the Description page of Project Settings.


#include "WhisperFunction.h"
#include "Misc/Paths.h"
#include "Misc/FeedbackContext.h"
#include "HAL/PlatformProcess.h"

/*void UWhisperFunction::RunWhisperScript()
{
    FString PythonPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Python3_9_9/python.exe"));
    FString ScriptPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Python3_9_9/run_whisper.py"));
    FString Params = FString::Printf(TEXT("\"%s\""), *ScriptPath);

    FPlatformProcess::CreateProc(
        *PythonPath,
        *Params,
        true, false, false,
        nullptr, 0, nullptr, nullptr
    );
}
*/
#include "WhisperFunction.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
#include "Misc/OutputDeviceNull.h"

void UWhisperFunction::RunWhisperScript()
{
    FString ProjectDir = FPaths::ProjectDir();
    FString PythonPath = FPaths::Combine(ProjectDir, TEXT("Python3_9_9/python.exe"));
    FString ScriptPath = FPaths::Combine(ProjectDir, TEXT("Python3_9_9/run_whisper.py"));
    FString Params = FString::Printf(TEXT("\"%s\""), *ScriptPath);

    FString WorkingDir = FPaths::Combine(ProjectDir, TEXT("Python3_9_9"));  // 🔥 작업 디렉터리 설정

    FPlatformProcess::CreateProc(
        *PythonPath,
        *Params,
        true, true, false,
        nullptr, 0, *WorkingDir, nullptr
    );
}


