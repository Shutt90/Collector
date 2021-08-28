// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLECTOR_CollectorCharacter_generated_h
#error "CollectorCharacter.generated.h already included, missing '#pragma once' in CollectorCharacter.h"
#endif
#define COLLECTOR_CollectorCharacter_generated_h

#define Collector_Source_Collector_CollectorCharacter_h_12_SPARSE_DATA
#define Collector_Source_Collector_CollectorCharacter_h_12_RPC_WRAPPERS
#define Collector_Source_Collector_CollectorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Collector_Source_Collector_CollectorCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectorCharacter(); \
	friend struct Z_Construct_UClass_ACollectorCharacter_Statics; \
public: \
	DECLARE_CLASS(ACollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Collector"), NO_API) \
	DECLARE_SERIALIZER(ACollectorCharacter)


#define Collector_Source_Collector_CollectorCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectorCharacter(); \
	friend struct Z_Construct_UClass_ACollectorCharacter_Statics; \
public: \
	DECLARE_CLASS(ACollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Collector"), NO_API) \
	DECLARE_SERIALIZER(ACollectorCharacter)


#define Collector_Source_Collector_CollectorCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectorCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectorCharacter(ACollectorCharacter&&); \
	NO_API ACollectorCharacter(const ACollectorCharacter&); \
public:


#define Collector_Source_Collector_CollectorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectorCharacter(ACollectorCharacter&&); \
	NO_API ACollectorCharacter(const ACollectorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectorCharacter)


#define Collector_Source_Collector_CollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACollectorCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACollectorCharacter, FollowCamera); }


#define Collector_Source_Collector_CollectorCharacter_h_9_PROLOG
#define Collector_Source_Collector_CollectorCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collector_Source_Collector_CollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Collector_Source_Collector_CollectorCharacter_h_12_SPARSE_DATA \
	Collector_Source_Collector_CollectorCharacter_h_12_RPC_WRAPPERS \
	Collector_Source_Collector_CollectorCharacter_h_12_INCLASS \
	Collector_Source_Collector_CollectorCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collector_Source_Collector_CollectorCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collector_Source_Collector_CollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Collector_Source_Collector_CollectorCharacter_h_12_SPARSE_DATA \
	Collector_Source_Collector_CollectorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Collector_Source_Collector_CollectorCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Collector_Source_Collector_CollectorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTOR_API UClass* StaticClass<class ACollectorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collector_Source_Collector_CollectorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
