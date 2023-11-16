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

// 0x30 (0x30 - 0x0)
// Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
struct UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Params
{
public:
	struct FSoftObjectPath                       AssetPath;                                         // 0x0(0x20)(None)
	TArray<class FName>                          ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
struct UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params
{
public:
	class UObject*                               AssetPtr;                                          // 0x0(0x8)(None)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
struct UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x68)(None)
	TArray<class FName>                          ReturnValue;                                       // 0x68(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
struct UAssetTagsSubsystem_GetCollectionsContainingAsset_Params
{
public:
	class FName                                  AssetPathName;                                     // 0x0(0x8)(None)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetCollections
struct UAssetTagsSubsystem_GetCollections_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
struct UAssetTagsSubsystem_GetAssetsInCollection_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	TArray<struct FAssetData>                    ReturnValue;                                       // 0x8(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function AssetTags.AssetTagsSubsystem.CollectionExists
struct UAssetTagsSubsystem_CollectionExists_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_258D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


