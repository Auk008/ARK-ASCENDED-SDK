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

// 0x38 (0x38 - 0x0)
// Function CheatMenuFolderButton.CheatMenuFolderButton_C.SetFolder
struct UCheatMenuFolderButton_C_SetFolder_Params
{
public:
	class FText                                  FolderName;                                        // 0x0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	int32                                        ScreenNumber;                                      // 0x18(0x4)(None)
	uint8                                        Pad_41E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0x20(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function CheatMenuFolderButton.CheatMenuFolderButton_C.ExecuteUbergraph_CheatMenuFolderButton
struct UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
};

}
}


