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

// 0x1 (0x1 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.UpdateAllThemeSettings
struct UUI_Button_ClassCategory_C_UpdateAllThemeSettings_Params
{
public:
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.SetCurrentNumOfModesInClass
struct UUI_Button_ClassCategory_C_SetCurrentNumOfModesInClass_Params
{
public:
	int32                                        New_Num;                                           // 0x0(0x4)(None)
	uint8                                        Pad_2[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.SetCurrentCount
struct UUI_Button_ClassCategory_C_SetCurrentCount_Params
{
public:
	int32                                        CurrentCount;                                      // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.SetUnderlineColor
struct UUI_Button_ClassCategory_C_SetUnderlineColor_Params
{
public:
	bool                                         ToShow;                                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.Event Set Class Name
struct UUI_Button_ClassCategory_C_Event_Set_Class_Name_Params
{
public:
	bool                                         ClassCategoriesLocal_;                             // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.On Search Pagination Info Failed
struct UUI_Button_ClassCategory_C_On_Search_Pagination_Info_Failed_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.On Search Pagination Info
struct UUI_Button_ClassCategory_C_On_Search_Pagination_Info_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x10(0x10)(None)
};

// 0x3B0 (0x3B0 - 0x0)
// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.ExecuteUbergraph_UI_Button_ClassCategory
struct UUI_Button_ClassCategory_C_ExecuteUbergraph_UI_Button_ClassCategory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_CustomEvent_ClassCategoriesLocal_;          // 0x14(0x1)(None)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x15(0x1)(None)
	uint8                                        Pad_3[0x2];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x18(0x38)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_NotEqual_Int64Int64_ReturnValue;          // 0x50(0x1)(None)
	uint8                                        Pad_4[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCFCoreMod>                    K2Node_CustomEvent_mods;                           // 0x58(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FCFCoreApiResponsePagination          K2Node_CustomEvent_pagination;                     // 0x68(0x10)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x90(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xA8(0x50)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xF8(0x50)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x148(0x10)(AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x158(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x170(0x4)(None)
	uint8                                        Pad_5[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreSearchModsFilter               CallFunc_MakeSearchModsFilter_ReturnValue;         // 0x178(0x30)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x1A8(0x18)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1C0(0x50)(AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x210(0x1)(None)
	uint8                                        Pad_6[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x218(0x50)(SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x268(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x270(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x271(0x1)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x272(0x1)(None)
	uint8                                        Pad_7[0x1];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x274(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_8[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x288(0x18)(AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2A0(0x1)(None)
	uint8                                        Pad_9[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x2A8(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2F8(0x10)(AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x308(0x50)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x358(0x18)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x370(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x380(0x18)(None)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_1;       // 0x398(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_1;  // 0x3A0(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3A1(0x1)(None)
	uint8                                        Pad_A[0x6];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x3A8(0x8)(None)
};

}
}


