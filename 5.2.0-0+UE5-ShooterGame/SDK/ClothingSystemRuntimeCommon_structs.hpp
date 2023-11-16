#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClothingWindMethod_Legacy : uint8
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2,
};

enum class EWeightMapTargetCommon : uint8
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	AnimDriveDamping_DEPRECATED    = 5,
	EWeightMapTargetCommon_MAX     = 6,
};

enum class EClothMassMode : uint8
{
	UniformMass                    = 0,
	TotalMass                      = 1,
	Density                        = 2,
	MaxClothMassMode               = 3,
	EClothMassMode_MAX             = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct FClothConstraintSetup_Legacy
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(None)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(None)
	float                                        StretchLimit;                                      // 0x8(0x4)(None)
	float                                        CompressionLimit;                                  // 0xC(0x4)(None)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy
{
public:
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x0(0x1)(None)
	uint8                                        Pad_840[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x4(0x10)(None)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x14(0x10)(None)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x24(0x10)(None)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x34(0x10)(None)
	float                                        SelfCollisionRadius;                               // 0x44(0x4)(None)
	float                                        SelfCollisionStiffness;                            // 0x48(0x4)(None)
	float                                        SelfCollisionCullScale;                            // 0x4C(0x4)(None)
	struct FVector                               Damping;                                           // 0x50(0x18)(None)
	float                                        Friction;                                          // 0x68(0x4)(None)
	float                                        WindDragCoefficient;                               // 0x6C(0x4)(None)
	float                                        WindLiftCoefficient;                               // 0x70(0x4)(None)
	uint8                                        Pad_843[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearDrag;                                        // 0x78(0x18)(None)
	struct FVector                               AngularDrag;                                       // 0x90(0x18)(None)
	struct FVector                               LinearInertiaScale;                                // 0xA8(0x18)(None)
	struct FVector                               AngularInertiaScale;                               // 0xC0(0x18)(None)
	struct FVector                               CentrifugalInertiaScale;                           // 0xD8(0x18)(None)
	float                                        SolverFrequency;                                   // 0xF0(0x4)(None)
	float                                        StiffnessFrequency;                                // 0xF4(0x4)(None)
	float                                        GravityScale;                                      // 0xF8(0x4)(None)
	uint8                                        Pad_846[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityOverride;                                   // 0x100(0x18)(None)
	bool                                         bUseGravityOverride;                               // 0x118(0x1)(None)
	uint8                                        Pad_847[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetherStiffness;                                   // 0x11C(0x4)(None)
	float                                        TetherLimit;                                       // 0x120(0x4)(None)
	float                                        CollisionThickness;                                // 0x124(0x4)(None)
	float                                        AnimDriveSpringStiffness;                          // 0x128(0x4)(None)
	float                                        AnimDriveDamperStiffness;                          // 0x12C(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
struct FClothTetherData
{
public:
	uint8                                        Pad_84B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FVector3f>                     Normals;                                           // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<uint32>                               Indices;                                           // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, struct FPointWeightMap>         WeightMaps;                                        // 0x30(0x50)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                InverseMasses;                                     // 0x80(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x90(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<uint32>                               SelfCollisionIndices;                              // 0xA0(0x10)(Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothTetherData                      EuclideanTethers;                                  // 0xB0(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothTetherData                      GeodesicTethers;                                   // 0xC0(0x10)(None)
	int32                                        MaxBoneWeights;                                    // 0xD0(0x4)(None)
	int32                                        NumFixedVerts;                                     // 0xD4(0x4)(None)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon
{
public:
	struct FClothPhysicalMeshData                PhysicalMeshData;                                  // 0x0(0xD8)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothCollisionData                   CollisionData;                                     // 0xD8(0x40)(None)
	bool                                         bUseMultipleInfluences;                            // 0x118(0x1)(None)
	uint8                                        Pad_850[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkinningKernelRadius;                              // 0x11C(0x4)(None)
	bool                                         bSmoothTransition;                                 // 0x120(0x1)(None)
	uint8                                        Pad_851[0x27];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy
{
public:
	class FName                                  MaskName;                                          // 0x0(0x8)(None)
	enum class EWeightMapTargetCommon            CurrentTarget;                                     // 0x8(0x1)(None)
	uint8                                        Pad_853[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxValue;                                          // 0xC(0x4)(None)
	float                                        MinValue;                                          // 0x10(0x4)(None)
	uint8                                        Pad_854[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Values;                                            // 0x18(0x10)(None)
	bool                                         bEnabled;                                          // 0x28(0x1)(None)
	uint8                                        Pad_856[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


