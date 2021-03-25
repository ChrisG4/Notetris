// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTETRIS_TimerText_generated_h
#error "TimerText.generated.h already included, missing '#pragma once' in TimerText.h"
#endif
#define NOTETRIS_TimerText_generated_h

#define Notetris_Source_Notetris_Text_TimerText_h_16_SPARSE_DATA
#define Notetris_Source_Notetris_Text_TimerText_h_16_RPC_WRAPPERS
#define Notetris_Source_Notetris_Text_TimerText_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Notetris_Source_Notetris_Text_TimerText_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimerText(); \
	friend struct Z_Construct_UClass_ATimerText_Statics; \
public: \
	DECLARE_CLASS(ATimerText, ADynamicText, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ATimerText)


#define Notetris_Source_Notetris_Text_TimerText_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATimerText(); \
	friend struct Z_Construct_UClass_ATimerText_Statics; \
public: \
	DECLARE_CLASS(ATimerText, ADynamicText, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ATimerText)


#define Notetris_Source_Notetris_Text_TimerText_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimerText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimerText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimerText(ATimerText&&); \
	NO_API ATimerText(const ATimerText&); \
public:


#define Notetris_Source_Notetris_Text_TimerText_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimerText() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimerText(ATimerText&&); \
	NO_API ATimerText(const ATimerText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimerText)


#define Notetris_Source_Notetris_Text_TimerText_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsCountingUp() { return STRUCT_OFFSET(ATimerText, IsCountingUp); } \
	FORCEINLINE static uint32 __PPO__StartingTime() { return STRUCT_OFFSET(ATimerText, StartingTime); } \
	FORCEINLINE static uint32 __PPO__CurrentGameGrid() { return STRUCT_OFFSET(ATimerText, CurrentGameGrid); }


#define Notetris_Source_Notetris_Text_TimerText_h_13_PROLOG
#define Notetris_Source_Notetris_Text_TimerText_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Text_TimerText_h_16_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Text_TimerText_h_16_SPARSE_DATA \
	Notetris_Source_Notetris_Text_TimerText_h_16_RPC_WRAPPERS \
	Notetris_Source_Notetris_Text_TimerText_h_16_INCLASS \
	Notetris_Source_Notetris_Text_TimerText_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_Text_TimerText_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Text_TimerText_h_16_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Text_TimerText_h_16_SPARSE_DATA \
	Notetris_Source_Notetris_Text_TimerText_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Text_TimerText_h_16_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Text_TimerText_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class ATimerText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_Text_TimerText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
