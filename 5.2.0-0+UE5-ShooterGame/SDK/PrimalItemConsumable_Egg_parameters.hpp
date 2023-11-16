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

// 0x33 (0x33 - 0x0)
// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPAllowRemoteAddToInventory
struct UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params
{
public:
	class UPrimalInventoryComponent*             InvComp;                                           // 0x0(0x8)(ZeroConstructor)
	class AShooterPlayerController*              ByPC;                                              // 0x8(0x8)(ZeroConstructor)
	bool                                         bRequestedByPlayer;                                // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	bool                                         bEggAllowed;                                       // 0x12(0x1)(None)
	uint8                                        Pad_3ECD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor)
	TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface;      // 0x20(0x10)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x31(0x1)(None)
	bool                                         CallFunc_IsEggItemAllowed_IsAllowed;               // 0x32(0x1)(None)
};

// 0x60 (0x60 - 0x0)
// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
struct UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	uint8                                        Pad_3ECE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface;      // 0x20(0x10)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x31(0x1)(None)
	uint8                                        Pad_3ECF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemDisplaySlot_InSlot;                // 0x34(0x4)(None)
	bool                                         CallFunc_GetItemDisplaySlot_SlotFound;             // 0x38(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3B(0x1)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(None)
};

}
}


