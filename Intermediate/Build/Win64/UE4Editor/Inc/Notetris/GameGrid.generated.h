// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTETRIS_GameGrid_generated_h
#error "GameGrid.generated.h already included, missing '#pragma once' in GameGrid.h"
#endif
#define NOTETRIS_GameGrid_generated_h

#define Notetris_Source_Notetris_GameGrid_h_13_SPARSE_DATA
#define Notetris_Source_Notetris_GameGrid_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsGridBoxOccupied);


#define Notetris_Source_Notetris_GameGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsGridBoxOccupied);


#define Notetris_Source_Notetris_GameGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameGrid(); \
	friend struct Z_Construct_UClass_AGameGrid_Statics; \
public: \
	DECLARE_CLASS(AGameGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(AGameGrid)


#define Notetris_Source_Notetris_GameGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGameGrid(); \
	friend struct Z_Construct_UClass_AGameGrid_Statics; \
public: \
	DECLARE_CLASS(AGameGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(AGameGrid)


#define Notetris_Source_Notetris_GameGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameGrid(AGameGrid&&); \
	NO_API AGameGrid(const AGameGrid&); \
public:


#define Notetris_Source_Notetris_GameGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameGrid(AGameGrid&&); \
	NO_API AGameGrid(const AGameGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameGrid)


#define Notetris_Source_Notetris_GameGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridBox() { return STRUCT_OFFSET(AGameGrid, GridBox); } \
	FORCEINLINE static uint32 __PPO__GridBoxes() { return STRUCT_OFFSET(AGameGrid, GridBoxes); }


#define Notetris_Source_Notetris_GameGrid_h_10_PROLOG
#define Notetris_Source_Notetris_GameGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_GameGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_GameGrid_h_13_SPARSE_DATA \
	Notetris_Source_Notetris_GameGrid_h_13_RPC_WRAPPERS \
	Notetris_Source_Notetris_GameGrid_h_13_INCLASS \
	Notetris_Source_Notetris_GameGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_GameGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_GameGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_GameGrid_h_13_SPARSE_DATA \
	Notetris_Source_Notetris_GameGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_GameGrid_h_13_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_GameGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class AGameGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_GameGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
