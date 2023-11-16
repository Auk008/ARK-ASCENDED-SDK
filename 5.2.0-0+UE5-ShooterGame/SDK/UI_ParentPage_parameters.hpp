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

// 0x8 (0x8 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetClose_B
struct UUI_ParentPage_C_GetClose_B_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(None)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetVisibility_0
struct UUI_ParentPage_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_1186[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	bool                                         CallFunc_IsAnyModInstalling_ReturnValue;           // 0x11(0x1)(None)
	uint8                                        Pad_1187[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x18(0x8)(None)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x20(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x21(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x22(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x23(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x24(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x25(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x26(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x27(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x29(0x1)(None)
};

// 0x6E (0x6E - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ReturnModsOfCurrentPage
struct UUI_ParentPage_C_ReturnModsOfCurrentPage_Params
{
public:
	TArray<struct FInstallProgressMod>           Mod_List;                                          // 0x0(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FInstallProgressMod>           FinalOutputArray;                                  // 0x20(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FInstallProgressMod>           TempArray;                                         // 0x30(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x49(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4A(0x1)(None)
	uint8                                        Pad_118F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4C(0x4)(None)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x50(0x8)(None)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x58(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5A(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5B(0x1)(None)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x5C(0x4)(None)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x60(0x4)(None)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x64(0x4)(None)
	int32                                        CallFunc_Int32_SubOne_ReturnValue_1;               // 0x68(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x6C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6D(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.MoreImagesLeftToDownload
struct UUI_ParentPage_C_MoreImagesLeftToDownload_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_1195[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x4(0x4)(None)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(None)
};

// 0x1C (0x1C - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetModIndexesForCurrentRow
struct UUI_ParentPage_C_GetModIndexesForCurrentRow_Params
{
public:
	int32                                        First;                                             // 0x0(0x4)(None)
	int32                                        Last;                                              // 0x4(0x4)(None)
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x8(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(None)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x10(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x18(0x4)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.DownloadNextBatchOfMods
struct UUI_ParentPage_C_DownloadNextBatchOfMods_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(None)
};

// 0x4C0 (0x4C0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.DownloadBatchOfMods
struct UUI_ParentPage_C_DownloadBatchOfMods_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x8(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x490(0x1)(None)
	uint8                                        Pad_11A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x498(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4A0(0x1)(None)
	uint8                                        Pad_11A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetModIndexesForCurrentRow_First;         // 0x4A4(0x4)(None)
	int32                                        CallFunc_GetModIndexesForCurrentRow_Last;          // 0x4A8(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4AC(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4AD(0x1)(None)
	uint8                                        Pad_11A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x4B0(0x10)(None)
};

// 0x4D1 (0x4D1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CheckIfImagesAreReady
struct UUI_ParentPage_C_CheckIfImagesAreReady_Params
{
public:
	bool                                         CallFunc_MoreImagesLeftToDownload_ReturnValue;     // 0x0(0x1)(None)
	uint8                                        Pad_11AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(None)
	uint8                                        Pad_11AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x498(0x1)(None)
	uint8                                        Pad_11AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x4A0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4A8(0x1)(None)
	uint8                                        Pad_11AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4AC(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4B0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B1(0x1)(None)
	uint8                                        Pad_11AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetModIndexesForCurrentRow_First;         // 0x4B4(0x4)(None)
	int32                                        CallFunc_GetModIndexesForCurrentRow_Last;          // 0x4B8(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4BC(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4BD(0x1)(None)
	uint8                                        Pad_11AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x4C0(0x10)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x4D0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.DownloadImagesInAllMods
struct UUI_ParentPage_C_DownloadImagesInAllMods_Params
{
public:
	bool                                         CallFunc_InitiliazeImageDownloads_ReadyToStart;    // 0x0(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CreateEmptySlot
struct UUI_ParentPage_C_CreateEmptySlot_Params
{
public:
	int32                                        AtIndex;                                           // 0x0(0x4)(None)
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x4(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
	uint8                                        Pad_11B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0xC(0x4)(None)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x10(0x4)(None)
	uint8                                        Pad_11B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_EmptySlot_C*                       CallFunc_Create_ReturnValue;                       // 0x18(0x8)(Edit, ZeroConstructor)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x20(0x8)(None)
};

// 0x1B (0x1B - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SwitchControllerAction
struct UUI_ParentPage_C_SwitchControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1A(0x1)(None)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownTime
struct UUI_ParentPage_C_Nav_Down_from_DropdownTime_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_11BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_Nav_to_Options_ReturnValue;               // 0x10(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x29(0x1)(None)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownSort
struct UUI_ParentPage_C_Nav_Down_from_DropdownSort_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_11BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_Nav_to_Options_ReturnValue;               // 0x10(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x29(0x1)(None)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownCategory
struct UUI_ParentPage_C_Nav_Down_from_DropdownCategory_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_11C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_Nav_to_Options_ReturnValue;               // 0x10(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x29(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav for Up Move from List
struct UUI_ParentPage_C_Nav_for_Up_Move_from_List_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_11CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x41 (0x41 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetNavigationRuleForList
struct UUI_ParentPage_C_SetNavigationRuleForList_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(None)
	uint8                                        Pad_11D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	uint8                                        Pad_11D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetListFocus
struct UUI_ParentPage_C_SetListFocus_Params
{
public:
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x0(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdatePaginations
struct UUI_ParentPage_C_UpdatePaginations_Params
{
public:
	TArray<struct FInstallProgressMod>           TotalList;                                         // 0x0(0x10)(None)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	uint8                                        Pad_11E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(None)
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x18(0x4)(None)
	uint8                                        Pad_11EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x20(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x28(0x8)(None)
	double                                       CallFunc_FMod_Remainder;                           // 0x30(0x8)(None)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x38(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x3C(0x1)(None)
	uint8                                        Pad_11ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(None)
	int32                                        K2Node_Select_Default;                             // 0x44(0x4)(None)
};

// 0x5 (0x5 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ClearImageCache
struct UUI_ParentPage_C_ClearImageCache_Params
{
public:
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x0(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(None)
};

// 0x61 (0x61 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BindToDropdown
struct UUI_ParentPage_C_BindToDropdown_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor)
	TArray<class UUI_CustomComboBox_C*>          K2Node_MakeArray_Array;                            // 0x30(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(None)
	uint8                                        Pad_11FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(None)
	uint8                                        Pad_11FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x54(0x4)(None)
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x60(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CloseNotAllDropdown
struct UUI_ParentPage_C_CloseNotAllDropdown_Params
{
public:
	class UUI_CustomComboBox_C*                  Dropdown;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<class UUI_CustomComboBox_C*>          Dropdowns;                                         // 0x8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(None)
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x2C(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D(0x1)(None)
	uint8                                        Pad_1210[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x30(0x8)(ZeroConstructor)
	TArray<class UUI_CustomComboBox_C*>          K2Node_MakeArray_Array;                            // 0x38(0x10)(None)
};

// 0x39 (0x39 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropDown
struct UUI_ParentPage_C_CloseAllDropDown_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	uint8                                        Pad_121C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(ZeroConstructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	uint8                                        Pad_121E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_CustomComboBox_C*>          K2Node_MakeArray_Array;                            // 0x18(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	uint8                                        Pad_1220[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item;                           // 0x30(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(None)
};

// 0x41 (0x41 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetEnableStageForGameSlot
struct UUI_ParentPage_C_SetEnableStageForGameSlot_Params
{
public:
	bool                                         EnableStage;                                       // 0x0(0x1)(None)
	uint8                                        Pad_1228[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(None)
	uint8                                        Pad_1229[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(None)
	uint8                                        Pad_122A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
};

// 0x51 (0x51 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BindToGameSlot
struct UUI_ParentPage_C_BindToGameSlot_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor)
	uint8                                        Pad_122F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	uint8                                        Pad_1230[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(None)
	uint8                                        Pad_1231[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x48(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(None)
};

// 0x4A2 (0x4A2 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ClearAllModsInPage
struct UUI_ParentPage_C_ClearAllModsInPage_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(None)
	uint8                                        Pad_1237[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(None)
	uint8                                        Pad_1238[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x18(0x488)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4A0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4A1(0x1)(None)
};

// 0x22 (0x22 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateNotificationInSwitcher
struct UUI_ParentPage_C_UpdateNotificationInSwitcher_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(None)
	uint8                                        Pad_1241[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x8(0x8)(None)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x10(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x12(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x13(0x1)(None)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x14(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x18(0x1)(None)
	uint8                                        Pad_1242[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x20(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x21(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateAllThemeSettings
struct UUI_ParentPage_C_UpdateAllThemeSettings_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_124B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
};

// 0x13 (0x13 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.IsUrlValid
struct UUI_ParentPage_C_IsUrlValid_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x11(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdatePagesPagination
struct UUI_ParentPage_C_UpdatePagesPagination_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_1257[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x50)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x60(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x68(0x50)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.FilterModInfo
struct UUI_ParentPage_C_FilterModInfo_Params
{
public:
	struct FCFCoreSearchModsFilter               ReturnValue;                                       // 0x0(0x30)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x30(0x4)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x34(0x4)(None)
	struct FCFCoreSearchModsFilter               CallFunc_MakeSearchModsFilter_ReturnValue;         // 0x38(0x30)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetCurrentTab
struct UUI_ParentPage_C_GetCurrentTab_Params
{
public:
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x0(0x1)(None)
};

// 0x70 (0x70 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateSearchText
struct UUI_ParentPage_C_UpdateSearchText_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(None)
	uint8                                        Pad_1268[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x58(0x18)(None)
};

// 0x4B5 (0x4B5 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.LoadSavedUpImagesAsync
struct UUI_ParentPage_C_LoadSavedUpImagesAsync_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x8(0x488)(Edit, ZeroConstructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x490(0x1)(None)
	uint8                                        Pad_1278[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x498(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4A0(0x1)(None)
	uint8                                        Pad_1279[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4A4(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4A8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4A9(0x1)(None)
	uint8                                        Pad_127A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetModIndexesForCurrentRow_First;         // 0x4AC(0x4)(None)
	int32                                        CallFunc_GetModIndexesForCurrentRow_Last;          // 0x4B0(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4B4(0x1)(None)
};

// 0x4BC (0x4BC - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.InitiliazeImageDownloads
struct UUI_ParentPage_C_InitiliazeImageDownloads_Params
{
public:
	bool                                         ReadyToStart;                                      // 0x0(0x1)(None)
	uint8                                        Pad_1286[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x488)(Edit, ZeroConstructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x498(0x1)(None)
	uint8                                        Pad_1287[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x4A0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4A8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4A9(0x1)(None)
	uint8                                        Pad_1289[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4AC(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4B0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4B4(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4B5(0x1)(None)
	uint8                                        Pad_128A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4B8(0x4)(None)
};

// 0x32 (0x32 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerRow
struct UUI_ParentPage_C_CalculateModsPerRow_Params
{
public:
	int32                                        Mods;                                              // 0x0(0x4)(None)
	uint8                                        Pad_1290[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(None)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x10(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x28(0x8)(None)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x30(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x31(0x1)(None)
};

// 0x32 (0x32 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerPage
struct UUI_ParentPage_C_CalculateModsPerPage_Params
{
public:
	int32                                        Mods;                                              // 0x0(0x4)(None)
	uint8                                        Pad_1298[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(None)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x10(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x28(0x8)(None)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x30(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x31(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.PrevPage
struct UUI_ParentPage_C_PrevPage_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(None)
	uint8                                        Pad_12A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(None)
};

// 0xD (0xD - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.NextPage
struct UUI_ParentPage_C_NextPage_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_12A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetCurrentSearchInput
struct UUI_ParentPage_C_GetCurrentSearchInput_Params
{
public:
	class FText                                  CurrentSearchInput;                                // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.OnPageActiveted
struct UUI_ParentPage_C_OnPageActiveted_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(None)
};

// 0x4B0 (0x4B0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetCurrentClassMods
struct UUI_ParentPage_C_SetCurrentClassMods_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_12B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x488)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x498(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x49C(0x1)(None)
	uint8                                        Pad_12B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x4A0(0x8)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x4A8(0x1)(None)
	uint8                                        Pad_12B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4AC(0x4)(None)
};

// 0x54 (0x54 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetStypleOfPageArrowsButtons
struct UUI_ParentPage_C_SetStypleOfPageArrowsButtons_Params
{
public:
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x0(0x14)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x14(0x14)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x28(0x14)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x3C(0x14)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x51(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x52(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x53(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateCategoriesSelect
struct UUI_ParentPage_C_UpdateCategoriesSelect_Params
{
public:
	bool                                         CallFunc_IsModsListEmpty_IsEmpty;                  // 0x0(0x1)(None)
};

// 0x4B0 (0x4B0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CreateModSlot
struct UUI_ParentPage_C_CreateModSlot_Params
{
public:
	int32                                        AtIndex;                                           // 0x0(0x4)(None)
	uint8                                        Pad_12C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        CallFunc_Create_ReturnValue;                       // 0x8(0x8)(Edit, ZeroConstructor)
	struct FInstallProgressMod                   K2Node_MakeStruct_InstallProgressMod;              // 0x10(0x488)(Edit, ZeroConstructor)
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x498(0x4)(None)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x49C(0x4)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x4A0(0x4)(None)
	uint8                                        Pad_12C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x4A8(0x8)(None)
};

// 0x3 (0x3 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.IsSearchInputValid
struct UUI_ParentPage_C_IsSearchInputValid_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(None)
};

// 0x80 (0x80 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SearchForAuthorsName
struct UUI_ParentPage_C_SearchForAuthorsName_Params
{
public:
	class FText                                  Input;                                             // 0x0(0x18)(AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FModAuthor>                    Authors;                                           // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         AuthorFound;                                       // 0x28(0x1)(None)
	uint8                                        Pad_12D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(None)
	struct FModAuthor                            CallFunc_Array_Get_Item;                           // 0x48(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(None)
	uint8                                        Pad_12DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x74(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x78(0x1)(None)
	uint8                                        Pad_12DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(None)
};

// 0x89 (0x89 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetupTimeFilter
struct UUI_ParentPage_C_SetupTimeFilter_Params
{
public:
	enum class ENUM_TimeFilters                  SelectedDefaultOption;                             // 0x0(0x1)(None)
	uint8                                        Pad_12E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x1C(0x4)(None)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x20(0x1)(None)
	uint8                                        Pad_12E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(None)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x28(0x1)(None)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x29(0x1)(None)
	uint8                                        Pad_12E9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x30(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x40(0x1)(None)
	uint8                                        Pad_12EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x48(0x38)(None)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x80(0x4)(None)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x84(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(None)
};

// 0x215 (0x215 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetupSortByOptions
struct UUI_ParentPage_C_SetupSortByOptions_Params
{
public:
	enum class ECFCoreModsSearchSortField        SelectedDefaultOption;                             // 0x0(0x1)(None)
	uint8                                        Pad_1300[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_1;                            // 0x18(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_2;                            // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_3;                            // 0x38(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_4;                            // 0x48(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_5;                            // 0x58(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_6;                            // 0x68(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_7;                            // 0x78(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_8;                            // 0x88(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_9;                            // 0x98(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_10;                           // 0xA8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_11;                           // 0xB8(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ECFCoreModsSearchSortField        Temp_byte_Variable;                                // 0xC8(0x1)(None)
	uint8                                        Pad_1308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_12;                           // 0xD0(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_13;                           // 0xE0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_14;                           // 0xF0(0x10)(SimpleDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_15;                           // 0x100(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_16;                           // 0x110(0x10)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_17;                           // 0x120(0x10)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_18;                           // 0x130(0x10)(BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_19;                           // 0x140(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_20;                           // 0x150(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_21;                           // 0x160(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_22;                           // 0x170(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_23;                           // 0x180(0x10)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x190(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x194(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x198(0x4)(None)
	enum class ECFCoreModsSearchSortField        Temp_byte_Variable_1;                              // 0x19C(0x1)(None)
	uint8                                        Pad_130B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECFCoreModsSearchSortField> K2Node_MakeArray_Array;                            // 0x1A0(0x10)(SimpleDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ECFCoreModsSearchSortField        CallFunc_Array_Get_Item;                           // 0x1B0(0x1)(None)
	enum class ECFCoreModsSearchSortField        CallFunc_Array_Get_Item_1;                         // 0x1B1(0x1)(None)
	uint8                                        Pad_130C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x1B8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                K2Node_Select_Default_1;                           // 0x1C8(0x10)(AssetRegistrySearchable, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x1D8(0x38)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x210(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x214(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SelectClass
struct UUI_ParentPage_C_SelectClass_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(None)
};

// 0x228 (0x228 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.OnMouseButtonDown
struct UUI_ParentPage_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x169(0x1)(None)
	uint8                                        Pad_131D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(None)
};

// 0x1F (0x1F - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BuildPage
struct UUI_ParentPage_C_BuildPage_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	uint8                                        Pad_1325[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(None)
	uint8                                        Pad_1326[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x14(0x4)(None)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x18(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1C(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x1D(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E(0x1)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CheckWhichTextAppearsFirst
struct UUI_ParentPage_C_CheckWhichTextAppearsFirst_Params
{
public:
	class FText                                  NameOne;                                           // 0x0(0x18)(TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FText                                  NameTwo;                                           // 0x18(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         Name_One_Appears_First;                            // 0x30(0x1)(None)
	uint8                                        Pad_132E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        _numOfLettersForCheck;                             // 0x34(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(None)
	uint8                                        Pad_132F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x74(0x1)(None)
	uint8                                        Pad_1331[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x78(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_ToUpper_ReturnValue_1;                    // 0x88(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_1; // 0x98(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA8(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAC(0x1)(None)
	uint8                                        Pad_1335[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xB0(0x4)(None)
	int32                                        CallFunc_GetCharacterAsNumber_ReturnValue;         // 0xB4(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xB8(0x1)(None)
	uint8                                        Pad_1336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCharacterAsNumber_ReturnValue_1;       // 0xBC(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC0(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xC1(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC2(0x1)(None)
	uint8                                        Pad_1337[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC4(0x4)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.IsModsListEmpty
struct UUI_ParentPage_C_IsModsListEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(None)
	uint8                                        Pad_1341[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
struct UUI_ParentPage_C_BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature
struct UUI_ParentPage_C_BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Event On Input Device Changed
struct UUI_ParentPage_C_Event_On_Input_Device_Changed_Params
{
public:
	enum class ENUM_InputDevices                 Device;                                            // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Event Update Filter By Options
struct UUI_ParentPage_C_Event_Update_Filter_By_Options_Params
{
public:
	int64                                        Current_Class_Category_ID;                         // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateSearch
struct UUI_ParentPage_C_UpdateSearch_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.OnSearch
struct UUI_ParentPage_C_OnSearch_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ButtonCall
struct UUI_ParentPage_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.PreConstruct
struct UUI_ParentPage_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0xDE (0xDE - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ExecuteUbergraph_UI_ParentPage
struct UUI_ParentPage_C_ExecuteUbergraph_UI_ParentPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_1375[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(None)
	uint8                                        Pad_1377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_Option_1;               // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                K2Node_ComponentBoundEvent_Option;                 // 0x38(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	enum class ENUM_InputDevices                 K2Node_CustomEvent_Device;                         // 0x48(0x1)(None)
	uint8                                        Pad_1379[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x4C(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_137A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        K2Node_CustomEvent_Current_Class_Category_ID;      // 0x60(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(None)
	uint8                                        Pad_137B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_SearchInput;                          // 0x70(0x18)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x88(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x98(0x10)(None)
	class FText                                  K2Node_Event_Search_Input;                         // 0xA8(0x18)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0xC0(0x18)(None)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0xD8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD9(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xDA(0x1)(None)
	enum class ECFCoreModsSearchSortField        CallFunc_Map_Find_Value;                           // 0xDB(0x1)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xDC(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xDD(0x1)(None)
};

}
}


