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

// 0xC0 (0xC0 - 0x0)
// Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.ExecuteUbergraph_CheatMenuItemAllButton
struct UCheatMenuItemAllButton_C_ExecuteUbergraph_CheatMenuItemAllButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item;                           // 0x10(0x30)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x40(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x41(0x1)(None)
	uint8                                        Pad_41AA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x50(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x59(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x5A(0x1)(None)
	uint8                                        Pad_41AB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x60(0x18)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x78(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x88(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xA0(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xA8(0x10)(None)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0xB8(0x4)(None)
	float                                        CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast; // 0xBC(0x4)(None)
};

}
}


