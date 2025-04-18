// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CEOSubPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CEOSUB_CEOSubPlayerController_generated_h
#error "CEOSubPlayerController.generated.h already included, missing '#pragma once' in CEOSubPlayerController.h"
#endif
#define CEOSUB_CEOSubPlayerController_generated_h

#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEOSubPlayerController(); \
	friend struct Z_Construct_UClass_ACEOSubPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACEOSubPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CEOSub"), NO_API) \
	DECLARE_SERIALIZER(ACEOSubPlayerController)


#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACEOSubPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACEOSubPlayerController(ACEOSubPlayerController&&); \
	ACEOSubPlayerController(const ACEOSubPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEOSubPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEOSubPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACEOSubPlayerController) \
	NO_API virtual ~ACEOSubPlayerController();


#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_14_PROLOG
#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CEOSUB_API UClass* StaticClass<class ACEOSubPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
