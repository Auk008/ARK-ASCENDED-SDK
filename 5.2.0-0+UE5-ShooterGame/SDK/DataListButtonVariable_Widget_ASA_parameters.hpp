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

// 0x3 (0x3 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.IsExpanded
struct UDataListButtonVariable_Widget_ASA_C_IsExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(None)
};

// 0x49 (0x49 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasSlider
struct UDataListButtonVariable_Widget_ASA_C_HasSlider_Params
{
public:
	class USlider*                               ReturnValue;                                       // 0x0(0x8)(ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	uint8                                        Pad_220A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	uint8                                        Pad_220B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(None)
	uint8                                        Pad_220C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USlider_ASA_Widget_C*                  K2Node_DynamicCast_AsSlider_ASA_Widget;            // 0x40(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
};

// 0x49 (0x49 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasExpandedSlider
struct UDataListButtonVariable_Widget_ASA_C_HasExpandedSlider_Params
{
public:
	class USlider*                               ReturnValue;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x14(0x1)(None)
	uint8                                        Pad_220F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(None)
	uint8                                        Pad_2210[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	class USlider_ASA_Widget_C*                  K2Node_DynamicCast_AsSlider_ASA_Widget;            // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_2211[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HideValueLabel
struct UDataListButtonVariable_Widget_ASA_C_HideValueLabel_Params
{
public:
	bool                                         HideValue;                                         // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetIsSelectedBP
struct UDataListButtonVariable_Widget_ASA_C_GetIsSelectedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetAllValueWidgets
struct UDataListButtonVariable_Widget_ASA_C_GetAllValueWidgets_Params
{
public:
	TArray<class UWidget*>                       ReturnValue;                                       // 0x0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(None)
};

// 0x88 (0x88 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValueOverride
struct UDataListButtonVariable_Widget_ASA_C_SetupTextValueOverride_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  ReturnText;                                        // 0x18(0x18)(Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x40(0x8)(None)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x48(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4C(0x1)(None)
	uint8                                        Pad_2221[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x60(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(None)
};

// 0x8D (0x8D - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupNewValueWidget
struct UDataListButtonVariable_Widget_ASA_C_SetupNewValueWidget_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        InputPin;                                          // 0x10(0x4)(None)
	bool                                         PreventParentCall;                                 // 0x14(0x1)(None)
	uint8                                        Pad_2225[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_PCOptionsMenu*                     CallFunc_GetLivePCOptionsMenu_ReturnValue;         // 0x18(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(None)
	uint8                                        Pad_2226[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(None)
	uint8                                        Pad_2227[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_SetupTextValue_ReturnText;                // 0x48(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(None)
	uint8                                        Pad_2228[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_SetupTextValueOverride_ReturnText;        // 0x68(0x18)(None)
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x80(0x4)(None)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x84(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x88(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8C(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupToggledButton
struct UDataListButtonVariable_Widget_ASA_C_ExtraSetupToggledButton_Params
{
public:
	bool                                         Toggle;                                            // 0x0(0x1)(None)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(None)
};

// 0x6C (0x6C - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValue
struct UDataListButtonVariable_Widget_ASA_C_SetupTextValue_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  ReturnText;                                        // 0x18(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x40(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x48(0x8)(None)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x50(0x18)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x68(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupWidget
struct UDataListButtonVariable_Widget_ASA_C_ExtraSetupWidget_Params
{
public:
	class UPrimalUserWidget*                     UserWidget;                                        // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupOptionWidgets
struct UDataListButtonVariable_Widget_ASA_C_SetupOptionWidgets_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	uint8                                        Pad_2236[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x18(0x1)(None)
	uint8                                        Pad_2238[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(None)
	uint8                                        Pad_223B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x28(0x8)(ZeroConstructor)
	TArray<class UPrimalUserWidget*>             CallFunc_GetWidgetsToAdd_UserWidgets;              // 0x30(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetWidgetsToAdd
struct UDataListButtonVariable_Widget_ASA_C_GetWidgetsToAdd_Params
{
public:
	TArray<class UPrimalUserWidget*>             UserWidgets;                                       // 0x0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
	TArray<class UPrimalUserWidget*>             LocalWIdget;                                       // 0x10(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
	uint8                                        Pad_2242[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(None)
	uint8                                        Pad_2243[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalUserWidget*                     CallFunc_Create_ReturnValue;                       // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(None)
	uint8                                        Pad_2244[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x50(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	uint8                                        Pad_2245[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5C(0x4)(None)
};

// 0xF4 (0xF4 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Setup Values Index
struct UDataListButtonVariable_Widget_ASA_C_Setup_Values_Index_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	bool                                         PreventCallParent;                                 // 0x4(0x1)(None)
	uint8                                        Pad_224E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x8(0x4)(None)
	uint8                                        Pad_224F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_2250[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x38(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x40(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x50(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x58(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_2;        // 0x68(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x70(0x10)(AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x80(0x68)(None)
	float                                        K2Node_MakeStruct_FloatParam3_ImplicitCast;        // 0xE8(0x4)(None)
	float                                        K2Node_MakeStruct_FloatParam2_ImplicitCast;        // 0xEC(0x4)(None)
	float                                        K2Node_MakeStruct_FloatParam1_ImplicitCast;        // 0xF0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.PreConstruct
struct UDataListButtonVariable_Widget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature
struct UDataListButtonVariable_Widget_ASA_C_BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature_Params
{
public:
	bool                                         Set;                                               // 0x0(0x1)(None)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(None)
};

// 0x70 (0x70 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BPExecutedCommandForPrimalUI
struct UDataListButtonVariable_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(None)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x68)(None)
};

// 0x11 (0x11 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetParameterValue
struct UDataListButtonVariable_Widget_ASA_C_SetParameterValue_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(None)
	bool                                         bPreventCallParent;                                // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.OnOverridedParameterValue
struct UDataListButtonVariable_Widget_ASA_C_OnOverridedParameterValue_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(None)
	bool                                         bPreventCallParent;                                // 0x10(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetIsSelectedBP
struct UDataListButtonVariable_Widget_ASA_C_SetIsSelectedBP_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.UpdateColorPicker
struct UDataListButtonVariable_Widget_ASA_C_UpdateColorPicker_Params
{
public:
	struct FVector2D                             ColorPickerSliderValue;                            // 0x0(0x10)(None)
};

// 0x3C (0x3C - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Tick
struct UDataListButtonVariable_Widget_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x36C (0x36C - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Widget_ASA
struct UDataListButtonVariable_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         K2Node_ComponentBoundEvent_Set;                    // 0x4(0x1)(None)
	bool                                         K2Node_ComponentBoundEvent_FromSelectOtherOption;  // 0x5(0x1)(None)
	uint8                                        Pad_2296[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(None)
	class FName                                  K2Node_Event_CommandName;                          // 0xC(0x8)(None)
	uint8                                        Pad_2297[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x18(0x68)(Edit, ZeroConstructor, ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x80(0x8)(None)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x88(0x1)(None)
	uint8                                        Pad_2298[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x90(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(None)
	uint8                                        Pad_2299[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xA0(0x10)(None)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0xB0(0x1)(None)
	uint8                                        Pad_229B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xD0(0x1)(None)
	uint8                                        Pad_229C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0xD4(0x4)(None)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0xD8(0x68)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x140(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x141(0x1)(None)
	uint8                                        Pad_229E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Value_1;                              // 0x148(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_bPreventCallParent_1;                 // 0x158(0x1)(None)
	uint8                                        Pad_229F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Value;                                // 0x160(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_bPreventCallParent;                   // 0x170(0x1)(None)
	uint8                                        Pad_22A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_SetupTextValueOverride_ReturnText;        // 0x178(0x18)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
	TArray<class UDataListButtonVariable_Widget_ASA_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x190(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1A0(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1A4(0x1)(None)
	bool                                         K2Node_Event_Selected;                             // 0x1A5(0x1)(None)
	uint8                                        Pad_22A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A8(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x1B8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x1C8(0x8)(None)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_2;        // 0x1D0(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x1D8(0x8)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x1E0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x1F0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x200(0x4)(None)
	uint8                                        Pad_22A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_3;        // 0x208(0x8)(None)
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x210(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x218(0x8)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x220(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x230(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x240(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x244(0x1)(None)
	uint8                                        Pad_22A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x248(0x4)(None)
	uint8                                        Pad_22AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_Event_ColorPickerSliderValue;               // 0x250(0x10)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x260(0x8)(Edit, ZeroConstructor)
	class UOverallFatMusclePicker_C*             K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker;    // 0x268(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x270(0x1)(None)
	uint8                                        Pad_22AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x278(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x280(0x8)(Edit, ZeroConstructor)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0x288(0x68)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget_1;         // 0x2F0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x2F8(0x1)(None)
	uint8                                        Pad_22AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x2FC(0x4)(None)
	class UDataListButtonVariable_Widget_ASA_C*  CallFunc_Array_Get_Item_1;                         // 0x300(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x308(0x1)(None)
	uint8                                        Pad_22AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x30C(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x344(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x348(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x34C(0x1)(None)
	uint8                                        Pad_22AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x350(0x4)(None)
	uint8                                        Pad_22AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0x358(0x8)(None)
	double                                       CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x360(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x368(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ReturnValue__DelegateSignature
struct UDataListButtonVariable_Widget_ASA_C_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

}
}


