// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Interface1_generated_h
#error "Interface1.generated.h already included, missing '#pragma once' in Interface1.h"
#endif
#define ARCANOID_Interface1_generated_h

#define Arcanoid_Source_Arcanoid_Interface1_h_13_SPARSE_DATA
#define Arcanoid_Source_Arcanoid_Interface1_h_13_RPC_WRAPPERS
#define Arcanoid_Source_Arcanoid_Interface1_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoid_Source_Arcanoid_Interface1_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UInterface1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UInterface1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UInterface1(UInterface1&&); \
	ARCANOID_API UInterface1(const UInterface1&); \
public:


#define Arcanoid_Source_Arcanoid_Interface1_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UInterface1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UInterface1(UInterface1&&); \
	ARCANOID_API UInterface1(const UInterface1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UInterface1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface1); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface1)


#define Arcanoid_Source_Arcanoid_Interface1_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface1(); \
	friend struct Z_Construct_UClass_UInterface1_Statics; \
public: \
	DECLARE_CLASS(UInterface1, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arcanoid"), ARCANOID_API) \
	DECLARE_SERIALIZER(UInterface1)


#define Arcanoid_Source_Arcanoid_Interface1_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoid_Source_Arcanoid_Interface1_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoid_Source_Arcanoid_Interface1_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_Source_Arcanoid_Interface1_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoid_Source_Arcanoid_Interface1_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoid_Source_Arcanoid_Interface1_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_Source_Arcanoid_Interface1_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface1() {} \
public: \
	typedef UInterface1 UClassType; \
	typedef IInterface1 ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoid_Source_Arcanoid_Interface1_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface1() {} \
public: \
	typedef UInterface1 UClassType; \
	typedef IInterface1 ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoid_Source_Arcanoid_Interface1_h_10_PROLOG
#define Arcanoid_Source_Arcanoid_Interface1_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_Source_Arcanoid_Interface1_h_13_SPARSE_DATA \
	Arcanoid_Source_Arcanoid_Interface1_h_13_RPC_WRAPPERS \
	Arcanoid_Source_Arcanoid_Interface1_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_Source_Arcanoid_Interface1_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_Source_Arcanoid_Interface1_h_13_SPARSE_DATA \
	Arcanoid_Source_Arcanoid_Interface1_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid_Source_Arcanoid_Interface1_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class UInterface1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid_Source_Arcanoid_Interface1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
