// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/BuildingEscapeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscapeGameMode() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ABuildingEscapeGameMode::StaticRegisterNativesABuildingEscapeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister()
	{
		return ABuildingEscapeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingEscapeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingEscapeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuildingEscapeGameMode.h" },
		{ "ModuleRelativePath", "BuildingEscapeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingEscapeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingEscapeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::ClassParams = {
		&ABuildingEscapeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingEscapeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscapeGameMode, 2741832216);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ABuildingEscapeGameMode>()
	{
		return ABuildingEscapeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscapeGameMode(Z_Construct_UClass_ABuildingEscapeGameMode, &ABuildingEscapeGameMode::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ABuildingEscapeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
