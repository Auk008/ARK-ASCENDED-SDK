#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFBIKBoneLimitType : uint8
{
	Free                           = 0,
	Limit                          = 1,
	Locked                         = 2,
	EFBIKBoneLimitType_MAX         = 3,
};

enum class EPoleVectorOption : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EPoleVectorOption_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct FullBodyIK.FBIKBoneLimit
struct FFBIKBoneLimit
{
public:
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(None)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(None)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(None)
	uint8                                        Pad_30F5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Limit;                                             // 0x8(0x18)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(None)
	bool                                         bEnabled;                                          // 0xC(0x1)(None)
	bool                                         bUseStiffness;                                     // 0xD(0x1)(None)
	uint8                                        Pad_30F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearStiffness;                                   // 0x10(0x18)(None)
	struct FVector                               AngularStiffness;                                  // 0x28(0x18)(None)
	bool                                         bUseAngularLimit;                                  // 0x40(0x1)(None)
	uint8                                        Pad_30F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x48(0x20)(None)
	bool                                         bUsePoleVector;                                    // 0x68(0x1)(None)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x69(0x1)(None)
	uint8                                        Pad_30F9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoleVector;                                        // 0x70(0x18)(None)
	struct FRotator                              OffsetRotation;                                    // 0x88(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(None)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(None)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(None)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(None)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(None)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(None)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(None)
	uint8                                        Pad_30FB[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x60)(None)
	float                                        DrawSize;                                          // 0x70(0x4)(None)
	uint8                                        Pad_30FC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(None)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(None)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(None)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(None)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(None)
	float                                        Precision;                                         // 0x14(0x4)(None)
	float                                        Damping;                                           // 0x18(0x4)(None)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(None)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(None)
	uint8                                        Pad_30FD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(None)
	uint8                                        Pad_30FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x10(0x18)(None)
	float                                        PositionAlpha;                                     // 0x28(0x4)(None)
	int32                                        PositionDepth;                                     // 0x2C(0x4)(None)
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(None)
	float                                        RotationAlpha;                                     // 0x50(0x4)(None)
	int32                                        RotationDepth;                                     // 0x54(0x4)(None)
	float                                        Pull;                                              // 0x58(0x4)(None)
	uint8                                        Pad_30FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_3100[0x198];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x130(0xC)(None)
	uint8                                        Pad_3101[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x140(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x150(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSolverInput                          SolverProperty;                                    // 0x160(0x24)(None)
	struct FMotionProcessInput                   MotionProperty;                                    // 0x184(0x2)(None)
	bool                                         bPropagateToChildren;                              // 0x186(0x1)(None)
	uint8                                        Pad_3102[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFBIKDebugOption                      DebugOption;                                       // 0x190(0x80)(None)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x210(0x198)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3103[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


