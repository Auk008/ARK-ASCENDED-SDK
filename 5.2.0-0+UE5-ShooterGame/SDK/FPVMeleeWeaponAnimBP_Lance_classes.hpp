#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5A (0xDA2 - 0x348)
// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
class UFPVMeleeWeaponAnimBP_Lance_C : public UAnimInstance
{
public:
	uint8                                        Pad_4379[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x5)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_437C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x370(0x28)(AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x398(0x28)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3C0(0x48)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x408(0x20)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x428(0x48)(ZeroConstructor, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x470(0x48)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4B8(0x48)(SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x500(0x48)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x548(0x48)(ZeroConstructor, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x590(0x20)(ContainsInstancedReference, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5B0(0xC8)(TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_437F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x680(0x1A0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x820(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x840(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x860(0x48)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8A8(0x48)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8F0(0x48)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x938(0x48)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x980(0x48)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9C8(0x48)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xA10(0x48)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA58(0x20)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA78(0xC8)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xB40(0x20)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xB60(0xE0)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xC40(0x48)(ZeroConstructor, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xC88(0xC8)(ZeroConstructor)
	bool                                         IsRunning;                                         // 0xD50(0x1)(None)
	bool                                         IsMoving;                                          // 0xD51(0x1)(None)
	bool                                         bIsUsingShield;                                    // 0xD52(0x1)(None)
	uint8                                        Pad_4385[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UsingShieldWeight;                                 // 0xD58(0x8)(None)
	bool                                         bIsBlockingWithShield;                             // 0xD60(0x1)(None)
	uint8                                        Pad_4386[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlockingShieldTranslation;                         // 0xD68(0x18)(None)
	double                                       BlockingShieldWeight;                              // 0xD80(0x8)(None)
	struct FRotator                              BlockingShieldRotation;                            // 0xD88(0x18)(None)
	bool                                         bIsAttacking;                                      // 0xDA0(0x1)(None)
	bool                                         bWantsAttacking;                                   // 0xDA1(0x1)(None)

	static class UClass* StaticClass();
	static class UFPVMeleeWeaponAnimBP_Lance_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterWeapon* K2Node_DynamicCast_AsShooter_Weapon, bool K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_FInterpTo_ReturnValue, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, const struct FRotator& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation, bool CallFunc_GetBlockingShieldOffsets_ReturnValue, bool CallFunc_IsBlockingWithShield_ReturnValue, bool CallFunc_IsUsingShield_ReturnValue, class AWeapLance_C* K2Node_DynamicCast_AsWeap_Lance, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3);
};

}


