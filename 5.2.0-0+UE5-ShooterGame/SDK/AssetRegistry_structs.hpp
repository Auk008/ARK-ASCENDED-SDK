#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	class FString                                Value;                                             // 0x8(0x10)(None)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions
{
public:
	bool                                         bIncludeSoftPackageReferences;                     // 0x0(0x1)(None)
	bool                                         bIncludeHardPackageReferences;                     // 0x1(0x1)(None)
	bool                                         bIncludeSearchableNames;                           // 0x2(0x1)(None)
	bool                                         bIncludeSoftManagementReferences;                  // 0x3(0x1)(None)
	bool                                         bIncludeHardManagementReferences;                  // 0x4(0x1)(None)
};

}


