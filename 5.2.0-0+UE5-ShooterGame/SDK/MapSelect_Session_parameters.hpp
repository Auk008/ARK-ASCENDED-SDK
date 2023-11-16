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

// 0x38 (0x38 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.SearchAndCreateModMaps
struct UMapSelect_Session_C_SearchAndCreateModMaps_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	uint8                                        Pad_4766[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDataListEntryButton_HostSession*> CallFunc_GetModMaps_ReturnValue;                   // 0x10(0x10)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    CallFunc_Create_ReturnValue;                       // 0x20(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(None)
	uint8                                        Pad_4767[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x30(0x8)(None)
};

// 0x43 (0x43 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.Select Map Button Clicked
struct UMapSelect_Session_C_Select_Map_Button_Clicked_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(None)
	uint8                                        Pad_476B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(None)
	uint8                                        Pad_476C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	uint8                                        Pad_476E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x35(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x36(0x1)(None)
	uint8                                        Pad_4770[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GenericConfirmationDialog*         CallFunc_ShowDLCConfirmationDialog_ReturnValue;    // 0x38(0x8)(None)
	bool                                         CallFunc_DoesOwnSelectedDLC_ReturnValue;           // 0x40(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x41(0x1)(None)
	bool                                         CallFunc_IsSelected_Selected;                      // 0x42(0x1)(None)
};

// 0x32 (0x32 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.GetSelectedMapIndex
struct UMapSelect_Session_C_GetSelectedMapIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x10(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(None)
	uint8                                        Pad_4771[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(None)
	bool                                         CallFunc_IsSelected_Selected;                      // 0x31(0x1)(None)
};

// 0x39 (0x39 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.SetSelectedMapIndex
struct UMapSelect_Session_C_SetSelectedMapIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(None)
	uint8                                        Pad_4775[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	uint8                                        Pad_4776[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	uint8                                        Pad_4777[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x30(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.ScrollToHoveredItem
struct UMapSelect_Session_C_ScrollToHoveredItem_Params
{
public:
	class UMapSelect_Entry_C*                    EntryHovered;                                      // 0x0(0x8)(None)
};

// 0x34C (0x34C - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.OnMouseMove
struct UMapSelect_Session_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ContainsInstancedReference, SimpleDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                             CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x168(0x10)(None)
	float                                        CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x178(0x4)(None)
	uint8                                        Pad_4779[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x180(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x188(0x8)(None)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x190(0x4)(None)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x194(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x195(0x1)(None)
	uint8                                        Pad_477A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x198(0x8)(None)
	bool                                         CallFunc_PointerEvent_IsTouchEvent_ReturnValue;    // 0x1A0(0x1)(None)
	uint8                                        Pad_477B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x1A8(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x1B0(0x8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1B8(0xB8)(AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x270(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x278(0x8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x280(0xB8)(None)
	double                                       CallFunc_FMin_B_ImplicitCast;                      // 0x338(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x340(0x8)(None)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x348(0x4)(None)
};

// 0x2E0 (0x2E0 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.OnMouseButtonDown
struct UMapSelect_Session_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x168(0xB8)(AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x220(0x1)(None)
	uint8                                        Pad_477C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)(None)
};

// 0x36 (0x36 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.Set Selected Map Entry
struct UMapSelect_Session_C_Set_Selected_Map_Entry_Params
{
public:
	class UMapSelect_Entry_C*                    Entry;                                             // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	uint8                                        Pad_477E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x34(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x35(0x1)(None)
};

// 0x68 (0x68 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.GetMapSelectEntries
struct UMapSelect_Session_C_GetMapSelectEntries_Params
{
public:
	TArray<class UMapSelect_Entry_C*>            MapSelectEntries;                                  // 0x0(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	TArray<class UMapSelect_Entry_C*>            TempMapSelectEntries;                              // 0x10(0x10)(Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
	uint8                                        Pad_4787[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(None)
	uint8                                        Pad_4789[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(None)
	uint8                                        Pad_478A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapSelect_Entry_C*                    K2Node_DynamicCast_AsMap_Select_Entry;             // 0x58(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(None)
	uint8                                        Pad_478C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x64(0x4)(None)
};

// 0x3C (0x3C - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.Tick
struct UMapSelect_Session_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x51 (0x51 - 0x0)
// Function MapSelect_Session.MapSelect_Session_C.ExecuteUbergraph_MapSelect_Session
struct UMapSelect_Session_C_ExecuteUbergraph_MapSelect_Session_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x40(0x8)(Edit, ZeroConstructor)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x48(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(None)
};

}
}


