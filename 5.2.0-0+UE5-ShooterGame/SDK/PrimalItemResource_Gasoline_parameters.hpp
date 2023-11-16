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

// 0xA0 (0xA0 - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
struct UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ZeroConstructor)
	bool                                         SupportsDragOn;                                    // 0x8(0x1)(None)
	bool                                         ReturnValue_Loc;                                   // 0x9(0x1)(None)
	uint8                                        Pad_4952[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x10(0x78)(None)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x88(0x1)(None)
	uint8                                        Pad_4953[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item;                           // 0x8C(0x4)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x90(0x1)(None)
	uint8                                        Pad_4954[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x98(0x8)(None)
};

// 0x178 (0x178 - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
struct UPrimalItemResource_Gasoline_C_RefillGasoline_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(ZeroConstructor)
	TArray<double>                               CustomFloats_Loc;                                  // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x18(0x8)(None)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x20(0x8)(ZeroConstructor)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_4956[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x38(0x78)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xB0(0x1)(None)
	uint8                                        Pad_4957[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB8(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC8(0x10)(Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0xD8(0x4)(None)
	uint8                                        Pad_4958[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0xE0(0x78)(SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<double>                               K2Node_VariableSet_CustomFloats_Loc_ImplicitCast;  // 0x158(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<float>                                K2Node_MakeStruct_CustomDataFloats_ImplicitCast;   // 0x168(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
struct UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(None)
	int32                                        AdditionalData;                                    // 0x8(0x4)(None)
};

// 0xA (0xA - 0x0)
// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
struct UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         CallFunc_CheckForGasolineData_SupportsDragOn;      // 0x9(0x1)(None)
};

}
}


