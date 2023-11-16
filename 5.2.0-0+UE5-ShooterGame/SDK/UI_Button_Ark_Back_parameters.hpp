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

// 0x3C (0x3C - 0x0)
// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.Tick
struct UUI_Button_Ark_Back_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x81 (0x81 - 0x0)
// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.ExecuteUbergraph_UI_Button_Ark_Back
struct UUI_Button_Ark_Back_C_ExecuteUbergraph_UI_Button_Ark_Back_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x4(0x1)(None)
	uint8                                        Pad_44D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(None)
	uint8                                        Pad_44D3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(None)
	uint8                                        Pad_44D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABasePlayerController*                 K2Node_DynamicCast_AsBase_Player_Controller;       // 0x60(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(None)
	uint8                                        Pad_44D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x70(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x80(0x1)(None)
};

}
}


