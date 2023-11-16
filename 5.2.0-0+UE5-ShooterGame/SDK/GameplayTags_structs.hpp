#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayContainerMatchType : uint8
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EGameplayTagQueryExprType : uint8
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7,
};

enum class EGameplayTagSourceType : uint8
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	RestrictedTagList              = 3,
	DataTable                      = 4,
	Invalid                        = 5,
	EGameplayTagSourceType_MAX     = 6,
};

enum class EGameplayTagSelectionType : uint8
{
	None                           = 0,
	NonRestrictedOnly              = 1,
	RestrictedOnly                 = 2,
	All                            = 3,
	EGameplayTagSelectionType_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag
{
public:
	class FName                                  TagName;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
struct FGameplayTagContainerNetSerializerSerializationHelper
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FGameplayTag>                  ParentTags;                                        // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagReferenceHelper
struct FGameplayTagReferenceHelper
{
public:
	uint8                                        Pad_26FB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct FGameplayTagCreationWidgetHelper
{
public:
	uint8                                        Pad_26FC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery
{
public:
	int32                                        TokenStreamVersion;                                // 0x0(0x4)(None)
	uint8                                        Pad_26FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  TagDictionary;                                     // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<uint8>                                QueryTokenStream;                                  // 0x18(0x10)(SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	class FString                                UserDescription;                                   // 0x28(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	class FString                                AutoDescription;                                   // 0x38(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerConfig
struct FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_26FF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNetSerializerConfig
struct FGameplayTagNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_2701[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect
{
public:
	class FName                                  OldTagName;                                        // 0x0(0x8)(None)
	class FName                                  NewTagName;                                        // 0x8(0x8)(None)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GameplayTags.GameplayTagTableRow
struct FGameplayTagTableRow : public FTableRowBase
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(None)
	class FString                                DevComment;                                        // 0x10(0x10)(None)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
public:
	bool                                         bAllowNonRestrictedChildren;                       // 0x20(0x1)(None)
	uint8                                        Pad_2704[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(None)
	enum class EGameplayTagSourceType            SourceType;                                        // 0x8(0x1)(None)
	uint8                                        Pad_2705[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTagsList*                     SourceTagList;                                     // 0x10(0x8)(ZeroConstructor)
	class URestrictedGameplayTagsList*           SourceRestrictedTagList;                           // 0x18(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNode
struct FGameplayTagNode
{
public:
	uint8                                        Pad_2706[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap
{
public:
	class FString                                BaseCategory;                                      // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        RemapCategories;                                   // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.RestrictedConfigInfo
struct FRestrictedConfigInfo
{
public:
	class FString                                RestrictedConfigName;                              // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        Owners;                                            // 0x10(0x10)(None)
};

}


