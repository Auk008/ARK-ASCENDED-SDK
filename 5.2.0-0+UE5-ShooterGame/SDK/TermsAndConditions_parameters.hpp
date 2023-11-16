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

// 0x1B (0x1B - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.BPGamepadReleased
struct UTermsAndConditions_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.BPHighlightWidgetOnStart
struct UTermsAndConditions_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.PlayFadeAnimation
struct UTermsAndConditions_C_PlayFadeAnimation_Params
{
public:
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x0(0x1)(None)
	uint8                                        Pad_4A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.Tick
struct UTermsAndConditions_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0xE9 (0xE9 - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.ExecuteUbergraph_TermsAndConditions
struct UTermsAndConditions_C_ExecuteUbergraph_TermsAndConditions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4A4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x18(0x1)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x19(0x1)(None)
	uint8                                        Pad_4A4E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x20(0x8)(ZeroConstructor)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;          // 0x28(0x1)(None)
	uint8                                        Pad_4A50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_1;          // 0x30(0x8)(ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x38(0x8)(ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x40(0x8)(ZeroConstructor)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;          // 0x48(0x1)(None)
	uint8                                        Pad_4A51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_2;          // 0x50(0x8)(ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_2;          // 0x58(0x8)(ZeroConstructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x60(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x98(0x4)(None)
	uint8                                        Pad_4A52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA0(0x8)(ZeroConstructor)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0xA8(0x8)(ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0xB0(0x8)(ZeroConstructor)
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue;            // 0xB8(0x8)(ZeroConstructor)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue;          // 0xC0(0x8)(ZeroConstructor)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue_1;        // 0xC8(0x8)(ZeroConstructor)
	class UUI_MainMenu*                          K2Node_DynamicCast_AsUI_Main_Menu;                 // 0xD0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(None)
	uint8                                        Pad_4A53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ListSessions*                      K2Node_DynamicCast_AsUI_List_Sessions;             // 0xE0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(None)
};

}
}


