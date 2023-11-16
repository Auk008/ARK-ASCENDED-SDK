#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class IKRig.IKGoalCreatorInterface
class IIKGoalCreatorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIKGoalCreatorInterface* GetDefaultObj();

	void AddIKGoals(TMap<class FName, struct FIKRigGoal> OutGoals);
};

// 0x18 (0xD0 - 0xB8)
// Class IKRig.IKRigComponent
class UIKRigComponent : public UActorComponent
{
public:
	uint8                                        Pad_2070[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRigComponent* GetDefaultObj();

	void SetIKRigGoalTransform(class FName GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha);
	void SetIKRigGoalPositionAndRotation(class FName GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha);
	void SetIKRigGoal(const struct FIKRigGoal& Goal);
	void ClearAllGoals();
};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigEffectorGoal
class UIKRigEffectorGoal : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)
	float                                        PositionAlpha;                                     // 0x38(0x4)(None)
	float                                        RotationAlpha;                                     // 0x3C(0x4)(None)
	struct FTransform                            CurrentTransform;                                  // 0x40(0x60)(None)
	struct FTransform                            InitialTransform;                                  // 0xA0(0x60)(None)

	static class UClass* StaticClass();
	static class UIKRigEffectorGoal* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class IKRig.IKRigDefinition
class UIKRigDefinition : public UObject
{
public:
	uint8                                        Pad_2071[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          PreviewSkeletalMesh;                               // 0x30(0x30)(ZeroConstructor)
	struct FIKRigSkeleton                        Skeleton;                                          // 0x60(0x70)(None)
	TArray<class UIKRigEffectorGoal*>            Goals;                                             // 0xD0(0x10)(ZeroConstructor)
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0xE0(0x10)(None)
	struct FRetargetDefinition                   RetargetDefinition;                                // 0xF0(0x18)(None)

	static class UClass* StaticClass();
	static class UIKRigDefinition* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class IKRig.IKRigProcessor
class UIKRigProcessor : public UObject
{
public:
	uint8                                        Pad_2072[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0x60(0x10)(None)
	uint8                                        Pad_2073[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRigProcessor* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRigSolver
class UIKRigSolver : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(None)
	uint8                                        Pad_2074[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRigSolver* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class IKRig.RetargetChainSettings
class URetargetChainSettings : public UObject
{
public:
	class FName                                  SourceChain;                                       // 0x28(0x8)(None)
	class FName                                  TargetChain;                                       // 0x30(0x8)(None)
	struct FTargetChainSettings                  Settings;                                          // 0x38(0xA8)(None)

	static class UClass* StaticClass();
	static class URetargetChainSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class IKRig.RetargetRootSettings
class URetargetRootSettings : public UObject
{
public:
	struct FTargetRootSettings                   Settings;                                          // 0x28(0x68)(None)

	static class UClass* StaticClass();
	static class URetargetRootSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRetargetGlobalSettings
class UIKRetargetGlobalSettings : public UObject
{
public:
	struct FRetargetGlobalSettings               Settings;                                          // 0x28(0x20)(None)

	static class UClass* StaticClass();
	static class UIKRetargetGlobalSettings* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class IKRig.IKRetargeter
class UIKRetargeter : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>       SourceIKRigAsset;                                  // 0x28(0x30)(ZeroConstructor)
	TSoftObjectPtr<class UIKRigDefinition>       TargetIKRigAsset;                                  // 0x58(0x30)(ZeroConstructor)
	TArray<struct FRetargetChainMap>             ChainMapping;                                      // 0x88(0x10)(None)
	TArray<class URetargetChainSettings*>        ChainSettings;                                     // 0x98(0x10)(ZeroConstructor)
	class URetargetRootSettings*                 RootSettings;                                      // 0xA8(0x8)(ZeroConstructor)
	class UIKRetargetGlobalSettings*             GlobalSettings;                                    // 0xB0(0x8)(None)
	TMap<class FName, struct FRetargetProfile>   Profiles;                                          // 0xB8(0x50)(None)
	class FName                                  CurrentProfile;                                    // 0x108(0x8)(None)
	TMap<class FName, struct FIKRetargetPose>    SourceRetargetPoses;                               // 0x110(0x50)(None)
	TMap<class FName, struct FIKRetargetPose>    TargetRetargetPoses;                               // 0x160(0x50)(None)
	class FName                                  CurrentSourceRetargetPose;                         // 0x1B0(0x8)(None)
	class FName                                  CurrentTargetRetargetPose;                         // 0x1B8(0x8)(None)
	TMap<class FName, struct FIKRetargetPose>    RetargetPoses;                                     // 0x1C0(0x50)(None)
	class FName                                  CurrentRetargetPose;                               // 0x210(0x8)(None)

	static class UClass* StaticClass();
	static class UIKRetargeter* GetDefaultObj();

	void SetRootSettingsInRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FTargetRootSettings& RootSettings);
	void SetGlobalSettingsInRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FRetargetGlobalSettings& GlobalSettings);
	void SetChainSpeedPlantSettingsInRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, class FName TargetChainName);
	void SetChainSettingsInRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FTargetChainSettings& ChainSettings, class FName TargetChainName);
	void SetChainIKSettingsInRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FTargetChainIKSettings& IKSettings, class FName TargetChainName);
	void SetChainFKSettingsInRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FTargetChainFKSettings& FKSettings, class FName TargetChainName);
	void GetRootSettingsFromRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FTargetRootSettings& ReturnValue);
	void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, const struct FTargetRootSettings& OutSettings);
	void GetGlobalSettingsFromRetargetProfile(const struct FRetargetProfile& RetargetProfile, const struct FRetargetGlobalSettings& ReturnValue);
	void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, const struct FRetargetGlobalSettings& OutSettings);
	void GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName IKGoalName, const struct FTargetChainSettings& ReturnValue);
	void GetChainSettingsFromRetargetProfile(const struct FRetargetProfile& RetargetProfile, class FName TargetChainName, const struct FTargetChainSettings& ReturnValue);
	void GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName TargetChainName, class FName OptionalProfileName, const struct FTargetChainSettings& ReturnValue);
};

// 0x348 (0x370 - 0x28)
// Class IKRig.IKRetargetProcessor
class UIKRetargetProcessor : public UObject
{
public:
	uint8                                        Pad_2075[0x148];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x170(0x8)(None)
	uint8                                        Pad_2076[0x1F8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRetargetProcessor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_BodyMoverEffector
class UIKRig_BodyMoverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)
	float                                        InfluenceMultiplier;                               // 0x38(0x4)(None)
	uint8                                        Pad_2077[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRig_BodyMoverEffector* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class IKRig.IKRig_BodyMover
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(None)
	float                                        PositionAlpha;                                     // 0x38(0x4)(None)
	float                                        PositionPositiveX;                                 // 0x3C(0x4)(None)
	float                                        PositionNegativeX;                                 // 0x40(0x4)(None)
	float                                        PositionPositiveY;                                 // 0x44(0x4)(None)
	float                                        PositionNegativeY;                                 // 0x48(0x4)(None)
	float                                        PositionPositiveZ;                                 // 0x4C(0x4)(None)
	float                                        PositionNegativeZ;                                 // 0x50(0x4)(None)
	float                                        RotationAlpha;                                     // 0x54(0x4)(None)
	float                                        RotateXAlpha;                                      // 0x58(0x4)(None)
	float                                        RotateYAlpha;                                      // 0x5C(0x4)(None)
	float                                        RotateZAlpha;                                      // 0x60(0x4)(None)
	uint8                                        Pad_2078[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UIKRig_BodyMoverEffector*>      Effectors;                                         // 0x68(0x10)(None)
	uint8                                        Pad_2079[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRig_BodyMover* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_LimbEffector
class UIKRig_LimbEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UIKRig_LimbEffector* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class IKRig.IKRig_LimbSolver
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(None)
	float                                        ReachPrecision;                                    // 0x38(0x4)(None)
	enum class EAxis                             HingeRotationAxis;                                 // 0x3C(0x1)(None)
	uint8                                        Pad_207A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x40(0x4)(None)
	bool                                         bEnableLimit;                                      // 0x44(0x1)(None)
	uint8                                        Pad_207B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinRotationAngle;                                  // 0x48(0x4)(None)
	bool                                         bAveragePull;                                      // 0x4C(0x1)(None)
	uint8                                        Pad_207C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PullDistribution;                                  // 0x50(0x4)(None)
	float                                        ReachStepAlpha;                                    // 0x54(0x4)(None)
	bool                                         bEnableTwistCorrection;                            // 0x58(0x1)(None)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x59(0x1)(None)
	uint8                                        Pad_207D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIKRig_LimbEffector*                   Effector;                                          // 0x60(0x8)(None)
	uint8                                        Pad_207E[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRig_LimbSolver* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRig_FBIKEffector
class UIKRig_FBIKEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)
	float                                        StrengthAlpha;                                     // 0x38(0x4)(None)
	float                                        PullChainAlpha;                                    // 0x3C(0x4)(None)
	float                                        PinRotation;                                       // 0x40(0x4)(None)
	int32                                        IndexInSolver;                                     // 0x44(0x4)(None)

	static class UClass* StaticClass();
	static class UIKRig_FBIKEffector* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IKRig.IKRig_FBIKBoneSettings
class UIKRig_FBIKBoneSettings : public UObject
{
public:
	class FName                                  bone;                                              // 0x28(0x8)(None)
	float                                        RotationStiffness;                                 // 0x30(0x4)(None)
	float                                        PositionStiffness;                                 // 0x34(0x4)(None)
	enum class EPBIKLimitType                    X;                                                 // 0x38(0x1)(None)
	uint8                                        Pad_2080[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinX;                                              // 0x3C(0x4)(None)
	float                                        MaxX;                                              // 0x40(0x4)(None)
	enum class EPBIKLimitType                    Y;                                                 // 0x44(0x1)(None)
	uint8                                        Pad_2081[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinY;                                              // 0x48(0x4)(None)
	float                                        MaxY;                                              // 0x4C(0x4)(None)
	enum class EPBIKLimitType                    Z;                                                 // 0x50(0x1)(None)
	uint8                                        Pad_2082[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinZ;                                              // 0x54(0x4)(None)
	float                                        MaxZ;                                              // 0x58(0x4)(None)
	bool                                         bUsePreferredAngles;                               // 0x5C(0x1)(None)
	uint8                                        Pad_2083[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PreferredAngles;                                   // 0x60(0x18)(None)

	static class UClass* StaticClass();
	static class UIKRig_FBIKBoneSettings* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class IKRig.IKRigFBIKSolver
class UIKRigFBIKSolver : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(None)
	int32                                        Iterations;                                        // 0x38(0x4)(None)
	float                                        MassMultiplier;                                    // 0x3C(0x4)(None)
	bool                                         bAllowStretch;                                     // 0x40(0x1)(None)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x41(0x1)(None)
	uint8                                        Pad_2084[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0x44(0x20)(None)
	float                                        PullChainAlpha;                                    // 0x64(0x4)(None)
	float                                        MaxAngle;                                          // 0x68(0x4)(None)
	float                                        OverRelaxation;                                    // 0x6C(0x4)(None)
	bool                                         bStartSolveFromInputPose;                          // 0x70(0x1)(None)
	uint8                                        Pad_2085[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UIKRig_FBIKEffector*>           Effectors;                                         // 0x78(0x10)(ZeroConstructor)
	TArray<class UIKRig_FBIKBoneSettings*>       BoneSettings;                                      // 0x88(0x10)(None)
	uint8                                        Pad_2086[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRigFBIKSolver* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_PoleSolverEffector
class UIKRig_PoleSolverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)
	float                                        Alpha;                                             // 0x38(0x4)(None)
	uint8                                        Pad_2087[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRig_PoleSolverEffector* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class IKRig.IKRig_PoleSolver
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(None)
	class FName                                  EndName;                                           // 0x38(0x8)(None)
	class UIKRig_PoleSolverEffector*             Effector;                                          // 0x40(0x8)(None)
	uint8                                        Pad_208B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRig_PoleSolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_SetTransformEffector
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                         bEnablePosition;                                   // 0x28(0x1)(None)
	bool                                         bEnableRotation;                                   // 0x29(0x1)(None)
	uint8                                        Pad_208D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x2C(0x4)(None)

	static class UClass* StaticClass();
	static class UIKRig_SetTransformEffector* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class IKRig.IKRig_SetTransform
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	class FName                                  Goal;                                              // 0x30(0x8)(None)
	class FName                                  RootBone;                                          // 0x38(0x8)(None)
	class UIKRig_SetTransformEffector*           Effector;                                          // 0x40(0x8)(None)
	uint8                                        Pad_208F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIKRig_SetTransform* GetDefaultObj();

};

}


