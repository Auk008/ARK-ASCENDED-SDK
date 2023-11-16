#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x17F0 - 0x1780)
// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
class AWeapClimbPick_C : public AShooterWeapon_Climb
{
public:
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x1780(0x8)(ZeroConstructor)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x1788(0x8)(ZeroConstructor)
	class USceneComponent*                       ClimbAnchor;                                       // 0x1790(0x8)(ZeroConstructor)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x1798(0x8)(ZeroConstructor)
	class USceneComponent*                       ClimbTarget;                                       // 0x17A0(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x17A8(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x17B0(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x17B8(0x8)(ZeroConstructor)
	double                                       ClimbAnchorInterpSpeed;                            // 0x17C0(0x8)(None)
	double                                       ClimbTargetInterpSpeed;                            // 0x17C8(0x8)(None)
	class UParticleSystem*                       Valid_Template;                                    // 0x17D0(0x8)(ZeroConstructor)
	class UParticleSystem*                       Walkable_Template;                                 // 0x17D8(0x8)(ZeroConstructor)
	class UParticleSystem*                       Invalid_Template;                                  // 0x17E0(0x8)(ZeroConstructor)
	double                                       ClimbingFOVMultiplier;                             // 0x17E8(0x8)(None)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	void BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_GetGroundLocation_theGroundLoc, bool CallFunc_GetGroundLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void BPModifyFOV(float InFOV, float ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void SetSourceLocation(class UParticleSystemComponent* Particle_System, const struct FVector& NewSourcePoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetTemplateTo(class UParticleSystemComponent* Particle_System, class UParticleSystem* New_Template, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool bCanLand, const struct FVector& ClimbLocation, const struct FVector& ClimbNormal, bool bHudVisible, const struct FVector& SourceTangent, bool CallFunc_IsClimbingHanging_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FVector& CallFunc_GetViewDirection_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_GetViewLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, uint8 Temp_byte_Variable, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast, float CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1);
};

}


