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

// 0x18 (0x18 - 0x0)
// Function CheatMenuCheatButton.CheatMenuCheatButton_C.CloseConfirmation
struct UCheatMenuCheatButton_C_CloseConfirmation_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function CheatMenuCheatButton.CheatMenuCheatButton_C.ShowConfirmation
struct UCheatMenuCheatButton_C_ShowConfirmation_Params
{
public:
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x0(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x10(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function CheatMenuCheatButton.CheatMenuCheatButton_C.ExecuteUbergraph_CheatMenuCheatButton
struct UCheatMenuCheatButton_C_ExecuteUbergraph_CheatMenuCheatButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	uint8                                        Pad_41C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(None)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                K2Node_Select_Default;                             // 0x58(0x10)(None)
};

}
}


