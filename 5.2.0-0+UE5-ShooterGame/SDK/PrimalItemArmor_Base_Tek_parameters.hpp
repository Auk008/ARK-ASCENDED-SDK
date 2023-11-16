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

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
struct UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x29 (0x29 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
struct UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params
{
public:
	bool                                         IsInfinite;                                        // 0x0(0x1)(None)
	bool                                         IsBuffInfinite;                                    // 0x1(0x1)(None)
	uint8                                        Pad_403C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x8(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(None)
	uint8                                        Pad_403D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(None)
	uint8                                        Pad_403E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
struct UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(None)
	uint8                                        Pad_4040[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(None)
};

// 0x98 (0x98 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params
{
public:
	class AShooterCharacter*                     OwningPlayer;                                      // 0x0(0x8)(Edit, ZeroConstructor)
	class UClass*                                TekArmorBuff;                                      // 0x8(0x8)(Edit, ZeroConstructor)
	class UClass*                                OutInternalBuff;                                   // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x18(0x1)(None)
	uint8                                        Pad_4043[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(None)
	uint8                                        Pad_4044[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
	uint8                                        Pad_4045[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FMapSpecificTekArmorBuffs             CallFunc_Array_Get_Item;                           // 0x40(0x40)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(None)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x85(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x86(0x1)(None)
	uint8                                        Pad_4046[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x88(0x8)(Edit, ZeroConstructor)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue_1;          // 0x90(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params
{
public:
	class UClass*                                ResolvedTekArmorBuff;                              // 0x0(0x8)(Edit, ZeroConstructor)
	class UClass*                                OutBuff;                                           // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(Edit, ZeroConstructor)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff; // 0x18(0x8)(Edit, ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_404D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1; // 0x30(0x8)(None)
};

// 0x1B (0x1B - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
struct UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params
{
public:
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x0(0x1)(None)
	uint8                                        Pad_404F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x4(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(None)
	uint8                                        Pad_4050[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x10(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(None)
	bool                                         CallFunc_UseItemOntoItem_ReturnValue;              // 0x1A(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
struct UPrimalItemArmor_Base_Tek_C_InitBuff_Params
{
public:
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x0(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Edit, ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_4054[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x20(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
struct UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params
{
public:
	class AController*                           PossessedByController;                             // 0x0(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params
{
public:
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x0(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x80 (0x80 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Return;                                            // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x20(0x4)(None)
	uint8                                        Pad_4061[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x30(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x38(0x8)(None)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x40(0x8)(None)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x48(0x4)(None)
	uint8                                        Pad_4063[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(None)
};

// 0x23 (0x23 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
struct UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(None)
	bool                                         PreventCheckingInventory;                          // 0x4(0x1)(None)
	bool                                         CanDecrease;                                       // 0x5(0x1)(None)
	bool                                         Return_Val;                                        // 0x6(0x1)(None)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x7(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
	uint8                                        Pad_406D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x10(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(None)
	uint8                                        Pad_406E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x1C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x21(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(None)
	bool                                         Return_Val;                                        // 0x1(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
struct UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params
{
public:
	double                                       Percent;                                           // 0x0(0x8)(None)
};

// 0xF9 (0xF9 - 0x0)
// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
struct UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite;                // 0x4(0x1)(None)
	uint8                                        Pad_4076[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x8(0x4)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0xC(0x4)(None)
	double                                       K2Node_CustomEvent_Percent;                        // 0x10(0x8)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_2;          // 0x18(0x4)(None)
	uint8                                        Pad_4077[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x20(0x8)(None)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x28(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(None)
	uint8                                        Pad_4078[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x34(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(None)
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0x3C(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x40(0x1)(None)
	uint8                                        Pad_4079[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(None)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x48(0x1)(None)
	uint8                                        Pad_407A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x4C(0x4)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(Edit, ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x58(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(None)
	uint8                                        Pad_407B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x68(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x70(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x78(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(None)
	uint8                                        Pad_407C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x88(0x8)(Edit, ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x90(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(None)
	uint8                                        Pad_407D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0xA0(0x8)(Edit, ZeroConstructor)
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1; // 0xA8(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0xB0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB8(0x1)(None)
	uint8                                        Pad_407E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0xC0(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0xC8(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue_1;             // 0xD0(0x8)(Edit, ZeroConstructor)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff; // 0xD8(0x8)(Edit, ZeroConstructor)
	class UClass*                                CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1; // 0xE0(0x8)(Edit, ZeroConstructor)
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue_1;              // 0xE8(0x8)(Edit, ZeroConstructor)
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0xF0(0x8)(None)
	bool                                         CallFunc_IsInfiniteAmmo_IsInfinite_1;              // 0xF8(0x1)(None)
};

}
}


