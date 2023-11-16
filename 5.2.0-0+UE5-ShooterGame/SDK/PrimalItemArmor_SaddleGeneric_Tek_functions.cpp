#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
// (None)

class UClass* UPrimalItemArmor_SaddleGeneric_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SaddleGeneric_Tek_C");

	return Clss;
}


// PrimalItemArmor_SaddleGeneric_Tek_C PrimalItemArmor_SaddleGeneric_Tek.Default__PrimalItemArmor_SaddleGeneric_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SaddleGeneric_Tek_C* UPrimalItemArmor_SaddleGeneric_Tek_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SaddleGeneric_Tek_C*>(UPrimalItemArmor_SaddleGeneric_Tek_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IGet Max Ammo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RetVal                                                           (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::IGet_Max_Ammo(int32 RetVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "IGet Max Ammo");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_IGet_Max_Ammo_Params Parms{};

	Parms.RetVal = RetVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.CanElementDecrease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (None)
// bool                               CanDecrease                                                      (None)
// bool                               ReturnVal                                                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::CanElementDecrease(int32 AmountToDecreaseBy, bool CanDecrease, bool ReturnVal, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "CanElementDecrease");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_CanElementDecrease_Params Parms{};

	Parms.AmountToDecreaseBy = AmountToDecreaseBy;
	Parms.CanDecrease = CanDecrease;
	Parms.ReturnVal = ReturnVal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
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


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::BlueprintEquipped(bool bIsFromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_SaddleGeneric_Tek_C::BlueprintUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "BlueprintUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.TryToDecreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::TryToDecreaseElement(int32 AmountToDecreaseBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "TryToDecreaseElement");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_TryToDecreaseElement_Params Parms{};

	Parms.AmountToDecreaseBy = AmountToDecreaseBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.SetElementToMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_SaddleGeneric_Tek_C::SetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "SetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::IncreaseElement(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "IncreaseElement");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ISetElementToMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_SaddleGeneric_Tek_C::ISetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "ISetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_bIsFromSaveGame                                     (None)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (None)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_UseItemOntoItem_ReturnValue                             (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_2                         (None)
// double                             K2Node_CustomEvent_Percent                                       (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_3                         (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Clamp_ReturnValue                                       (None)

void UPrimalItemArmor_SaddleGeneric_Tek_C::ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32 EntryPoint, bool K2Node_Event_bIsFromSaveGame, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool CallFunc_CanElementDecrease_CanDecrease, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_UseItemOntoItem_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double K2Node_CustomEvent_Percent, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_Tek_C", "ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek");

	Params::UPrimalItemArmor_SaddleGeneric_Tek_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsFromSaveGame = K2Node_Event_bIsFromSaveGame;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Buff = K2Node_ClassDynamicCast_AsPrimal_Buff;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_AmountToDecreaseBy = K2Node_CustomEvent_AmountToDecreaseBy;
	Parms.CallFunc_CanElementDecrease_CanDecrease = CallFunc_CanElementDecrease_CanDecrease;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1 = CallFunc_GetWeaponClipAmmo_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_UseItemOntoItem_ReturnValue = CallFunc_UseItemOntoItem_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_2 = CallFunc_GetWeaponClipAmmo_ReturnValue_2;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_3 = CallFunc_GetWeaponClipAmmo_ReturnValue_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


