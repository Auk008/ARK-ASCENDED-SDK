#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB30 - 0xAF8)
// Class Foliage.FoliageInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	FMulticastInlineDelegateProperty_            OnInstanceTakePointDamage;                         // 0xAF8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnInstanceTakeRadialDamage;                        // 0xB08(0x10)(ZeroConstructor)
	bool                                         bEnableDiscardOnLoad;                              // 0xB18(0x1)(None)
	uint8                                        Pad_2D36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 GenerationGuid;                                    // 0xB1C(0x10)(None)
	uint8                                        Pad_2D37[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoliageInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x4C8 (0x520 - 0x58)
// Class Foliage.FoliageType
class UFoliageType : public UFoliageBaseType
{
public:
	struct FGuid                                 UpdateGuid;                                        // 0x58(0x10)(None)
	float                                        Density;                                           // 0x68(0x4)(None)
	float                                        DensityAdjustmentFactor;                           // 0x6C(0x4)(None)
	float                                        Radius;                                            // 0x70(0x4)(None)
	bool                                         bSingleInstanceModeOverrideRadius;                 // 0x74(0x1)(None)
	uint8                                        Pad_2D38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SingleInstanceModeRadius;                          // 0x78(0x4)(None)
	enum class EFoliageScaling                   Scaling;                                           // 0x7C(0x1)(None)
	uint8                                        Pad_2D39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ScaleX;                                            // 0x80(0x8)(None)
	struct FFloatInterval                        ScaleY;                                            // 0x88(0x8)(None)
	struct FFloatInterval                        ScaleZ;                                            // 0x90(0x8)(None)
	struct FFoliageVertexColorChannelMask        VertexColorMaskByChannel[0x4];                     // 0x98(0x30)(None)
	enum class EFoliageVertexColorMask           VertexColorMask;                                   // 0xC8(0x1)(None)
	uint8                                        Pad_2D3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VertexColorMaskThreshold;                          // 0xCC(0x4)(None)
	uint8                                        VertexColorMaskInvert : 1;                         // Mask: 0x1, PropSize: 0x10xD0(0x1)(None)
	uint8                                        BitPad_236 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ZOffset;                                           // 0xD4(0x8)(None)
	uint8                                        AlignToNormal : 1;                                 // Mask: 0x1, PropSize: 0x10xDC(0x1)(None)
	uint8                                        AverageNormal : 1;                                 // Mask: 0x2, PropSize: 0x10xDC(0x1)(None)
	uint8                                        AverageNormalSingleComponent : 1;                  // Mask: 0x4, PropSize: 0x10xDC(0x1)(None)
	uint8                                        BitPad_237 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlignMaxAngle;                                     // 0xE0(0x4)(None)
	uint8                                        RandomYaw : 1;                                     // Mask: 0x1, PropSize: 0x10xE4(0x1)(None)
	uint8                                        BitPad_238 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomPitchAngle;                                  // 0xE8(0x4)(None)
	struct FFloatInterval                        GroundSlopeAngle;                                  // 0xEC(0x8)(None)
	struct FFloatInterval                        Height;                                            // 0xF4(0x8)(None)
	uint8                                        Pad_2D3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LandscapeLayers;                                   // 0x100(0x10)(None)
	float                                        MinimumLayerWeight;                                // 0x110(0x4)(None)
	uint8                                        Pad_2D3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExclusionLandscapeLayers;                          // 0x118(0x10)(None)
	float                                        MinimumExclusionLayerWeight;                       // 0x128(0x4)(None)
	class FName                                  LandscapeLayer;                                    // 0x12C(0x8)(None)
	uint8                                        CollisionWithWorld : 1;                            // Mask: 0x1, PropSize: 0x10x134(0x1)(None)
	uint8                                        BitPad_239 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CollisionScale;                                    // 0x138(0x18)(None)
	int32                                        AverageNormalSampleCount;                          // 0x150(0x4)(None)
	uint8                                        Pad_2D41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoxSphereBounds                      MeshBounds;                                        // 0x158(0x38)(None)
	struct FVector                               LowBoundOriginRadius;                              // 0x190(0x18)(None)
	enum class EComponentMobility                Mobility;                                          // 0x1A8(0x1)(None)
	uint8                                        Pad_2D42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInt32Interval                        CullDistance;                                      // 0x1AC(0x8)(None)
	uint8                                        bEnableStaticLighting : 1;                         // Mask: 0x1, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        CastShadow : 1;                                    // Mask: 0x2, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x4, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x8, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        bAutoEnableDistanceFieldLighting : 1;              // Mask: 0x10, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x20, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x40, PropSize: 0x10x1B4(0x1)(None)
	uint8                                        BitPad_23A : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x1B8(0x1)(None)
	uint8                                        BitPad_23B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x1BC(0x1)(None)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x1BC(0x1)(None)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x4, PropSize: 0x10x1BC(0x1)(None)
	uint8                                        BitPad_23C : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x1C0(0x1)(None)
	uint8                                        Pad_2D46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverriddenLightMapRes;                             // 0x1C4(0x4)(None)
	enum class ELightmapType                     LightmapType;                                      // 0x1C8(0x1)(None)
	uint8                                        Pad_2D47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x1CC(0x1)(None)
	uint8                                        BitPad_23D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bVisibleInRayTracing : 1;                          // Mask: 0x1, PropSize: 0x10x1D0(0x1)(None)
	uint8                                        bEvaluateWorldPositionOffset : 1;                  // Mask: 0x2, PropSize: 0x10x1D0(0x1)(None)
	uint8                                        bIgnoreAutomaticBoundsWPODisableDistance : 1;      // Mask: 0x4, PropSize: 0x10x1D0(0x1)(None)
	uint8                                        BitPad_23E : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorldPositionOffsetDisableDistance;                // 0x1D4(0x4)(None)
	int32                                        CustomDataOutDisableDistance;                      // 0x1D8(0x4)(None)
	uint8                                        Pad_2D59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x1E0(0x138)(ZeroConstructor)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x318(0x1)(None)
	struct FLightingChannels                     LightingChannels;                                  // 0x319(0x1)(None)
	uint8                                        Pad_2D5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x31C(0x1)(None)
	uint8                                        BitPad_23F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x320(0x1)(None)
	uint8                                        Pad_2D5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomDepthStencilValue;                           // 0x324(0x4)(None)
	int32                                        TranslucencySortPriority;                          // 0x328(0x4)(None)
	float                                        CollisionRadius;                                   // 0x32C(0x4)(None)
	float                                        ShadeRadius;                                       // 0x330(0x4)(None)
	int32                                        NumSteps;                                          // 0x334(0x4)(None)
	float                                        InitialSeedDensity;                                // 0x338(0x4)(None)
	float                                        AverageSpreadDistance;                             // 0x33C(0x4)(None)
	float                                        SpreadVariance;                                    // 0x340(0x4)(None)
	int32                                        SeedsPerStep;                                      // 0x344(0x4)(None)
	int32                                        DistributionSeed;                                  // 0x348(0x4)(None)
	float                                        MaxInitialSeedOffset;                              // 0x34C(0x4)(None)
	bool                                         bCanGrowInShade;                                   // 0x350(0x1)(None)
	bool                                         bSpawnsInShade;                                    // 0x351(0x1)(None)
	uint8                                        Pad_2D5E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxInitialAge;                                     // 0x354(0x4)(None)
	float                                        MaxAge;                                            // 0x358(0x4)(None)
	float                                        OverlapPriority;                                   // 0x35C(0x4)(None)
	struct FFloatInterval                        ProceduralScale;                                   // 0x360(0x8)(None)
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0x368(0x88)(ZeroConstructor)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x3F0(0x90)(ZeroConstructor)
	int32                                        ChangeCount;                                       // 0x480(0x4)(None)
	uint8                                        ReapplyDensity : 1;                                // Mask: 0x1, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyRadius : 1;                                 // Mask: 0x2, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyAlignToNormal : 1;                          // Mask: 0x4, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyRandomYaw : 1;                              // Mask: 0x8, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyScaling : 1;                                // Mask: 0x10, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyScaleX : 1;                                 // Mask: 0x20, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyScaleY : 1;                                 // Mask: 0x40, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyScaleZ : 1;                                 // Mask: 0x80, PropSize: 0x10x484(0x1)(None)
	uint8                                        ReapplyRandomPitchAngle : 1;                       // Mask: 0x1, PropSize: 0x10x485(0x1)(None)
	uint8                                        ReapplyGroundSlope : 1;                            // Mask: 0x2, PropSize: 0x10x485(0x1)(None)
	uint8                                        ReapplyHeight : 1;                                 // Mask: 0x4, PropSize: 0x10x485(0x1)(None)
	uint8                                        ReapplyLandscapeLayers : 1;                        // Mask: 0x8, PropSize: 0x10x485(0x1)(None)
	uint8                                        ReapplyZOffset : 1;                                // Mask: 0x10, PropSize: 0x10x485(0x1)(None)
	uint8                                        ReapplyCollisionWithWorld : 1;                     // Mask: 0x20, PropSize: 0x10x485(0x1)(None)
	uint8                                        ReapplyVertexColorMask : 1;                        // Mask: 0x40, PropSize: 0x10x485(0x1)(None)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x80, PropSize: 0x10x485(0x1)(None)
	uint8                                        bEnableDiscardOnLoad : 1;                          // Mask: 0x1, PropSize: 0x10x486(0x1)(None)
	uint8                                        bEnableCullDistanceScaling : 1;                    // Mask: 0x2, PropSize: 0x10x486(0x1)(None)
	uint8                                        BitPad_240 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D61[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x488(0x10)(ZeroConstructor)
	int32                                        VirtualTextureCullMips;                            // 0x498(0x4)(None)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x49C(0x1)(None)
	uint8                                        Pad_2D63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartCullDistance;                                 // 0x4A0(0x4)(None)
	int32                                        EndCullDistance;                                   // 0x4A4(0x4)(None)
	class UClass*                                AttachedComponentClass;                            // 0x4A8(0x8)(ZeroConstructor)
	class UClass*                                DestroyedMeshActorClass;                           // 0x4B0(0x8)(ZeroConstructor)
	class UStaticMesh*                           TreeStumpMesh;                                     // 0x4B8(0x8)(ZeroConstructor)
	class USoundBase*                            OverrideTreeHarvestSound;                          // 0x4C0(0x8)(ZeroConstructor)
	class USoundBase*                            OverrideTreeGroundImpactSound;                     // 0x4C8(0x8)(ZeroConstructor)
	float                                        DistanceAlongTreeToSpawnImpactSound;               // 0x4D0(0x4)(None)
	float                                        OverrideWalkableFloorZ;                            // 0x4D4(0x4)(None)
	float                                        PlayerOverrideWalkableFloorZ;                      // 0x4D8(0x4)(None)
	uint8                                        bIsFallingTree : 1;                                // Mask: 0x1, PropSize: 0x10x4DC(0x1)(None)
	uint8                                        bInstanceRequiresPhysXCollision : 1;               // Mask: 0x2, PropSize: 0x10x4DC(0x1)(None)
	uint8                                        bReplicateThisComponent : 1;                       // Mask: 0x4, PropSize: 0x10x4DC(0x1)(None)
	uint8                                        bDontScaleAttachedComponent : 1;                   // Mask: 0x8, PropSize: 0x10x4DC(0x1)(None)
	uint8                                        BitPad_241 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            OverrideDestructionMaterials;                      // 0x4E0(0x10)(ZeroConstructor)
	class UClass*                                DamageFXActorToSpawn;                              // 0x4F0(0x8)(ZeroConstructor)
	float                                        AttachedComponentScaleFactor;                      // 0x4F8(0x4)(None)
	float                                        MinScaleForAttachedComponent;                      // 0x4FC(0x4)(None)
	float                                        MaxScaleForAttachedComponent;                      // 0x500(0x4)(None)
	int32                                        ObjectLayer;                                       // 0x504(0x4)(None)
	int32                                        DisplayOrder;                                      // 0x508(0x4)(None)
	int32                                        LowEnd_StartCullDistance;                          // 0x50C(0x4)(None)
	int32                                        LowEnd_EndCullDistance;                            // 0x510(0x4)(None)
	float                                        MaxClusterRadius;                                  // 0x514(0x4)(None)
	int32                                        MaxInstancesPerCluster;                            // 0x518(0x4)(None)
	uint8                                        bMapCheckIgnoreLargeCullDistance : 1;              // Mask: 0x1, PropSize: 0x10x51C(0x1)(None)
	uint8                                        Pad_2D66[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoliageType* GetDefaultObj();

	void GetResponseToChannel(enum class ECollisionChannel Channel, enum class ECollisionResponse ReturnValue);
};

// 0x18 (0x538 - 0x520)
// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                ActorClass;                                        // 0x520(0x8)(ZeroConstructor)
	bool                                         bShouldAttachToBaseComponent;                      // 0x528(0x1)(None)
	bool                                         bStaticMeshOnly;                                   // 0x529(0x1)(None)
	uint8                                        Pad_2D69[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                StaticMeshOnlyComponentClass;                      // 0x530(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UFoliageType_Actor* GetDefaultObj();

};

// 0x30 (0x550 - 0x520)
// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x520(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x528(0x10)(ZeroConstructor)
	TArray<class UMaterialInterface*>            NaniteOverrideMaterials;                           // 0x538(0x10)(ZeroConstructor)
	class UClass*                                ComponentClass;                                    // 0x548(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x60 (0x528 - 0x4C8)
// Class Foliage.InstancedFoliageActor
class AInstancedFoliageActor : public AISMPartitionActor
{
public:
	uint8                                        Pad_2D6E[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        BaseMeshLookup;                                    // 0x518(0x10)(None)

	static class UClass* StaticClass();
	static class AInstancedFoliageActor* GetDefaultObj();

	void BPGetInstancedFoliageActorForCurrentLevel(class UWorld* World, class AInstancedFoliageActor* ReturnValue);
	void BPConvertStaticMeshActorsToFoliage(const TArray<class AStaticMeshActor*>& Actors, const TArray<class AStaticMeshActor*>& ConvertedActors);
};

// 0x10 (0x760 - 0x750)
// Class Foliage.InteractiveFoliageComponent
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_2D70[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveFoliageComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Foliage.FoliageStatistics
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFoliageStatistics* GetDefaultObj();

	void FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius, int32 ReturnValue);
	void FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, const TArray<struct FTransform>& OutTransforms);
	void FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, int32 ReturnValue);
};

// 0x8 (0xB00 - 0xAF8)
// Class Foliage.GrassInstancedStaticMeshComponent
class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	uint8                                        Pad_2D7E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGrassInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x90 (0x558 - 0x4C8)
// Class Foliage.InteractiveFoliageActor
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x4C8(0x8)(ZeroConstructor)
	struct FVector                               TouchingActorEntryPosition;                        // 0x4D0(0x18)(None)
	struct FVector                               FoliageVelocity;                                   // 0x4E8(0x18)(None)
	struct FVector                               FoliageForce;                                      // 0x500(0x18)(None)
	struct FVector                               FoliagePosition;                                   // 0x518(0x18)(None)
	float                                        FoliageDamageImpulseScale;                         // 0x530(0x4)(None)
	float                                        FoliageTouchImpulseScale;                          // 0x534(0x4)(None)
	float                                        FoliageStiffness;                                  // 0x538(0x4)(None)
	float                                        FoliageStiffnessQuadratic;                         // 0x53C(0x4)(None)
	float                                        FoliageDamping;                                    // 0x540(0x4)(None)
	float                                        MaxDamageImpulse;                                  // 0x544(0x4)(None)
	float                                        MaxTouchImpulse;                                   // 0x548(0x4)(None)
	float                                        MaxForce;                                          // 0x54C(0x4)(None)
	float                                        Mass;                                              // 0x550(0x4)(None)
	uint8                                        Pad_2D80[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AInteractiveFoliageActor* GetDefaultObj();

	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};

// 0x98 (0x5A0 - 0x508)
// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*              ProceduralFoliageVolume;                           // 0x508(0x8)(ZeroConstructor)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x510(0x90)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AProceduralFoliageBlockingVolume* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0xB8(0x8)(ZeroConstructor)
	float                                        TileOverlap;                                       // 0xC0(0x4)(None)
	uint8                                        Pad_2D81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVolume*                               SpawningVolume;                                    // 0xC8(0x8)(ZeroConstructor)
	struct FGuid                                 ProceduralGuid;                                    // 0xD0(0x10)(None)

	static class UClass* StaticClass();
	static class UProceduralFoliageComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public UObject
{
public:
	int32                                        RandomSeed;                                        // 0x28(0x4)(None)
	float                                        TileSize;                                          // 0x2C(0x4)(None)
	int32                                        NumUniqueTiles;                                    // 0x30(0x4)(None)
	float                                        MinimumQuadTreeSize;                               // 0x34(0x4)(None)
	uint8                                        Pad_2D82[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFoliageTypeObject>            FoliageTypes;                                      // 0x40(0x10)(None)
	uint8                                        Pad_2D83[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralFoliageSpawner* GetDefaultObj();

	void Simulate(int32 NumSteps);
};

// 0x148 (0x170 - 0x28)
// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0x28(0x8)(ZeroConstructor)
	uint8                                        Pad_2D84[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProceduralFoliageInstance>    InstancesArray;                                    // 0xD0(0x10)(None)
	uint8                                        Pad_2D85[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralFoliageTile* GetDefaultObj();

};

// 0x10 (0x518 - 0x508)
// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume
{
public:
	uint8                                        Pad_2D86[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProceduralFoliageComponent*           ProceduralComponent;                               // 0x510(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AProceduralFoliageVolume* GetDefaultObj();

};

}


