#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9AB (0xCF3 - 0x348)
// AnimBlueprintGeneratedClass Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C
class UHuman_Male_TPV_GroundConform_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_28A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x388(0xC8)(Edit, ZeroConstructor, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x450(0x108)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x558(0x28)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x580(0x28)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x5A8(0x470)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xA18(0xC8)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAE0(0x1A0)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xC80(0x20)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xCA0(0x20)(None)
	bool                                         __CustomProperty_bHasDynamicBase__B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC0(0x1)(None)
	bool                                         __CustomProperty_IsFalling_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC1(0x1)(None)
	bool                                         __CustomProperty_Interpolate_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC2(0x1)(None)
	bool                                         __CustomProperty_Swimming_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC3(0x1)(None)
	bool                                         __CustomProperty_GroundConform_IsBeingDragged_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC4(0x1)(None)
	uint8                                        Pad_28A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_MeshScale_B4E411E4465178B3E5F3448ECAF8EF2E; // 0xCC8(0x18)(None)
	bool                                         Ground_Conform_Is_Being_Dragged;                   // 0xCE0(0x1)(None)
	bool                                         Swimming;                                          // 0xCE1(0x1)(None)
	bool                                         Ground_Conform_Interpolate;                        // 0xCE2(0x1)(None)
	bool                                         Ground_Conform_Is_Falling;                         // 0xCE3(0x1)(None)
	uint8                                        Pad_28A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         AnimInstance;                                      // 0xCE8(0x8)(ZeroConstructor)
	bool                                         WasBeingDragged;                                   // 0xCF0(0x1)(None)
	bool                                         HasHitTheGroundOnce;                               // 0xCF1(0x1)(None)
	bool                                         bHasDynamicBase_;                                  // 0xCF2(0x1)(None)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_GroundConform_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, const struct FPoseLink& AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_UpdateGroundConformingVariables_IsBeingDragged, bool CallFunc_UpdateGroundConformingVariables_IsSwimming, bool CallFunc_UpdateGroundConformingVariables_IsFalling, bool CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once, bool CallFunc_UpdateGroundConformingVariables_Interpolate, float CallFunc_GetCurveValue_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


