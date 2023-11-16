#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECollectionAttributeEnum : uint8
{
	Chaos_Active                   = 0,
	Chaos_DynamicState             = 1,
	Chaos_CollisionGroup           = 2,
	Chaos_Max                      = 3,
};

enum class ECollectionGroupEnum : uint8
{
	Chaos_Traansform               = 0,
	Chaos_Max                      = 1,
};

enum class EChaosBreakingSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosBreakingSortMethod_MAX   = 5,
};

enum class EChaosCollisionSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByHighestImpulse           = 3,
	SortByNearestFirst             = 4,
	Count                          = 5,
	EChaosCollisionSortMethod_MAX  = 6,
};

enum class EChaosRemovalSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByNearestFirst             = 2,
	Count                          = 3,
	EChaosRemovalSortMethod_MAX    = 4,
};

enum class EChaosTrailingSortMethod : uint8
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosTrailingSortMethod_MAX   = 5,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8
{
	HideNone                       = 0,
	HideWithCollision              = 1,
	HideSelected                   = 2,
	HideWholeCollection            = 3,
	HideAll                        = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               Velocity;                                          // 0x18(0x18)(None)
	float                                        Mass;                                              // 0x30(0x4)(None)
	uint8                                        Pad_22C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
struct FChaosCollisionEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               Normal;                                            // 0x18(0x18)(None)
	struct FVector                               Velocity1;                                         // 0x30(0x18)(None)
	struct FVector                               Velocity2;                                         // 0x48(0x18)(None)
	float                                        Mass1;                                             // 0x60(0x4)(None)
	float                                        Mass2;                                             // 0x64(0x4)(None)
	struct FVector                               Impulse;                                           // 0x68(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventData
struct FChaosRemovalEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	float                                        Mass;                                              // 0x18(0x4)(None)
	int32                                        ParticleIndex;                                     // 0x1C(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               Velocity;                                          // 0x18(0x18)(None)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(None)
	float                                        Mass;                                              // 0x48(0x4)(None)
	int32                                        ParticleIndex;                                     // 0x4C(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
struct FGeometryCollectionRepData
{
public:
	uint8                                        Pad_22CE[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters
{
public:
	enum class EGeometryCollectionCacheType      CacheMode;                                         // 0x0(0x1)(None)
	uint8                                        Pad_22D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCollectionCache*              TargetCache;                                       // 0x8(0x8)(None)
	float                                        ReverseCacheBeginTime;                             // 0x10(0x4)(None)
	bool                                         SaveCollisionData;                                 // 0x14(0x1)(None)
	bool                                         DoGenerateCollisionData;                           // 0x15(0x1)(None)
	uint8                                        Pad_22D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CollisionDataSizeMax;                              // 0x18(0x4)(None)
	bool                                         DoCollisionDataSpatialHash;                        // 0x1C(0x1)(None)
	uint8                                        Pad_22D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionDataSpatialHashRadius;                    // 0x20(0x4)(None)
	int32                                        MaxCollisionPerCell;                               // 0x24(0x4)(None)
	bool                                         SaveBreakingData;                                  // 0x28(0x1)(None)
	bool                                         DoGenerateBreakingData;                            // 0x29(0x1)(None)
	uint8                                        Pad_22D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BreakingDataSizeMax;                               // 0x2C(0x4)(None)
	bool                                         DoBreakingDataSpatialHash;                         // 0x30(0x1)(None)
	uint8                                        Pad_22D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BreakingDataSpatialHashRadius;                     // 0x34(0x4)(None)
	int32                                        MaxBreakingPerCell;                                // 0x38(0x4)(None)
	bool                                         SaveTrailingData;                                  // 0x3C(0x1)(None)
	bool                                         DoGenerateTrailingData;                            // 0x3D(0x1)(None)
	uint8                                        Pad_22D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TrailingDataSizeMax;                               // 0x40(0x4)(None)
	float                                        TrailingMinSpeedThreshold;                         // 0x44(0x4)(None)
	float                                        TrailingMinVolumeThreshold;                        // 0x48(0x4)(None)
	uint8                                        Pad_22DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDamagePropagationData
struct FGeometryCollectionDamagePropagationData
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_22DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BreakDamagePropagationFactor;                      // 0x4(0x4)(None)
	float                                        ShockDamagePropagationFactor;                      // 0x8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
struct FGeometryCollectionAutoInstanceMesh
{
public:
	struct FSoftObjectPath                       StaticMesh;                                        // 0x0(0x20)(AutoWeak, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x20(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
struct FGeometryCollectionSource
{
public:
	struct FSoftObjectPath                       SourceGeometryObject;                              // 0x0(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            LocalTransform;                                    // 0x20(0x60)(None)
	TArray<class UMaterialInterface*>            SourceMaterial;                                    // 0x80(0x10)(None)
	bool                                         bAddInternalMaterials;                             // 0x90(0x1)(None)
	bool                                         bSplitComponents;                                  // 0x91(0x1)(None)
	uint8                                        Pad_22DF[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
struct FChaosBreakingEventRequestSettings
{
public:
	int32                                        MaxNumberOfResults;                                // 0x0(0x4)(None)
	float                                        MinRadius;                                         // 0x4(0x4)(None)
	float                                        MinSpeed;                                          // 0x8(0x4)(None)
	float                                        MinMass;                                           // 0xC(0x4)(None)
	float                                        MaxDistance;                                       // 0x10(0x4)(None)
	enum class EChaosBreakingSortMethod          SortMethod;                                        // 0x14(0x1)(None)
	uint8                                        Pad_22E0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings
{
public:
	int32                                        MaxNumberResults;                                  // 0x0(0x4)(None)
	float                                        MinMass;                                           // 0x4(0x4)(None)
	float                                        MinSpeed;                                          // 0x8(0x4)(None)
	float                                        MinImpulse;                                        // 0xC(0x4)(None)
	float                                        MaxDistance;                                       // 0x10(0x4)(None)
	enum class EChaosCollisionSortMethod         SortMethod;                                        // 0x14(0x1)(None)
	uint8                                        Pad_22E1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventRequestSettings
struct FChaosRemovalEventRequestSettings
{
public:
	int32                                        MaxNumberOfResults;                                // 0x0(0x4)(None)
	float                                        MinMass;                                           // 0x4(0x4)(None)
	float                                        MaxDistance;                                       // 0x8(0x4)(None)
	enum class EChaosRemovalSortMethod           SortMethod;                                        // 0xC(0x1)(None)
	uint8                                        Pad_22E2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings
{
public:
	int32                                        MaxNumberOfResults;                                // 0x0(0x4)(None)
	float                                        MinMass;                                           // 0x4(0x4)(None)
	float                                        MinSpeed;                                          // 0x8(0x4)(None)
	float                                        MinAngularSpeed;                                   // 0xC(0x4)(None)
	float                                        MaxDistance;                                       // 0x10(0x4)(None)
	enum class EChaosTrailingSortMethod          SortMethod;                                        // 0x14(0x1)(None)
	uint8                                        Pad_22E5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
struct FGeometryCollectionDebugDrawWarningMessage
{
public:
	uint8                                        Pad_22E6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
public:
	int32                                        ID;                                                // 0x0(0x4)(None)
	uint8                                        Pad_22E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AChaosSolverActor*                     Solver;                                            // 0x8(0x8)(ZeroConstructor)
	class AGeometryCollectionActor*              GeometryCollection;                                // 0x10(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
struct FGeometryCollectionEmbeddedExemplar
{
public:
	struct FSoftObjectPath                       StaticMeshExemplar;                                // 0x0(0x20)(None)
	float                                        StartCullDistance;                                 // 0x20(0x4)(None)
	float                                        EndCullDistance;                                   // 0x24(0x4)(None)
	int32                                        InstanceCount;                                     // 0x28(0x4)(None)
	uint8                                        Pad_22E8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionLevelSetData
struct FGeometryCollectionLevelSetData
{
public:
	int32                                        MinLevelSetResolution;                             // 0x0(0x4)(None)
	int32                                        MaxLevelSetResolution;                             // 0x4(0x4)(None)
	int32                                        MinClusterLevelSetResolution;                      // 0x8(0x4)(None)
	int32                                        MaxClusterLevelSetResolution;                      // 0xC(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionParticleData
struct FGeometryCollectionCollisionParticleData
{
public:
	float                                        CollisionParticlesFraction;                        // 0x0(0x4)(None)
	int32                                        MaximumCollisionParticles;                         // 0x4(0x4)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionTypeData
struct FGeometryCollectionCollisionTypeData
{
public:
	enum class ECollisionTypeEnum                CollisionType;                                     // 0x0(0x1)(None)
	enum class EImplicitTypeEnum                 ImplicitType;                                      // 0x1(0x1)(None)
	uint8                                        Pad_22ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionLevelSetData       LevelSet;                                          // 0x4(0x10)(None)
	struct FGeometryCollectionCollisionParticleData CollisionParticles;                                // 0x14(0x8)(None)
	float                                        CollisionObjectReductionPercentage;                // 0x1C(0x4)(None)
	float                                        CollisionMarginFraction;                           // 0x20(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData
{
public:
	float                                        MaxSize;                                           // 0x0(0x4)(None)
	uint8                                        Pad_22EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes;                                   // 0x8(0x10)(None)
	int32                                        DamageThreshold;                                   // 0x18(0x4)(None)
	uint8                                        Pad_22F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


