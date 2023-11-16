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
// Function ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C.BlueprintInit
struct UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C_BlueprintInit_Params
{
public:
	class FString                                RawExtraData;                                      // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C.EntryFocusTick
struct UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C_EntryFocusTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x144 (0x144 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly
struct UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_F04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x14(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18(0x1)(None)
	uint8                                        Pad_F05[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_RawExtraData;                         // 0x20(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x30(0x1)(None)
	uint8                                        Pad_F07[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x48(0x1)(None)
	uint8                                        Pad_F08[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x50(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x64(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x65(0x1)(None)
	uint8                                        Pad_F09[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTime;                            // 0x68(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x70(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(None)
	uint8                                        Pad_F0A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x80(0x8)(None)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x88(0x10)(None)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x98(0x4)(None)
	uint8                                        Pad_F0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0xA0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xA8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0xB0(0x8)(None)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xB8(0x8)(Edit, ZeroConstructor)
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0xC0(0x10)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xD0(0x8)(None)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xD8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xE0(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xE8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0xF0(0x8)(None)
	class UCarousel_NewsList_entry_C*            CallFunc_Create_ReturnValue;                       // 0xF8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x100(0x1)(None)
	uint8                                        Pad_F0C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x108(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x110(0x8)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x118(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x120(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x128(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x130(0x4)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x134(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x138(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x13C(0x4)(None)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x140(0x4)(None)
};

}
}


