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
// Function CreditsUI.CreditsUI_C.Tick
struct UCreditsUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
struct UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4B3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x10)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x18(0x1)(None)
	uint8                                        Pad_4B3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(Edit, ZeroConstructor)
	class UPrimalGlobalsBlueprint_C*             K2Node_DynamicCast_AsPrimal_Globals_Blueprint;     // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_4B44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x38(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x44(0x1)(None)
	uint8                                        Pad_4B45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x48(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x80(0x4)(None)
	uint8                                        Pad_4B47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x88(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(None)
	uint8                                        Pad_4B49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x98(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xA0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0xA8(0x8)(None)
	int32                                        Temp_int_Variable;                                 // 0xB0(0x4)(None)
	uint8                                        Pad_4B4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xB8(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xD0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xD8(0x8)(None)
};

}
}


