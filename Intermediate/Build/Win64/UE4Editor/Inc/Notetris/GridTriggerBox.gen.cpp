// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/GridTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridTriggerBox() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_AGridTriggerBox_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AGridTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGridTriggerBox::execSetGridIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridIndex(Z_Param_NewGridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridTriggerBox::execGetIsSpaceOccupied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSpaceOccupied();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridTriggerBox::execSetIsSpaceOccupied)
	{
		P_GET_UBOOL(Z_Param_IsSpaceOccupied);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSpaceOccupied(Z_Param_IsSpaceOccupied);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridTriggerBox::execOnBlockEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridTriggerBox::execOnBlockBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AGridTriggerBox::StaticRegisterNativesAGridTriggerBox()
	{
		UClass* Class = AGridTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSpaceOccupied", &AGridTriggerBox::execGetIsSpaceOccupied },
			{ "OnBlockBeginOverlap", &AGridTriggerBox::execOnBlockBeginOverlap },
			{ "OnBlockEndOverlap", &AGridTriggerBox::execOnBlockEndOverlap },
			{ "SetGridIndex", &AGridTriggerBox::execSetGridIndex },
			{ "SetIsSpaceOccupied", &AGridTriggerBox::execSetIsSpaceOccupied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics
	{
		struct GridTriggerBox_eventGetIsSpaceOccupied_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridTriggerBox_eventGetIsSpaceOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridTriggerBox_eventGetIsSpaceOccupied_Parms), &Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridTriggerBox, nullptr, "GetIsSpaceOccupied", nullptr, nullptr, sizeof(GridTriggerBox_eventGetIsSpaceOccupied_Parms), Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics
	{
		struct GridTriggerBox_eventOnBlockBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridTriggerBox_eventOnBlockBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridTriggerBox_eventOnBlockBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridTriggerBox, nullptr, "OnBlockBeginOverlap", nullptr, nullptr, sizeof(GridTriggerBox_eventOnBlockBeginOverlap_Parms), Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics
	{
		struct GridTriggerBox_eventOnBlockEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridTriggerBox_eventOnBlockEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridTriggerBox_eventOnBlockEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridTriggerBox, nullptr, "OnBlockEndOverlap", nullptr, nullptr, sizeof(GridTriggerBox_eventOnBlockEndOverlap_Parms), Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics
	{
		struct GridTriggerBox_eventSetGridIndex_Parms
		{
			int32 NewGridIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewGridIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::NewProp_NewGridIndex = { "NewGridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridTriggerBox_eventSetGridIndex_Parms, NewGridIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::NewProp_NewGridIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridTriggerBox, nullptr, "SetGridIndex", nullptr, nullptr, sizeof(GridTriggerBox_eventSetGridIndex_Parms), Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridTriggerBox_SetGridIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridTriggerBox_SetGridIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics
	{
		struct GridTriggerBox_eventSetIsSpaceOccupied_Parms
		{
			bool IsSpaceOccupied;
		};
		static void NewProp_IsSpaceOccupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSpaceOccupied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::NewProp_IsSpaceOccupied_SetBit(void* Obj)
	{
		((GridTriggerBox_eventSetIsSpaceOccupied_Parms*)Obj)->IsSpaceOccupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::NewProp_IsSpaceOccupied = { "IsSpaceOccupied", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridTriggerBox_eventSetIsSpaceOccupied_Parms), &Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::NewProp_IsSpaceOccupied_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::NewProp_IsSpaceOccupied,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridTriggerBox, nullptr, "SetIsSpaceOccupied", nullptr, nullptr, sizeof(GridTriggerBox_eventSetIsSpaceOccupied_Parms), Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGridTriggerBox_NoRegister()
	{
		return AGridTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AGridTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpaceOccupied_MetaData[];
#endif
		static void NewProp_bIsSpaceOccupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpaceOccupied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridTriggerBox_GetIsSpaceOccupied, "GetIsSpaceOccupied" }, // 1142429638
		{ &Z_Construct_UFunction_AGridTriggerBox_OnBlockBeginOverlap, "OnBlockBeginOverlap" }, // 909406801
		{ &Z_Construct_UFunction_AGridTriggerBox_OnBlockEndOverlap, "OnBlockEndOverlap" }, // 942104857
		{ &Z_Construct_UFunction_AGridTriggerBox_SetGridIndex, "SetGridIndex" }, // 1097275892
		{ &Z_Construct_UFunction_AGridTriggerBox_SetIsSpaceOccupied, "SetIsSpaceOccupied" }, // 3301826151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GridTriggerBox.h" },
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_GridIndex_MetaData[] = {
		{ "Category", "GridTriggerBox" },
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridTriggerBox, GridIndex), METADATA_PARAMS(Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_GridIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_GridIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied_MetaData[] = {
		{ "Category", "GridTriggerBox" },
		{ "ModuleRelativePath", "GridTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied_SetBit(void* Obj)
	{
		((AGridTriggerBox*)Obj)->bIsSpaceOccupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied = { "bIsSpaceOccupied", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGridTriggerBox), &Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridTriggerBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_GridIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTriggerBox_Statics::NewProp_bIsSpaceOccupied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridTriggerBox_Statics::ClassParams = {
		&AGridTriggerBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridTriggerBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridTriggerBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridTriggerBox, 1623949991);
	template<> NOTETRIS_API UClass* StaticClass<AGridTriggerBox>()
	{
		return AGridTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridTriggerBox(Z_Construct_UClass_AGridTriggerBox, &AGridTriggerBox::StaticClass, TEXT("/Script/Notetris"), TEXT("AGridTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
