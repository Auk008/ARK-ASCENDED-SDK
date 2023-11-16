#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0xF19 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
class UPrimalItemArmor_Base_Tek_C : public UPrimalItemArmorGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB8(0x8)(AutoWeak, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UPrimalItem*                           SelfObj;                                           // 0xEC0(0x8)(Edit, ZeroConstructor)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEC8(0x30)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        MaxAmmo;                                           // 0xEF8(0x4)(None)
	bool                                         bInfiniteAmmo;                                     // 0xEFC(0x1)(None)
	uint8                                        Pad_407F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF00(0x10)(Edit, ZeroConstructor)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF10(0x8)(Edit, ZeroConstructor)
	bool                                         bTekBuffDirty;                                     // 0xF18(0x1)(None)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	void BPGetMaxAmmo(int32 ReturnValue);
	void IsInfiniteAmmo(bool IsInfinite, bool IsBuffInfinite, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool K2Node_DynamicCast_bSuccess);
	void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void GetInternalMapRestrictedTekArmorBuff(class AShooterCharacter* OwningPlayer, class UClass* TekArmorBuff, class UClass* OutInternalBuff, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, const struct FMapSpecificTekArmorBuffs& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1);
	void GetResolvedTekArmorBuff(class UClass* ResolvedTekArmorBuff, class UClass* OutBuff, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1);
	void FillEmptyArmorElementWhenAvailable(bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_UseItemOntoItem_ReturnValue);
	void InitBuff(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
	void BlueprintOwnerPosssessed(class AController* PossessedByController);
	void BlueprintUnequipped(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess);
	void BPGetCustomInventoryWidgetText(const class FString& ReturnValue, const class FString& Return, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Can_Element_Decrease(int32 AmountToDecreaseBy, bool PreventCheckingInventory, bool CanDecrease, bool Return_Val, bool CallFunc_IsInfiniteAmmo_IsInfinite, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BlueprintEquipped(bool bIsFromSaveGame, bool Return_Val);
	void TryToDecreaseElement(int32 AmountToDecreaseBy);
	void SetElementToMax();
	void IncreaseElement(double Percent);
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	void ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32 EntryPoint, bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, double K2Node_CustomEvent_Percent, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Can_Element_Decrease_CanDecrease, int32 CallFunc_Clamp_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class AActor* CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_3, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, bool CallFunc_IsInfiniteAmmo_IsInfinite_1);
};

}


