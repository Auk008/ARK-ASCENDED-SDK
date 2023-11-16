#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5CC (0x914 - 0x348)
// AnimBlueprintGeneratedClass Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C
class UHuman_Male_TPV_PPAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4295[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x388(0x470)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x7F8(0xC8)(None)
	double                                       __CustomProperty_CharacterCreatorFatBelly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C0(0x8)(None)
	double                                       __CustomProperty_CharacterCreatorFatChest_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8C8(0x8)(None)
	bool                                         __CustomProperty_bFemale_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D0(0x1)(None)
	uint8                                        Pad_4296[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_PhysicsFactor_Breast_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8D8(0x8)(None)
	double                                       __CustomProperty_PhysicsFactor_Belly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E0(0x8)(None)
	double                                       __CustomProperty_OverallFat_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x8E8(0x8)(None)
	float                                        Character_Creator_Overall_Fat;                     // 0x8F0(0x4)(None)
	uint8                                        Pad_42C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Item_Based_Physics_Factor_Belly;                   // 0x8F8(0x8)(None)
	double                                       Item_Based_Physics_Factor_Breast;                  // 0x900(0x8)(None)
	bool                                         Is_Female;                                         // 0x908(0x1)(None)
	uint8                                        Pad_42C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Character_Creator_Fat_01Chest;                     // 0x90C(0x4)(None)
	float                                        Character_Creator_Fat_01Belly;                     // 0x910(0x4)(None)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_PPAnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, const struct FPoseLink& AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Human_Male_TPV_PPAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRider_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, class AActor* CallFunc_GetBasedOnDinoAsActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UBaseHumanAnimBP_C* K2Node_DynamicCast_AsBase_Human_Anim_BP, bool K2Node_DynamicCast_bSuccess_1);
};

}


