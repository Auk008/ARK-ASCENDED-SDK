#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUsdDuplicateType : uint8
{
	FlattenComposedPrim            = 0,
	SingleLayerSpecs               = 1,
	AllLocalLayerSpecs             = 2,
	EUsdDuplicateType_MAX          = 3,
};

enum class EUsdSaveDialogBehavior : uint8
{
	NeverSave                      = 0,
	AlwaysSave                     = 1,
	ShowPrompt                     = 2,
	EUsdSaveDialogBehavior_MAX     = 3,
};

enum class EUsdUpAxis : uint8
{
	YAxis                          = 0,
	ZAxis                          = 1,
	EUsdUpAxis_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct USDClasses.UsdPrimPathList
struct FUsdPrimPathList
{
public:
	TArray<class FString>                        PrimPaths;                                         // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct USDClasses.UsdStageOptions
struct FUsdStageOptions
{
public:
	float                                        MetersPerUnit;                                     // 0x0(0x4)(None)
	enum class EUsdUpAxis                        UpAxis;                                            // 0x4(0x1)(None)
	uint8                                        Pad_F8C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct USDClasses.UsdUnrealAssetInfo
struct FUsdUnrealAssetInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Identifier;                                        // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Version;                                           // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                UnrealContentPath;                                 // 0x30(0x10)(AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                UnrealAssetType;                                   // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                UnrealExportTime;                                  // 0x50(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                UnrealEngineVersion;                               // 0x60(0x10)(None)
};

}


