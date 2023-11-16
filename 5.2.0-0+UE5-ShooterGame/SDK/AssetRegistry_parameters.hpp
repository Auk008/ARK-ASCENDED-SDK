#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x88 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct UAssetRegistryHelpers_ToSoftObjectPath_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	struct FSoftObjectPath                       ReturnValue;                                       // 0x68(0x20)(None)
};

// 0x2B0 (0x2B0 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
{
public:
	struct FARFilter                             InFilter;                                          // 0x0(0x150)(None)
	TArray<struct FTagAndValue>                  InTagsAndValues;                                   // 0x150(0x10)(None)
	struct FARFilter                             ReturnValue;                                       // 0x160(0x150)(None)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsValid
struct UAssetRegistryHelpers_IsValid_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	bool                                         ReturnValue;                                       // 0x68(0x1)(None)
	uint8                                        Pad_2E7B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct UAssetRegistryHelpers_IsUAsset_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	bool                                         ReturnValue;                                       // 0x68(0x1)(None)
	uint8                                        Pad_2E7D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct UAssetRegistryHelpers_IsRedirector_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	bool                                         ReturnValue;                                       // 0x68(0x1)(None)
	uint8                                        Pad_2E81[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct UAssetRegistryHelpers_IsAssetLoaded_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	bool                                         ReturnValue;                                       // 0x68(0x1)(None)
	uint8                                        Pad_2E83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct UAssetRegistryHelpers_GetTagValue_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	class FName                                  InTagName;                                         // 0x68(0x8)(None)
	class FString                                OutTagValue;                                       // 0x70(0x10)(None)
	bool                                         ReturnValue;                                       // 0x80(0x1)(None)
	uint8                                        Pad_2E84[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct UAssetRegistryHelpers_GetFullName_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	class FString                                ReturnValue;                                       // 0x68(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct UAssetRegistryHelpers_GetExportTextName_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	class FString                                ReturnValue;                                       // 0x68(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetClass
struct UAssetRegistryHelpers_GetClass_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	class UClass*                                ReturnValue;                                       // 0x68(0x8)(None)
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
struct UAssetRegistryHelpers_GetBlueprintAssets_Params
{
public:
	struct FARFilter                             InFilter;                                          // 0x0(0x150)(None)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x150(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct UAssetRegistryHelpers_GetAssetRegistry_Params
{
public:
	TScriptInterface<class IAssetRegistry>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct UAssetRegistryHelpers_GetAsset_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x68)(None)
	class UObject*                               ReturnValue;                                       // 0x68(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
struct UAssetRegistryHelpers_FindAssetNativeClass_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x68)(None)
	class UClass*                                ReturnValue;                                       // 0x68(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct UAssetRegistryHelpers_CreateAssetData_Params
{
public:
	class UObject*                               InAsset;                                           // 0x0(0x8)(None)
	bool                                         bAllowBlueprintClass;                              // 0x8(0x1)(None)
	uint8                                        Pad_2E8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetData                            ReturnValue;                                       // 0x10(0x68)(None)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.WaitForPackage
struct IAssetRegistry_WaitForPackage_Params
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(None)
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct IAssetRegistry_UseFilterToExcludeAssets_Params
{
public:
	TArray<struct FAssetData>                    AssetDataList;                                     // 0x0(0x10)(None)
	struct FARFilter                             Filter;                                            // 0x10(0x150)(None)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.SearchAllAssets
struct IAssetRegistry_SearchAllAssets_Params
{
public:
	bool                                         bSynchronousSearch;                                // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct IAssetRegistry_ScanPathsSynchronous_Params
{
public:
	TArray<class FString>                        InPaths;                                           // 0x0(0x10)(None)
	bool                                         bForceRescan;                                      // 0x10(0x1)(None)
	bool                                         bIgnoreDenyListScanFilters;                        // 0x11(0x1)(None)
	uint8                                        Pad_2EB0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct IAssetRegistry_ScanModifiedAssetFiles_Params
{
public:
	TArray<class FString>                        InFilePaths;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct IAssetRegistry_ScanFilesSynchronous_Params
{
public:
	TArray<class FString>                        InFilePaths;                                       // 0x0(0x10)(None)
	bool                                         bForceRescan;                                      // 0x10(0x1)(None)
	uint8                                        Pad_2EF3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct IAssetRegistry_RunAssetsThroughFilter_Params
{
public:
	TArray<struct FAssetData>                    AssetDataList;                                     // 0x0(0x10)(None)
	struct FARFilter                             Filter;                                            // 0x10(0x150)(None)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct IAssetRegistry_PrioritizeSearchPath_Params
{
public:
	class FString                                PathToPrioritize;                                  // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct IAssetRegistry_K2_GetReferencers_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(None)
	struct FAssetRegistryDependencyOptions       ReferenceOptions;                                  // 0x8(0x5)(None)
	uint8                                        Pad_2EF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OutReferencers;                                    // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2EF8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct IAssetRegistry_K2_GetDependencies_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(None)
	struct FAssetRegistryDependencyOptions       DependencyOptions;                                 // 0x8(0x5)(None)
	uint8                                        Pad_2EF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OutDependencies;                                   // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2EFA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
struct IAssetRegistry_K2_GetAssetByObjectPath_Params
{
public:
	struct FSoftObjectPath                       ObjectPath;                                        // 0x0(0x20)(None)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x20(0x1)(None)
	uint8                                        Pad_2EFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetData                            ReturnValue;                                       // 0x28(0x68)(None)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsSearchAsync
struct IAssetRegistry_IsSearchAsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
struct IAssetRegistry_IsSearchAllAssets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct IAssetRegistry_IsLoadingAssets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function AssetRegistry.AssetRegistry.HasAssets
struct IAssetRegistry_HasAssets_Params
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x8)(None)
	bool                                         bRecursive;                                        // 0x8(0x1)(None)
	bool                                         ReturnValue;                                       // 0x9(0x1)(None)
	uint8                                        Pad_2F00[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetSubPaths
struct IAssetRegistry_GetSubPaths_Params
{
public:
	class FString                                InBasePath;                                        // 0x0(0x10)(None)
	TArray<class FString>                        OutPathList;                                       // 0x10(0x10)(None)
	bool                                         bInRecurse;                                        // 0x20(0x1)(None)
	uint8                                        Pad_2F04[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function AssetRegistry.AssetRegistry.GetDerivedClassNames
struct IAssetRegistry_GetDerivedClassNames_Params
{
public:
	TArray<struct FTopLevelAssetPath>            ClassNames;                                        // 0x0(0x10)(None)
	TSet<struct FTopLevelAssetPath>              ExcludedClassNames;                                // 0x10(0x50)(None)
	TSet<struct FTopLevelAssetPath>              OutDerivedClassNames;                              // 0x60(0x50)(None)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
struct IAssetRegistry_GetAssetsByPaths_Params
{
public:
	TArray<class FName>                          PackagePaths;                                      // 0x0(0x10)(None)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x10(0x10)(None)
	bool                                         bRecursive;                                        // 0x20(0x1)(None)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x21(0x1)(None)
	bool                                         ReturnValue;                                       // 0x22(0x1)(None)
	uint8                                        Pad_2F09[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct IAssetRegistry_GetAssetsByPath_Params
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x8)(None)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(None)
	bool                                         bRecursive;                                        // 0x18(0x1)(None)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x19(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(None)
	uint8                                        Pad_2F0D[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct IAssetRegistry_GetAssetsByPackageName_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(None)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(None)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x18(0x1)(None)
	bool                                         bSkipARFilteredAssets;                             // 0x19(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(None)
	uint8                                        Pad_2F0F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct IAssetRegistry_GetAssetsByClass_Params
{
public:
	struct FTopLevelAssetPath                    ClassPathName;                                     // 0x0(0x10)(None)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x10(0x10)(None)
	bool                                         bSearchSubClasses;                                 // 0x20(0x1)(None)
	bool                                         ReturnValue;                                       // 0x21(0x1)(None)
	uint8                                        Pad_2F12[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssets
struct IAssetRegistry_GetAssets_Params
{
public:
	struct FARFilter                             Filter;                                            // 0x0(0x150)(None)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x150(0x10)(None)
	bool                                         bSkipARFilteredAssets;                             // 0x160(0x1)(None)
	bool                                         ReturnValue;                                       // 0x161(0x1)(None)
	uint8                                        Pad_2F16[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct IAssetRegistry_GetAssetByObjectPath_Params
{
public:
	class FName                                  ObjectPath;                                        // 0x0(0x8)(None)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x8(0x1)(None)
	uint8                                        Pad_2F19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetData                            ReturnValue;                                       // 0x10(0x68)(None)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAncestorClassNames
struct IAssetRegistry_GetAncestorClassNames_Params
{
public:
	struct FTopLevelAssetPath                    ClassPathName;                                     // 0x0(0x10)(None)
	TArray<struct FTopLevelAssetPath>            OutAncestorClassNames;                             // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2F1F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct IAssetRegistry_GetAllCachedPaths_Params
{
public:
	TArray<class FString>                        OutPathList;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAllAssets
struct IAssetRegistry_GetAllAssets_Params
{
public:
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x0(0x10)(None)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_2F25[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


