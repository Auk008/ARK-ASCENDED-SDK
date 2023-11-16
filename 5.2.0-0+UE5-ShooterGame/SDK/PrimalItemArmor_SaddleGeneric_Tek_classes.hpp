#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xF0D - 0xEC8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
class UPrimalItemArmor_SaddleGeneric_Tek_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC8(0x8)(AutoWeak, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UPrimalItem*                           SelfObj;                                           // 0xED0(0x8)(ZeroConstructor)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xED8(0x30)(Edit, ZeroConstructor)
	int32                                        MaxAmmo;                                           // 0xF08(0x4)(None)
	bool                                         bInfiniteAmmo;                                     // 0xF0C(0x1)(None)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	void IGet_Max_Ammo(int32 RetVal);
	void CanElementDecrease(int32 AmountToDecreaseBy, bool CanDecrease, bool ReturnVal, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void BPGetCustomInventoryWidgetText(const class FString& ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void BlueprintEquipped(bool bIsFromSaveGame);
	void BlueprintUnequipped();
	void TryToDecreaseElement(int32 AmountToDecreaseBy);
	void SetElementToMax();
	void IncreaseElement(double Percent);
	void ISetElementToMax();
	void ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32 EntryPoint, bool K2Node_Event_bIsFromSaveGame, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool CallFunc_CanElementDecrease_CanDecrease, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_UseItemOntoItem_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double K2Node_CustomEvent_Percent, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
};

}


