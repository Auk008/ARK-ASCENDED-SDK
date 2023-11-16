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

// 0x168 (0x168 - 0x0)
// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard
struct UPrimalItemResource_ElementShard_C_RefillElementShard_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ZeroConstructor)
	TArray<double>                               CustomFloats;                                      // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x18(0x8)(ZeroConstructor)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(ZeroConstructor, AssetRegistrySearchable, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(None)
	uint8                                        Pad_3DE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0xA0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(None)
	uint8                                        Pad_3DE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0xB0(0x78)(ContainsInstancedReference, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x128(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x138(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x139(0x1)(None)
	uint8                                        Pad_3DE9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x140(0x8)(None)
	TArray<float>                                K2Node_MakeStruct_CustomDataFloats_ImplicitCast;   // 0x148(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<double>                               K2Node_VariableSet_CustomFloats_ImplicitCast;      // 0x158(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
struct UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ZeroConstructor)
	bool                                         SupportsDragOnto;                                  // 0x8(0x1)(None)
	bool                                         ReturnVal;                                         // 0x9(0x1)(None)
	uint8                                        Pad_3DEA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x10(0x78)(None)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x88(0x1)(None)
	uint8                                        Pad_3DEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item;                           // 0x8C(0x4)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x90(0x1)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x91(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x92(0x1)(None)
	uint8                                        Pad_3DEC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x98(0x8)(None)
};

// 0xA (0xA - 0x0)
// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
struct UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         CallFunc_CheckForElementShardData_SupportsDragOnto; // 0x9(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
struct UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(None)
	int32                                        AdditionalData;                                    // 0x8(0x4)(None)
};

}
}


