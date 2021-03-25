// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTETRIS_Score_generated_h
#error "Score.generated.h already included, missing '#pragma once' in Score.h"
#endif
#define NOTETRIS_Score_generated_h

#define Notetris_Source_Notetris_Text_Score_h_15_SPARSE_DATA
#define Notetris_Source_Notetris_Text_Score_h_15_RPC_WRAPPERS
#define Notetris_Source_Notetris_Text_Score_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Notetris_Source_Notetris_Text_Score_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScore(); \
	friend struct Z_Construct_UClass_AScore_Statics; \
public: \
	DECLARE_CLASS(AScore, ADynamicText, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(AScore)


#define Notetris_Source_Notetris_Text_Score_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAScore(); \
	friend struct Z_Construct_UClass_AScore_Statics; \
public: \
	DECLARE_CLASS(AScore, ADynamicText, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(AScore)


#define Notetris_Source_Notetris_Text_Score_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScore(AScore&&); \
	NO_API AScore(const AScore&); \
public:


#define Notetris_Source_Notetris_Text_Score_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScore() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScore(AScore&&); \
	NO_API AScore(const AScore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScore)


#define Notetris_Source_Notetris_Text_Score_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerScore() { return STRUCT_OFFSET(AScore, PlayerScore); }


#define Notetris_Source_Notetris_Text_Score_h_12_PROLOG
#define Notetris_Source_Notetris_Text_Score_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Text_Score_h_15_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Text_Score_h_15_SPARSE_DATA \
	Notetris_Source_Notetris_Text_Score_h_15_RPC_WRAPPERS \
	Notetris_Source_Notetris_Text_Score_h_15_INCLASS \
	Notetris_Source_Notetris_Text_Score_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_Text_Score_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Text_Score_h_15_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Text_Score_h_15_SPARSE_DATA \
	Notetris_Source_Notetris_Text_Score_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Text_Score_h_15_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Text_Score_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class AScore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_Text_Score_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
