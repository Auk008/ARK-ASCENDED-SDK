#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPBIKLimitType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	Locked                         = 2,
	EPBIKLimitType_MAX             = 3,
};

enum class EPBIKRootBehavior : uint8
{
	PrePull                        = 0,
	PinToInput                     = 1,
	Free                           = 2,
	EPBIKRootBehavior_MAX          = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct PBIK.PBIKBoneSetting
struct FPBIKBoneSetting
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	float                                        RotationStiffness;                                 // 0x8(0x4)(None)
	float                                        PositionStiffness;                                 // 0xC(0x4)(None)
	enum class EPBIKLimitType                    X;                                                 // 0x10(0x1)(None)
	uint8                                        Pad_3104[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinX;                                              // 0x14(0x4)(None)
	float                                        MaxX;                                              // 0x18(0x4)(None)
	enum class EPBIKLimitType                    Y;                                                 // 0x1C(0x1)(None)
	uint8                                        Pad_3105[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinY;                                              // 0x20(0x4)(None)
	float                                        MaxY;                                              // 0x24(0x4)(None)
	enum class EPBIKLimitType                    Z;                                                 // 0x28(0x1)(None)
	uint8                                        Pad_3106[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinZ;                                              // 0x2C(0x4)(None)
	float                                        MaxZ;                                              // 0x30(0x4)(None)
	bool                                         bUsePreferredAngles;                               // 0x34(0x1)(None)
	uint8                                        Pad_3107[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PreferredAngles;                                   // 0x38(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PBIK.RootPrePullSettings
struct FRootPrePullSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(None)
	float                                        RotationAlphaX;                                    // 0x4(0x4)(None)
	float                                        RotationAlphaY;                                    // 0x8(0x4)(None)
	float                                        RotationAlphaZ;                                    // 0xC(0x4)(None)
	float                                        PositionAlpha;                                     // 0x10(0x4)(None)
	float                                        PositionAlphaX;                                    // 0x14(0x4)(None)
	float                                        PositionAlphaY;                                    // 0x18(0x4)(None)
	float                                        PositionAlphaZ;                                    // 0x1C(0x4)(None)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct PBIK.PBIKSolverSettings
struct FPBIKSolverSettings
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(None)
	float                                        MassMultiplier;                                    // 0x4(0x4)(None)
	bool                                         bAllowStretch;                                     // 0x8(0x1)(None)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x9(0x1)(None)
	uint8                                        Pad_3108[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0xC(0x20)(None)
	float                                        GlobalPullChainAlpha;                              // 0x2C(0x4)(None)
	float                                        MaxAngle;                                          // 0x30(0x4)(None)
	float                                        OverRelaxation;                                    // 0x34(0x4)(None)
	bool                                         bStartSolveFromInputPose;                          // 0x38(0x1)(None)
	uint8                                        Pad_3109[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct PBIK.PBIKSolver
struct FPBIKSolver
{
public:
	uint8                                        Pad_310A[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PBIK.PBIKDebug
struct FPBIKDebug
{
public:
	float                                        DrawScale;                                         // 0x0(0x4)(None)
	bool                                         bDrawDebug;                                        // 0x4(0x1)(None)
	uint8                                        Pad_310B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct PBIK.PBIKEffector
struct FPBIKEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	uint8                                        Pad_310C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        PositionAlpha;                                     // 0x70(0x4)(None)
	float                                        RotationAlpha;                                     // 0x74(0x4)(None)
	float                                        StrengthAlpha;                                     // 0x78(0x4)(None)
	float                                        PullChainAlpha;                                    // 0x7C(0x4)(None)
	float                                        PinRotation;                                       // 0x80(0x4)(None)
	uint8                                        Pad_310D[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x250 - 0x130)
// ScriptStruct PBIK.RigUnit_PBIK
struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  Root;                                              // 0x130(0x8)(None)
	TArray<struct FPBIKEffector>                 Effectors;                                         // 0x138(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                EffectorSolverIndices;                             // 0x148(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPBIKBoneSetting>              BoneSettings;                                      // 0x158(0x10)(AutoWeak, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ExcludedBones;                                     // 0x168(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPBIKSolverSettings                   Settings;                                          // 0x178(0x3C)(None)
	struct FPBIKDebug                            Debug;                                             // 0x1B4(0x8)(None)
	uint8                                        Pad_310E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                BoneSettingToSolverBoneIndex;                      // 0x1C0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                SolverBoneToElementIndex;                          // 0x1D0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPBIKSolver                           Solver;                                            // 0x1E0(0x68)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bNeedsInit;                                        // 0x248(0x1)(None)
	uint8                                        Pad_310F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


