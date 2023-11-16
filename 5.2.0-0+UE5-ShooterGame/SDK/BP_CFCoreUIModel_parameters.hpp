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

// 0x41 (0x41 - 0x0)
// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived
struct UBP_CFCoreUIModel_C_OnEventReceived_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_4B35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCFCoreMod>                    InModsList;                                        // 0x8(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_4B36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           CallFunc_OnEventReceived_OutModsList;              // 0x30(0x10)(None)
	bool                                         CallFunc_OnEventReceived_ReturnValue;              // 0x40(0x1)(None)
};

// 0x71 (0x71 - 0x0)
// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
struct UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_4B37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLibraryProgress                      Progress;                                          // 0x8(0x40)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x48(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	bool                                         ReturnValue;                                       // 0x58(0x1)(None)
	uint8                                        Pad_4B38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           CallFunc_OnEventReceived_LibraryProgress_OutModsList; // 0x60(0x10)(None)
	bool                                         CallFunc_OnEventReceived_LibraryProgress_ReturnValue; // 0x70(0x1)(None)
};

}
}


