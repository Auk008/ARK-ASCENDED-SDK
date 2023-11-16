#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x10F8 - 0x1040)
// BlueprintGeneratedClass WeapLance.WeapLance_C
class AWeapLance_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1040(0x8)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x1048(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  ThirdPersonMesh;                                   // 0x1050(0x8)(ZeroConstructor)
	bool                                         bIsAttacking;                                      // 0x1058(0x1)(None)
	bool                                         bWantsAttacking;                                   // 0x1059(0x1)(None)
	uint8                                        Pad_425C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       PreviousTracePoints;                               // 0x1060(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        HurtList;                                          // 0x1070(0x10)(ZeroConstructor)
	double                                       ClearHurtListTime;                                 // 0x1080(0x8)(None)
	double                                       StaminaCostPerSecondWantsAttacking;                // 0x1088(0x8)(None)
	double                                       StaminaCostPerSecondIsAttacking;                   // 0x1090(0x8)(None)
	class USoundBase*                            StartAttackingSound;                               // 0x1098(0x8)(ZeroConstructor)
	class USoundBase*                            StopAttackingSound;                                // 0x10A0(0x8)(ZeroConstructor)
	double                                       DurabilityCostForDismount;                         // 0x10A8(0x8)(None)
	double                                       LastCostDurabilityTime;                            // 0x10B0(0x8)(None)
	double                                       CostDurabilityInterval;                            // 0x10B8(0x8)(None)
	double                                       CostDurabilityAmountPerInterval;                   // 0x10C0(0x8)(None)
	struct FRotator                              DefaultLanceRot;                                   // 0x10C8(0x18)(None)
	struct FRotator                              WantsToAttackLanceRot;                             // 0x10E0(0x18)(None)

	static class UClass* StaticClass();
	static class AWeapLance_C* GetDefaultObj();

	void DoTrace(const struct FVector& Start, const struct FVector& End, const TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class AActor*>& Temp_object_Variable_1, const TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void DamageActor(class AActor* Victim, const struct FHitResult& HitInfo, bool bIsDino, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double Temp_real_Variable, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsBroken_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_GetWeaponDamageMultiplier_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_ApplyPointDamage_ReturnValue, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, float CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, float CallFunc_ApplyPointDamage_Impulse_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast, float CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast);
	void DoTraceAttacks(class UWorld* CallFunc_K2_GetWorld_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void BPForceTPVTargetingAnimation(bool ReturnValue);
	void ReceiveTick(float DeltaSeconds, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_BPGetCurrentStatusValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_ModifyCurrentStatusValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsRunning_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	void ExecuteUbergraph_WeapLance(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsLocallyOwned_ReturnValue, const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


