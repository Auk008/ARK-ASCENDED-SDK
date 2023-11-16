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

// 0x48 (0x48 - 0x0)
// Function CheatMapJumpButton.CheatMapJumpButton_C.SetMapJumpInfo
struct UCheatMapJumpButton_C_SetMapJumpInfo_Params
{
public:
	struct FCheatMapJumpInfo                     Info;                                              // 0x0(0x40)(None)
	double                                       K2Node_VariableSet_Yaw_ImplicitCast;               // 0x40(0x8)(None)
};

// 0x108 (0x108 - 0x0)
// Function CheatMapJumpButton.CheatMapJumpButton_C.ExecuteUbergraph_CheatMapJumpButton
struct UCheatMapJumpButton_C_ExecuteUbergraph_CheatMapJumpButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_41A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x38(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x40(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x48(0x8)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x70(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_2;        // 0x80(0x10)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x90(0x18)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xA8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB8(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC8(0x10)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD8(0x10)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xF8(0x10)(None)
};

}
}


