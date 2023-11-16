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

// 0xB9 (0xB9 - 0x0)
// Function CheatMenuEggButton.CheatMenuEggButton_C.ExecuteUbergraph_CheatMenuEggButton
struct UCheatMenuEggButton_C_ExecuteUbergraph_CheatMenuEggButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(None)
	uint8                                        Pad_40A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_40A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x48(0x1)(None)
	uint8                                        Pad_40A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x4C(0x4)(None)
	TSoftClassPtr<class UPrimalItem>             K2Node_Select_Default;                             // 0x50(0x30)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x80(0x1)(None)
	uint8                                        Pad_40AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UPrimalItem>             K2Node_Select_Default_1;                           // 0x88(0x30)(None)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0xB8(0x1)(None)
};

}
}


