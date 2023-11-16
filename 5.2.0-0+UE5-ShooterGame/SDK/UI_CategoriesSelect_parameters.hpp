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

// 0x80 (0x80 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.CreateAllCategoriesCategory
struct UUI_CategoriesSelect_C_CreateAllCategoriesCategory_Params
{
public:
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x0(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x10(0x38)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1;   // 0x48(0x38)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound
struct UUI_CategoriesSelect_C_OnCategoriesInfoFound_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound_Error
struct UUI_CategoriesSelect_C_OnCategoriesInfoFound_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.UpdateOptions
struct UUI_CategoriesSelect_C_UpdateOptions_Params
{
public:
	int64                                        Current_Class_Category_ID;                         // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.PreConstruct
struct UUI_CategoriesSelect_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnOptionSelectedInterface
struct UUI_CategoriesSelect_C_OnOptionSelectedInterface_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
	int64                                        ID;                                                // 0x10(0x8)(None)
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(None)
};

// 0x28C (0x28C - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.ExecuteUbergraph_UI_CategoriesSelect
struct UUI_CategoriesSelect_C_ExecuteUbergraph_UI_CategoriesSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4B1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(Edit, ZeroConstructor)
	TArray<struct FCategory>                     K2Node_CustomEvent_categories;                     // 0x10(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x24(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(None)
	uint8                                        Pad_4B20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x30(0x38)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(None)
	uint8                                        Pad_4B21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(None)
	uint8                                        Pad_4B22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCategory                             CallFunc_Array_Get_Item;                           // 0x78(0x78)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSTRUCT_SubOptions                    K2Node_MakeStruct_STRUCT_SubOptions;               // 0xF0(0x28)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        K2Node_Event_Current_Class_Category_ID;            // 0x118(0x8)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x120(0x4)(None)
	struct FCFCoreGetCategoriesFilter            CallFunc_MakeGetCategoriesFilter_ReturnValue;      // 0x124(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x128(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x138(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x13C(0x1)(None)
	uint8                                        Pad_4B23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x140(0x4)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x144(0x4)(None)
	struct FSTRUCT_CustomComboBoxOption          CallFunc_Array_Get_Item_1;                         // 0x148(0x38)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(None)
	uint8                                        Pad_4B24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x188(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x190(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x191(0x1)(None)
	uint8                                        Pad_4B25[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Option;                               // 0x198(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        K2Node_Event_ID;                                   // 0x1A8(0x8)(None)
	class UUI_CustomComboBoxOption_C*            K2Node_Event_OptionWidget;                         // 0x1B0(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1B8(0x4)(None)
	uint8                                        Pad_4B26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCategory                             CallFunc_Array_Get_Item_2;                         // 0x1C0(0x78)(ContainsInstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x238(0x4)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x23C(0x1)(None)
	uint8                                        Pad_4B27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x240(0x38)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue_1;      // 0x278(0x1)(None)
	uint8                                        Pad_4B28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x27C(0x10)(None)
};

}
}


