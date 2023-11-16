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
// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
struct UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_2685[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(None)
	class FString                                B;                                                 // 0x8(0x10)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2687[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(None)
	class FString                                B;                                                 // 0x20(0x10)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_268B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(None)
	struct FGameplayTagContainer                 B;                                                 // 0x20(0x20)(None)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_268F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(None)
	struct FGameplayTag                          B;                                                 // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2690[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
public:
	struct FGameplayTag                          TagOne;                                            // 0x0(0x8)(None)
	struct FGameplayTag                          TagTwo;                                            // 0x8(0x8)(None)
	bool                                         bExactMatch;                                       // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_2691[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
public:
	struct FGameplayTag                          TagOne;                                            // 0x0(0x8)(None)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x8(0x20)(None)
	bool                                         bExactMatch;                                       // 0x28(0x1)(None)
	bool                                         ReturnValue;                                       // 0x29(0x1)(None)
	uint8                                        Pad_2693[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 Value;                                             // 0x0(0x20)(None)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x20(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
public:
	struct FGameplayTag                          Value;                                             // 0x0(0x8)(None)
	struct FGameplayTag                          ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(None)
	struct FGameplayTagQuery                     ReturnValue;                                       // 0x48(0x48)(None)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
public:
	struct FGameplayTag                          SingleTag;                                         // 0x0(0x8)(None)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x8(0x20)(None)
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(None)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x50 (0x50 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
struct UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(None)
	bool                                         ReturnValue;                                       // 0x48(0x1)(None)
	uint8                                        Pad_26A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_26A8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UBlueprintGameplayTagLibrary_HasTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(None)
	bool                                         bExactMatch;                                       // 0x28(0x1)(None)
	bool                                         ReturnValue;                                       // 0x29(0x1)(None)
	uint8                                        Pad_26AD[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(None)
	bool                                         bExactMatch;                                       // 0x40(0x1)(None)
	bool                                         ReturnValue;                                       // 0x41(0x1)(None)
	uint8                                        Pad_26B3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(None)
	bool                                         bExactMatch;                                       // 0x40(0x1)(None)
	bool                                         ReturnValue;                                       // 0x41(0x1)(None)
	uint8                                        Pad_26B6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0(0x10)(None)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x10(0x20)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_26B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	int32                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_26BE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	class FString                                ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ActorClass;                                        // 0x8(0x8)(ZeroConstructor)
	struct FGameplayTagQuery                     GameplayTagQuery;                                  // 0x10(0x48)(None)
	TArray<class AActor*>                        OutActors;                                         // 0x58(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 A;                                                 // 0x0(0x20)(None)
	struct FGameplayTagContainer                 B;                                                 // 0x20(0x20)(None)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_26C5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
public:
	struct FGameplayTag                          A;                                                 // 0x0(0x8)(None)
	struct FGameplayTag                          B;                                                 // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_26C9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0(0x10)(None)
	struct FGameplayTag                          Tag;                                               // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_26CE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	struct FGameplayTagQuery                     TagQuery;                                          // 0x20(0x48)(None)
	bool                                         ReturnValue;                                       // 0x68(0x1)(None)
	uint8                                        Pad_26D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(None)
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x20(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
public:
	struct FGameplayTagContainer                 InOutTagContainer;                                 // 0x0(0x20)(None)
	struct FGameplayTagContainer                 InTagContainer;                                    // 0x20(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct IGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
public:
	struct FGameplayTag                          TagToCheck;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_26E2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct IGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_26E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct IGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_26E6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct IGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(None)
};

}
}


