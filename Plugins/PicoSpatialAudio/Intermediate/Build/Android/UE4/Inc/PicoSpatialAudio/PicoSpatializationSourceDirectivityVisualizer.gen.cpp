// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoSpatializationSourceDirectivityVisualizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatializationSourceDirectivityVisualizer() {}
// Cross Module References
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatializationSourceSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APicoSpatializationSourceDirectivityVisualizer::execSetMaterial)
	{
		P_GET_OBJECT(UMaterial,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APicoSpatializationSourceDirectivityVisualizer::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPicoSpatializationSourceSettings**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APicoSpatializationSourceDirectivityVisualizer::execSetSettings)
	{
		P_GET_OBJECT(UPicoSpatializationSourceSettings,Z_Param_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APicoSpatializationSourceDirectivityVisualizer::execDrawPattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawPattern();
		P_NATIVE_END;
	}
	void APicoSpatializationSourceDirectivityVisualizer::StaticRegisterNativesAPicoSpatializationSourceDirectivityVisualizer()
	{
		UClass* Class = APicoSpatializationSourceDirectivityVisualizer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawPattern", &APicoSpatializationSourceDirectivityVisualizer::execDrawPattern },
			{ "GetSettings", &APicoSpatializationSourceDirectivityVisualizer::execGetSettings },
			{ "SetMaterial", &APicoSpatializationSourceDirectivityVisualizer::execSetMaterial },
			{ "SetSettings", &APicoSpatializationSourceDirectivityVisualizer::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|PolarPatternVisualizer" },
		{ "Comment", "// Draws given directivity pattern as a 2D mesh based on Settings.\n" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
		{ "ToolTip", "Draws given directivity pattern as a 2D mesh based on Settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer, nullptr, "DrawPattern", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics
	{
		struct PicoSpatializationSourceDirectivityVisualizer_eventGetSettings_Parms
		{
			UPicoSpatializationSourceSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoSpatializationSourceDirectivityVisualizer_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UPicoSpatializationSourceSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|PolarPatternVisualizer" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer, nullptr, "GetSettings", nullptr, nullptr, sizeof(PicoSpatializationSourceDirectivityVisualizer_eventGetSettings_Parms), Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics
	{
		struct PicoSpatializationSourceDirectivityVisualizer_eventSetMaterial_Parms
		{
			UMaterial* InMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoSpatializationSourceDirectivityVisualizer_eventSetMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|PolarPatternVisualizer" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer, nullptr, "SetMaterial", nullptr, nullptr, sizeof(PicoSpatializationSourceDirectivityVisualizer_eventSetMaterial_Parms), Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics
	{
		struct PicoSpatializationSourceDirectivityVisualizer_eventSetSettings_Parms
		{
			UPicoSpatializationSourceSettings* InSettings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoSpatializationSourceDirectivityVisualizer_eventSetSettings_Parms, InSettings), Z_Construct_UClass_UPicoSpatializationSourceSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoSpatialAudio|PolarPatternVisualizer" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer, nullptr, "SetSettings", nullptr, nullptr, sizeof(PicoSpatializationSourceDirectivityVisualizer_eventSetSettings_Parms), Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_NoRegister()
	{
		return APicoSpatializationSourceDirectivityVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_DrawPattern, "DrawPattern" }, // 528499618
		{ &Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_GetSettings, "GetSettings" }, // 3313607907
		{ &Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetMaterial, "SetMaterial" }, // 2954730991
		{ &Z_Construct_UFunction_APicoSpatializationSourceDirectivityVisualizer_SetSettings, "SetSettings" }, // 511801891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PicoSpatializationSourceDirectivityVisualizer.h" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "APicoSpatializationSourceDirectivityVisualizer" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|ProceduralMesh" },
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APicoSpatializationSourceDirectivityVisualizer, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APicoSpatializationSourceDirectivityVisualizer, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PicoSpatializationSourceDirectivityVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APicoSpatializationSourceDirectivityVisualizer, Settings), Z_Construct_UClass_UPicoSpatializationSourceSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APicoSpatializationSourceDirectivityVisualizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::ClassParams = {
		&APicoSpatializationSourceDirectivityVisualizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APicoSpatializationSourceDirectivityVisualizer, 2484887430);
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<APicoSpatializationSourceDirectivityVisualizer>()
	{
		return APicoSpatializationSourceDirectivityVisualizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APicoSpatializationSourceDirectivityVisualizer(Z_Construct_UClass_APicoSpatializationSourceDirectivityVisualizer, &APicoSpatializationSourceDirectivityVisualizer::StaticClass, TEXT("/Script/PicoSpatialAudio"), TEXT("APicoSpatializationSourceDirectivityVisualizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APicoSpatializationSourceDirectivityVisualizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
