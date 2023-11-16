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

// 0x5 (0x5 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.FixupComboBox
struct UMapSelect_Entry_C_FixupComboBox_Params
{
public:
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4(0x1)(None)
};

// 0x6 (0x6 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.UpdateDeleteSaveButton
struct UMapSelect_Entry_C_UpdateDeleteSaveButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(None)
	bool                                         CallFunc_HasSaveForMapIndex_ReturnValue;           // 0x4(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.IsSelected
struct UMapSelect_Entry_C_IsSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.Set To Map Select View
struct UMapSelect_Entry_C_Set_To_Map_Select_View_Params
{
public:
	bool                                         IsMapSelectView;                                   // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x6(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x7(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x8(0x1)(None)
};

// 0x5 (0x5 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.Show Hide Locked Images
struct UMapSelect_Entry_C_Show_Hide_Locked_Images_Params
{
public:
	bool                                         IsLocked;                                          // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(None)
};

// 0x70 (0x70 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.SetupUsingHostSession
struct UMapSelect_Entry_C_SetupUsingHostSession_Params
{
public:
	class UUI_HostSession*                       HostSession;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Session_C*                  MapSelectSession;                                  // 0x8(0x8)(Edit, ZeroConstructor)
	int32                                        WithIndex;                                         // 0x10(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(None)
	uint8                                        Pad_4BA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x18(0x4)(None)
	uint8                                        Pad_4BA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetMapInfo_OutMapName;                    // 0x20(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMapDescription                       CallFunc_GetMapInfo_OutDescription;                // 0x38(0x20)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.SetSelected
struct UMapSelect_Entry_C_SetSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
struct UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
struct UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.Tick
struct UMapSelect_Entry_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function MapSelect_Entry.MapSelect_Entry_C.ExecuteUbergraph_MapSelect_Entry
struct UMapSelect_Entry_C_ExecuteUbergraph_MapSelect_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(None)
	uint8                                        Pad_4BAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(None)
	double                                       CallFunc_Sin_ReturnValue;                          // 0x10(0x8)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x18(0x1)(None)
	uint8                                        Pad_4BAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x20(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x28(0x8)(None)
	bool                                         K2Node_CustomEvent_IsSelected;                     // 0x30(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x32(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x33(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x34(0x1)(None)
	uint8                                        Pad_4BB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x38(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_1;        // 0x48(0x1)(None)
	uint8                                        Pad_4BB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4C(0x4)(None)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x50(0x10)(None)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x60(0x1)(None)
	uint8                                        Pad_4BB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x64(0x4)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x68(0x1)(None)
	uint8                                        Pad_4BB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x6C(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0xA4(0x4)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xA8(0x1)(None)
	uint8                                        Pad_4BB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0xB0(0x8)(None)
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0xB8(0x8)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0xC0(0x4)(None)
	uint8                                        Pad_4BB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0xC8(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xD0(0x8)(None)
};

}
}


