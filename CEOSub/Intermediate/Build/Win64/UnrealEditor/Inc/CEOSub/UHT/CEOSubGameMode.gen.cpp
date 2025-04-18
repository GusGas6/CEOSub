// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CEOSub/CEOSubGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEOSubGameMode() {}

// Begin Cross Module References
CEOSUB_API UClass* Z_Construct_UClass_ACEOSubGameMode();
CEOSUB_API UClass* Z_Construct_UClass_ACEOSubGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CEOSub();
// End Cross Module References

// Begin Class ACEOSubGameMode
void ACEOSubGameMode::StaticRegisterNativesACEOSubGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACEOSubGameMode);
UClass* Z_Construct_UClass_ACEOSubGameMode_NoRegister()
{
	return ACEOSubGameMode::StaticClass();
}
struct Z_Construct_UClass_ACEOSubGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CEOSubGameMode.h" },
		{ "ModuleRelativePath", "CEOSubGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEOSubGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACEOSubGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CEOSub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEOSubGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACEOSubGameMode_Statics::ClassParams = {
	&ACEOSubGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEOSubGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACEOSubGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACEOSubGameMode()
{
	if (!Z_Registration_Info_UClass_ACEOSubGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACEOSubGameMode.OuterSingleton, Z_Construct_UClass_ACEOSubGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACEOSubGameMode.OuterSingleton;
}
template<> CEOSUB_API UClass* StaticClass<ACEOSubGameMode>()
{
	return ACEOSubGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACEOSubGameMode);
ACEOSubGameMode::~ACEOSubGameMode() {}
// End Class ACEOSubGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACEOSubGameMode, ACEOSubGameMode::StaticClass, TEXT("ACEOSubGameMode"), &Z_Registration_Info_UClass_ACEOSubGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACEOSubGameMode), 2793513241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubGameMode_h_1470789769(TEXT("/Script/CEOSub"),
	Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
