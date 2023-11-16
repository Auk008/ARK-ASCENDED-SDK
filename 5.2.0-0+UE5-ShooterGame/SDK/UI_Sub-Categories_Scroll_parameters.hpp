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

// 0x149 (0x149 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnKeyDown
struct UUI_SubMinusCategories_Scroll_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event On Subcategory Select Event
struct UUI_SubMinusCategories_Scroll_C_Event_On_Subcategory_Select_Event_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(None)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Check If Selected
struct UUI_SubMinusCategories_Scroll_C_Event_Check_If_Selected_Params
{
public:
	class UUI_SubMinusCategory_C*                SubCategoryWidget_Ref;                             // 0x0(0x8)(None)
	class FString                                Text;                                              // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnRemovedFromFocusPath
struct UUI_SubMinusCategories_Scroll_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnAddedToFocusPath
struct UUI_SubMinusCategories_Scroll_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(None)
};

// 0x119 (0x119 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.ExecuteUbergraph_UI_Sub-Categories_Scroll
struct UUI_SubMinusCategories_Scroll_C_ExecuteUbergraph_UI_SubMinusCategories_Scroll_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(None)
	uint8                                        Pad_38A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_SubMinusCategory_C*                CallFunc_Create_ReturnValue;                       // 0x8(0x8)(Edit, ZeroConstructor)
	class FString                                K2Node_CustomEvent_SubCategory;                    // 0x10(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        K2Node_CustomEvent_SubCategoryID;                  // 0x20(0x8)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(None)
	uint8                                        Pad_38A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x30(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(None)
	class UUI_SubMinusCategory_C*                K2Node_CustomEvent_SubCategoryWidget_Ref;          // 0x40(0x8)(Edit, ZeroConstructor)
	class FString                                K2Node_CustomEvent_Text;                           // 0x48(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(None)
	uint8                                        Pad_38A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x78(0x18)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x90(0x1)(None)
	uint8                                        Pad_38A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x94(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA4(0x10)(None)
	uint8                                        Pad_38A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB8(0x8)(None)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0xC0(0x8)(None)
	struct FSTRUCT_SubOptions                    CallFunc_Array_Get_Item;                           // 0xC8(0x28)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF4(0x1)(None)
	uint8                                        Pad_38A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xF8(0x18)(None)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x110(0x8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x118(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnSubcategorySelect__DelegateSignature
struct UUI_SubMinusCategories_Scroll_C_OnSubcategorySelect__DelegateSignature_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(None)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(None)
};

}
}


