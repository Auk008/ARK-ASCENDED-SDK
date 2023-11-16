#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x360 - 0x248)
// BlueprintGeneratedClass BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C
class UBP_PrimalWindSourceComponent_Base_C : public UPrimalWindSourceComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(None)
	double                                       Periodic_counter;                                  // 0x250(0x8)(None)
	struct FVector                               Actor_velocity_prev;                               // 0x258(0x18)(None)
	struct FVector                               Pos_prev;                                          // 0x270(0x18)(None)
	struct FVector                               Actor_acceleration;                                // 0x288(0x18)(None)
	struct FVector                               Actor_acceleration_prev;                           // 0x2A0(0x18)(None)
	struct FVector                               Actor_jerk;                                        // 0x2B8(0x18)(None)
	double                                       Acceleration_threshold;                            // 0x2D0(0x8)(None)
	bool                                         Use_acceleration_threshold;                        // 0x2D8(0x1)(None)
	bool                                         Attach_to_socket;                                  // 0x2D9(0x1)(None)
	uint8                                        Pad_30C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WindSourceRelativeLocation;                        // 0x2E0(0x18)(None)
	double                                       Sequencer_frame_curr;                              // 0x2F8(0x8)(None)
	double                                       Sequencer_frame_prev;                              // 0x300(0x8)(None)
	double                                       Sequencer_mod_prev;                                // 0x308(0x8)(None)
	bool                                         Eval_on_sequencer_framestep_only;                  // 0x310(0x1)(None)
	uint8                                        Pad_30C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Num_eval_substeps;                                 // 0x318(0x8)(None)
	double                                       LastTimeImpactedSurface;                           // 0x320(0x8)(None)
	bool                                         Debug;                                             // 0x328(0x1)(None)
	uint8                                        Pad_30C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PreviousTime;                                      // 0x330(0x8)(None)
	struct FVector                               Current_Velocity;                                  // 0x338(0x18)(None)
	bool                                         Debug_bubbles;                                     // 0x350(0x1)(None)
	uint8                                        Pad_30C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BubbleCountMultiplier;                             // 0x358(0x8)(None)

	static class UClass* StaticClass();
	static class UBP_PrimalWindSourceComponent_Base_C* GetDefaultObj();

	void Get_Bubble_System_Tag(class FName ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Deactivate_bubble_system(class FName BubbleSystemTag, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Creating_Bubbles_Code(const struct FVector& Current_location, const struct FVector& Delta, class FName BubbleSystemTag, class UNiagaraComponent* Local_bubble_system_ref, bool Has_Existing_Bubble_System, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector& CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
	void PlayFluidImpactEffectSound(float PenetrationScalar, const struct FVector& ImpactLocation, bool Exited, const struct FVector& OwnerVelocity, class USoundBase* Temp_object_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* K2Node_Select_Default, class USoundBase* Temp_object_Variable_10, int32 Temp_int_Variable_1, class USoundBase* K2Node_Select_Default_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1);
	void PlayFluidImpactEffect(float PenetrationScalar, const struct FVector& ImpactLocation, bool Exited, const struct FVector& OwnerVelocity, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BPFastTrace_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_VTraceSingleBP_OutHit, bool CallFunc_VTraceSingleBP_ReturnValue, const struct FVector& CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast);
	void Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, const struct FVector& CallFunc_Subtract_VectorVector_A_ImplicitCast);
	void Event_loop();
	void BPImpactedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPExitedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPImpactingFluidSurfaceTick(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPHandleCreatingBubbles();
	void BPDeactivateBubbleComponent();
	void ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, const struct FVector& K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar);
};

}


