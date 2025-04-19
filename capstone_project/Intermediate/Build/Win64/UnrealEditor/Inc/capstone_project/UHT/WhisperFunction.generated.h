// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WhisperFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPSTONE_PROJECT_WhisperFunction_generated_h
#error "WhisperFunction.generated.h already included, missing '#pragma once' in WhisperFunction.h"
#endif
#define CAPSTONE_PROJECT_WhisperFunction_generated_h

#define FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunWhisperScript);


#define FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWhisperFunction(); \
	friend struct Z_Construct_UClass_UWhisperFunction_Statics; \
public: \
	DECLARE_CLASS(UWhisperFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/capstone_project"), NO_API) \
	DECLARE_SERIALIZER(UWhisperFunction)


#define FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWhisperFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWhisperFunction(UWhisperFunction&&); \
	UWhisperFunction(const UWhisperFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhisperFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhisperFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWhisperFunction) \
	NO_API virtual ~UWhisperFunction();


#define FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_9_PROLOG
#define FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_PROJECT_API UClass* StaticClass<class UWhisperFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitClone_capstone_design_capstone_project_Source_capstone_project_WhisperFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
