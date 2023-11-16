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

// 0x2B (0x2B - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.OnEventBroadcasted
struct UUI_BrowseMods_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_587[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.BPEscapeClosed
struct UUI_BrowseMods_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.UpdatePageCount
struct UUI_BrowseMods_C_UpdatePageCount_Params
{
public:
	struct FCFCoreApiResponsePagination          CFCoreApiResponsePagination;                       // 0x0(0x10)(None)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	uint8                                        Pad_590[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x14(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(None)
	double                                       CallFunc_FMod_Remainder;                           // 0x28(0x8)(None)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x30(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x34(0x1)(None)
	uint8                                        Pad_591[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(None)
	int32                                        K2Node_Select_Default;                             // 0x3C(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.GetCurrentSearchInput
struct UUI_BrowseMods_C_GetCurrentSearchInput_Params
{
public:
	class FText                                  CurrentSearchInput;                                // 0x0(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.ExecuteUbergraph_UI_BrowseMods
struct UUI_BrowseMods_C_ExecuteUbergraph_UI_BrowseMods_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_5A2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x10(0x4)(None)
	uint8                                        Pad_5A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreSearchModsFilter               CallFunc_FilterModInfo_ReturnValue;                // 0x18(0x30)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x48(0x4)(None)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x4C(0x1)(None)
	uint8                                        Pad_5A4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x50(0x4)(None)
	struct FCFCoreApiRequestPagination           CallFunc_MakeApiRequestPagination_ReturnValue;     // 0x54(0x8)(None)
	uint8                                        Pad_5A5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x60(0x8)(None)
};

}
}


