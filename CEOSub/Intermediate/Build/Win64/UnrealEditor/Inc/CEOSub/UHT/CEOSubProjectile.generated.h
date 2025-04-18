// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CEOSubProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CEOSUB_CEOSubProjectile_generated_h
#error "CEOSubProjectile.generated.h already included, missing '#pragma once' in CEOSubProjectile.h"
#endif
#define CEOSUB_CEOSubProjectile_generated_h

#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEOSubProjectile(); \
	friend struct Z_Construct_UClass_ACEOSubProjectile_Statics; \
public: \
	DECLARE_CLASS(ACEOSubProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CEOSub"), NO_API) \
	DECLARE_SERIALIZER(ACEOSubProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACEOSubProjectile(ACEOSubProjectile&&); \
	ACEOSubProjectile(const ACEOSubProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEOSubProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEOSubProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEOSubProjectile) \
	NO_API virtual ~ACEOSubProjectile();


#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_12_PROLOG
#define FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CEOSUB_API UClass* StaticClass<class ACEOSubProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
