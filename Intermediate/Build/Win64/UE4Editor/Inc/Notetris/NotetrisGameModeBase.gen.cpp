// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/NotetrisGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotetrisGameModeBase() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ANotetrisGameModeBase_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ANotetrisGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Notetris();
// End Cross Module References
	void ANotetrisGameModeBase::StaticRegisterNativesANotetrisGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ANotetrisGameModeBase_NoRegister()
	{
		return ANotetrisGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANotetrisGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANotetrisGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANotetrisGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NotetrisGameModeBase.h" },
		{ "ModuleRelativePath", "NotetrisGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANotetrisGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotetrisGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANotetrisGameModeBase_Statics::ClassParams = {
		&ANotetrisGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANotetrisGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANotetrisGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANotetrisGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANotetrisGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANotetrisGameModeBase, 3989253560);
	template<> NOTETRIS_API UClass* StaticClass<ANotetrisGameModeBase>()
	{
		return ANotetrisGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANotetrisGameModeBase(Z_Construct_UClass_ANotetrisGameModeBase, &ANotetrisGameModeBase::StaticClass, TEXT("/Script/Notetris"), TEXT("ANotetrisGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANotetrisGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
