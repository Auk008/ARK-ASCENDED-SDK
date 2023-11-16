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

// 0x8 (0x8 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.GetOverrideHighligteableWidgetBP
struct UOverallFatMusclePicker_C_GetOverrideHighligteableWidgetBP_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0xAC (0xAC - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorSlider2D
struct UOverallFatMusclePicker_C_UpdateColorSlider2D_Params
{
public:
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x0(0x10)(None)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x10(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_BreakVector2D_X;                          // 0x18(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x20(0x8)(None)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x28(0x8)(Edit, ZeroConstructor)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x30(0x68)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x98(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(None)
	uint8                                        Pad_4B6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_MakeStruct_FloatParam1_ImplicitCast;        // 0xA4(0x4)(None)
	float                                        K2Node_MakeStruct_FloatParam2_ImplicitCast;        // 0xA8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateSaturationBar
struct UOverallFatMusclePicker_C_UpdateSaturationBar_Params
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorPickerValue
struct UOverallFatMusclePicker_C_UpdateColorPickerValue_Params
{
public:
	struct FVector2D                             Value;                                             // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.ExecuteUbergraph_OverallFatMusclePicker
struct UOverallFatMusclePicker_C_ExecuteUbergraph_OverallFatMusclePicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x4(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x8(0x4)(None)
	uint8                                        Pad_4B7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x10(0x8)(None)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x18(0x8)(None)
	struct FVector2D                             K2Node_CustomEvent_Value;                          // 0x20(0x10)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x30(0x10)(None)
};

}
}


