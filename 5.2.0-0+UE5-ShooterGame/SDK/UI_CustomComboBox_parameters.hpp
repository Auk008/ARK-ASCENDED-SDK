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

// 0x29 (0x29 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav to Options
struct UUI_CustomComboBox_C_Nav_to_Options_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_419F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x10(0x1)(None)
	uint8                                        Pad_41A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav Back Tomain Button
struct UUI_CustomComboBox_C_Nav_Back_Tomain_Button_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_41A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x59 (0x59 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.SetUpNavigation
struct UUI_CustomComboBox_C_SetUpNavigation_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(None)
	uint8                                        Pad_41A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x30(0x4)(None)
	uint8                                        Pad_41A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x40(0x1)(None)
	uint8                                        Pad_41A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x48(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(None)
	uint8                                        Pad_41A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(None)
};

// 0x14C (0x14C - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnKeyDown
struct UUI_CustomComboBox_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x149(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x14A(0x1)(None)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x14B(0x1)(None)
};

// 0x41 (0x41 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.GetOptionAtIndex
struct UUI_CustomComboBox_C_GetOptionAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	uint8                                        Pad_41B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x8(0x10)(None)
	class UUI_CustomComboBoxOption_C*            AsCustomComboBoxOption;                            // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         IsValid;                                           // 0x20(0x1)(None)
	uint8                                        Pad_41B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(None)
	uint8                                        Pad_41B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.PreConstruct
struct UUI_CustomComboBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Add Option
struct UUI_CustomComboBox_C_Event_Add_Option_Params
{
public:
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x0(0x38)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Set Selected Option
struct UUI_CustomComboBox_C_Event_Set_Selected_Option_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
	bool                                         CallOnOptionSelected_;                             // 0x10(0x1)(None)
	uint8                                        Pad_41C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelectedInterface
struct UUI_CustomComboBox_C_OnOptionSelectedInterface_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
	int64                                        ID;                                                // 0x10(0x8)(None)
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(None)
};

// 0x248 (0x248 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.ExecuteUbergraph_UI_CustomComboBox
struct UUI_CustomComboBox_C_ExecuteUbergraph_UI_CustomComboBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6(0x1)(None)
	uint8                                        Pad_41D1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xC(0x1)(None)
	uint8                                        Pad_41D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x18(0x1)(None)
	uint8                                        Pad_41D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1C(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x20(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x28(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x30(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x34(0x1)(None)
	uint8                                        Pad_41D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTRUCT_CustomComboBoxOption          K2Node_CustomEvent_CategoryInfo;                   // 0x38(0x38)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x70(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(None)
	uint8                                        Pad_41D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x80(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(None)
	uint8                                        Pad_41D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x8C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x90(0x4)(None)
	uint8                                        Pad_41D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Option;                         // 0x98(0x10)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_CustomEvent_CallOnOptionSelected_;          // 0xA8(0x1)(None)
	uint8                                        Pad_41D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            K2Node_CustomEvent_OptionWidget;                   // 0xB0(0x8)(Edit, ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                K2Node_Event_Option;                               // 0xD0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        K2Node_Event_ID;                                   // 0xE0(0x8)(None)
	class UUI_CustomComboBoxOption_C*            K2Node_Event_OptionWidget;                         // 0xE8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xF0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0xF1(0x1)(None)
	uint8                                        Pad_41DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0xF8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x100(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x108(0x10)(None)
	bool                                         Temp_bool_Variable;                                // 0x118(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x119(0x1)(None)
	uint8                                        Pad_41DB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            CallFunc_Create_ReturnValue;                       // 0x120(0x8)(Edit, ZeroConstructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x128(0x8)(Edit, ZeroConstructor)
	class FString                                CallFunc_GetOptionAtIndex_Text;                    // 0x130(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_CustomComboBoxOption_C*            CallFunc_GetOptionAtIndex_AsCustomComboBoxOption;  // 0x140(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_GetOptionAtIndex_IsValid;                 // 0x148(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x149(0x1)(None)
	bool                                         K2Node_Select_Default;                             // 0x14A(0x1)(None)
	uint8                                        Pad_41DC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x150(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x158(0x10)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x168(0x4)(None)
	uint8                                        Pad_41DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item;                           // 0x170(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x178(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x17C(0x1)(None)
	uint8                                        Pad_41DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item_1;                         // 0x180(0x8)(Edit, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item_2;                         // 0x188(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x190(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x191(0x1)(None)
	uint8                                        Pad_41DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x194(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x198(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x19C(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x19D(0x1)(None)
	uint8                                        Pad_41E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x1A0(0x4)(None)
	uint8                                        Pad_41E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTRUCT_CustomComboBoxOption          CallFunc_Array_Get_Item_3;                         // 0x1A8(0x38)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x1E0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x1E1(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1E2(0x1)(None)
	uint8                                        Pad_41E2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x1E8(0x8)(Edit, ZeroConstructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1F0(0x1)(None)
	uint8                                        Pad_41E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBoxSpacer_C*            CallFunc_Create_ReturnValue_1;                     // 0x1F8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x200(0x1)(None)
	uint8                                        Pad_41E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x208(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x210(0x1)(None)
	uint8                                        Pad_41E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x218(0x18)(SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x230(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOpenOptions__DelegateSignature
struct UUI_CustomComboBox_C_OnOpenOptions__DelegateSignature_Params
{
public:
	class UUI_CustomComboBox_C*                  NewParam;                                          // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelected__DelegateSignature
struct UUI_CustomComboBox_C_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
};

}
}


