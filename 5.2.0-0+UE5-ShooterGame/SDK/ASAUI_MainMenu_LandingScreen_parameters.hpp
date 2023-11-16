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
// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.ExecuteUbergraph_ASAUI_MainMenu_LandingScreen
struct UASAUI_MainMenu_LandingScreen_C_ExecuteUbergraph_ASAUI_MainMenu_LandingScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_41C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue;            // 0x8(0x8)(Edit, ZeroConstructor)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue;          // 0x10(0x8)(Edit, ZeroConstructor)
	class UUI_MainMenu*                          K2Node_DynamicCast_AsUI_Main_Menu;                 // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_41C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x28(0x8)(None)
};

}
}


