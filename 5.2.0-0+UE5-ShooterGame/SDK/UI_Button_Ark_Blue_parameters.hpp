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

// 0x1 (0x1 - 0x0)
// Function UI_Button_Ark_Blue.UI_Button_Ark_Blue_C.PreConstruct
struct UUI_Button_Ark_Blue_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_Button_Ark_Blue.UI_Button_Ark_Blue_C.ExecuteUbergraph_UI_Button_Ark_Blue
struct UUI_Button_Ark_Blue_C_ExecuteUbergraph_UI_Button_Ark_Blue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(None)
	uint8                                        Pad_34F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x8(0x10)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x18(0x1)(None)
	uint8                                        Pad_34F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x20(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x28(0x8)(None)
};

}
}


