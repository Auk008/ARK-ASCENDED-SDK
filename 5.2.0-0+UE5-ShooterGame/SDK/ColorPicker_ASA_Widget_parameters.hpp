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
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.GetOverrideHighligteableWidgetBP
struct UColorPicker_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x15C (0x15C - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorSlider2D
struct UColorPicker_ASA_Widget_C_UpdateColorSlider2D_Params
{
public:
	double                                       CallFunc_GetUnpausedTimeSeconds_ReturnValue;       // 0x0(0x8)(None)
	double                                       CallFunc_GetUnpausedTimeSeconds_ReturnValue_1;     // 0x8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x10(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x18(0x1)(None)
	uint8                                        Pad_EE[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x20(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x30(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x38(0x8)(None)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x40(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x50(0x68)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0xB8(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0xC0(0x8)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0xC8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(None)
	uint8                                        Pad_F2[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0xD8(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0xE0(0x8)(None)
	struct FVector2D                             CallFunc_GetValue_ReturnValue_1;                   // 0xE8(0x10)(None)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xF8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x100(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x108(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x110(0x8)(None)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x118(0x4)(None)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x11C(0x4)(None)
	struct FColor                                CallFunc_ReadRenderTargetPixel_ReturnValue;        // 0x120(0x4)(None)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x124(0x10)(None)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x134(0x1)(None)
	uint8                                        Pad_F6[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x138(0x10)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x148(0x4)(None)
	float                                        K2Node_MakeArray__0__ImplicitCast;                 // 0x14C(0x4)(None)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x150(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x154(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x158(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateSaturationBar
struct UColorPicker_ASA_Widget_C_UpdateSaturationBar_Params
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(None)
};

// 0x220 (0x220 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.OnMouseMove_0
struct UColorPicker_ASA_Widget_C_OnMouseMove_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(None)
};

// 0x3C (0x3C - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Tick
struct UColorPicker_ASA_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorPickerValue
struct UColorPicker_ASA_Widget_C_UpdateColorPickerValue_Params
{
public:
	struct FVector2D                             Value;                                             // 0x0(0x10)(None)
};

// 0x59 (0x59 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.ExecuteUbergraph_ColorPicker_ASA_Widget
struct UColorPicker_ASA_Widget_C_ExecuteUbergraph_ColorPicker_ASA_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x40(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x44(0x4)(None)
	struct FVector2D                             K2Node_CustomEvent_Value;                          // 0x48(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(None)
};

}
}


