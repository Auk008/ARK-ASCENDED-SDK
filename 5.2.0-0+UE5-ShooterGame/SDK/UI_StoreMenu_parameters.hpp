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
// Function UI_StoreMenu.UI_StoreMenu_C.OnEventBroadcasted
struct UUI_StoreMenu_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_4A3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
};

// 0x919 (0x919 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.NotificationHandled
struct UUI_StoreMenu_C_NotificationHandled_Params
{
public:
	struct FInstallProgressMod                   Mod;                                               // 0x0(0x488)(ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	enum class EGameModsEvent                    Selection;                                         // 0x488(0x1)(None)
	uint8                                        Pad_4A3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   ModToHandle;                                       // 0x490(0x488)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x918(0x1)(None)
};

// 0x489 (0x489 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.PlayNotificationInstalled
struct UUI_StoreMenu_C_PlayNotificationInstalled_Params
{
public:
	struct FInstallProgressMod                   Mod_Info;                                          // 0x0(0x488)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x488(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.BPEscapeClosed
struct UUI_StoreMenu_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc4
struct UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc4_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc3
struct UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc3_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.RequestInstalledModsFromAPI
struct UUI_StoreMenu_C_RequestInstalledModsFromAPI_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Back from Server Mods
struct UUI_StoreMenu_C_Back_from_Server_Mods_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x51 (0x51 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SwitchControllerAction
struct UUI_StoreMenu_C_SwitchControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1B(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1C(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x1D(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1E(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x1F(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x20(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x21(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x22(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x23(0x1)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x24(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x25(0x1)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x26(0x1)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x27(0x1)(None)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(None)
	uint8                                        Pad_4A44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      K2Node_DynamicCast_AsUI_Parent_Page;               // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_4A45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      K2Node_DynamicCast_AsUI_Parent_Page_1;             // 0x48(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SetInitStoreFocus
struct UUI_StoreMenu_C_SetInitStoreFocus_Params
{
public:
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x0(0x8)(Edit, ZeroConstructor)
	class UUI_ParentPage_C*                      K2Node_DynamicCast_AsUI_Parent_Page;               // 0x8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.PlayStartFadeInAnimation
struct UUI_StoreMenu_C_PlayStartFadeInAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.EnabledTabSwitching
struct UUI_StoreMenu_C_EnabledTabSwitching_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(None)
};

// 0x5 (0x5 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateMyModsVisibility
struct UUI_StoreMenu_C_UpdateMyModsVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SetCurrentActivePage
struct UUI_StoreMenu_C_SetCurrentActivePage_Params
{
public:
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x0(0x1)(None)
	enum class ENUM_SideTabs                     Temp_byte_Variable;                                // 0x1(0x1)(None)
	enum class ENUM_SideTabs                     Temp_byte_Variable_1;                              // 0x2(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_4A47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Button_Sidebar_C*                  K2Node_Select_Default;                             // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(None)
	uint8                                        Pad_4A48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      K2Node_Select_Default_1;                           // 0x18(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.GetCurrentActivePage
struct UUI_StoreMenu_C_GetCurrentActivePage_Params
{
public:
	class UUI_ParentPage_C*                      CurrentPage;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x8(0x1)(None)
	enum class ENUM_SideTabs                     Temp_byte_Variable;                                // 0x9(0x1)(None)
	uint8                                        Pad_4A49[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      K2Node_Select_Default;                             // 0x10(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
};

// 0x68 (0x68 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateSearchFilter
struct UUI_StoreMenu_C_UpdateSearchFilter_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x8(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	uint8                                        Pad_4A54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x20(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x38(0x8)(None)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x40(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x41(0x1)(None)
	uint8                                        Pad_4A55[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x60(0x1)(None)
	uint8                                        Pad_4A56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(None)
};

// 0x4A0 (0x4A0 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.CreateModPageMenu
struct UUI_StoreMenu_C_CreateModPageMenu_Params
{
public:
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	struct FInstallProgressMod                   ModInfo;                                           // 0x8(0x488)(Edit, ZeroConstructor)
	class UUI_ModPage_C*                         ModPageRef;                                        // 0x490(0x8)(Edit, ZeroConstructor)
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue;                       // 0x498(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DestroyModPageMenu
struct UUI_StoreMenu_C_DestroyModPageMenu_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.CreateRightClickMenu
struct UUI_StoreMenu_C_CreateRightClickMenu_Params
{
public:
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         ShouldViewBeVisible;                               // 0x8(0x1)(None)
	bool                                         SepareteReportWithLine;                            // 0x9(0x1)(None)
	uint8                                        Pad_4A5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WidgetWidth;                                       // 0x10(0x8)(None)
	class UUI_RightClickMenu_C*                  MenuRef;                                           // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_RightClickMenu_C*                  CallFunc_Create_ReturnValue;                       // 0x20(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DestroyRightClickMenu
struct UUI_StoreMenu_C_DestroyRightClickMenu_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0xF30 (0xF30 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateAllStoreMenuWidgets
struct UUI_StoreMenu_C_UpdateAllStoreMenuWidgets_Params
{
public:
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0xB(0x1)(None)
	uint8                                        Pad_4A5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle; // 0x10(0x3F0)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1; // 0x400(0x3F0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x7F0(0x3F0)(Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Temp_object_Variable_1;                            // 0xBE0(0x8)(Edit, ZeroConstructor)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0xBE8(0x8)(Edit, ZeroConstructor)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xBF0(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xCC0(0xD0)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0xD90(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0xE60(0xD0)(None)
};

// 0x109 (0x109 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.InitTheme
struct UUI_StoreMenu_C_InitTheme_Params
{
public:
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x0(0x1)(None)
	uint8                                        Pad_4A62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x100)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.ShouldCustomizeTheme
struct UUI_StoreMenu_C_ShouldCustomizeTheme_Params
{
public:
	class UUI_ThemeCustomizer_C*                 CallFunc_Create_ReturnValue;                       // 0x0(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.InitAllTabs
struct UUI_StoreMenu_C_InitAllTabs_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(None)
	uint8                                        Pad_4A69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(None)
	class UUI_Button_Sidebar_C*                  CallFunc_Array_Get_Item;                           // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_ParentPage_C*                      CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x28(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x30(0x1)(None)
	uint8                                        Pad_4A6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(None)
	TArray<class UUI_ParentPage_C*>              K2Node_MakeArray_Array;                            // 0x38(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<class UUI_Button_Sidebar_C*>          K2Node_MakeArray_Array_1;                          // 0x48(0x10)(None)
};

// 0x79 (0x79 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSearchedTextCommitted
struct UUI_StoreMenu_C_OnSearchedTextCommitted_Params
{
public:
	TArray<class UWidget*>                       WidgetArray;                                       // 0x0(0x10)(ZeroConstructor, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	uint8                                        Pad_4A6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(None)
	uint8                                        Pad_4A6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_PageWidgets_C>   K2Node_DynamicCast_AsBPI_Page_Widgets;             // 0x48(0x10)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x59(0x1)(None)
	uint8                                        Pad_4A6D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x60(0x10)(ZeroConstructor)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x70(0x8)(None)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x78(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.CloseBNavigation
struct UUI_StoreMenu_C_CloseBNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_4A73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x10(0x8)(Edit, ZeroConstructor)
	TScriptInterface<class IBPI_PageWidgets_C>   K2Node_DynamicCast_AsBPI_Page_Widgets;             // 0x18(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_4A74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetClose_B_Widget;                        // 0x30(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OpenCurrentActivePage
struct UUI_StoreMenu_C_OpenCurrentActivePage_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateCloseButtonSearchVisiblity
struct UUI_StoreMenu_C_UpdateCloseButtonSearchVisiblity_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(None)
};

// 0x23 (0x23 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SelectPage
struct UUI_StoreMenu_C_SelectPage_Params
{
public:
	class UUI_Button_Sidebar_C*                  Target;                                            // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(None)
	class UUI_Button_Sidebar_C*                  CallFunc_Array_Get_Item;                           // 0x18(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x22(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2
struct UUI_StoreMenu_C_OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2
struct UUI_StoreMenu_C_OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On CFCore Init Error
struct UUI_StoreMenu_C_Event_On_CFCore_Init_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_StoreMenu_C_BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event Result
struct UUI_StoreMenu_C_Event_Result_Params
{
public:
	bool                                         Is_authenticated;                                  // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info Failed
struct UUI_StoreMenu_C_Event_On_Get_User_Info_Failed_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info
struct UUI_StoreMenu_C_Event_On_Get_User_Info_Params
{
public:
	struct FMe                                   Me;                                                // 0x0(0x40)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On Sync Installed Mods Error
struct UUI_StoreMenu_C_Event_On_Sync_Installed_Mods_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_StoreMenu_C_BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DELETE_FocusableOnKeyDown_1
struct UUI_StoreMenu_C_DELETE_FocusableOnKeyDown_1_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x40)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SetNewTextInSearch
struct UUI_StoreMenu_C_SetNewTextInSearch_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.ButtonCall
struct UUI_StoreMenu_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.GamepadChangeTab
struct UUI_StoreMenu_C_GamepadChangeTab_Params
{
public:
	bool                                         Forward;                                           // 0x0(0x1)(None)
};

// 0x430 (0x430 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.ExecuteUbergraph_UI_StoreMenu
struct UUI_StoreMenu_C_ExecuteUbergraph_UI_StoreMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4A94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x8(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x20(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x38(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x40(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x48(0x8)(Edit, ZeroConstructor)
	struct FCFCoreError                          K2Node_CustomEvent_error_2;                        // 0x50(0x38)(ContainsInstancedReference, Protected, PersistentInstance, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x88(0x10)(Edit, ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x98(0x8)(Edit, ZeroConstructor)
	class UUI_Prompt_SignIn_C*                   CallFunc_Create_ReturnValue;                       // 0xA0(0x8)(Edit, ZeroConstructor)
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0xA8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(None)
	uint8                                        Pad_4A95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0xC0(0x8)(Edit, ZeroConstructor)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0xC8(0x18)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, NativeAccessSpecifierPrivate)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0xE0(0x1)(None)
	uint8                                        Pad_4A96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xE4(0x4)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0xF8(0x8)(Edit, ZeroConstructor)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         K2Node_CustomEvent_is_authenticated;               // 0x118(0x1)(None)
	uint8                                        Pad_4A97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error_1;                        // 0x120(0x38)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FMe                                   K2Node_CustomEvent_me;                             // 0x158(0x40)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FCFCoreSettings                       CallFunc_MakeSettingsFromProjectConfig_ReturnValue; // 0x198(0x68)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x200(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x208(0x1)(None)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x209(0x1)(None)
	uint8                                        Pad_4A98[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x20C(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0x21C(0x4)(None)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x220(0x38)(SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x258(0x4)(None)
	uint8                                        Pad_4A99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x260(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FKeyEvent                             K2Node_Event_KeyEvent;                             // 0x278(0x40)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x2B8(0x18)(ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x2D0(0x1)(None)
	uint8                                        Pad_4A9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2D4(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2E4(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2F4(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_4A9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x308(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x310(0x1)(None)
	uint8                                        Pad_4A9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_1;       // 0x318(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_1;  // 0x320(0x1)(None)
	uint8                                        Pad_4A9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_InText;                         // 0x328(0x18)(TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x340(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x350(0x1)(None)
	uint8                                        Pad_4A9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x358(0x8)(Edit, ZeroConstructor)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_2;       // 0x360(0x8)(Edit, ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_2;  // 0x368(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x369(0x1)(None)
	uint8                                        Pad_4A9F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_Array_Get_Item_1;                         // 0x370(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x378(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x37C(0x1)(None)
	uint8                                        Pad_4AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x380(0x18)(None)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x398(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x399(0x1)(None)
	uint8                                        Pad_4AA1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x39C(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x3AC(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_4AA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x3C0(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x3C8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_Event_forward;                              // 0x3D0(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x3D1(0x1)(None)
	uint8                                        Pad_4AA5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_2;         // 0x3D8(0x8)(Edit, ZeroConstructor)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x3E0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3E1(0x1)(None)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x3E2(0x1)(None)
	uint8                                        CallFunc_Percent_ByteByte_ReturnValue;             // 0x3E3(0x1)(None)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x3E4(0x1)(None)
	uint8                                        Pad_4AA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x3E8(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3F8(0x1)(None)
	uint8                                        Pad_4AA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_3;         // 0x400(0x8)(Edit, ZeroConstructor)
	uint8                                        CallFunc_Subtract_ByteByte_ReturnValue;            // 0x408(0x1)(None)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x409(0x1)(None)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x40A(0x1)(None)
	uint8                                        Pad_4AA8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x410(0x1)(None)
	uint8                                        Pad_4AA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x414(0x4)(None)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_4;         // 0x418(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x420(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnInputDeviceChanged__DelegateSignature
struct UUI_StoreMenu_C_OnInputDeviceChanged__DelegateSignature_Params
{
public:
	enum class ENUM_InputDevices                 Device;                                            // 0x0(0x1)(None)
};

}
}


