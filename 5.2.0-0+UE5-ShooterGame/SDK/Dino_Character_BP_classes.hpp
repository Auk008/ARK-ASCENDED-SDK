#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x32E8 - 0x3218)
// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
class ADino_Character_BP_C : public APrimalDinoCharacter
{
public:
	uint8                                        Pad_49D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3220(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class USphereComponent*                      StasisComponent;                                   // 0x3228(0x8)(ZeroConstructor)
	TArray<class UAnimSequence*>                 AlternateDeathAnims;                               // 0x3230(0x10)(Edit, ZeroConstructor)
	struct FDinoContentData                      ContentData;                                       // 0x3240(0x20)(None)
	double                                       BabySpeedMult_WildBaby;                            // 0x3260(0x8)(None)
	double                                       BabySpeedMult_NotWildBaby;                         // 0x3268(0x8)(None)
	double                                       FollowingRunDistance_BabyLong;                     // 0x3270(0x8)(None)
	double                                       FollowingRunDistance_BabyShort;                    // 0x3278(0x8)(None)
	double                                       FollowingRunDistance_Adult;                        // 0x3280(0x8)(None)
	double                                       AIFollowStoppingDistance_Baby;                     // 0x3288(0x8)(None)
	double                                       AIFollowStoppingDistance_Adult;                    // 0x3290(0x8)(None)
	int32                                        AiAccessFails;                                     // 0x3298(0x4)(None)
	uint8                                        Pad_49D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WildBaby_NextRunTime;                              // 0x32A0(0x8)(None)
	double                                       WildBaby_MinTimeBetweenRuns;                       // 0x32A8(0x8)(None)
	class UBlendSpace*                           WalkingIdleDeathBlendSpace;                        // 0x32B0(0x8)(Edit, ZeroConstructor)
	class UBlendSpace*                           WalkingMovingDeathBlendSpace;                      // 0x32B8(0x8)(Edit, ZeroConstructor)
	class UBlendSpace*                           SwimmingDeathBlendSpace;                           // 0x32C0(0x8)(Edit, ZeroConstructor)
	class UBlendSpace*                           FallingDeathBlendSpace;                            // 0x32C8(0x8)(Edit, ZeroConstructor)
	class UBlendSpace*                           TorpidDeathBlendSpace;                             // 0x32D0(0x8)(ZeroConstructor)
	bool                                         GeneratedBlendSpaces;                              // 0x32D8(0x1)(None)
	uint8                                        Pad_49D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PostDestructionFootstepLifespan;                   // 0x32E0(0x8)(None)

	static class UClass* StaticClass();
	static class ADino_Character_BP_C* GetDefaultObj();

	void BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue);
	void BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, const struct FVector& DesiredCameraOffset, bool ReturnValue);
	void BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue);
	void BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue);
	void BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	void GetFXBloodColor(const struct FLinearColor& ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue);
	void BlueprintOverrideWantsToRun(bool bInputWantsToRun, bool ReturnValue, bool RetVal, bool CallFunc_BlueprintOverrideWantsToRun_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsWildSlow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void UpdateBabyAndRunValues(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsWildSlow_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess_1, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_VariableSet_FollowStoppingDistance_ImplicitCast, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast, float K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast, float K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1, float K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1, float K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2);
	void BPControlRigNotify(class FName NotifyName, class FName NotifyCustomTag, const struct FHitResult& WorldSpaceHitResult, const struct FVector& Velocity);
	void GetDinoContentData(const struct FDinoContentData& DinoContentData);
	void BPHandleRightShoulderButton(bool ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class APrimalBuff*>& CallFunc_GetBuffs_TheBuffs, class APrimalBuff* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABuff_DinoTekHelmet_Base_C* K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateWildBabyNextRunTime();
	void BlendSpaceGenerated(class UBlendSpace* BlendSpace);
	void ReceiveBeginPlay();
	void EditorBeginPlay();
	void BP_OnSetDeath();
	void BPBecomeBaby();
	void ReceiveDestroyed();
	void BPTriggerStasisEvent();
	void BPSpawnAttackerDamageImpactFX(class FName SocketName, class APrimalCharacter* VictimChar);
	void BPBecomeAdult();
	void BPNotifyClaimed();
	void ExecuteUbergraph_Dino_Character_BP(int32 EntryPoint, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, float CallFunc_TimeSeconds_ReturnValue, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UBlendSpace* K2Node_Event_blendSpace, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, int32 Temp_int_Array_Index_Variable, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, const TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UActorComponent* CallFunc_Array_Get_Item, class USceneComponent* K2Node_DynamicCast_AsScene_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_DoesUseHibernation_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, double CallFunc_SelectFloat_ReturnValue_2, class FName Temp_name_Variable, double CallFunc_FMin_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


