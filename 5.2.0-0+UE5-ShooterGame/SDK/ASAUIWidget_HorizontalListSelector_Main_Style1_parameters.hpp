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

// 0x19 (0x19 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToIndex
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToIndex_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(None)
	bool                                         Valid;                                             // 0x4(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x6(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x7(0x1)(None)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC(0x1)(None)
	uint8                                        Pad_4B7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         K2Node_Select_Default;                             // 0x10(0x8)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x18(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetEnabledStateOfButtonIndex
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetEnabledStateOfButtonIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	bool                                         Enabled_;                                          // 0x4(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5(0x1)(None)
	uint8                                        Pad_4B7C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x8(0x8)(None)
};

// 0x42 (0x42 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetPreviousAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetPreviousAvailableButtonIndex_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(None)
	int32                                        FirstButton;                                       // 0x4(0x4)(None)
	int32                                        FoundNextButton;                                   // 0x8(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(None)
	uint8                                        Pad_4B7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(None)
	uint8                                        Pad_4B7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLastAvailableButtonIndex_FirstButton;  // 0x18(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C(0x1)(None)
	uint8                                        Pad_4B7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLastAvailableButtonIndex_FirstButton_1; // 0x20(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x28(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(None)
	uint8                                        Pad_4B80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x30(0x8)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x38(0x1)(None)
	uint8                                        Pad_4B81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x40(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(None)
};

// 0x41 (0x41 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetNextAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetNextAvailableButtonIndex_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(None)
	int32                                        FirstButton;                                       // 0x4(0x4)(None)
	int32                                        FoundNextButton;                                   // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	uint8                                        Pad_4B82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(None)
	uint8                                        Pad_4B83[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_First_Available_Button_Index_FirstButton; // 0x1C(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(None)
	int32                                        CallFunc_Get_First_Available_Button_Index_FirstButton_1; // 0x24(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(None)
	uint8                                        Pad_4B84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(None)
	uint8                                        Pad_4B85[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x38(0x8)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x40(0x1)(None)
};

// 0x32 (0x32 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetLastAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetLastAvailableButtonIndex_Params
{
public:
	int32                                        FirstButton;                                       // 0x0(0x4)(None)
	int32                                        FoundFirstButton;                                  // 0x4(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(None)
	uint8                                        Pad_4B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(None)
	uint8                                        Pad_4B87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x20(0x1)(None)
	uint8                                        Pad_4B88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x28(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x31(0x1)(None)
};

// 0x29 (0x29 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Get First Available Button Index
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_Get_First_Available_Button_Index_Params
{
public:
	int32                                        FirstButton;                                       // 0x0(0x4)(None)
	int32                                        FoundFirstButton;                                  // 0x4(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(None)
	uint8                                        Pad_4B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(None)
	uint8                                        Pad_4B8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(None)
	uint8                                        Pad_4B8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x20(0x8)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x28(0x1)(None)
};

// 0x99 (0x99 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.FixConsoleIcons
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_FixConsoleIcons_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(Edit, ZeroConstructor)
	class ABasePlayerController*                 K2Node_DynamicCast_AsBase_Player_Controller;       // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_4B91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x28(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x40(0x8)(Edit, ZeroConstructor)
	class UImage*                                K2Node_DynamicCast_AsImage;                        // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(None)
	uint8                                        Pad_4B92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x58(0x4)(None)
	uint8                                        Pad_4B93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x60(0x10)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(None)
	uint8                                        Pad_4B94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x74(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x78(0x1)(None)
	uint8                                        Pad_4B95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x7C(0x4)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x80(0x1)(None)
	uint8                                        Pad_4B96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x88(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x90(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SwitchButton
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SwitchButton_Params
{
public:
	bool                                         Next;                                              // 0x0(0x1)(None)
	uint8                                        Pad_4BA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         NewLocalVar;                                       // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x18(0x1)(None)
	uint8                                        Pad_4BA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPreviousAvailableButtonIndex_FirstButton; // 0x1C(0x4)(None)
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetNextAvailableButtonIndex_FirstButton;  // 0x28(0x4)(None)
	uint8                                        Pad_4BAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Set All Buttons Inactive
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_Set_All_Buttons_Inactive_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(None)
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item;                           // 0x10(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.PreConstruct
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Tick
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToSpecificIndex
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToSpecificIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
};

// 0x128 (0x128 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4C0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(None)
	uint8                                        Pad_4C0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x2C(0x4)(None)
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	class UPrimalUI*                             K2Node_DynamicCast_AsPrimal_UI;                    // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_4C0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x48(0x1)(None)
	uint8                                        Pad_4C0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x51(0x1)(None)
	uint8                                        Pad_4C0F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x58(0x8)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x60(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x61(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x62(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x63(0x1)(None)
	int32                                        Temp_int_Variable_1;                               // 0x64(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x68(0x1)(None)
	uint8                                        Pad_4C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x6C(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_5;            // 0x70(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_6;            // 0x71(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_7;            // 0x72(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_8;            // 0x73(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_9;            // 0x74(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_10;           // 0x75(0x1)(None)
	uint8                                        Pad_4C11[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UASAUIWidget_Button_Style2A_C*> K2Node_MakeArray_Array;                            // 0x78(0x10)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         CallFunc_Array_Get_Item_1;                         // 0x88(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable_2;                               // 0x90(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x94(0x1)(None)
	uint8                                        Pad_4C12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x98(0x4)(None)
	uint8                                        Pad_4C13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Array_Get_Item_2;                         // 0xA0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xA8(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0xAC(0x1)(None)
	uint8                                        Pad_4C14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0xB0(0x8)(None)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xB8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0xBC(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0xC0(0x8)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xC8(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x100(0x4)(None)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x104(0x4)(None)
	bool                                         CallFunc_SetToIndex_Valid;                         // 0x108(0x1)(None)
	uint8                                        Pad_4C15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x110(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x118(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x120(0x4)(None)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x124(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChangedIndex__DelegateSignature
struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChangedIndex__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
};

}
}


