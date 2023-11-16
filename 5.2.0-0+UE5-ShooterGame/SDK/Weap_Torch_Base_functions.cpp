#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
// (Actor)

class UClass* AWeap_Torch_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weap_Torch_Base_C");

	return Clss;
}


// Weap_Torch_Base_C Weap_Torch_Base.Default__Weap_Torch_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeap_Torch_Base_C* AWeap_Torch_Base_C::GetDefaultObj()
{
	static class AWeap_Torch_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeap_Torch_Base_C*>(AWeap_Torch_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanUse                                                          (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (ZeroConstructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)

void AWeap_Torch_Base_C::CanUseNiagaraFire(bool bCanUse, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "CanUseNiagaraFire");

	Params::AWeap_Torch_Base_C_CanUseNiagaraFire_Params Parms{};

	Parms.bCanUse = bCanUse;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           FPVNiagaraComponent                                              (None)

void AWeap_Torch_Base_C::GetFPVNiagaraFire(class UNiagaraComponent* FPVNiagaraComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetFPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetFPVNiagaraFire_Params Parms{};

	Parms.FPVNiagaraComponent = FPVNiagaraComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraComponent*           TPVNiagaraComponent                                              (None)

void AWeap_Torch_Base_C::GetTPVNiagaraFire(class UNiagaraComponent* TPVNiagaraComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "GetTPVNiagaraFire");

	Params::AWeap_Torch_Base_C_GetTPVNiagaraFire_Params Parms{};

	Parms.TPVNiagaraComponent = TPVNiagaraComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ByCharacter                                                      (ZeroConstructor)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void AWeap_Torch_Base_C::BPCanEquip(class AShooterCharacter* ByCharacter, bool ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPCanEquip");

	Params::AWeap_Torch_Base_C_BPCanEquip_Params Parms{};

	Parms.ByCharacter = ByCharacter;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.StartSecondaryActionEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::StartSecondaryActionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "StartSecondaryActionEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.Server_AttemptPutOnBelt
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::Server_AttemptPutOnBelt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "Server_AttemptPutOnBelt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::StartUnequipEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "StartUnequipEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.FireTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::FireTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "FireTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.BPAppliedPrimalItemToWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::BPAppliedPrimalItemToWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "BPAppliedPrimalItemToWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.OnInstigatorSleepingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeap_Torch_Base_C::OnInstigatorSleepingStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "OnInstigatorSleepingStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent                   (ZeroConstructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_GetFlameColorIndex_Index                                (None)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (None)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (None)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (None)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (None)
// float                              CallFunc_GetFloatValue_ReturnValue                               (None)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (None)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (None)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse                               (None)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_1                             (None)
// bool                               CallFunc_CanUseNiagaraFire_bCanUse_2                             (None)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1                 (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent                   (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2                 (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1                 (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3                 (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2                 (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3                 (ZeroConstructor)
// class UNiagaraComponent*           CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4                 (ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue_1                              (ZeroConstructor)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ZeroConstructor)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ZeroConstructor)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (None)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue                      (None)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (None)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (None)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_1                    (None)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (None)
// bool                               CallFunc_K2_TimerExists_ReturnValue_1                            (None)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue_2                    (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class UNiagaraComponent*           CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4                 (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (None)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (None)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (None)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (None)

void AWeap_Torch_Base_C::ExecuteUbergraph_Weap_Torch_Base(int32 EntryPoint, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_CanUseNiagaraFire_bCanUse, bool CallFunc_CanUseNiagaraFire_bCanUse_1, bool CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_Add_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weap_Torch_Base_C", "ExecuteUbergraph_Weap_Torch_Base");

	Params::AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFlameColorIndex_Index = CallFunc_GetFlameColorIndex_Index;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetItemCustomColor_ReturnValue = CallFunc_GetItemCustomColor_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1 = CallFunc_Divide_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse = CallFunc_CanUseNiagaraFire_bCanUse;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse_1 = CallFunc_CanUseNiagaraFire_bCanUse_1;
	Parms.CallFunc_CanUseNiagaraFire_bCanUse_2 = CallFunc_CanUseNiagaraFire_bCanUse_2;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3;
	Parms.CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4 = CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4;
	Parms.CallFunc_GetPawnOwner_ReturnValue_1 = CallFunc_GetPawnOwner_ReturnValue_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Belt_Torch = K2Node_DynamicCast_AsBuff_Belt_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue = CallFunc_K2_SetTimerForNextTick_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue_1 = CallFunc_Add_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_1 = CallFunc_K2_SetTimerForNextTick_ReturnValue_1;
	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_K2_TimerExists_ReturnValue_1 = CallFunc_K2_TimerExists_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerForNextTick_ReturnValue_2 = CallFunc_K2_SetTimerForNextTick_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4 = CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast_1 = CallFunc_Add_DoubleFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


