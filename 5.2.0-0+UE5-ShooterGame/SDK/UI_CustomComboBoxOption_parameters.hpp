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
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnOptionSelected
struct UUI_CustomComboBoxOption_C_OnOptionSelected_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
	int64                                        ID;                                                // 0x10(0x8)(None)
	TScriptInterface<class IBPI_CustomComboBoxInterface_C> K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface; // 0x18(0x10)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.UpdateHoveredOption
struct UUI_CustomComboBoxOption_C_UpdateHoveredOption_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(None)
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item;                           // 0x10(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(None)
	uint8                                        Pad_2A85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C(0x4)(None)
};

// 0x29 (0x29 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnNavRight
struct UUI_CustomComboBoxOption_C_OnNavRight_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_2A88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	uint8                                        Pad_2A89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor)
	class UUI_SubMinusCategory_C*                K2Node_DynamicCast_AsUI_Sub__Category;             // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
};

// 0x5 (0x5 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveArrow
struct UUI_CustomComboBoxOption_C_RemoveSpacingIfNotHaveArrow_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(None)
};

// 0x52 (0x52 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.CheckIfSubCategorySelected
struct UUI_CustomComboBoxOption_C_CheckIfSubCategorySelected_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         IsSelected;                                        // 0x10(0x1)(None)
	uint8                                        Pad_2A8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(None)
	uint8                                        Pad_2A90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTRUCT_SubOptions                    CallFunc_Array_Get_Item;                           // 0x28(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x51(0x1)(None)
};

// 0x2C (0x2C - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnUpdate
struct UUI_CustomComboBoxOption_C_OnUpdate_Params
{
public:
	double                                       CallFunc_BreakVector2D_X;                          // 0x0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x8(0x8)(None)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x10(0x1)(None)
	uint8                                        Pad_2A91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x14(0x4)(None)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x18(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(None)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x28(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ContinueUpdating
struct UUI_CustomComboBoxOption_C_ContinueUpdating_Params
{
public:
	bool                                         CallFunc_K2_TimerExists_ReturnValue;               // 0x0(0x1)(None)
	uint8                                        Pad_2A92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnFail_2F79E7094E3FA19CAF12DEBE91370E8A
struct UUI_CustomComboBoxOption_C_OnFail_2F79E7094E3FA19CAF12DEBE91370E8A_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A
struct UUI_CustomComboBoxOption_C_OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event On Sub Option Clicked
struct UUI_CustomComboBoxOption_C_Event_On_Sub_Option_Clicked_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(None)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnAddedToFocusPath
struct UUI_CustomComboBoxOption_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnRemovedFromFocusPath
struct UUI_CustomComboBoxOption_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Update Navigation
struct UUI_CustomComboBoxOption_C_Event_Update_Navigation_Params
{
public:
	bool                                         IsLast;                                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.PreConstruct
struct UUI_CustomComboBoxOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x2E8 (0x2E8 - 0x0)
// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ExecuteUbergraph_UI_CustomComboBoxOption
struct UUI_CustomComboBoxOption_C_ExecuteUbergraph_UI_CustomComboBoxOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(None)
	enum class EUINavigationRule                 Temp_byte_Variable;                                // 0x6(0x1)(None)
	enum class EUINavigationRule                 Temp_byte_Variable_1;                              // 0x7(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(None)
	bool                                         Temp_bool_Variable_2;                              // 0xB(0x1)(None)
	uint8                                        Pad_2AA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x10(0x8)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x28(0x8)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x40(0x8)(ZeroConstructor)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x48(0x10)(None)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x58(0x8)(ZeroConstructor)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x60(0x58)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xB8(0x1)(None)
	uint8                                        Pad_2AA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_SubCategory;                    // 0xC0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int64                                        K2Node_CustomEvent_SubCategoryID;                  // 0xD0(0x8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD8(0x18)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xF0(0x10)(ZeroConstructor)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x100(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x118(0x18)(AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x130(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x140(0x1)(None)
	bool                                         CallFunc_CheckIfSubCategorySelected_IsSelected;    // 0x141(0x1)(None)
	uint8                                        Pad_2AAA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0x144(0x38)(None)
	float                                        CallFunc_GetViewportScale_ReturnValue;             // 0x17C(0x4)(None)
	struct FVector2D                             CallFunc_LocalToViewport_PixelPosition;            // 0x180(0x10)(None)
	struct FVector2D                             CallFunc_LocalToViewport_ViewportPosition;         // 0x190(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x1A0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x1A8(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B0(0x4)(None)
	uint8                                        Pad_2AAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x1B8(0x8)(ZeroConstructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C1(0x1)(None)
	uint8                                        Pad_2AAC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C4(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1C8(0x1)(None)
	uint8                                        Pad_2AAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x1CC(0x8)(None)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x1D4(0x8)(None)
	uint8                                        Pad_2AAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x1E0(0x8)(ZeroConstructor)
	bool                                         K2Node_CustomEvent_IsLast;                         // 0x1E8(0x1)(None)
	uint8                                        Pad_2AAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_SubMinusCategories_Scroll_C*       CallFunc_Create_ReturnValue;                       // 0x1F0(0x8)(ZeroConstructor)
	enum class EUINavigationRule                 K2Node_Select_Default;                             // 0x1F8(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1F9(0x1)(None)
	uint8                                        Pad_2AB0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1FC(0x10)(ZeroConstructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x20C(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x20D(0x1)(None)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x20E(0x1)(None)
	uint8                                        Pad_2AB1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x210(0x10)(ZeroConstructor)
	bool                                         Temp_bool_Variable_3;                              // 0x220(0x1)(None)
	uint8                                        Pad_2AB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x228(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x230(0x8)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x238(0x1)(None)
	uint8                                        Pad_2AB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x240(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x248(0x8)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x250(0x1)(None)
	uint8                                        Pad_2AB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x258(0x10)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x268(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x280(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x298(0x1)(None)
	uint8                                        Pad_2AB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x29C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2A0(0x1)(None)
	uint8                                        Pad_2AB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x2A8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2B0(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x2B1(0x1)(None)
	uint8                                        Pad_2AB7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x2B4(0x14)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateColor                           K2Node_Select_Default_3;                           // 0x2C8(0x14)(None)
	uint8                                        Pad_2AB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x2E0(0x8)(None)
};

}
}


