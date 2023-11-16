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

// 0x28 (0x28 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(None)
	class FName                                  Key;                                               // 0x8(0x8)(None)
	bool                                         bPartialMatchKey;                                  // 0x10(0x1)(None)
	uint8                                        Pad_2224[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(None)
	class FName                                  Key;                                               // 0x8(0x8)(None)
	bool                                         bPartialMatchKey;                                  // 0x10(0x1)(None)
	uint8                                        Pad_2229[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(None)
	class FString                                StringToMatch;                                     // 0x8(0x10)(None)
	TArray<class FName>                          OutKeys;                                           // 0x18(0x10)(None)
	TArray<class FString>                        OutValues;                                         // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor)
	class UDatasmithAssetUserData*               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
struct ADatasmithImportedSequencesActor_PlayLevelSequence_Params
{
public:
	class ULevelSequence*                        SequenceToPlay;                                    // 0x0(0x8)(None)
};

}
}


