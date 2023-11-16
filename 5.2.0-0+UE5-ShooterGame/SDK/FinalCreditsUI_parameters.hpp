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

// 0x13 (0x13 - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music
struct UFinalCreditsUI_C_Play_Credits_Music_Params
{
public:
	class FString                                CallFunc_GetLastMapPlayed_ReturnValue;             // 0x0(0x10)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x10(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x11(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x12(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished
struct UFinalCreditsUI_C_OnMoviePlaybackFinished_Params
{
public:
	class FString                                MoviePath;                                         // 0x0(0x10)(None)
	bool                                         bPlaybackWasCancelled;                             // 0x10(0x1)(None)
	uint8                                        Pad_3D7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x18(0x8)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(None)
};

// 0x3C (0x3C - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.Tick
struct UFinalCreditsUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x100 (0x100 - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
struct UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(None)
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x40(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	uint8                                        Pad_3D7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x50(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x58(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x68(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x70(0x1)(None)
	uint8                                        Pad_3D7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x78(0x8)(None)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x80(0x8)(ZeroConstructor)
	class UPrimalGlobalsBlueprint_C*             K2Node_DynamicCast_AsPrimal_Globals_Blueprint;     // 0x88(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(None)
	uint8                                        Pad_3D80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x98(0x8)(ZeroConstructor)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0xA0(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue;               // 0xA8(0x1)(None)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0xA9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAB(0x1)(None)
	uint8                                        Pad_3D81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0xB0(0x8)(ZeroConstructor)
	class AWorldSettings*                        CallFunc_GetWorldSettings_ReturnValue;             // 0xB8(0x8)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(ZeroConstructor)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0xD0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xDA(0x1)(None)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xDB(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xDC(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xDD(0x1)(None)
	bool                                         CallFunc_IsClient_ReturnValue;                     // 0xDE(0x1)(None)
	bool                                         CallFunc_PlayMovie_ReturnValue;                    // 0xDF(0x1)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE0(0x10)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xF0(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xF8(0x8)(None)
};

}
}


