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

// 0x75 (0x75 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetIsAlternativeColor
struct UDataListButton_Widget_ASA_C_GetIsAlternativeColor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_3E12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x8(0x8)(Edit, ZeroConstructor)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_1;                  // 0x10(0x8)(Edit, ZeroConstructor)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_2;                  // 0x18(0x8)(Edit, ZeroConstructor)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_3;                  // 0x20(0x8)(Edit, ZeroConstructor)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_4;                  // 0x28(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetVisibleChildIndex_Index;               // 0x30(0x4)(None)
	uint8                                        Pad_3E13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x38(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x40(0x8)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(None)
	uint8                                        Pad_3E14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_5;                  // 0x58(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(None)
	uint8                                        Pad_3E15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetVisibleChildIndex_Index_1;             // 0x64(0x4)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x68(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x69(0x1)(None)
	uint8                                        Pad_3E16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x6C(0x4)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x70(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x74(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetVisibleChildIndex
struct UDataListButton_Widget_ASA_C_GetVisibleChildIndex_Params
{
public:
	class UPanelWidget*                          Parent;                                            // 0x0(0x8)(Edit, ZeroConstructor)
	class UWidget*                               Widget;                                            // 0x8(0x8)(Edit, ZeroConstructor)
	int32                                        Index;                                             // 0x10(0x4)(None)
	int32                                        ChildrenIndex;                                     // 0x14(0x4)(None)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x18(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(None)
	uint8                                        Pad_3E2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x24(0x1)(None)
	uint8                                        Pad_3E2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(None)
	uint8                                        Pad_3E2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(None)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x39(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3A(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x3B(0x1)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x40(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x41(0x1)(None)
	uint8                                        Pad_3E2E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x44(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x48(0x1)(None)
	uint8                                        Pad_3E2F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.UpdateColorBrush
struct UDataListButton_Widget_ASA_C_UpdateColorBrush_Params
{
public:
	struct FLinearColor                          InBrushColor;                                      // 0x0(0x10)(None)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x10(0x10)(None)
};

// 0x3C (0x3C - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetupToggledState
struct UDataListButton_Widget_ASA_C_SetupToggledState_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(None)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(None)
	bool                                         CallFunc_GetIsAlternativeColor_ReturnValue;        // 0x2(0x1)(None)
	uint8                                        Pad_3E32[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x2C(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.PreConstruct
struct UDataListButton_Widget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetTextButton
struct UDataListButton_Widget_ASA_C_SetTextButton_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(None)
	bool                                         CanEditTextVariable;                               // 0x18(0x1)(None)
	bool                                         UseOverrideValueText;                              // 0x19(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetValueText
struct UDataListButton_Widget_ASA_C_SetValueText_Params
{
public:
	class FText                                  ValueText;                                         // 0x0(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
struct UDataListButton_Widget_ASA_C_BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Tick
struct UDataListButton_Widget_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x16D (0x16D - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ExecuteUbergraph_DataListButton_Widget_ASA
struct UDataListButton_Widget_ASA_C_ExecuteUbergraph_DataListButton_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(None)
	uint8                                        Pad_3E3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_NewText;                        // 0x8(0x18)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_CustomEvent_CanEditTextVariable;            // 0x20(0x1)(None)
	bool                                         K2Node_CustomEvent_UseOverrideValueText;           // 0x21(0x1)(None)
	uint8                                        Pad_3E3C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_ValueText;                      // 0x28(0x18)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x50(0x8)(None)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x58(0x8)(ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x60(0x8)(ZeroConstructor)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x68(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x71(0x1)(None)
	uint8                                        Pad_3E3D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x78(0x18)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x90(0x1)(None)
	bool                                         CallFunc_GetToggledState_ReturnValue;              // 0x91(0x1)(None)
	uint8                                        Pad_3E3E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x98(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(None)
	uint8                                        Pad_3E3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0xB0(0x68)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x118(0x18)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x130(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x168(0x4)(None)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue;             // 0x16C(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ToggledState__DelegateSignature
struct UDataListButton_Widget_ASA_C_ToggledState__DelegateSignature_Params
{
public:
	bool                                         Set;                                               // 0x0(0x1)(None)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(None)
};

}
}


