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
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.SetEnabledStateOfButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_SetEnabledStateOfButtonIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	bool                                         Enabled_;                                          // 0x4(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5(0x1)(None)
	uint8                                        Pad_3E48[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x8(0x8)(None)
};

// 0x41 (0x41 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.GetPreviousAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_GetPreviousAvailableButtonIndex_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(None)
	int32                                        FirstButton;                                       // 0x4(0x4)(None)
	int32                                        FoundNextButton;                                   // 0x8(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(None)
	uint8                                        Pad_3E4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(None)
	uint8                                        Pad_3E4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLastAvailableButtonIndex_FirstButton;  // 0x18(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C(0x1)(None)
	uint8                                        Pad_3E4F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x24(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(None)
	uint8                                        Pad_3E50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x30(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(None)
	uint8                                        Pad_3E51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLastAvailableButtonIndex_FirstButton_1; // 0x34(0x4)(None)
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x38(0x8)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x40(0x1)(None)
};

// 0x41 (0x41 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.GetNextAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_GetNextAvailableButtonIndex_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(None)
	int32                                        FirstButton;                                       // 0x4(0x4)(None)
	int32                                        FoundNextButton;                                   // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	uint8                                        Pad_3E54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(None)
	uint8                                        Pad_3E55[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_First_Available_Button_Index_FirstButton; // 0x1C(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(None)
	int32                                        CallFunc_Get_First_Available_Button_Index_FirstButton_1; // 0x24(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(None)
	uint8                                        Pad_3E56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(None)
	uint8                                        Pad_3E57[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x38(0x8)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x40(0x1)(None)
};

// 0x32 (0x32 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.GetLastAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_GetLastAvailableButtonIndex_Params
{
public:
	int32                                        FirstButton;                                       // 0x0(0x4)(None)
	int32                                        FoundFirstButton;                                  // 0x4(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(None)
	uint8                                        Pad_3E5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(None)
	uint8                                        Pad_3E5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x20(0x1)(None)
	uint8                                        Pad_3E5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x28(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x31(0x1)(None)
};

// 0x29 (0x29 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.Get First Available Button Index
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_Get_First_Available_Button_Index_Params
{
public:
	int32                                        FirstButton;                                       // 0x0(0x4)(None)
	int32                                        FoundFirstButton;                                  // 0x4(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(None)
	uint8                                        Pad_3E5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(None)
	uint8                                        Pad_3E5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(None)
	uint8                                        Pad_3E60[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x20(0x8)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x28(0x1)(None)
};

// 0xA9 (0xA9 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.Fix Console Icons
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_Fix_Console_Icons_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(Edit, ZeroConstructor)
	class ABasePlayerController*                 K2Node_DynamicCast_AsBase_Player_Controller;       // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_3E61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x28(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x44(0x4)(None)
	TArray<class UWidget*>                       K2Node_MakeArray_Array_1;                          // 0x48(0x10)(Edit, ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(None)
	uint8                                        Pad_3E62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                K2Node_DynamicCast_AsImage;                        // 0x68(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x71(0x1)(None)
	uint8                                        Pad_3E63[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x78(0x10)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x88(0x1)(None)
	uint8                                        Pad_3E64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x8C(0x4)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x90(0x1)(None)
	uint8                                        Pad_3E65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x98(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0xA0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.SwitchButton
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_SwitchButton_Params
{
public:
	bool                                         Next;                                              // 0x0(0x1)(None)
	uint8                                        Pad_3E66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          NewLocalVar;                                       // 0x10(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetPreviousAvailableButtonIndex_FirstButton; // 0x18(0x4)(None)
	uint8                                        Pad_3E67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetNextAvailableButtonIndex_FirstButton;  // 0x28(0x4)(None)
	uint8                                        Pad_3E68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.SetButtonsInactive
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_SetButtonsInactive_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(None)
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x10(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.PreConstruct
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.Tick
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x244 (0x244 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3E72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(None)
	uint8                                        Pad_3E73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x2C(0x4)(None)
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	class UPrimalUI*                             K2Node_DynamicCast_AsPrimal_UI;                    // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_3E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x48(0x1)(None)
	uint8                                        Pad_3E75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x51(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x52(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x53(0x1)(None)
	int32                                        Temp_int_Variable_1;                               // 0x54(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x58(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5C(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x60(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x61(0x1)(None)
	uint8                                        Pad_3E77[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x64(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x68(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x69(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_5;            // 0x6A(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_6;            // 0x6B(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_7;            // 0x6C(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_8;            // 0x6D(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_9;            // 0x6E(0x1)(None)
	uint8                                        Pad_3E79[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_10;           // 0x74(0x1)(None)
	uint8                                        Pad_3E7A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x78(0x4)(None)
	uint8                                        Pad_3E7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item_1;                         // 0x80(0x8)(Edit, ZeroConstructor)
	class UTexture*                              CallFunc_Array_Get_Item_2;                         // 0x88(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x90(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x94(0x1)(None)
	uint8                                        Pad_3E7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x98(0x8)(ZeroConstructor)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0xA0(0x10)(Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UWidget*                               CallFunc_Array_Get_Item_3;                         // 0xB0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB8(0x4)(None)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0xBC(0x38)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF4(0x1)(None)
	uint8                                        Pad_3E7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue;                 // 0xF8(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x108(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x110(0x8)(None)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue_1;          // 0x118(0x38)(None)
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue_1;               // 0x150(0x10)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x160(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x168(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x170(0x8)(None)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue_2;          // 0x178(0x38)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1B0(0x4)(None)
	uint8                                        Pad_3E81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue_2;               // 0x1B8(0x10)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1C8(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x200(0x4)(None)
	bool                                         CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x204(0x1)(None)
	uint8                                        Pad_3E83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x208(0x4)(None)
	uint8                                        Pad_3E84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_2;                 // 0x210(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x218(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x220(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x224(0x1)(None)
	uint8                                        Pad_3E85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x228(0x4)(None)
	uint8                                        Pad_3E86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UASAUIWidget_Button_Style4_C*>  K2Node_MakeArray_Array;                            // 0x230(0x10)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x240(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.OnSelectionIndexChanged__DelegateSignature
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_OnSelectionIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
};

}
}


