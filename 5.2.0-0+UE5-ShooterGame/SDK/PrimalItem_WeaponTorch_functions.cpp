#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
// (None)

class UClass* UPrimalItem_WeaponTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTorch_C");

	return Clss;
}


// PrimalItem_WeaponTorch_C PrimalItem_WeaponTorch.Default__PrimalItem_WeaponTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTorch_C* UPrimalItem_WeaponTorch_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTorch_C*>(UPrimalItem_WeaponTorch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventNewColorization
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)

void UPrimalItem_WeaponTorch_C::BPPreventNewColorization(bool ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventNewColorization");

	Params::UPrimalItem_WeaponTorch_C_BPPreventNewColorization_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (None)

void UPrimalItem_WeaponTorch_C::GetFlameColorIndex(int32 Index, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "GetFlameColorIndex");

	Params::UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (ZeroConstructor)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void UPrimalItem_WeaponTorch_C::UpdateBeltTorchMeshColors(bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "UpdateBeltTorchMeshColors");

	Params::UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;
	Parms.K2Node_DynamicCast_AsBuff_Belt_Torch = K2Node_DynamicCast_AsBuff_Belt_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ContextItem                                                      (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (None)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ZeroConstructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UPrimalItem_WeaponTorch_C::BPShouldHideTopLevelCustomContextMenuOption(class FName ContextItem, bool ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPShouldHideTopLevelCustomContextMenuOption");

	Params::UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params Parms{};

	Parms.ContextItem = ContextItem;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (None)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)

void UPrimalItem_WeaponTorch_C::BPPreventWeaponEquip(bool ReturnValue, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForCharacter                                                     (ZeroConstructor)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (ZeroConstructor)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UPrimalItem_WeaponTorch_C::RemoveTorchFromBelt(class AShooterCharacter* ForCharacter, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "RemoveTorchFromBelt");

	Params::UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params Parms{};

	Parms.ForCharacter = ForCharacter;
	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;
	Parms.K2Node_DynamicCast_AsBuff_Belt_Torch = K2Node_DynamicCast_AsBuff_Belt_Torch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForCharacter                                                     (ZeroConstructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_CanStartWeaponSwitch_ReturnValue                        (None)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ZeroConstructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void UPrimalItem_WeaponTorch_C::PutTorchOnBelt(class AShooterCharacter* ForCharacter, bool CallFunc_IsServer_ReturnValue, bool CallFunc_CanStartWeaponSwitch_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C* K2Node_DynamicCast_AsWeap_Torch_Base, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "PutTorchOnBelt");

	Params::UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params Parms{};

	Parms.ForCharacter = ForCharacter;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_CanStartWeaponSwitch_ReturnValue = CallFunc_CanStartWeaponSwitch_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsShooter_Weapon = K2Node_ClassDynamicCast_AsShooter_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Torch_Base = K2Node_DynamicCast_AsWeap_Torch_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Belt_Torch = K2Node_DynamicCast_AsBuff_Belt_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bCanBeOnBelt                                                     (None)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UPrimalItem_WeaponTorch_C::CanTorchBeOnBelt(bool bCanBeOnBelt, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C* K2Node_DynamicCast_AsWeap_Torch_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "CanTorchBeOnBelt");

	Params::UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params Parms{};

	Parms.bCanBeOnBelt = bCanBeOnBelt;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsShooter_Weapon = K2Node_ClassDynamicCast_AsShooter_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Torch_Base = K2Node_DynamicCast_AsWeap_Torch_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShooterCharacter*           ShooterCharacter                                                 (ZeroConstructor)
// class APrimalBuff*                 BeltTorchBuff                                                    (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)

void UPrimalItem_WeaponTorch_C::GetBeltTorchBuffInstanceForCharacter(class AShooterCharacter* ShooterCharacter, class APrimalBuff* BeltTorchBuff, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C* K2Node_DynamicCast_AsWeap_Torch_Base, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "GetBeltTorchBuffInstanceForCharacter");

	Params::UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params Parms{};

	Parms.ShooterCharacter = ShooterCharacter;
	Parms.BeltTorchBuff = BeltTorchBuff;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsShooter_Weapon = K2Node_ClassDynamicCast_AsShooter_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Torch_Base = K2Node_DynamicCast_AsWeap_Torch_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ContextItem                                                      (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (None)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)

void UPrimalItem_WeaponTorch_C::IsCustomContextMenuItemEnabled(class FName ContextItem, bool ReturnValue, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsTorchOnBelt_bIsOnBelt, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "IsCustomContextMenuItemEnabled");

	Params::UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params Parms{};

	Parms.ContextItem = ContextItem;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsOnBelt                                                        (None)
// int32                              CallFunc_BPGetItemID_ItemID1                                     (None)
// int32                              CallFunc_BPGetItemID_ItemID2                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (ZeroConstructor)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)

void UPrimalItem_WeaponTorch_C::IsTorchOnBelt(bool bIsOnBelt, int32 CallFunc_BPGetItemID_ItemID1, int32 CallFunc_BPGetItemID_ItemID2, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "IsTorchOnBelt");

	Params::UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params Parms{};

	Parms.bIsOnBelt = bIsOnBelt;
	Parms.CallFunc_BPGetItemID_ItemID1 = CallFunc_BPGetItemID_ItemID1;
	Parms.CallFunc_BPGetItemID_ItemID2 = CallFunc_BPGetItemID_ItemID2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;
	Parms.K2Node_DynamicCast_AsBuff_Belt_Torch = K2Node_DynamicCast_AsBuff_Belt_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)
// class FString                      CallFunc_SelectString_ReturnValue                                (None)

void UPrimalItem_WeaponTorch_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                      ReturnValue                                                      (None)
// struct FLinearColor                NewLocalVar                                                      (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FColor                      Temp_struct_Variable                                             (None)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (None)
// struct FColor                      K2Node_Select_Default                                            (None)

void UPrimalItem_WeaponTorch_C::BPGetCustomInventoryWidgetTextColor(const struct FColor& ReturnValue, const struct FLinearColor& NewLocalVar, bool Temp_bool_Variable, const struct FColor& Temp_struct_Variable, bool CallFunc_IsTorchOnBelt_bIsOnBelt, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, const struct FColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPGetCustomInventoryWidgetTextColor");

	Params::UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (ZeroConstructor)
// bool                               bIsFirstTime                                                     (None)
// int32                              CallFunc_GetFlameColorIndex_Index                                (None)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (None)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// float                              CallFunc_BreakColor_R                                            (None)
// float                              CallFunc_BreakColor_G                                            (None)
// float                              CallFunc_BreakColor_B                                            (None)
// float                              CallFunc_BreakColor_A                                            (None)
// float                              CallFunc_Array_Get_Item                                          (None)
// TArray<float>                      K2Node_MakeArray_Array                                           (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<class UClass*>              K2Node_MakeArray_Array_2                                         (ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<class UObject*>             K2Node_MakeArray_Array_3                                         (ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<class FString>              K2Node_MakeArray_Array_4                                         (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              CallFunc_GetItemStatValues_ReturnValue                           (None)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// int32                              CallFunc_GetItemStatValues_ReturnValue_1                         (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (None)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (None)
// TArray<float>                      K2Node_MakeArray_Array_5                                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData_1                               (None)
// float                              K2Node_MakeArray__3__ImplicitCast                                (None)
// float                              K2Node_MakeArray__2__ImplicitCast                                (None)
// float                              K2Node_MakeArray__1__ImplicitCast                                (None)

void UPrimalItem_WeaponTorch_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, int32 CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_Array_Get_Item, const TArray<float>& K2Node_MakeArray_Array, class UPrimalItemArmor_SaddleGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, const TArray<class FName>& K2Node_MakeArray_Array_1, const TArray<class UClass*>& K2Node_MakeArray_Array_2, const TArray<class UObject*>& K2Node_MakeArray_Array_3, const TArray<class FString>& K2Node_MakeArray_Array_4, int32 CallFunc_GetItemStatValues_ReturnValue, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue, const TArray<float>& K2Node_MakeArray_Array_5, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData_1, float K2Node_MakeArray__3__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "ApplyingSkinOntoItem");

	Params::UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params Parms{};

	Parms.ToOwnerItem = ToOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.CallFunc_GetFlameColorIndex_Index = CallFunc_GetFlameColorIndex_Index;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetItemCustomColor_ReturnValue = CallFunc_GetItemCustomColor_ReturnValue;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetItemStatValues_ReturnValue = CallFunc_GetItemStatValues_ReturnValue;
	Parms.K2Node_MakeStruct_CustomItemData = K2Node_MakeStruct_CustomItemData;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetItemStatValues_ReturnValue_1 = CallFunc_GetItemStatValues_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeStruct_CustomItemData_1 = K2Node_MakeStruct_CustomItemData_1;
	Parms.K2Node_MakeArray__3__ImplicitCast = K2Node_MakeArray__3__ImplicitCast;
	Parms.K2Node_MakeArray__2__ImplicitCast = K2Node_MakeArray__2__ImplicitCast;
	Parms.K2Node_MakeArray__1__ImplicitCast = K2Node_MakeArray__1__ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (ZeroConstructor)
// bool                               bIsFirstTime                                                     (None)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (None)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// float                              CallFunc_Array_Get_Item                                          (None)
// float                              CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (None)
// float                              CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (None)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (None)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (None)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (None)

void UPrimalItem_WeaponTorch_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_SaddleGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool K2Node_DynamicCast_bSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Array_Get_Item_2, int32 CallFunc_FFloor_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "RemovedSkinFromItem");

	Params::UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params Parms{};

	Parms.FromOwnerItem = FromOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast_1 = CallFunc_FFloor_A_ImplicitCast_1;
	Parms.CallFunc_FFloor_A_ImplicitCast_2 = CallFunc_FFloor_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 OwnerItem                                                        (ZeroConstructor)
// float                              DeltaSeconds                                                     (None)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              Temp_int_Variable                                                (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ZeroConstructor)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ZeroConstructor)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UParticleSystemComponent*    K2Node_DynamicCast_AsCascade_Particle_System_Component           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class UPointLightComponent*        K2Node_DynamicCast_AsPoint_Light_Component                       (None)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// float                              CallFunc_Array_Get_Item                                          (None)
// float                              CallFunc_Array_Get_Item_1                                        (None)
// float                              CallFunc_Array_Get_Item_2                                        (None)
// float                              CallFunc_Array_Get_Item_3                                        (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (None)
// int32                              CallFunc_GetAttachedComponentsNum_ReturnValue                    (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (None)
// double                             CallFunc_FMax_ReturnValue                                        (None)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (None)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (None)

void UPrimalItem_WeaponTorch_C::SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds, class UPrimalItemArmor_SaddleGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* K2Node_DynamicCast_AsCascade_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_2, class UPointLightComponent* K2Node_DynamicCast_AsPoint_Light_Component, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchName_CmpSuccess, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, int32 CallFunc_GetAttachedComponentsNum_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_ItemDurability_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "SkinEquippedBlueprintTick");

	Params::UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params Parms{};

	Parms.OwnerItem = OwnerItem;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCascade_Particle_System_Component = K2Node_DynamicCast_AsCascade_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsPoint_Light_Component = K2Node_DynamicCast_AsPoint_Light_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_GetAttachedComponentsNum_ReturnValue = CallFunc_GetAttachedComponentsNum_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanRunCosmeticEvents_OutNetworkMode = CallFunc_CanRunCosmeticEvents_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_ItemDurability_ImplicitCast = K2Node_VariableSet_ItemDurability_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (None)
// bool                               ReturnValue                                                      (None)
// bool                               bRetValue                                                        (None)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (None)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (None)

void UPrimalItem_WeaponTorch_C::BPPreventUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool bRetValue, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventUseOntoItem");

	Params::UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;
	Parms.bRetValue = bRetValue;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreUseItem
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTorch_C::BPPreUseItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreUseItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPNotifyItemRefreshed
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTorch_C::BPNotifyItemRefreshed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPNotifyItemRefreshed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SelectedCustomContextMenuItem
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        ContextItem                                                      (None)
// class AShooterPlayerController*    ForPC                                                            (None)

void UPrimalItem_WeaponTorch_C::SelectedCustomContextMenuItem(class FName ContextItem, class AShooterPlayerController* ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "SelectedCustomContextMenuItem");

	Params::UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params Parms{};

	Parms.ContextItem = ContextItem;
	Parms.ForPC = ForPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (None)
// int32                              AdditionalData                                                   (None)

void UPrimalItem_WeaponTorch_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPUsedOntoItem");

	Params::UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (None)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class FName                        K2Node_Event_ContextItem                                         (None)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (ZeroConstructor)
// class UPrimalItem*                 K2Node_Event_DestinationItem                                     (ZeroConstructor)
// int32                              K2Node_Event_AdditionalData                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (None)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// bool                               CallFunc_IsPreInventoryItem_ReturnValue                          (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)

void UPrimalItem_WeaponTorch_C::ExecuteUbergraph_PrimalItem_WeaponTorch(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool K2Node_ClassDynamicCast_bSuccess, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C* K2Node_DynamicCast_AsWeap_Torch_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_Event_ContextItem, class AShooterPlayerController* K2Node_Event_ForPC, class UPrimalItem* K2Node_Event_DestinationItem, int32 K2Node_Event_AdditionalData, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_2, class UPrimalItemArmor_SaddleGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPreInventoryItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "ExecuteUbergraph_PrimalItem_WeaponTorch");

	Params::UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsShooter_Weapon = K2Node_ClassDynamicCast_AsShooter_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Torch_Base = K2Node_DynamicCast_AsWeap_Torch_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_ContextItem = K2Node_Event_ContextItem;
	Parms.K2Node_Event_ForPC = K2Node_Event_ForPC;
	Parms.K2Node_Event_DestinationItem = K2Node_Event_DestinationItem;
	Parms.K2Node_Event_AdditionalData = K2Node_Event_AdditionalData;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsPreInventoryItem_ReturnValue = CallFunc_IsPreInventoryItem_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


