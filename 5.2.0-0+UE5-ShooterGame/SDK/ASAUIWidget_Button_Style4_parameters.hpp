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
// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.PreConstruct
struct UASAUIWidget_Button_Style4_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.SetActive
struct UASAUIWidget_Button_Style4_C_SetActive_Params
{
public:
	bool                                         NewActive;                                         // 0x0(0x1)(None)
};

// 0x1EC (0x1EC - 0x0)
// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.ExecuteUbergraph_ASAUIWidget_Button_Style4
struct UASAUIWidget_Button_Style4_C_ExecuteUbergraph_ASAUIWidget_Button_Style4_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x4(0x1)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x5(0x1)(None)
	uint8                                        Pad_4B5D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x10)(None)
	uint8                                        Pad_4B5E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xF0(0xD0)(Edit, ZeroConstructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x1C0(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1C1(0x1)(None)
	bool                                         K2Node_CustomEvent_newActive;                      // 0x1C2(0x1)(None)
	bool                                         CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x1C3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C4(0x1)(None)
	uint8                                        Pad_4B5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButtonSlot*                           K2Node_DynamicCast_AsButton_Slot;                  // 0x1C8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D0(0x1)(None)
	uint8                                        Pad_4B60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0x1D4(0x8)(None)
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast_1;        // 0x1DC(0x8)(None)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x1E4(0x4)(None)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x1E8(0x4)(None)
};

}
}


