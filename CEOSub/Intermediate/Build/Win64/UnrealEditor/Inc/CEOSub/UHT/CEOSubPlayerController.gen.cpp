// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CEOSub/CEOSubPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEOSubPlayerController() {}

// Begin Cross Module References
CEOSUB_API UClass* Z_Construct_UClass_ACEOSubPlayerController();
CEOSUB_API UClass* Z_Construct_UClass_ACEOSubPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CEOSub();
// End Cross Module References

// Begin Class ACEOSubPlayerController
void ACEOSubPlayerController::StaticRegisterNativesACEOSubPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACEOSubPlayerController);
UClass* Z_Construct_UClass_ACEOSubPlayerController_NoRegister()
{
	return ACEOSubPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACEOSubPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CEOSubPlayerController.h" },
		{ "ModuleRelativePath", "CEOSubPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "CEOSubPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEOSubPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEOSubPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEOSubPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEOSubPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEOSubPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEOSubPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACEOSubPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CEOSub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEOSubPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACEOSubPlayerController_Statics::ClassParams = {
	&ACEOSubPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACEOSubPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACEOSubPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEOSubPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACEOSubPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACEOSubPlayerController()
{
	if (!Z_Registration_Info_UClass_ACEOSubPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACEOSubPlayerController.OuterSingleton, Z_Construct_UClass_ACEOSubPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACEOSubPlayerController.OuterSingleton;
}
template<> CEOSUB_API UClass* StaticClass<ACEOSubPlayerController>()
{
	return ACEOSubPlayerController::StaticClass();
}
ACEOSubPlayerController::ACEOSubPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACEOSubPlayerController);
ACEOSubPlayerController::~ACEOSubPlayerController() {}
// End Class ACEOSubPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACEOSubPlayerController, ACEOSubPlayerController::StaticClass, TEXT("ACEOSubPlayerController"), &Z_Registration_Info_UClass_ACEOSubPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACEOSubPlayerController), 2946193625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_672006294(TEXT("/Script/CEOSub"),
	Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CEOSub_CEOSub_CEOSub_Source_CEOSub_CEOSubPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
