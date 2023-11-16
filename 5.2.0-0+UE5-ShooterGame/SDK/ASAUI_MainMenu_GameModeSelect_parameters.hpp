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

// 0x20 (0x20 - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.InitHasSave
struct UASAUI_MainMenu_GameModeSelect_C_InitHasSave_Params
{
public:
	bool                                         Save;                                              // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	uint8                                        Pad_35D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x8(0x18)(None)
};

// 0x8A (0x8A - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.SelectionChanged
struct UASAUI_MainMenu_GameModeSelect_C_SelectionChanged_Params
{
public:
	class UCustomButtonWidget*                   Widget;                                            // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x18(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(None)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	uint8                                        Pad_35D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(None)
	uint8                                        Pad_35D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              K2Node_DynamicCast_AsOverlay;                      // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(None)
	uint8                                        Pad_35D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x58(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x68(0x4)(None)
	uint8                                        Pad_35D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x78(0x1)(None)
	uint8                                        Pad_35DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUI_MainMenuWidget_Card_C*          K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;  // 0x80(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x89(0x1)(None)
};

// 0x81 (0x81 - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.StopAllCardAnims
struct UASAUI_MainMenu_GameModeSelect_C_StopAllCardAnims_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(None)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	uint8                                        Pad_35E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(None)
	uint8                                        Pad_35E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              K2Node_DynamicCast_AsOverlay;                      // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	uint8                                        Pad_35E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x50(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(None)
	uint8                                        Pad_35E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x70(0x1)(None)
	uint8                                        Pad_35E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUI_MainMenuWidget_Card_C*          K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card;  // 0x78(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(None)
};

// 0x21 (0x21 - 0x0)
// Function ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C.ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect
struct UASAUI_MainMenu_GameModeSelect_C_ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_35E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsVirtualCursorEnabled_ReturnValue;       // 0x10(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(None)
	uint8                                        Pad_35EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(None)
};

}
}


