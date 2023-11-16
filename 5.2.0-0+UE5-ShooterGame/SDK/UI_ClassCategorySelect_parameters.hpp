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

// 0x435 (0x435 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.DoesModBelongToCategory
struct UUI_ClassCategorySelect_C_DoesModBelongToCategory_Params
{
public:
	struct FInstalledMod                         Mod_List;                                          // 0x0(0x3B0)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCategory                             Category;                                          // 0x3B0(0x78)(None)
	bool                                         IsPresent;                                         // 0x428(0x1)(None)
	uint8                                        Pad_4A6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentNum;                                        // 0x42C(0x4)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x430(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x434(0x1)(None)
};

// 0x558 (0x558 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.FilterToModsOfClass
struct UUI_ClassCategorySelect_C_FilterToModsOfClass_Params
{
public:
	TArray<struct FInstallProgressMod>           Mod_List;                                          // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCategory                             Category;                                          // 0x10(0x78)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FInstallProgressMod>           ListOfMods;                                        // 0x88(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FInstallProgressMod>           TempListToReturn;                                  // 0x98(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CurrentNum;                                        // 0xA8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xAC(0x4)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0xB0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(None)
	uint8                                        Pad_4A86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0xC0(0x488)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x548(0x1)(None)
	uint8                                        Pad_4A87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x550(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x551(0x1)(None)
	uint8                                        Pad_4A88[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x554(0x4)(None)
};

// 0x22 (0x22 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.SetCategoryUnderlineColor
struct UUI_ClassCategorySelect_C_SetCategoryUnderlineColor_Params
{
public:
	class UUI_Button_ClassCategory_C*            SelectedCategoryWidgetRef;                         // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(None)
	class UUI_Button_ClassCategory_C*            CallFunc_Array_Get_Item;                           // 0x18(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x21(0x1)(None)
};

// 0xD4 (0xD4 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.Check Num Of Mods In Each Class
struct UUI_ClassCategorySelect_C_Check_Num_Of_Mods_In_Each_Class_Params
{
public:
	struct FCategory                             Category;                                          // 0x0(0x78)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        NumberInInt;                                       // 0x78(0x4)(None)
	uint8                                        Pad_4A8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NumberInTXT;                                       // 0x80(0x18)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CurrentNum;                                        // 0x98(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x9C(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(None)
	uint8                                        Pad_4A8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xAC(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB4(0x1)(None)
	uint8                                        Pad_4A8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xB8(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound
struct UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound_Error
struct UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.PreConstruct
struct UUI_ClassCategorySelect_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.UpdateNumOfModsInCategories
struct UUI_ClassCategorySelect_C_UpdateNumOfModsInCategories_Params
{
public:
	bool                                         ClassCategoriesLocal_;                             // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ClearNumOfModsInCategories
struct UUI_ClassCategorySelect_C_ClearNumOfModsInCategories_Params
{
public:
	bool                                         ClassCategoriesLocal_;                             // 0x0(0x1)(None)
};

// 0x268 (0x268 - 0x0)
// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ExecuteUbergraph_UI_ClassCategorySelect
struct UUI_ClassCategorySelect_C_ExecuteUbergraph_UI_ClassCategorySelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4AD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x28(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x30(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x34(0x4)(None)
	struct FCFCoreGetCategoriesFilter            CallFunc_MakeGetCategoriesFilter_ReturnValue;      // 0x38(0x4)(None)
	uint8                                        Pad_4AD1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCategory>                     K2Node_CustomEvent_categories;                     // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(None)
	uint8                                        Pad_4AD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x58(0x38)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x90(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x94(0x1)(None)
	uint8                                        Pad_4AD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x98(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x9C(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xA0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xA4(0x4)(None)
	struct FCategory                             CallFunc_Array_Get_Item;                           // 0xA8(0x78)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FCategory                             CallFunc_Array_Get_Item_1;                         // 0x120(0x78)(SimpleDisplay, BlueprintCallable, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x198(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x19C(0x1)(None)
	uint8                                        Pad_4AD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1A0(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1B0(0x1)(None)
	bool                                         K2Node_CustomEvent_ClassCategoriesLocal__1;        // 0x1B1(0x1)(None)
	uint8                                        Pad_4AD7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Button_ClassCategory_C*            CallFunc_Array_Get_Item_2;                         // 0x1B8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C0(0x1)(None)
	uint8                                        Pad_4AD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt; // 0x1C4(0x4)(None)
	class FText                                  CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT; // 0x1C8(0x18)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1E0(0x1)(None)
	uint8                                        Pad_4AD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1E4(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1E8(0x1)(None)
	uint8                                        Pad_4ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Button_ClassCategory_C*            CallFunc_Create_ReturnValue;                       // 0x1F0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_CustomEvent_ClassCategoriesLocal_;          // 0x1F8(0x1)(None)
	uint8                                        Pad_4ADB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1FC(0x4)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x200(0x8)(Edit, ZeroConstructor)
	class FText                                  Temp_text_Variable_1;                              // 0x208(0x18)(None)
	class UUI_Button_ClassCategory_C*            CallFunc_Array_Get_Item_3;                         // 0x220(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x228(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x22C(0x1)(None)
	uint8                                        Pad_4ADC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x230(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x240(0x4)(None)
	uint8                                        Pad_4ADD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x248(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x250(0x1)(None)
	uint8                                        Pad_4ADE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x254(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x258(0x10)(None)
};

}
}


