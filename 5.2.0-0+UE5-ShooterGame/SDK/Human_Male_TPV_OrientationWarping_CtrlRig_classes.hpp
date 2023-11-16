#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x4D9 - 0x3F8)
// RigVMBlueprintGeneratedClass Human_Male_TPV_OrientationWarping_CtrlRig.Human_Male_TPV_OrientationWarping_CtrlRig_C
class UHuman_Male_TPV_OrientationWarping_CtrlRig_C : public UControlRig
{
public:
	double                                       RelativeAngle;                                     // 0x3F8(0x8)(None)
	double                                       HipAngle;                                          // 0x400(0x8)(None)
	uint8                                        Pad_B8A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Lfoot;                                             // 0x410(0x60)(None)
	struct FTransform                            Rfoot;                                             // 0x470(0x60)(None)
	double                                       Multiply_1_1_B;                                    // 0x4D0(0x8)(None)
	bool                                         bApplyIK;                                          // 0x4D8(0x1)(None)

	static class UClass* StaticClass();
	static class UHuman_Male_TPV_OrientationWarping_CtrlRig_C* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_Male_TPV_OrientationWarping_CtrlRig.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetRotation_3_Item__Const;    // 0x28(0xC)(None)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetRotation_3_Space__Const;   // 0x34(0x1)(None)
	bool                                         RigVMModel___RigUnit_SetRotation_3_bInitial__Const; // 0x35(0x1)(None)
	uint8                                        Pad_B91[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Euler__Const; // 0x38(0x18)(None)
	double                                       RigVMModel___Multiply_1_1_B__Const;                // 0x50(0x8)(None)
	enum class EEulerRotationOrder               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_RotationOrder__Const; // 0x58(0x1)(None)
	uint8                                        Pad_B93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___RigUnit_SetRotation_3_Weight__Const;  // 0x5C(0x4)(None)
	bool                                         RigVMModel___RigUnit_SetRotation_3_bPropagateToChildren__Const; // 0x60(0x1)(None)
	uint8                                        Pad_B96[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Multiply_1_1_1_B__Const;              // 0x68(0x8)(None)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_Items__Const;       // 0x70(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_4_Item__Const;   // 0x80(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_5_Item__Const;   // 0x8C(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRotation_Item__Const;      // 0x98(0xC)(None)
	uint8                                        Pad_B98[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Multiply_1_B__Const;                  // 0xA8(0x8)(None)
	float                                        RigVMModel___Interpolate_T__Const;                 // 0xB0(0x4)(None)
	class FName                                  RigVMModel___PBIK_Root__Const;                     // 0xB4(0x8)(None)
	uint8                                        Pad_B99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__Const;                // 0xC0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_BoneSettings__Const;             // 0xD0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FName>                          RigVMModel___PBIK_ExcludedBones__Const;            // 0xE0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FPBIKSolverSettings                   RigVMModel___PBIK_Settings__Const;                 // 0xF0(0x3C)(None)
	struct FPBIKDebug                            RigVMModel___PBIK_Debug__Const;                    // 0x12C(0x8)(None)
	uint8                                        Pad_B9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_1_Effectors__Const;              // 0x138(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_1_BoneSettings__Const;           // 0x148(0x10)(None)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x798 (0x7C0 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_Male_TPV_OrientationWarping_CtrlRig.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	uint8                                        Pad_BA1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Multiply_3_Result;                    // 0x30(0x20)(None)
	struct FQuat                                 RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Result; // 0x50(0x20)(None)
	double                                       RigVMModel___Multiply_1_1_Result;                  // 0x70(0x8)(None)
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Euler__IO; // 0x78(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_6_Transform;     // 0x90(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_6_CachedIndex;   // 0xF0(0x10)(Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Multiply_3_B;                         // 0x100(0x20)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_3_CachedIndex;    // 0x120(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FRigElementKey                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x130(0xC)(None)
	uint8                                        Pad_BAA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Multiply_4_Result;                    // 0x140(0x20)(None)
	struct FQuat                                 RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_2_Result; // 0x160(0x20)(None)
	double                                       RigVMModel___Multiply_1_1_1_Result;                // 0x180(0x8)(None)
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_2_Euler__IO; // 0x188(0x18)(None)
	struct FTransform                            RigVMModel___GetTransform_Transform;               // 0x1A0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_CachedIndex;             // 0x200(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Multiply_4_B;                         // 0x210(0x20)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_4_CachedIndex;    // 0x230(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_Items__IO;          // 0x240(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x250(0x4)(None)
	int32                                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x254(0x4)(None)
	float                                        RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x258(0x4)(None)
	class FName                                  RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x25C(0x8)(None)
	uint8                                        Pad_BAF[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x270(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x2D0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_5_Transform;     // 0x2E0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_5_CachedIndex;   // 0x340(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Multiply_Result;                      // 0x350(0x20)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_Transform;       // 0x370(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_CachedIndex;     // 0x3D0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Multiply_A;                           // 0x3E0(0x20)(None)
	struct FQuat                                 RigVMModel___RigVMFunction_MathQuaternionFromEuler_Result; // 0x400(0x20)(None)
	double                                       RigVMModel___Multiply_1_Result;                    // 0x420(0x8)(None)
	double                                       RigVMModel___Subtract_Result;                      // 0x428(0x8)(None)
	struct FVector                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__IO; // 0x430(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_CachedIndex;      // 0x448(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BB4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_Result;                   // 0x460(0x20)(None)
	struct FQuat                                 RigVMModel___Interpolate_A;                        // 0x480(0x20)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_Transform;   // 0x4A0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_CachedIndex; // 0x500(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Interpolate_B;                        // 0x510(0x20)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_1_CachedIndex;    // 0x530(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Interpolate_1_Result;                 // 0x540(0x20)(None)
	struct FQuat                                 RigVMModel___Interpolate_1_A;                      // 0x560(0x20)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_5_1_Transform;   // 0x580(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_5_1_CachedIndex; // 0x5E0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FQuat                                 RigVMModel___Interpolate_1_B;                      // 0x5F0(0x20)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRotation_2_CachedIndex;    // 0x610(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_Transform;     // 0x620(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_CachedIndex;   // 0x680(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__IO;                   // 0x690(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TArray<int32>>                        RigVMModel___PBIK_EffectorSolverIndices;           // 0x6A0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TArray<int32>>                        RigVMModel___PBIK_BoneSettingToSolverBoneIndex;    // 0x6B0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TArray<int32>>                        RigVMModel___PBIK_SolverBoneToElementIndex;        // 0x6C0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_Solver;                          // 0x6D0(0x10)(AutoWeak, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<bool>                                 RigVMModel___PBIK_bNeedsInit;                      // 0x6E0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x6F0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x750(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_1_Effectors__IO;                 // 0x760(0x10)(AutoWeak, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_EffectorSolverIndices;         // 0x770(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_BoneSettingToSolverBoneIndex;  // 0x780(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_SolverBoneToElementIndex;      // 0x790(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_1_Solver;                        // 0x7A0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<bool>                                 RigVMModel___PBIK_1_bNeedsInit;                    // 0x7B0(0x10)(None)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


