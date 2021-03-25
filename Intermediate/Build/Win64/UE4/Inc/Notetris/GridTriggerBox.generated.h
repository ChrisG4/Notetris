// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class AActor;
#ifdef NOTETRIS_GridTriggerBox_generated_h
#error "GridTriggerBox.generated.h already included, missing '#pragma once' in GridTriggerBox.h"
#endif
#define NOTETRIS_GridTriggerBox_generated_h

#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_SPARSE_DATA
#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGridIndex); \
	DECLARE_FUNCTION(execGetIsSpaceOccupied); \
	DECLARE_FUNCTION(execSetIsSpaceOccupied); \
	DECLARE_FUNCTION(execOnBlockEndOverlap); \
	DECLARE_FUNCTION(execOnBlockBeginOverlap);


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGridIndex); \
	DECLARE_FUNCTION(execGetIsSpaceOccupied); \
	DECLARE_FUNCTION(execSetIsSpaceOccupied); \
	DECLARE_FUNCTION(execOnBlockEndOverlap); \
	DECLARE_FUNCTION(execOnBlockBeginOverlap);


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridTriggerBox(); \
	friend struct Z_Construct_UClass_AGridTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AGridTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(AGridTriggerBox)


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGridTriggerBox(); \
	friend struct Z_Construct_UClass_AGridTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AGridTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(AGridTriggerBox)


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridTriggerBox(AGridTriggerBox&&); \
	NO_API AGridTriggerBox(const AGridTriggerBox&); \
public:


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridTriggerBox(AGridTriggerBox&&); \
	NO_API AGridTriggerBox(const AGridTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridTriggerBox)


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridIndex() { return STRUCT_OFFSET(AGridTriggerBox, GridIndex); } \
	FORCEINLINE static uint32 __PPO__bIsSpaceOccupied() { return STRUCT_OFFSET(AGridTriggerBox, bIsSpaceOccupied); }


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_14_PROLOG
#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_SPARSE_DATA \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_RPC_WRAPPERS \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_INCLASS \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_SPARSE_DATA \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class AGridTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_Game_Grid_GridTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
