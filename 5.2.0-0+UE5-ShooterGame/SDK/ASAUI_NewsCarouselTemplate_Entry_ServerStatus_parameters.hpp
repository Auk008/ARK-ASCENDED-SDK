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

// 0x10 (0x10 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.BlueprintInit
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_BlueprintInit_Params
{
public:
	class FString                                RawExtraData;                                      // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusTick
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x12C (0x12C - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus
struct UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4B40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_RawExtraData;                         // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x18(0x1)(None)
	uint8                                        Pad_4B41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x30(0x1)(None)
	uint8                                        Pad_4B42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(None)
	float                                        K2Node_Event_DeltaTime;                            // 0x38(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x40(0x8)(None)
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x58(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5C(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x5D(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x5E(0x1)(None)
	uint8                                        Pad_4B43[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x60(0x8)(None)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x68(0x10)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x78(0x8)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x80(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x88(0x8)(None)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x90(0x4)(None)
	uint8                                        Pad_4B46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x98(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0xA0(0x8)(None)
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0xA8(0x10)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(None)
	uint8                                        Pad_4B48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xC0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xC8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xD0(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(None)
	uint8                                        Pad_4B4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0xE0(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xE8(0x1)(None)
	uint8                                        Pad_4B4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xF0(0x8)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF8(0x4)(None)
	uint8                                        Pad_4B4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x100(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x108(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x110(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x118(0x4)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x11C(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x120(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x124(0x4)(None)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x128(0x4)(None)
};

}
}


