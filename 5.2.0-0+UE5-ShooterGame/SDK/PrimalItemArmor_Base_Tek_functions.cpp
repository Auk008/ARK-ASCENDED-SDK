#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
// (None)

class UClass* UPrimalItemArmor_Base_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Base_Tek_C");

	return Clss;
}


// PrimalItemArmor_Base_Tek_C PrimalItemArmor_Base_Tek.Default__PrimalItemArmor_Base_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Base_Tek_C* UPrimalItemArmor_Base_Tek_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Base_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Base_Tek_C*>(UPrimalItemArmor_Base_Tek_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UPrimalItemArmor_Base_Tek_C::BPGetMaxAmmo(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BPGetMaxAmmo");

	Params::UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInfinite                                                       (None)
// bool                               IsBuffInfinite                                                   (None)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ZeroConstructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UPrimalItemArmor_Base_Tek_C::IsInfiniteAmmo(bool IsInfinite, bool IsBuffInfinite, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "IsInfiniteAmmo");

	Params::UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params Parms{};

	Parms.IsInfinite = IsInfinite;
	Parms.IsBuffInfinite = IsBuffInfinite;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor = K2Node_DynamicCast_AsBuff_Tek_Armor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (Edit, ZeroConstructor)
// bool                               bIsFirstTime                                                     (None)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UPrimalItemArmor_Base_Tek_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "ApplyingSkinOntoItem");

	Params::UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params Parms{};

	Parms.ToOwnerItem = ToOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (Edit, ZeroConstructor)
// bool                               bIsFirstTime                                                     (None)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UPrimalItemArmor_Base_Tek_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "RemovedSkinFromItem");

	Params::UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params Parms{};

	Parms.FromOwnerItem = FromOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           OwningPlayer                                                     (Edit, ZeroConstructor)
// class UClass*                      TekArmorBuff                                                     (Edit, ZeroConstructor)
// class UClass*                      OutInternalBuff                                                  (Edit, ZeroConstructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FMapSpecificTekArmorBuffs   CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ZeroConstructor)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (None)

void UPrimalItemArmor_Base_Tek_C::GetInternalMapRestrictedTekArmorBuff(class AShooterCharacter* OwningPlayer, class UClass* TekArmorBuff, class UClass* OutInternalBuff, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, const struct FMapSpecificTekArmorBuffs& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "GetInternalMapRestrictedTekArmorBuff");

	Params::UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.TekArmorBuff = TekArmorBuff;
	Parms.OutInternalBuff = OutInternalBuff;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ResolvedTekArmorBuff                                             (Edit, ZeroConstructor)
// class UClass*                      OutBuff                                                          (Edit, ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Edit, ZeroConstructor)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff       (Edit, ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1     (None)

void UPrimalItemArmor_Base_Tek_C::GetResolvedTekArmorBuff(class UClass* ResolvedTekArmorBuff, class UClass* OutBuff, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "GetResolvedTekArmorBuff");

	Params::UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params Parms{};

	Parms.ResolvedTekArmorBuff = ResolvedTekArmorBuff;
	Parms.OutBuff = OutBuff;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff = CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1 = CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_UseItemOntoItem_ReturnValue                             (None)

void UPrimalItemArmor_Base_Tek_C::FillEmptyArmorElementWhenAvailable(bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_UseItemOntoItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "FillEmptyArmorElementWhenAvailable");

	Params::UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params Parms{};

	Parms.CallFunc_IsInfiniteAmmo_IsInfinite = CallFunc_IsInfiniteAmmo_IsInfinite;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_UseItemOntoItem_ReturnValue = CallFunc_UseItemOntoItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (None)

void UPrimalItemArmor_Base_Tek_C::InitBuff(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "InitBuff");

	Params::UPrimalItemArmor_Base_Tek_C_InitBuff_Params Parms{};

	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 PossessedByController                                            (None)

void UPrimalItemArmor_Base_Tek_C::BlueprintOwnerPosssessed(class AController* PossessedByController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintOwnerPosssessed");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params Parms{};

	Parms.PossessedByController = PossessedByController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UPrimalItemArmor_Base_Tek_C::BlueprintUnequipped(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintUnequipped");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params Parms{};

	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      Return                                                           (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)

void UPrimalItemArmor_Base_Tek_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, const class FString& Return, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Return = Return;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (None)
// bool                               PreventCheckingInventory                                         (None)
// bool                               CanDecrease                                                      (None)
// bool                               Return_Val                                                       (None)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UPrimalItemArmor_Base_Tek_C::Can_Element_Decrease(int32 AmountToDecreaseBy, bool PreventCheckingInventory, bool CanDecrease, bool Return_Val, bool CallFunc_IsInfiniteAmmo_IsInfinite, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "Can Element Decrease");

	Params::UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params Parms{};

	Parms.AmountToDecreaseBy = AmountToDecreaseBy;
	Parms.PreventCheckingInventory = PreventCheckingInventory;
	Parms.CanDecrease = CanDecrease;
	Parms.Return_Val = Return_Val;
	Parms.CallFunc_IsInfiniteAmmo_IsInfinite = CallFunc_IsInfiniteAmmo_IsInfinite;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (None)
// bool                               Return_Val                                                       (None)

void UPrimalItemArmor_Base_Tek_C::BlueprintEquipped(bool bIsFromSaveGame, bool Return_Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;
	Parms.Return_Val = Return_Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (None)

void UPrimalItemArmor_Base_Tek_C::TryToDecreaseElement(int32 AmountToDecreaseBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "TryToDecreaseElement");

	Params::UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params Parms{};

	Parms.AmountToDecreaseBy = AmountToDecreaseBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.SetElementToMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_Base_Tek_C::SetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "SetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (None)

void UPrimalItemArmor_Base_Tek_C::IncreaseElement(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "IncreaseElement");

	Params::UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_Base_Tek_C::TekArmorSkinApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "TekArmorSkinApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_Base_Tek_C::TekArmorSkinRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "TekArmorSkinRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (None)
// double                             K2Node_CustomEvent_Percent                                       (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_2                         (None)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (None)
// int32                              CallFunc_Clamp_ReturnValue                                       (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (Edit, ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (Edit, ZeroConstructor)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1          (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (Edit, ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Edit, ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_1                            (Edit, ZeroConstructor)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff       (Edit, ZeroConstructor)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1     (Edit, ZeroConstructor)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue_1                             (Edit, ZeroConstructor)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (None)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite_1                             (None)

void UPrimalItemArmor_Base_Tek_C::ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32 EntryPoint, bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, double K2Node_CustomEvent_Percent, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Can_Element_Decrease_CanDecrease, int32 CallFunc_Clamp_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class AActor* CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_3, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, bool CallFunc_IsInfiniteAmmo_IsInfinite_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "ExecuteUbergraph_PrimalItemArmor_Base_Tek");

	Params::UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsInfiniteAmmo_IsInfinite = CallFunc_IsInfiniteAmmo_IsInfinite;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1 = CallFunc_GetWeaponClipAmmo_ReturnValue_1;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_2 = CallFunc_GetWeaponClipAmmo_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_AmountToDecreaseBy = K2Node_CustomEvent_AmountToDecreaseBy;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1 = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue_1 = CallFunc_GetOwnerPlayer_ReturnValue_1;
	Parms.CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff = CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff;
	Parms.CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1 = CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue_1 = CallFunc_StaticAddBuff_ReturnValue_1;
	Parms.CallFunc_GetPrimaryWorld_ReturnValue = CallFunc_GetPrimaryWorld_ReturnValue;
	Parms.CallFunc_IsInfiniteAmmo_IsInfinite_1 = CallFunc_IsInfiniteAmmo_IsInfinite_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


