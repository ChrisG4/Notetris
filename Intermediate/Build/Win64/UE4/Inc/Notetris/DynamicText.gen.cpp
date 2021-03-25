// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Text/DynamicText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicText() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ADynamicText_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ADynamicText();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ADynamicText::StaticRegisterNativesADynamicText()
	{
	}
	UClass* Z_Construct_UClass_ADynamicText_NoRegister()
	{
		return ADynamicText::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Text/DynamicText.h" },
		{ "ModuleRelativePath", "Text/DynamicText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicText_Statics::NewProp_TextRoot_MetaData[] = {
		{ "Category", "DynamicText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Text/DynamicText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicText_Statics::NewProp_TextRoot = { "TextRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicText, TextRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicText_Statics::NewProp_TextRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicText_Statics::NewProp_TextRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicText_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "DynamicText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Text/DynamicText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicText, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicText_Statics::NewProp_TextRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicText_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADynamicText_Statics::ClassParams = {
		&ADynamicText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADynamicText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicText_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADynamicText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADynamicText, 3049564347);
	template<> NOTETRIS_API UClass* StaticClass<ADynamicText>()
	{
		return ADynamicText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADynamicText(Z_Construct_UClass_ADynamicText, &ADynamicText::StaticClass, TEXT("/Script/Notetris"), TEXT("ADynamicText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
