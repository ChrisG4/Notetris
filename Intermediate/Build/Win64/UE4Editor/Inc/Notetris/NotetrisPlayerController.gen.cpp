// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/NotetrisPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotetrisPlayerController() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ANotetrisPlayerController_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ANotetrisPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Notetris();
// End Cross Module References
	void ANotetrisPlayerController::StaticRegisterNativesANotetrisPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ANotetrisPlayerController_NoRegister()
	{
		return ANotetrisPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANotetrisPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANotetrisPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANotetrisPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NotetrisPlayerController.h" },
		{ "ModuleRelativePath", "NotetrisPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANotetrisPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotetrisPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANotetrisPlayerController_Statics::ClassParams = {
		&ANotetrisPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANotetrisPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANotetrisPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANotetrisPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANotetrisPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANotetrisPlayerController, 3946800591);
	template<> NOTETRIS_API UClass* StaticClass<ANotetrisPlayerController>()
	{
		return ANotetrisPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANotetrisPlayerController(Z_Construct_UClass_ANotetrisPlayerController, &ANotetrisPlayerController::StaticClass, TEXT("/Script/Notetris"), TEXT("ANotetrisPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANotetrisPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
