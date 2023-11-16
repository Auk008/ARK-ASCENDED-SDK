#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x618 - 0x3F8)
// RigVMBlueprintGeneratedClass Human_WeaponIK_CtrlRig.Human_WeaponIK_CtrlRig_C
class UHuman_WeaponIK_CtrlRig_C : public UControlRig
{
public:
	struct FVector                               ElbowOffset;                                       // 0x3F8(0x18)(None)
	float                                        RightHandIKAlpha;                                  // 0x410(0x4)(None)
	bool                                         IsFemale;                                          // 0x414(0x1)(None)
	uint8                                        Pad_B4[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LeftHandIKAlpha;                                   // 0x418(0x8)(None)
	double                                       ShoulderWidthScale;                                // 0x420(0x8)(None)
	float                                        PV_OffsetFactor;                                   // 0x428(0x4)(None)
	uint8                                        Pad_B5[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PV_L;                                              // 0x430(0x18)(None)
	struct FVector                               PV_R;                                              // 0x448(0x18)(None)
	bool                                         TimerTest;                                         // 0x460(0x1)(None)
	uint8                                        Pad_B6[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WeaponPositionOffset;                              // 0x468(0x18)(None)
	double                                       BoneModifier_ArmLength;                            // 0x480(0x8)(None)
	double                                       BoneModifier_TorsoSize;                            // 0x488(0x8)(None)
	double                                       BoneModifier_Shoulders;                            // 0x490(0x8)(None)
	struct FVector                               L_WeaponShift;                                     // 0x498(0x18)(None)
	struct FVector                               R_WeaponShift;                                     // 0x4B0(0x18)(None)
	struct FRigPose                              LArmPose;                                          // 0x4C8(0x70)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              RArmPose;                                          // 0x538(0x70)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              InitialArmScalePose;                               // 0x5A8(0x70)(None)

	static class UClass* StaticClass();
	static class UHuman_WeaponIK_CtrlRig_C* GetDefaultObj();

};

// 0x88C (0x8B4 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_WeaponIK_CtrlRig.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	bool                                         RigVMModel___RigVMFunction_ControlFlowBranch_2_Condition__Const; // 0x28(0x1)(None)
	bool                                         RigVMModel___HierarchyGetPoseItemArray_2_Initial__Const; // 0x29(0x1)(None)
	enum class ERigElementType                   RigVMModel___HierarchyGetPoseItemArray_2_ElementType__Const; // 0x2A(0x1)(None)
	uint8                                        Pad_C2[0x5];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_1_1_Items__Const;   // 0x30(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_1_1_Item__Const; // 0x40(0xC)(None)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetTranslation_3_1_1_1_Space__Const; // 0x4C(0x1)(None)
	uint8                                        Pad_C3[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___RigUnit_SetTranslation_3_1_1_1_Weight__Const; // 0x50(0x4)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_1_Item__Const; // 0x54(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_2_Item__Const; // 0x60(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_3_1_3_Item__Const; // 0x6C(0xC)(None)
	enum class ERigVMTransformSpace              RigVMModel___RigUnit_SetTransform_5_Space__Const;  // 0x78(0x1)(None)
	uint8                                        Pad_C6[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_5_Value__Const;  // 0x80(0x60)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_Item__Const;   // 0xE0(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_23_Item__Const;  // 0xEC(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_27_Item__Const;  // 0xF8(0xC)(None)
	uint8                                        Pad_C7[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Subtract_4_A__Const;                  // 0x108(0x8)(None)
	struct FVector                               RigVMModel___Add_4_Add_4_1_B__Const;               // 0x110(0x18)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_5_Item__Const; // 0x128(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_23_1_Item__Const; // 0x134(0xC)(None)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_27_1_Item__Const; // 0x140(0xC)(None)
	struct FRigElementKey                        RigVMModel___ComputePoleVector_2_Bone_A__Const;    // 0x14C(0xC)(None)
	struct FRigElementKey                        RigVMModel___ComputePoleVector_2_Bone_B__Const;    // 0x158(0xC)(None)
	float                                        RigVMModel___ComputePoleVector_2_OffsetFactor__Const; // 0x164(0x4)(None)
	enum class ERigVMTransformSpace              ComputePoleVector_2___ComputePoleVector_GetTransform_1_Space__Const; // 0x168(0x1)(None)
	uint8                                        Pad_C9[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ComputePoleVector_2___ComputePoleVector_MathVectorScale_3_Factor__Const; // 0x16C(0x4)(None)
	enum class EEulerRotationOrder               ComputePoleVector_2___ComputePoleVector_MathQuaternionToEuler_RotationOrder__Const; // 0x170(0x1)(None)
	uint8                                        Pad_CA[0xF];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_Transform__Const; // 0x180(0x60)(None)
	enum class ERigUnitDebugTransformMode        ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_Mode__Const; // 0x1E0(0x1)(None)
	uint8                                        Pad_CB[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_Color__Const; // 0x1E4(0x10)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_Thickness__Const; // 0x1F4(0x4)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_Scale__Const; // 0x1F8(0x4)(None)
	bool                                         ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_bEnabled__Const; // 0x1FC(0x1)(None)
	uint8                                        Pad_CC[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_1_Item__Const; // 0x200(0xC)(None)
	struct FRigElementKey                        RigVMModel___ComputePoleVector_3_Bone_A__Const;    // 0x20C(0xC)(None)
	struct FRigElementKey                        RigVMModel___ComputePoleVector_3_Bone_B__Const;    // 0x218(0xC)(None)
	enum class ERigVMTransformSpace              ComputePoleVector_3___ComputePoleVector_GetTransform_1_Space__Const; // 0x224(0x1)(None)
	uint8                                        Pad_CE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ComputePoleVector_3___ComputePoleVector_MathVectorScale_3_Factor__Const; // 0x228(0x4)(None)
	enum class EEulerRotationOrder               ComputePoleVector_3___ComputePoleVector_MathQuaternionToEuler_RotationOrder__Const; // 0x22C(0x1)(None)
	uint8                                        Pad_CF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_Transform__Const; // 0x230(0x60)(None)
	enum class ERigUnitDebugTransformMode        ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_Mode__Const; // 0x290(0x1)(None)
	uint8                                        Pad_D0[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_Color__Const; // 0x294(0x10)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_Thickness__Const; // 0x2A4(0x4)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_Scale__Const; // 0x2A8(0x4)(None)
	bool                                         ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_bEnabled__Const; // 0x2AC(0x1)(None)
	uint8                                        Pad_D1[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_2_Item__Const; // 0x2B0(0xC)(None)
	uint8                                        Pad_D2[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_Items__Const;       // 0x2C0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_1_Items__Const;     // 0x2D0(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        RigVMModel___Greater_B__Const;                     // 0x2E0(0x4)(None)
	uint8                                        Pad_D5[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_6_1_Value__Const; // 0x2F0(0x60)(None)
	double                                       RigVMModel___Remap_SourceMinimum__Const;           // 0x350(0x8)(None)
	double                                       RigVMModel___Remap_SourceMaximum__Const;           // 0x358(0x8)(None)
	struct FVector                               RigVMModel___TwoBoneIKWeight_1_Primary_Axis__Const; // 0x360(0x18)(None)
	struct FVector                               RigVMModel___TwoBoneIKWeight_1_Secondary_Axis__Const; // 0x378(0x18)(None)
	float                                        RigVMModel___SpringInterp_Strength__Const;         // 0x390(0x4)(None)
	uint8                                        Pad_D6[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__Const; // 0x3A0(0x60)(None)
	bool                                         TwoBoneIKWeight_1___TwoBoneIKWeight_ProjectTransformToNewParent_bChildInitial__Const; // 0x400(0x1)(None)
	bool                                         TwoBoneIKWeight_1___TwoBoneIKWeight_ProjectTransformToNewParent_bNewParentInitial__Const; // 0x401(0x1)(None)
	enum class ERigVMTransformSpace              TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_Space__Const; // 0x402(0x1)(None)
	uint8                                        Pad_D7[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_SecondaryAxisWeight__Const; // 0x404(0x4)(None)
	enum class EControlRigVectorKind             TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorKind__Const; // 0x408(0x1)(None)
	uint8                                        Pad_D9[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorSpace__Const; // 0x40C(0xC)(None)
	uint8                                        Pad_DB[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_DebugSettings__Const; // 0x420(0x70)(None)
	struct FLinearColor                          TwoBoneIKWeight_1___TwoBoneIKWeight_DebugLineItemSpace_Color__Const; // 0x490(0x10)(None)
	struct FVector                               RigVMModel___TwoBoneIKWeight_Primary_Axis__Const;  // 0x4A0(0x18)(None)
	struct FVector                               RigVMModel___TwoBoneIKWeight_Secondary_Axis__Const; // 0x4B8(0x18)(None)
	double                                       RigVMModel___TwoBoneIKWeight_Stretch_Start_Ratio__Const; // 0x4D0(0x8)(None)
	double                                       RigVMModel___TwoBoneIKWeight_Stretch_Maximum_Ratio__Const; // 0x4D8(0x8)(None)
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__Const; // 0x4E0(0x60)(None)
	bool                                         TwoBoneIKWeight___TwoBoneIKWeight_ProjectTransformToNewParent_bChildInitial__Const; // 0x540(0x1)(None)
	bool                                         TwoBoneIKWeight___TwoBoneIKWeight_ProjectTransformToNewParent_bNewParentInitial__Const; // 0x541(0x1)(None)
	enum class ERigVMTransformSpace              TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_Space__Const; // 0x542(0x1)(None)
	uint8                                        Pad_DD[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_SecondaryAxisWeight__Const; // 0x544(0x4)(None)
	enum class EControlRigVectorKind             TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorKind__Const; // 0x548(0x1)(None)
	uint8                                        Pad_DE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorSpace__Const; // 0x54C(0xC)(None)
	uint8                                        Pad_DF[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_DebugSettings__Const; // 0x560(0x70)(None)
	struct FLinearColor                          TwoBoneIKWeight___TwoBoneIKWeight_DebugLineItemSpace_Color__Const; // 0x5D0(0x10)(None)
	enum class ERigVMTransformSpace              RigVMModel___HierarchySetPoseItemArray_1_Space__Const; // 0x5E0(0x1)(None)
	uint8                                        Pad_E0[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___HierarchySetPoseItemArray_1_ItemsToSet__Const; // 0x5E8(0x10)(None)
	uint8                                        Pad_E1[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__Const; // 0x600(0x60)(None)
	bool                                         TwoBoneIKWeight_2___TwoBoneIKWeight_ProjectTransformToNewParent_bChildInitial__Const; // 0x660(0x1)(None)
	bool                                         TwoBoneIKWeight_2___TwoBoneIKWeight_ProjectTransformToNewParent_bNewParentInitial__Const; // 0x661(0x1)(None)
	enum class ERigVMTransformSpace              TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_Space__Const; // 0x662(0x1)(None)
	uint8                                        Pad_E2[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_SecondaryAxisWeight__Const; // 0x664(0x4)(None)
	enum class EControlRigVectorKind             TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorKind__Const; // 0x668(0x1)(None)
	uint8                                        Pad_E4[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorSpace__Const; // 0x66C(0xC)(None)
	uint8                                        Pad_E5[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_DebugSettings__Const; // 0x680(0x70)(None)
	struct FLinearColor                          TwoBoneIKWeight_2___TwoBoneIKWeight_DebugLineItemSpace_Color__Const; // 0x6F0(0x10)(None)
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__Const; // 0x700(0x60)(None)
	bool                                         TwoBoneIKWeight_1_1___TwoBoneIKWeight_ProjectTransformToNewParent_bChildInitial__Const; // 0x760(0x1)(None)
	bool                                         TwoBoneIKWeight_1_1___TwoBoneIKWeight_ProjectTransformToNewParent_bNewParentInitial__Const; // 0x761(0x1)(None)
	enum class ERigVMTransformSpace              TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_Space__Const; // 0x762(0x1)(None)
	uint8                                        Pad_EC[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_SecondaryAxisWeight__Const; // 0x764(0x4)(None)
	enum class EControlRigVectorKind             TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorKind__Const; // 0x768(0x1)(None)
	uint8                                        Pad_ED[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVectorSpace__Const; // 0x76C(0xC)(None)
	uint8                                        Pad_EF[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_DebugSettings__Const; // 0x780(0x70)(None)
	struct FLinearColor                          TwoBoneIKWeight_1_1___TwoBoneIKWeight_DebugLineItemSpace_Color__Const; // 0x7F0(0x10)(None)
	enum class ERigVMTransformSpace              RigVMModel___HierarchySetPoseItemArray_Space__Const; // 0x800(0x1)(None)
	uint8                                        Pad_F1[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          RigVMModel___RigVMFunction_DebugArcNoSpace_Color__Const; // 0x804(0x10)(None)
	float                                        RigVMModel___RigVMFunction_DebugArcNoSpace_Radius__Const; // 0x814(0x4)(None)
	float                                        RigVMModel___RigVMFunction_DebugArcNoSpace_MaximumDegrees__Const; // 0x818(0x4)(None)
	int32                                        RigVMModel___RigVMFunction_DebugArcNoSpace_Detail__Const; // 0x81C(0x4)(None)
	struct FTransform                            RigVMModel___RigVMFunction_DebugArcNoSpace_WorldOffset__Const; // 0x820(0x60)(None)
	struct FLinearColor                          RigVMModel___RigVMFunction_DebugArcNoSpace_2_Color__Const; // 0x880(0x10)(None)
	struct FLinearColor                          RigVMModel___RigVMFunction_DebugArcNoSpace_2_1_Color__Const; // 0x890(0x10)(None)
	float                                        RigVMModel___RigVMFunction_DebugArcNoSpace_2_1_Radius__Const; // 0x8A0(0x4)(None)
	struct FLinearColor                          RigVMModel___RigVMFunction_DebugArcNoSpace_2_1_1_Color__Const; // 0x8A4(0x10)(None)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x3330 (0x3358 - 0x28)
// RigVMMemoryStorageGeneratorClass Human_WeaponIK_CtrlRig.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FRigPose                              RigVMModel___HierarchyGetPoseItemArray_2_Pose;     // 0x28(0x70)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_1_1_Items__IO;      // 0x98(0x10)(SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_3_Result;                         // 0xA8(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_1_Transform; // 0xC0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_1_CachedIndex; // 0x120(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_3_A;                              // 0x130(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_1_1_CachedIndex; // 0x148(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_1_Result;                         // 0x158(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_1_1_Transform; // 0x170(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_1_1_CachedIndex; // 0x1D0(0x10)(AutoWeak, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_1_A;                              // 0x1E0(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_1_CachedIndex; // 0x1F8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_2_Result;                         // 0x208(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_2_Transform; // 0x220(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_2_CachedIndex; // 0x280(0x10)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_2_A;                              // 0x290(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_2_CachedIndex; // 0x2A8(0x10)(AutoWeak, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_1_1_2_Result;                     // 0x2B8(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_1_1_1_1_Transform; // 0x2D0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_1_1_1_1_CachedIndex; // 0x330(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_1_1_2_A;                          // 0x340(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_3_1_3_CachedIndex; // 0x358(0x10)(AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_105[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_17_Transform;    // 0x370(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_17_CachedIndex;  // 0x3D0(0x10)(ContainsInstancedReference, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_SetTransform_5_Value__IO;     // 0x3E0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_5_CachedIndex;   // 0x440(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_17_1_Transform;  // 0x450(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_17_1_CachedIndex; // 0x4B0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_SetTransform_5_1_Value__IO;   // 0x4C0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_5_1_CachedIndex; // 0x520(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_4_Add_4_1_Result;                 // 0x530(0x18)(None)
	struct FVector                               RigVMModel___Add_4_Add_4_Result;                   // 0x548(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_26_Transform;    // 0x560(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_26_CachedIndex;  // 0x5C0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_4_Add_4_A;                        // 0x5D0(0x18)(None)
	struct FVector                               RigVMModel___Scale_Result;                         // 0x5E8(0x18)(None)
	struct FVector                               RigVMModel___Subtract_3_Result;                    // 0x600(0x18)(None)
	uint8                                        Pad_108[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_23_Transform;    // 0x620(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_23_CachedIndex;  // 0x680(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Subtract_3_A;                         // 0x690(0x18)(None)
	uint8                                        Pad_10A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_27_Transform;    // 0x6B0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_27_CachedIndex;  // 0x710(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Subtract_3_B;                         // 0x720(0x18)(None)
	double                                       RigVMModel___Subtract_4_Result;                    // 0x738(0x8)(None)
	double                                       RigVMModel___Subtract_4_B;                         // 0x740(0x8)(None)
	float                                        RigVMModel___Scale_Factor;                         // 0x748(0x4)(None)
	uint8                                        Pad_10C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_CachedIndex;   // 0x750(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_4_1_Add_4_1_1_Result;             // 0x760(0x18)(None)
	struct FVector                               RigVMModel___Add_4_1_Add_4_1_Result;               // 0x778(0x18)(None)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_26_1_Transform;  // 0x790(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_26_1_CachedIndex; // 0x7F0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_4_1_Add_4_1_A;                    // 0x800(0x18)(None)
	struct FVector                               RigVMModel___Scale_3_Result;                       // 0x818(0x18)(None)
	struct FVector                               RigVMModel___Subtract_3_1_Result;                  // 0x830(0x18)(None)
	uint8                                        Pad_10D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_23_1_Transform;  // 0x850(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_23_1_CachedIndex; // 0x8B0(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Subtract_3_1_A;                       // 0x8C0(0x18)(None)
	uint8                                        Pad_10E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_27_1_Transform;  // 0x8E0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_27_1_CachedIndex; // 0x940(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Subtract_3_1_B;                       // 0x950(0x18)(None)
	double                                       RigVMModel___Subtract_4_1_Result;                  // 0x968(0x8)(None)
	double                                       RigVMModel___Subtract_4_1_B;                       // 0x970(0x8)(None)
	float                                        RigVMModel___Scale_3_Factor;                       // 0x978(0x4)(None)
	uint8                                        Pad_10F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_5_CachedIndex; // 0x980(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___ComputePoleVector_2_Transform;        // 0x990(0x60)(None)
	struct FRigElementKey                        ComputePoleVector_2___ComputePoleVector_Entry_Bone_A; // 0x9F0(0xC)(None)
	struct FRigElementKey                        ComputePoleVector_2___ComputePoleVector_Entry_Bone_B; // 0x9FC(0xC)(None)
	struct FRigElementKey                        ComputePoleVector_2___ComputePoleVector_Entry_Bone_C; // 0xA08(0xC)(None)
	bool                                         ComputePoleVector_2___ComputePoleVector_Entry_Draw_Transform; // 0xA14(0x1)(None)
	bool                                         ComputePoleVector_2___ComputePoleVector_Entry_Initial; // 0xA15(0x1)(None)
	uint8                                        Pad_110[0xA];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_Return_Transform; // 0xA20(0x60)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_Entry_Origin_Scale; // 0xA80(0x18)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_Entry_OffsetFactor; // 0xA98(0x4)(None)
	uint8                                        Pad_111[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ComputePoleVector_2___ComputePoleVector_MathQuaternionFromEuler_Result; // 0xAA0(0x20)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathQuaternionToEuler_Result; // 0xAC0(0x18)(None)
	uint8                                        Pad_112[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_MathMatrixToTransform_Result; // 0xAE0(0x60)(None)
	struct FMatrix                               ComputePoleVector_2___ComputePoleVector_MathMatrixFromVectors_Result; // 0xB40(0x80)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorScale_3_Result; // 0xBC0(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_3_Result; // 0xBD8(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_1_Result; // 0xBF0(0x18)(None)
	uint8                                        Pad_113[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_GetTransform_1_Transform; // 0xC10(0x60)(None)
	TArray<struct FCachedRigElement>             ComputePoleVector_2___ComputePoleVector_GetTransform_1_CachedIndex; // 0xC70(0x10)(AutoWeak, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_1_A; // 0xC80(0x18)(None)
	uint8                                        Pad_114[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_GetTransform_Transform; // 0xCA0(0x60)(None)
	TArray<struct FCachedRigElement>             ComputePoleVector_2___ComputePoleVector_GetTransform_CachedIndex; // 0xD00(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_1_B; // 0xD10(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorScale_2_Result; // 0xD28(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorUnit_2_Result; // 0xD40(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_Result; // 0xD58(0x18)(None)
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_GetTransform_1_1_Transform; // 0xD70(0x60)(None)
	TArray<struct FCachedRigElement>             ComputePoleVector_2___ComputePoleVector_GetTransform_1_1_CachedIndex; // 0xDD0(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_A; // 0xDE0(0x18)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_MathFloatDiv_1_Result; // 0xDF8(0x4)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_MathVectorDot_1_Result; // 0xDFC(0x4)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_MathVectorLength_1_Result; // 0xE00(0x4)(None)
	uint8                                        Pad_115[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorUnit_1_Result; // 0xE08(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorCross_1_Result; // 0xE20(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorUnit_3_Result; // 0xE38(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorCross_1_1_Result; // 0xE50(0x18)(None)
	uint8                                        Pad_116[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ComputePoleVector_2___ComputePoleVector_MathQuaternionToEuler_Value; // 0xE70(0x20)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorAdd_Result; // 0xE90(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorScale_1_Result; // 0xEA8(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorSub_2_Result; // 0xEC0(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorScale_Result; // 0xED8(0x18)(None)
	struct FVector                               ComputePoleVector_2___ComputePoleVector_MathVectorUnit_Result; // 0xEF0(0x18)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_MathFloatDiv_Result; // 0xF08(0x4)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_MathVectorDot_Result; // 0xF0C(0x4)(None)
	float                                        ComputePoleVector_2___ComputePoleVector_MathVectorLength_Result; // 0xF10(0x4)(None)
	uint8                                        Pad_117[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_2___ComputePoleVector_DebugTransformMutableItemSpace_Transform__IO; // 0xF20(0x60)(None)
	class FName                                  ComputePoleVector_2___ComputePoleVector_Branch_BlockToRun; // 0xF80(0x8)(None)
	struct FVector                               RigVMModel___RigUnit_SetTranslation_1_Value;       // 0xF88(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_1_CachedIndex; // 0xFA0(0x10)(AutoWeak, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___ComputePoleVector_3_Transform;        // 0xFB0(0x60)(None)
	struct FRigElementKey                        ComputePoleVector_3___ComputePoleVector_Entry_Bone_A; // 0x1010(0xC)(None)
	struct FRigElementKey                        ComputePoleVector_3___ComputePoleVector_Entry_Bone_B; // 0x101C(0xC)(None)
	struct FRigElementKey                        ComputePoleVector_3___ComputePoleVector_Entry_Bone_C; // 0x1028(0xC)(None)
	bool                                         ComputePoleVector_3___ComputePoleVector_Entry_Draw_Transform; // 0x1034(0x1)(None)
	bool                                         ComputePoleVector_3___ComputePoleVector_Entry_Initial; // 0x1035(0x1)(None)
	uint8                                        Pad_118[0xA];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_Return_Transform; // 0x1040(0x60)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_Entry_Origin_Scale; // 0x10A0(0x18)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_Entry_OffsetFactor; // 0x10B8(0x4)(None)
	uint8                                        Pad_119[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ComputePoleVector_3___ComputePoleVector_MathQuaternionFromEuler_Result; // 0x10C0(0x20)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathQuaternionToEuler_Result; // 0x10E0(0x18)(None)
	uint8                                        Pad_11A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_MathMatrixToTransform_Result; // 0x1100(0x60)(None)
	struct FMatrix                               ComputePoleVector_3___ComputePoleVector_MathMatrixFromVectors_Result; // 0x1160(0x80)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorScale_3_Result; // 0x11E0(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_3_Result; // 0x11F8(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_1_Result; // 0x1210(0x18)(None)
	uint8                                        Pad_11B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_GetTransform_1_Transform; // 0x1230(0x60)(None)
	TArray<struct FCachedRigElement>             ComputePoleVector_3___ComputePoleVector_GetTransform_1_CachedIndex; // 0x1290(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_1_A; // 0x12A0(0x18)(None)
	uint8                                        Pad_11C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_GetTransform_Transform; // 0x12C0(0x60)(None)
	TArray<struct FCachedRigElement>             ComputePoleVector_3___ComputePoleVector_GetTransform_CachedIndex; // 0x1320(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_1_B; // 0x1330(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorScale_2_Result; // 0x1348(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorUnit_2_Result; // 0x1360(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_Result; // 0x1378(0x18)(None)
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_GetTransform_1_1_Transform; // 0x1390(0x60)(None)
	TArray<struct FCachedRigElement>             ComputePoleVector_3___ComputePoleVector_GetTransform_1_1_CachedIndex; // 0x13F0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_A; // 0x1400(0x18)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_MathFloatDiv_1_Result; // 0x1418(0x4)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_MathVectorDot_1_Result; // 0x141C(0x4)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_MathVectorLength_1_Result; // 0x1420(0x4)(None)
	uint8                                        Pad_11E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorUnit_1_Result; // 0x1428(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorCross_1_Result; // 0x1440(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorUnit_3_Result; // 0x1458(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorCross_1_1_Result; // 0x1470(0x18)(None)
	uint8                                        Pad_11F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ComputePoleVector_3___ComputePoleVector_MathQuaternionToEuler_Value; // 0x1490(0x20)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorAdd_Result; // 0x14B0(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorScale_1_Result; // 0x14C8(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorSub_2_Result; // 0x14E0(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorScale_Result; // 0x14F8(0x18)(None)
	struct FVector                               ComputePoleVector_3___ComputePoleVector_MathVectorUnit_Result; // 0x1510(0x18)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_MathFloatDiv_Result; // 0x1528(0x4)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_MathVectorDot_Result; // 0x152C(0x4)(None)
	float                                        ComputePoleVector_3___ComputePoleVector_MathVectorLength_Result; // 0x1530(0x4)(None)
	uint8                                        Pad_120[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComputePoleVector_3___ComputePoleVector_DebugTransformMutableItemSpace_Transform__IO; // 0x1540(0x60)(None)
	class FName                                  ComputePoleVector_3___ComputePoleVector_Branch_BlockToRun; // 0x15A0(0x8)(None)
	struct FVector                               RigVMModel___RigUnit_SetTranslation_2_Value;       // 0x15A8(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_2_CachedIndex; // 0x15C0(0x10)(AssetRegistrySearchable, SimpleDisplay, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              RigVMModel___HierarchyGetPoseItemArray_Pose;       // 0x15D0(0x70)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_Items__IO;          // 0x1640(0x10)(SimpleDisplay, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              RigVMModel___HierarchyGetPoseItemArray_1_Pose;     // 0x1650(0x70)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                RigVMModel___RigUnit_ItemArray_1_Items__IO;        // 0x16C0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         RigVMModel___Greater_Result;                       // 0x16D0(0x1)(None)
	uint8                                        Pad_121[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_6_Transform;     // 0x16E0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_6_CachedIndex;   // 0x1740(0x10)(AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_1_1_Result;                       // 0x1750(0x18)(None)
	struct FVector                               RigVMModel___Add_1_1_A;                            // 0x1768(0x18)(None)
	struct FVector                               RigVMModel___Scale_2_Result;                       // 0x1780(0x18)(None)
	double                                       RigVMModel___Remap_Result;                         // 0x1798(0x8)(None)
	float                                        RigVMModel___Scale_2_Factor;                       // 0x17A0(0x4)(None)
	uint8                                        Pad_122[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_6_1_Value__IO;   // 0x17B0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_6_1_CachedIndex; // 0x1810(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        RigVMModel___SpringInterp_Result;                  // 0x1820(0x4)(None)
	float                                        RigVMModel___SpringInterp_Velocity;                // 0x1824(0x4)(None)
	TArray<float>                                RigVMModel___SpringInterp_SimulatedResult;         // 0x1828(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFloatSpringState>             RigVMModel___SpringInterp_SpringState;             // 0x1838(0x10)(SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       RigVMModel___TwoBoneIKWeight_1_Weight;             // 0x1848(0x8)(None)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Secondary_Axis; // 0x1850(0x18)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Pole_Vector_Node; // 0x1868(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Bone_A;  // 0x1874(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Bone_B;  // 0x1880(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Bone_C;  // 0x188C(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_End_Ctrl; // 0x1898(0xC)(None)
	bool                                         TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Enable_Stretch; // 0x18A4(0x1)(None)
	uint8                                        Pad_123[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Stretch_Start_Ratio; // 0x18A8(0x8)(None)
	double                                       TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Stretch_Maximum_Ratio; // 0x18B0(0x8)(None)
	double                                       TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Weight;  // 0x18B8(0x8)(None)
	double                                       TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Line_Thickness; // 0x18C0(0x8)(None)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Scale;   // 0x18C8(0x18)(None)
	bool                                         TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_Debug;   // 0x18E0(0x1)(None)
	uint8                                        Pad_124[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_Entry_PV;      // 0x18E8(0x18)(None)
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_ProjectTransformToNewParent_Transform; // 0x1900(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_ProjectTransformToNewParent_CachedChild; // 0x1960(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_ProjectTransformToNewParent_CachedOldParent; // 0x1970(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_ProjectTransformToNewParent_CachedNewParent; // 0x1980(0x10)(AutoWeak, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_Transform; // 0x1990(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_CachedIndex; // 0x19F0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__IO; // 0x1A00(0x60)(None)
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_Transform; // 0x1A60(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_CachedIndex; // 0x1AC0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVector; // 0x1AD0(0x18)(None)
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchStartRatio; // 0x1AE8(0x4)(None)
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchMaximumRatio; // 0x1AEC(0x4)(None)
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Weight; // 0x1AF0(0x4)(None)
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_Result; // 0x1AF4(0x4)(None)
	uint8                                        Pad_125[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_RigUnit_GetTransform_20_2_Transform; // 0x1B00(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_RigUnit_GetTransform_20_2_CachedIndex; // 0x1B60(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_A; // 0x1B70(0x18)(None)
	uint8                                        Pad_126[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_5_Transform; // 0x1B90(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_5_CachedIndex; // 0x1BF0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_B; // 0x1C00(0x18)(None)
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_Result; // 0x1C18(0x4)(None)
	uint8                                        Pad_127[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_B; // 0x1C20(0x18)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemAIndex; // 0x1C38(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemBIndex; // 0x1C48(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedEffectorItemIndex; // 0x1C58(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedPoleVectorSpaceIndex; // 0x1C68(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_128[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_Transform; // 0x1C80(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_CachedIndex; // 0x1CE0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_DebugLineItemSpace_A; // 0x1CF0(0x18)(None)
	uint8                                        Pad_129[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_4_Transform; // 0x1D10(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1___TwoBoneIKWeight_GetTransform_4_CachedIndex; // 0x1D70(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1___TwoBoneIKWeight_DebugLineItemSpace_B; // 0x1D80(0x18)(None)
	float                                        TwoBoneIKWeight_1___TwoBoneIKWeight_DebugLineItemSpace_Thickness; // 0x1D98(0x4)(None)
	uint8                                        Pad_12A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_Entry_Secondary_Axis; // 0x1DA0(0x18)(None)
	struct FRigElementKey                        TwoBoneIKWeight___TwoBoneIKWeight_Entry_Pole_Vector_Node; // 0x1DB8(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight___TwoBoneIKWeight_Entry_Bone_A;    // 0x1DC4(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight___TwoBoneIKWeight_Entry_Bone_B;    // 0x1DD0(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight___TwoBoneIKWeight_Entry_Bone_C;    // 0x1DDC(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight___TwoBoneIKWeight_Entry_End_Ctrl;  // 0x1DE8(0xC)(None)
	bool                                         TwoBoneIKWeight___TwoBoneIKWeight_Entry_Enable_Stretch; // 0x1DF4(0x1)(None)
	uint8                                        Pad_12B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TwoBoneIKWeight___TwoBoneIKWeight_Entry_Stretch_Start_Ratio; // 0x1DF8(0x8)(None)
	double                                       TwoBoneIKWeight___TwoBoneIKWeight_Entry_Stretch_Maximum_Ratio; // 0x1E00(0x8)(None)
	double                                       TwoBoneIKWeight___TwoBoneIKWeight_Entry_Weight;    // 0x1E08(0x8)(None)
	double                                       TwoBoneIKWeight___TwoBoneIKWeight_Entry_Line_Thickness; // 0x1E10(0x8)(None)
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_Entry_Scale;     // 0x1E18(0x18)(None)
	bool                                         TwoBoneIKWeight___TwoBoneIKWeight_Entry_Debug;     // 0x1E30(0x1)(None)
	uint8                                        Pad_12C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_Entry_PV;        // 0x1E38(0x18)(None)
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_ProjectTransformToNewParent_Transform; // 0x1E50(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_ProjectTransformToNewParent_CachedChild; // 0x1EB0(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_ProjectTransformToNewParent_CachedOldParent; // 0x1EC0(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_ProjectTransformToNewParent_CachedNewParent; // 0x1ED0(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_Transform; // 0x1EE0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_CachedIndex; // 0x1F40(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__IO; // 0x1F50(0x60)(None)
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_Transform; // 0x1FB0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_CachedIndex; // 0x2010(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVector; // 0x2020(0x18)(None)
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchStartRatio; // 0x2038(0x4)(None)
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchMaximumRatio; // 0x203C(0x4)(None)
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Weight; // 0x2040(0x4)(None)
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_Result; // 0x2044(0x4)(None)
	uint8                                        Pad_12D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_RigUnit_GetTransform_20_2_Transform; // 0x2050(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_RigUnit_GetTransform_20_2_CachedIndex; // 0x20B0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_A; // 0x20C0(0x18)(None)
	uint8                                        Pad_12E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_5_Transform; // 0x20E0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_5_CachedIndex; // 0x2140(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_B; // 0x2150(0x18)(None)
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_Result; // 0x2168(0x4)(None)
	uint8                                        Pad_12F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_B; // 0x2170(0x18)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemAIndex; // 0x2188(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemBIndex; // 0x2198(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedEffectorItemIndex; // 0x21A8(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedPoleVectorSpaceIndex; // 0x21B8(0x10)(AutoWeak, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_130[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_RigUnit_GetTransform_14_1_Transform; // 0x21D0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_RigUnit_GetTransform_14_1_CachedIndex; // 0x2230(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_DebugLineItemSpace_A; // 0x2240(0x18)(None)
	uint8                                        Pad_131[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_4_Transform; // 0x2260(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight___TwoBoneIKWeight_GetTransform_4_CachedIndex; // 0x22C0(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight___TwoBoneIKWeight_DebugLineItemSpace_B; // 0x22D0(0x18)(None)
	float                                        TwoBoneIKWeight___TwoBoneIKWeight_DebugLineItemSpace_Thickness; // 0x22E8(0x4)(None)
	uint8                                        Pad_132[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Clamp_1_Result;                       // 0x22F0(0x8)(None)
	double                                       RigVMModel___Subtract_2_1_Result;                  // 0x22F8(0x8)(None)
	double                                       RigVMModel___Subtract_2_1_B;                       // 0x2300(0x8)(None)
	float                                        RigVMModel___HierarchySetPoseItemArray_1_Weight;   // 0x2308(0x4)(None)
	bool                                         RigVMModel___Greater_1_Result;                     // 0x230C(0x1)(None)
	uint8                                        Pad_133[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_6_2_Transform;   // 0x2310(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_6_2_CachedIndex; // 0x2370(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___Add_1_1_1_Result;                     // 0x2380(0x18)(None)
	struct FVector                               RigVMModel___Add_1_1_1_A;                          // 0x2398(0x18)(None)
	struct FVector                               RigVMModel___Scale_2_1_Result;                     // 0x23B0(0x18)(None)
	double                                       RigVMModel___Remap_1_Result;                       // 0x23C8(0x8)(None)
	float                                        RigVMModel___Scale_2_1_Factor;                     // 0x23D0(0x4)(None)
	uint8                                        Pad_134[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_6_Value__IO;     // 0x23E0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_6_CachedIndex;   // 0x2440(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        RigVMModel___SpringInterp_1_Result;                // 0x2450(0x4)(None)
	float                                        RigVMModel___SpringInterp_1_Target;                // 0x2454(0x4)(None)
	float                                        RigVMModel___SpringInterp_1_Velocity;              // 0x2458(0x4)(None)
	uint8                                        Pad_135[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___SpringInterp_1_SimulatedResult;       // 0x2460(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFloatSpringState>             RigVMModel___SpringInterp_1_SpringState;           // 0x2470(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       RigVMModel___TwoBoneIKWeight_2_Weight;             // 0x2480(0x8)(None)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Secondary_Axis; // 0x2488(0x18)(None)
	struct FRigElementKey                        TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Pole_Vector_Node; // 0x24A0(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Bone_A;  // 0x24AC(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Bone_B;  // 0x24B8(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Bone_C;  // 0x24C4(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_End_Ctrl; // 0x24D0(0xC)(None)
	bool                                         TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Enable_Stretch; // 0x24DC(0x1)(None)
	uint8                                        Pad_137[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Stretch_Start_Ratio; // 0x24E0(0x8)(None)
	double                                       TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Stretch_Maximum_Ratio; // 0x24E8(0x8)(None)
	double                                       TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Weight;  // 0x24F0(0x8)(None)
	double                                       TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Line_Thickness; // 0x24F8(0x8)(None)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Scale;   // 0x2500(0x18)(None)
	bool                                         TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_Debug;   // 0x2518(0x1)(None)
	uint8                                        Pad_138[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_Entry_PV;      // 0x2520(0x18)(None)
	uint8                                        Pad_139[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_ProjectTransformToNewParent_Transform; // 0x2540(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_ProjectTransformToNewParent_CachedChild; // 0x25A0(0x10)(BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_ProjectTransformToNewParent_CachedOldParent; // 0x25B0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_ProjectTransformToNewParent_CachedNewParent; // 0x25C0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_Transform; // 0x25D0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_CachedIndex; // 0x2630(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__IO; // 0x2640(0x60)(None)
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_Transform; // 0x26A0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_CachedIndex; // 0x2700(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVector; // 0x2710(0x18)(None)
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchStartRatio; // 0x2728(0x4)(None)
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchMaximumRatio; // 0x272C(0x4)(None)
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Weight; // 0x2730(0x4)(None)
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_Result; // 0x2734(0x4)(None)
	uint8                                        Pad_13C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_RigUnit_GetTransform_20_2_Transform; // 0x2740(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_RigUnit_GetTransform_20_2_CachedIndex; // 0x27A0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_A; // 0x27B0(0x18)(None)
	uint8                                        Pad_13D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_5_Transform; // 0x27D0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_5_CachedIndex; // 0x2830(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_B; // 0x2840(0x18)(None)
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_Result; // 0x2858(0x4)(None)
	uint8                                        Pad_13E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_B; // 0x2860(0x18)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemAIndex; // 0x2878(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemBIndex; // 0x2888(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedEffectorItemIndex; // 0x2898(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedPoleVectorSpaceIndex; // 0x28A8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_140[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_RigUnit_GetTransform_14_1_Transform; // 0x28C0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_RigUnit_GetTransform_14_1_CachedIndex; // 0x2920(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_DebugLineItemSpace_A; // 0x2930(0x18)(None)
	uint8                                        Pad_141[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_4_Transform; // 0x2950(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_2___TwoBoneIKWeight_GetTransform_4_CachedIndex; // 0x29B0(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_2___TwoBoneIKWeight_DebugLineItemSpace_B; // 0x29C0(0x18)(None)
	float                                        TwoBoneIKWeight_2___TwoBoneIKWeight_DebugLineItemSpace_Thickness; // 0x29D8(0x4)(None)
	uint8                                        Pad_142[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Secondary_Axis; // 0x29E0(0x18)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Pole_Vector_Node; // 0x29F8(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Bone_A; // 0x2A04(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Bone_B; // 0x2A10(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Bone_C; // 0x2A1C(0xC)(None)
	struct FRigElementKey                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_End_Ctrl; // 0x2A28(0xC)(None)
	bool                                         TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Enable_Stretch; // 0x2A34(0x1)(None)
	uint8                                        Pad_143[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Stretch_Start_Ratio; // 0x2A38(0x8)(None)
	double                                       TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Stretch_Maximum_Ratio; // 0x2A40(0x8)(None)
	double                                       TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Weight; // 0x2A48(0x8)(None)
	double                                       TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Line_Thickness; // 0x2A50(0x8)(None)
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Scale; // 0x2A58(0x18)(None)
	bool                                         TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_Debug; // 0x2A70(0x1)(None)
	uint8                                        Pad_144[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_Entry_PV;    // 0x2A78(0x18)(None)
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_ProjectTransformToNewParent_Transform; // 0x2A90(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_ProjectTransformToNewParent_CachedChild; // 0x2AF0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_ProjectTransformToNewParent_CachedOldParent; // 0x2B00(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_ProjectTransformToNewParent_CachedNewParent; // 0x2B10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_Transform; // 0x2B20(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_CachedIndex; // 0x2B80(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Effector__IO; // 0x2B90(0x60)(None)
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_Transform; // 0x2BF0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_1_1_CachedIndex; // 0x2C50(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_PoleVector; // 0x2C60(0x18)(None)
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchStartRatio; // 0x2C78(0x4)(None)
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_StretchMaximumRatio; // 0x2C7C(0x4)(None)
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_Weight; // 0x2C80(0x4)(None)
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_Result; // 0x2C84(0x4)(None)
	uint8                                        Pad_145[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigUnit_GetTransform_20_2_Transform; // 0x2C90(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigUnit_GetTransform_20_2_CachedIndex; // 0x2CF0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_A; // 0x2D00(0x18)(None)
	uint8                                        Pad_146[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_5_Transform; // 0x2D20(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_5_CachedIndex; // 0x2D80(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_B; // 0x2D90(0x18)(None)
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_Result; // 0x2DA8(0x4)(None)
	uint8                                        Pad_147[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigVMFunction_MathVectorDistance_1_B; // 0x2DB0(0x18)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemAIndex; // 0x2DC8(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedItemBIndex; // 0x2DD8(0x10)(AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedEffectorItemIndex; // 0x2DE8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_TwoBoneIKSimplePerItem_CachedPoleVectorSpaceIndex; // 0x2DF8(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_148[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_Transform; // 0x2E10(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_RigUnit_GetTransform_14_1_CachedIndex; // 0x2E70(0x10)(AutoWeak, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_DebugLineItemSpace_A; // 0x2E80(0x18)(None)
	uint8                                        Pad_149[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_4_Transform; // 0x2EA0(0x60)(None)
	TArray<struct FCachedRigElement>             TwoBoneIKWeight_1_1___TwoBoneIKWeight_GetTransform_4_CachedIndex; // 0x2F00(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwoBoneIKWeight_1_1___TwoBoneIKWeight_DebugLineItemSpace_B; // 0x2F10(0x18)(None)
	float                                        TwoBoneIKWeight_1_1___TwoBoneIKWeight_DebugLineItemSpace_Thickness; // 0x2F28(0x4)(None)
	uint8                                        Pad_14A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Clamp_Result;                         // 0x2F30(0x8)(None)
	double                                       RigVMModel___Subtract_2_Result;                    // 0x2F38(0x8)(None)
	float                                        RigVMModel___HierarchySetPoseItemArray_Weight;     // 0x2F40(0x4)(None)
	class FName                                  RigVMModel___RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x2F44(0x8)(None)
	class FName                                  RigVMModel___RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x2F4C(0x8)(None)
	uint8                                        Pad_14B[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_Transform;     // 0x2F60(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_CachedIndex;   // 0x2FC0(0x10)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x2FD0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x3030(0x10)(AutoWeak, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_Transform;   // 0x3040(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_CachedIndex; // 0x30A0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_1_Transform; // 0x30B0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_1_CachedIndex; // 0x3110(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_11_Transform;    // 0x3120(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_11_CachedIndex;  // 0x3180(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___RigVMFunction_DebugLineNoSpace_A;     // 0x3190(0x18)(None)
	uint8                                        Pad_14C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_12_Transform;    // 0x31B0(0x60)(None)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_12_CachedIndex;  // 0x3210(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               RigVMModel___RigVMFunction_DebugLineNoSpace_B;     // 0x3220(0x18)(None)
	struct FRigElementKey                        RigVMModel___PoseLoop_Item;                        // 0x3238(0xC)(None)
	uint8                                        Pad_14D[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___PoseLoop_GlobalTransform;             // 0x3250(0x60)(None)
	struct FVector                               RigVMModel___SetScale_Scale;                       // 0x32B0(0x18)(None)
	TArray<struct FCachedRigElement>             RigVMModel___SetScale_CachedIndex;                 // 0x32C8(0x10)(None)
	class FName                                  RigVMModel___PoseLoop_BlockToRun;                  // 0x32D8(0x8)(None)
	struct FTransform                            RigVMModel___PoseLoop_LocalTransform;              // 0x32E0(0x60)(None)
	float                                        RigVMModel___PoseLoop_CurveValue;                  // 0x3340(0x4)(None)
	int32                                        RigVMModel___PoseLoop_Index;                       // 0x3344(0x4)(None)
	int32                                        RigVMModel___PoseLoop_Count;                       // 0x3348(0x4)(None)
	float                                        RigVMModel___PoseLoop_Ratio;                       // 0x334C(0x4)(None)
	class FName                                  RigVMModel___RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x3350(0x8)(None)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


