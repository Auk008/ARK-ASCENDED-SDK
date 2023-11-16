#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
// (None)

class UClass* UPrimalItemConsumable_Egg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_C");

	return Clss;
}


// PrimalItemConsumable_Egg_C PrimalItemConsumable_Egg.Default__PrimalItemConsumable_Egg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_C* UPrimalItemConsumable_Egg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_C*>(UPrimalItemConsumable_Egg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPAllowRemoteAddToInventory
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   InvComp                                                          (ZeroConstructor)
// class AShooterPlayerController*    ByPC                                                             (ZeroConstructor)
// bool                               bRequestedByPlayer                                               (None)
// bool                               ReturnValue                                                      (None)
// bool                               bEggAllowed                                                      (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (None)
// bool                               CallFunc_IsEggItemAllowed_IsAllowed                              (None)

void UPrimalItemConsumable_Egg_C::BPAllowRemoteAddToInventory(class UPrimalInventoryComponent* InvComp, class AShooterPlayerController* ByPC, bool bRequestedByPlayer, bool ReturnValue, bool bEggAllowed, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsEggItemAllowed_IsAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPAllowRemoteAddToInventory");

	Params::UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params Parms{};

	Parms.InvComp = InvComp;
	Parms.ByPC = ByPC;
	Parms.bRequestedByPlayer = bRequestedByPlayer;
	Parms.ReturnValue = ReturnValue;
	Parms.bEggAllowed = bEggAllowed;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface = K2Node_DynamicCast_AsEgg_Incubator_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsEggItemAllowed_IsAllowed = CallFunc_IsEggItemAllowed_IsAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// TScriptInterface<class IEggIncubatorInterface_C>K2Node_DynamicCast_AsEgg_Incubator_Interface                     (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (None)
// int32                              CallFunc_GetItemDisplaySlot_InSlot                               (None)
// bool                               CallFunc_GetItemDisplaySlot_SlotFound                            (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UPrimalItemConsumable_Egg_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_GetItemDisplaySlot_InSlot, bool CallFunc_GetItemDisplaySlot_SlotFound, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumable_Egg_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEgg_Incubator_Interface = K2Node_DynamicCast_AsEgg_Incubator_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetItemDisplaySlot_InSlot = CallFunc_GetItemDisplaySlot_InSlot;
	Parms.CallFunc_GetItemDisplaySlot_SlotFound = CallFunc_GetItemDisplaySlot_SlotFound;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


