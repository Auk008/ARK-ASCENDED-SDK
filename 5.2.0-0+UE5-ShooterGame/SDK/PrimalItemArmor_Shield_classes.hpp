#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEC0 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_Shield.PrimalItemArmor_Shield_C
class UPrimalItemArmor_Shield_C : public UPrimalItemArmorGeneric_C
{
public:
	class UParticleSystem*                       ShieldHitImpactFX;                                 // 0xEB8(0x8)(Edit, ZeroConstructor)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Shield_C* GetDefaultObj();

	void BPClientHandleItemNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, class AShooterPlayerController* ForPC, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Array_Get_Item_4, float CallFunc_Array_Get_Item_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1, double CallFunc_MakeVector_Y_ImplicitCast_1, double CallFunc_MakeVector_X_ImplicitCast_1);
	void PlayHitShieldEffect(bool LocalOnly, const struct FVector& HitLoc, const struct FVector& FromLoc, bool Temp_bool_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const TArray<float>& K2Node_MakeArray_Array, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, int32 Temp_int_Variable, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetAttachedComponentsNum_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_MakeArray__3__ImplicitCast, float K2Node_MakeArray__4__ImplicitCast, float K2Node_MakeArray__5__ImplicitCast, float K2Node_MakeArray__0__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast);
	void HandleShieldDamageBlocking(class AShooterCharacter* ForShooterCharacter, float DamageIn, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FVector& HitPoint, float ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


