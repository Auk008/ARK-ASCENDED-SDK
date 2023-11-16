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

// 0x42 (0x42 - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.OnEventBroadcasted
struct UUI_InstalledMods_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_4B29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(ZeroConstructor, AutoWeak, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_4B2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           TempMods;                                          // 0x30(0x10)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x40(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(None)
};

// 0x488 (0x488 - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.Event On Mod Installed
struct UUI_InstalledMods_C_Event_On_Mod_Installed_Params
{
public:
	struct FInstallProgressMod                   Mod;                                               // 0x0(0x488)(None)
};

// 0x488 (0x488 - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.Event On Mod Uninstalled
struct UUI_InstalledMods_C_Event_On_Mod_Uninstalled_Params
{
public:
	struct FInstallProgressMod                   Mod;                                               // 0x0(0x488)(None)
};

// 0xE71 (0xE71 - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.ExecuteUbergraph_UI_InstalledMods
struct UUI_InstalledMods_C_ExecuteUbergraph_UI_InstalledMods_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(None)
	uint8                                        Pad_4B2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	uint8                                        Pad_4B2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(Edit, ZeroConstructor)
	class UUI_Prompt_Uninstall_C*                CallFunc_Create_ReturnValue;                       // 0x38(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(None)
	uint8                                        Pad_4B2D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x50(0x8)(ZeroConstructor)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x58(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59(0x1)(None)
	uint8                                        Pad_4B2E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           CallFunc_ReturnModsOfCurrentPage_TrueModInfo;      // 0x60(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(None)
	uint8                                        Pad_4B2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x78(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, NativeAccessSpecifierPrivate)
	struct FInstallProgressMod                   K2Node_CustomEvent_mod_1;                          // 0x500(0x488)(Edit, ZeroConstructor, SimpleDisplay, NativeAccessSpecifierPrivate)
	struct FInstallProgressMod                   K2Node_CustomEvent_mod;                            // 0x988(0x488)(Edit, ZeroConstructor, AutoWeak, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xE10(0x8)(ZeroConstructor)
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0xE18(0x10)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0xE28(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xE30(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE34(0x1)(None)
	uint8                                        Pad_4B30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0xE38(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE40(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE44(0x1)(None)
	uint8                                        Pad_4B31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE48(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xE58(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE59(0x1)(None)
	uint8                                        Pad_4B32[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE5C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xE60(0x1)(None)
	uint8                                        Pad_4B33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xE64(0x4)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0xE68(0x8)(None)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0xE70(0x1)(None)
};

}
}


