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

// 0x48 (0x48 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales
struct UCustomMouseWidget_C_SetInnerRingScales_Params
{
public:
	double                                       Scale0;                                            // 0x0(0x8)(None)
	double                                       Scale1;                                            // 0x8(0x8)(None)
	double                                       Scale2;                                            // 0x10(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x10)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x28(0x10)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x38(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
struct UCustomMouseWidget_C_SetPointerColorAdd_Params
{
public:
	double                                       Add;                                               // 0x0(0x8)(None)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(None)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x10(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
struct UCustomMouseWidget_C_ShowReticule_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale
struct UCustomMouseWidget_C_SetPointerScale_Params
{
public:
	double                                       NewParam;                                          // 0x0(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x10)(None)
};

// 0x34 (0x34 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
struct UCustomMouseWidget_C_SetArrowAlpha_Params
{
public:
	double                                       LeftRightAlpha;                                    // 0x0(0x8)(None)
	double                                       UpDownAlpha;                                       // 0x8(0x8)(None)
	bool                                         UseArrow;                                          // 0x10(0x1)(None)
	uint8                                        Pad_377D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x14(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x18(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2; // 0x1C(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3; // 0x20(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4; // 0x24(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5; // 0x28(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6; // 0x2C(0x4)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7; // 0x30(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget
struct UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
};

}
}


