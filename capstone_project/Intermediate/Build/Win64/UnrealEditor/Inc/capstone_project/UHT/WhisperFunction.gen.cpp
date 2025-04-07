// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "capstone_project/WhisperFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhisperFunction() {}

// Begin Cross Module References
CAPSTONE_PROJECT_API UClass* Z_Construct_UClass_UWhisperFunction();
CAPSTONE_PROJECT_API UClass* Z_Construct_UClass_UWhisperFunction_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_capstone_project();
// End Cross Module References

// Begin Class UWhisperFunction Function RunWhisperScript
struct Z_Construct_UFunction_UWhisperFunction_RunWhisperScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whisper" },
		{ "ModuleRelativePath", "WhisperFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhisperFunction_RunWhisperScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhisperFunction, nullptr, "RunWhisperScript", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhisperFunction_RunWhisperScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhisperFunction_RunWhisperScript_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhisperFunction_RunWhisperScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhisperFunction_RunWhisperScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhisperFunction::execRunWhisperScript)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UWhisperFunction::RunWhisperScript();
	P_NATIVE_END;
}
// End Class UWhisperFunction Function RunWhisperScript

// Begin Class UWhisperFunction
void UWhisperFunction::StaticRegisterNativesUWhisperFunction()
{
	UClass* Class = UWhisperFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunWhisperScript", &UWhisperFunction::execRunWhisperScript },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWhisperFunction);
UClass* Z_Construct_UClass_UWhisperFunction_NoRegister()
{
	return UWhisperFunction::StaticClass();
}
struct Z_Construct_UClass_UWhisperFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WhisperFunction.h" },
		{ "ModuleRelativePath", "WhisperFunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWhisperFunction_RunWhisperScript, "RunWhisperScript" }, // 1207771338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWhisperFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWhisperFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_capstone_project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWhisperFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWhisperFunction_Statics::ClassParams = {
	&UWhisperFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWhisperFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UWhisperFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWhisperFunction()
{
	if (!Z_Registration_Info_UClass_UWhisperFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWhisperFunction.OuterSingleton, Z_Construct_UClass_UWhisperFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWhisperFunction.OuterSingleton;
}
template<> CAPSTONE_PROJECT_API UClass* StaticClass<UWhisperFunction>()
{
	return UWhisperFunction::StaticClass();
}
UWhisperFunction::UWhisperFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWhisperFunction);
UWhisperFunction::~UWhisperFunction() {}
// End Class UWhisperFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWhisperFunction, UWhisperFunction::StaticClass, TEXT("UWhisperFunction"), &Z_Registration_Info_UClass_UWhisperFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWhisperFunction), 3099908244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_1382091037(TEXT("/Script/capstone_project"),
	Z_CompiledInDeferFile_FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
