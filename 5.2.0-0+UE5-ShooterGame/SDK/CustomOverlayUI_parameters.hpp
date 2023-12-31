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
// Function CustomOverlayUI.CustomOverlayUI_C.Tick
struct UCustomOverlayUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.AddChildToCanvas
struct UCustomOverlayUI_C_AddChildToCanvas_Params
{
public:
	class UUserWidget*                           Child;                                             // 0x0(0x8)(None)
	struct FVector2D                             Size;                                              // 0x8(0x10)(None)
	int32                                        ZOrder;                                            // 0x18(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetArrowAlpha
struct UCustomOverlayUI_C_SetArrowAlpha_Params
{
public:
	float                                        TheLeftRightAlpha;                                 // 0x0(0x4)(None)
	float                                        TheUpDownAlpha;                                    // 0x4(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerScale
struct UCustomOverlayUI_C_SetPointerScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.ShowReticule
struct UCustomOverlayUI_C_ShowReticule_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerColorAdd
struct UCustomOverlayUI_C_SetPointerColorAdd_Params
{
public:
	float                                        Add;                                               // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetInnerRingScales
struct UCustomOverlayUI_C_SetInnerRingScales_Params
{
public:
	float                                        Scale0;                                            // 0x0(0x4)(None)
	float                                        Scale1;                                            // 0x4(0x4)(None)
	float                                        Scale2;                                            // 0x8(0x4)(None)
};

// 0x188 (0x188 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.ExecuteUbergraph_CustomOverlayUI
struct UCustomOverlayUI_C_ExecuteUbergraph_CustomOverlayUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2496[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget;          // 0x8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	uint8                                        Pad_2497[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x14(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x4C(0x4)(None)
	class UUserWidget*                           K2Node_Event_Child;                                // 0x50(0x8)(ZeroConstructor)
	struct FVector2D                             K2Node_Event_Size;                                 // 0x58(0x10)(None)
	int32                                        K2Node_Event_zOrder;                               // 0x68(0x4)(None)
	uint8                                        Pad_24A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x70(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x78(0x8)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x80(0x8)(ZeroConstructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x88(0x10)(None)
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x98(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(None)
	uint8                                        Pad_24A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0xA8(0x20)(None)
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_1;        // 0xC8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(None)
	uint8                                        Pad_24A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_2;        // 0xD8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xE0(0x1)(None)
	uint8                                        Pad_24A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_theLeftRightAlpha;                    // 0xE4(0x4)(None)
	float                                        K2Node_Event_theUpDownAlpha;                       // 0xE8(0x4)(None)
	uint8                                        Pad_24AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_3;        // 0xF0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xF8(0x1)(None)
	uint8                                        Pad_24AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_scale;                                // 0xFC(0x4)(None)
	bool                                         K2Node_Event_show;                                 // 0x100(0x1)(None)
	uint8                                        Pad_24AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_4;        // 0x108(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x110(0x1)(None)
	uint8                                        Pad_24AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_5;        // 0x118(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x120(0x1)(None)
	uint8                                        Pad_24AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_add;                                  // 0x124(0x4)(None)
	float                                        K2Node_Event_scale0;                               // 0x128(0x4)(None)
	float                                        K2Node_Event_scale1;                               // 0x12C(0x4)(None)
	float                                        K2Node_Event_scale2;                               // 0x130(0x4)(None)
	uint8                                        Pad_24AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_6;        // 0x138(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x140(0x1)(None)
	uint8                                        Pad_24B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_MakeStruct_Right_ImplicitCast;              // 0x144(0x4)(None)
	float                                        K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x148(0x4)(None)
	uint8                                        Pad_24B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast; // 0x150(0x8)(None)
	double                                       CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast;   // 0x158(0x8)(None)
	double                                       CallFunc_SetPointerScale_NewParam_ImplicitCast;    // 0x160(0x8)(None)
	double                                       CallFunc_SetPointerColorAdd_Add_ImplicitCast;      // 0x168(0x8)(None)
	double                                       CallFunc_SetInnerRingScales_Scale0_ImplicitCast;   // 0x170(0x8)(None)
	double                                       CallFunc_SetInnerRingScales_Scale1_ImplicitCast;   // 0x178(0x8)(None)
	double                                       CallFunc_SetInnerRingScales_Scale2_ImplicitCast;   // 0x180(0x8)(None)
};

}
}


