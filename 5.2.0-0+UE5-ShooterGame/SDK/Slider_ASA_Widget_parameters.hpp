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
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.GetOverrideHighligteableWidgetBP
struct USlider_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
struct USlider_ASA_Widget_C_SetupSetPercent_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(None)
	bool                                         PreventRecallParent;                               // 0x4(0x1)(None)
	uint8                                        Pad_4B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x18(0x68)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x80(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x88(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x90(0x8)(None)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x98(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(None)
	uint8                                        Pad_4B58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xA8(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xB0(0x8)(None)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0xB8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0xC0(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;    // 0xC8(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0xD0(0x4)(None)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xD4(0x4)(None)
};

// 0x9 (0x9 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
struct USlider_ASA_Widget_C_SetupValue_Params
{
public:
	double                                       Float;                                             // 0x0(0x8)(None)
	bool                                         PreventRecallParent;                               // 0x8(0x1)(None)
};

// 0x70 (0x70 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
struct USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(None)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x68)(None)
};

// 0x3C (0x3C - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
struct USlider_ASA_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0xF4 (0xF4 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
struct USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x40(0x1)(None)
	uint8                                        Pad_4B59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x44(0x4)(None)
	class FName                                  K2Node_Event_CommandName;                          // 0x48(0x8)(None)
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x50(0x68)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xB8(0x1)(None)
	uint8                                        Pad_4B5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xC0(0x8)(None)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xC8(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC9(0x1)(None)
	uint8                                        Pad_4B5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0xCC(0x4)(None)
	double                                       K2Node_CustomEvent_Float;                          // 0xD0(0x8)(None)
	bool                                         K2Node_CustomEvent_PreventRecallParent;            // 0xD8(0x1)(None)
	uint8                                        Pad_4B5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xE0(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0xE8(0x8)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0xF0(0x4)(None)
};

}
}


