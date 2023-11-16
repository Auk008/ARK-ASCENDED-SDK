#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A0 (0xCE8 - 0x348)
// AnimBlueprintGeneratedClass FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C
class UFPVClimbPickWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	uint8                                        Pad_3217[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x7)(ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	uint8                                        Pad_3218[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x370(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x390(0x28)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3B8(0x28)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E0(0x28)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x408(0x28)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x430(0x28)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x458(0x48)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4A0(0x20)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x4C0(0x48)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x508(0x20)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x528(0x48)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x570(0x48)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x5B8(0x48)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x600(0x48)(ZeroConstructor, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x648(0x48)(ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x690(0x48)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x6D8(0x48)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x720(0x48)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x768(0x48)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x7B0(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x7D0(0xC8)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x898(0x48)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x8E0(0x48)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x928(0xC8)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x9F0(0x48)(ZeroConstructor, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA38(0x48)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xA80(0x48)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAC8(0x108)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xBD0(0x28)(SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xBF8(0x28)(None)
	bool                                         IsRunning;                                         // 0xC20(0x1)(None)
	bool                                         IsMoving;                                          // 0xC21(0x1)(None)
	bool                                         bIsUsingShield;                                    // 0xC22(0x1)(None)
	uint8                                        Pad_3219[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UsingShieldWeight;                                 // 0xC28(0x8)(None)
	bool                                         bIsBlockingWithShield;                             // 0xC30(0x1)(None)
	uint8                                        Pad_321A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlockingShieldTranslation;                         // 0xC38(0x18)(None)
	double                                       BlockingShieldWeight;                              // 0xC50(0x8)(None)
	struct FRotator                              BlockingShieldRotation;                            // 0xC58(0x18)(None)
	bool                                         bIsAttachedToClimb;                                // 0xC70(0x1)(None)
	bool                                         bClimbingLeftArm;                                  // 0xC71(0x1)(None)
	uint8                                        Pad_321B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LeftArmTranslation;                                // 0xC78(0x18)(None)
	struct FVector                               RightArmTranslation;                               // 0xC90(0x18)(None)
	double                                       ClimbingLookingToSide;                             // 0xCA8(0x8)(None)
	bool                                         IsHanging;                                         // 0xCB0(0x1)(None)
	uint8                                        Pad_321D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              NewVar;                                            // 0xCB8(0x18)(None)
	struct FVector                               NewVar0;                                           // 0xCD0(0x18)(None)

	static class UClass* StaticClass();
	static class UFPVClimbPickWeaponAnimBP_Base_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06();
	void ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterWeapon_Climb* K2Node_DynamicCast_AsShooter_Weapon_Climb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClimbingHanging_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_IsRunning_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast);
};

}


