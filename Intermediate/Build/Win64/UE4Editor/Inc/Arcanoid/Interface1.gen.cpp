// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Interface1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface1() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_UInterface1_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UInterface1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void UInterface1::StaticRegisterNativesUInterface1()
	{
	}
	UClass* Z_Construct_UClass_UInterface1_NoRegister()
	{
		return UInterface1::StaticClass();
	}
	struct Z_Construct_UClass_UInterface1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface1_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface1_Statics::ClassParams = {
		&UInterface1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterface1, 2202810832);
	template<> ARCANOID_API UClass* StaticClass<UInterface1>()
	{
		return UInterface1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface1(Z_Construct_UClass_UInterface1, &UInterface1::StaticClass, TEXT("/Script/Arcanoid"), TEXT("UInterface1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
