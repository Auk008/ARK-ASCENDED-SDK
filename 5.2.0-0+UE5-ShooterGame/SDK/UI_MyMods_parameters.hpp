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

// 0x53 (0x53 - 0x0)
// Function UI_MyMods.UI_MyMods_C.OnEventBroadcasted
struct UUI_MyMods_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_4B14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_4B15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           CallFunc_ReturnModsOfCurrentPage_TrueModInfo;      // 0x30(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(None)
	uint8                                        Pad_4B16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x48(0x8)(None)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x50(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x51(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x52(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_MyMods.UI_MyMods_C.UpdatePagination
struct UUI_MyMods_C_UpdatePagination_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	uint8                                        Pad_4B17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x4(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x8(0x8)(None)
	int32                                        CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt; // 0x10(0x4)(None)
	uint8                                        Pad_4B18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT; // 0x18(0x18)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x30(0x8)(None)
	double                                       CallFunc_FMod_Remainder;                           // 0x38(0x8)(None)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x40(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x44(0x1)(None)
	uint8                                        Pad_4B19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(None)
	int32                                        K2Node_Select_Default;                             // 0x4C(0x4)(None)
};

// 0x488 (0x488 - 0x0)
// Function UI_MyMods.UI_MyMods_C.Event On Mod Installed
struct UUI_MyMods_C_Event_On_Mod_Installed_Params
{
public:
	struct FInstallProgressMod                   Mod;                                               // 0x0(0x488)(None)
};

// 0x4FA (0x4FA - 0x0)
// Function UI_MyMods.UI_MyMods_C.ExecuteUbergraph_UI_MyMods
struct UUI_MyMods_C_ExecuteUbergraph_UI_MyMods_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4B1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x20(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x28(0x8)(Edit, ZeroConstructor)
	struct FInstallProgressMod                   K2Node_CustomEvent_mod;                            // 0x30(0x488)(ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x4B8(0x1)(None)
	uint8                                        Pad_4B1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x4C0(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4D0(0x1)(None)
	uint8                                        Pad_4B1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x4D8(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4E0(0x4)(None)
	uint8                                        Pad_4B1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x4E8(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4F0(0x1)(None)
	uint8                                        Pad_4B1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4F4(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4F8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4F9(0x1)(None)
};

}
}


