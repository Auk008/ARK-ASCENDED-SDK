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

// 0x60 (0x60 - 0x0)
// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.SetValues
struct UCheatMenuCharacterPresetsButton_C_SetValues_Params
{
public:
	class FText                                  Cheat_Name;                                        // 0x0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FCheatMenuCharacterLevelPreset        Levels;                                            // 0x18(0x28)(None)
	struct FCheatMenuCharacterPresetItems        Items;                                             // 0x40(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x50(0x10)(None)
};

// 0x98 (0x98 - 0x0)
// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.ExecuteUbergraph_CheatMenuCharacterPresetsButton
struct UCheatMenuCharacterPresetsButton_C_ExecuteUbergraph_CheatMenuCharacterPresetsButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
	uint8                                        Pad_41C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	uint8                                        Pad_41C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_41C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x39(0x1)(None)
	bool                                         CallFunc_CloseActiveHub_ReturnValue;               // 0x3A(0x1)(None)
	uint8                                        Pad_41C8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(None)
	struct FCheatMenuCheatItem                   CallFunc_Array_Get_Item;                           // 0x40(0x40)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(None)
	uint8                                        Pad_41C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x88(0x8)(None)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x90(0x1)(None)
	uint8                                        Pad_41CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast; // 0x94(0x4)(None)
};

}
}


