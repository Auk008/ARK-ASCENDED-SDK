#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x1081 - 0x1040)
// BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
class AWeap_Torch_Base_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1040(0x8)(None)
	class UClass*                                BeltTorchBuff;                                     // 0x1048(0x8)(ZeroConstructor)
	bool                                         bAllowPutOnBelt;                                   // 0x1050(0x1)(None)
	bool                                         bIsEquipped;                                       // 0x1051(0x1)(None)
	bool                                         bBeingDestroyed;                                   // 0x1052(0x1)(None)
	uint8                                        Pad_4519[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NiagaraTime;                                       // 0x1058(0x8)(None)
	double                                       TimeToExtinguish;                                  // 0x1060(0x8)(None)
	double                                       TimeToRampUp;                                      // 0x1068(0x8)(None)
	class UCurveFloat*                           RampUpCurve;                                       // 0x1070(0x8)(ZeroConstructor)
	class UCurveFloat*                           ExtinguishCurve;                                   // 0x1078(0x8)(ZeroConstructor)
	bool                                         bShouldTickFire;                                   // 0x1080(0x1)(None)

	static class UClass* StaticClass();
	static class AWeap_Torch_Base_C* GetDefaultObj();

	void CanUseNiagaraFire(bool bCanUse, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void GetFPVNiagaraFire(class UNiagaraComponent* FPVNiagaraComponent);
	void GetTPVNiagaraFire(class UNiagaraComponent* TPVNiagaraComponent);
	void BPCanEquip(class AShooterCharacter* ByCharacter, bool ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void StartSecondaryActionEvent();
	void Server_AttemptPutOnBelt();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void FireTick();
	void BPAppliedPrimalItemToWeapon();
	void OnInstigatorSleepingStateChanged();
	void ExecuteUbergraph_Weap_Torch_Base(int32 EntryPoint, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_CanUseNiagaraFire_bCanUse, bool CallFunc_CanUseNiagaraFire_bCanUse_1, bool CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_Add_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast_1);
};

}


