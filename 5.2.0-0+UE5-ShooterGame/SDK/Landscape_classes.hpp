#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x760 - 0x750)
// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                        VirtualTextureMainPassMaxDrawDistance;             // 0x750(0x4)(None)
	uint8                                        Pad_2D97[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlPointMeshComponent* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class Landscape.GroundClutterLayerActor
class AGroundClutterLayerActor : public AActor
{
public:
	class UGroundClutterComponent*               ClutterComponent;                                  // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AGroundClutterLayerActor* GetDefaultObj();

};

// 0x50 (0x7A0 - 0x750)
// Class Landscape.GroundClutterComponent
class UGroundClutterComponent : public UStaticMeshComponent
{
public:
	TArray<struct FClutterData>                  ClutterLayers;                                     // 0x750(0x10)(ZeroConstructor)
	TArray<struct FClutterData>                  ActiveClutterLayers;                               // 0x760(0x10)(ZeroConstructor)
	int32                                        LayerID;                                           // 0x770(0x4)(None)
	bool                                         bDrawDebugInfo;                                    // 0x774(0x1)(None)
	uint8                                        Pad_2D98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALandscapeProxy*                       NewLandscapeComponent;                             // 0x778(0x8)(ZeroConstructor)
	uint8                                        Pad_2D99[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroundClutterComponent* GetDefaultObj();

};

// 0x0 (0x508 - 0x508)
// Class Landscape.CustomForceGrassVolume
class ACustomForceGrassVolume : public AVolume
{
public:

	static class UClass* StaticClass();
	static class ACustomForceGrassVolume* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Landscape.LandscapeSplineInterface
class ILandscapeSplineInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILandscapeSplineInterface* GetDefaultObj();

};

// 0x340 (0x7F8 - 0x4B8)
// Class Landscape.LandscapeProxy
class ALandscapeProxy : public APartitionActor
{
public:
	uint8                                        Pad_2DA3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULandscapeSplinesComponent*            SplineComponent;                                   // 0x4C0(0x8)(ZeroConstructor)
	struct FGuid                                 LandscapeGuid;                                     // 0x4C8(0x10)(None)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x4D8(0x10)(ZeroConstructor)
	struct FIntPoint                             LandscapeSectionOffset;                            // 0x4E8(0x8)(None)
	int32                                        MaxLODLevel;                                       // 0x4F0(0x4)(None)
	float                                        ComponentScreenSizeToUseSubSections;               // 0x4F4(0x4)(None)
	float                                        Lod0ScreenSize;                                    // 0x4F8(0x4)(None)
	float                                        LOD0DistributionSetting;                           // 0x4FC(0x4)(None)
	float                                        LODDistributionSetting;                            // 0x500(0x4)(None)
	int32                                        StaticLightingLOD;                                 // 0x504(0x4)(None)
	class UPhysicalMaterial*                     DefaultPhysMaterial;                               // 0x508(0x8)(ZeroConstructor)
	float                                        StreamingDistanceMultiplier;                       // 0x510(0x4)(None)
	uint8                                        Pad_2DA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x518(0x8)(ZeroConstructor)
	uint8                                        Pad_2DA5[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LandscapeHoleMaterial;                             // 0x580(0x8)(ZeroConstructor)
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x588(0x10)(ZeroConstructor)
	bool                                         bSetCreateRuntimeVirtualTextureVolumes;            // 0x598(0x1)(None)
	bool                                         bVirtualTextureRenderWithQuad;                     // 0x599(0x1)(None)
	bool                                         bVirtualTextureRenderWithQuadHQ;                   // 0x59A(0x1)(None)
	uint8                                        Pad_2DA6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualTextureNumLods;                             // 0x59C(0x4)(None)
	int32                                        VirtualTextureLodBias;                             // 0x5A0(0x4)(None)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x5A4(0x1)(None)
	uint8                                        Pad_2DA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NegativeZBoundsExtension;                          // 0x5A8(0x4)(None)
	float                                        PositiveZBoundsExtension;                          // 0x5AC(0x4)(None)
	TArray<class ULandscapeComponent*>           LandscapeComponents;                               // 0x5B0(0x10)(ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                               // 0x5C0(0x10)(ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                 // 0x5D0(0x10)(ZeroConstructor)
	class ULandscapeNaniteComponent*             NaniteComponent;                                   // 0x5E0(0x8)(ZeroConstructor)
	uint8                                        Pad_2DA8[0x64];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasLandscapeGrass;                                // 0x64C(0x1)(None)
	uint8                                        Pad_2DA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaticLightingResolution;                          // 0x650(0x4)(None)
	uint8                                        CastShadow : 1;                                    // Mask: 0x1, PropSize: 0x10x654(0x1)(None)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x2, PropSize: 0x10x654(0x1)(None)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x4, PropSize: 0x10x654(0x1)(None)
	uint8                                        BitPad_243 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x655(0x1)(None)
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x656(0x1)(None)
	uint8                                        BitPad_244 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DAA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCastFarShadow : 1;                                // Mask: 0x1, PropSize: 0x10x658(0x1)(None)
	uint8                                        BitPad_245 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCastHiddenShadow : 1;                             // Mask: 0x1, PropSize: 0x10x65C(0x1)(None)
	uint8                                        BitPad_246 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x660(0x1)(None)
	uint8                                        BitPad_247 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x1, PropSize: 0x10x664(0x1)(None)
	uint8                                        BitPad_248 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	struct FLightingChannels                     LightingChannels;                                  // 0x665(0x1)(None)
	uint8                                        Pad_2DAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseMaterialPositionOffsetInStaticLighting : 1;    // Mask: 0x1, PropSize: 0x10x668(0x1)(None)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x2, PropSize: 0x10x668(0x1)(None)
	uint8                                        BitPad_249 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x66C(0x1)(None)
	uint8                                        Pad_2DB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomDepthStencilValue;                           // 0x670(0x4)(None)
	float                                        LDMaxDrawDistance;                                 // 0x674(0x4)(None)
	struct FLightmassPrimitiveSettings           LightmassSettings;                                 // 0x678(0x18)(None)
	int32                                        CollisionMipLevel;                                 // 0x690(0x4)(None)
	int32                                        SimpleCollisionMipLevel;                           // 0x694(0x4)(None)
	uint8                                        Pad_2DB1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x6A0(0x138)(ZeroConstructor)
	uint8                                        bGenerateOverlapEvents : 1;                        // Mask: 0x1, PropSize: 0x10x7D8(0x1)(None)
	uint8                                        bBakeMaterialPositionOffsetIntoCollision : 1;      // Mask: 0x2, PropSize: 0x10x7D8(0x1)(None)
	uint8                                        BitPad_24A : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ComponentSizeQuads;                                // 0x7DC(0x4)(None)
	int32                                        SubsectionSizeQuads;                               // 0x7E0(0x4)(None)
	int32                                        NumSubsections;                                    // 0x7E4(0x4)(None)
	uint8                                        bUsedForNavigation : 1;                            // Mask: 0x1, PropSize: 0x10x7E8(0x1)(None)
	uint8                                        bFillCollisionUnderLandscapeForNavmesh : 1;        // Mask: 0x2, PropSize: 0x10x7E8(0x1)(None)
	uint8                                        BitPad_24B : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseDynamicMaterialInstance;                       // 0x7EC(0x1)(None)
	enum class ENavDataGatheringMode             NavigationGeometryGatheringMode;                   // 0x7ED(0x1)(None)
	bool                                         bRestrictStaticMeshGrassTypes;                     // 0x7EE(0x1)(None)
	bool                                         bUseLandscapeForCullingInvisibleHLODVertices;      // 0x7EF(0x1)(None)
	bool                                         bHasLayersContent;                                 // 0x7F0(0x1)(None)
	uint8                                        Pad_2DB4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALandscapeProxy* GetDefaultObj();

	void SetVirtualTextureRenderPassType(enum class ERuntimeVirtualTextureMainPassType InType);
	void SetLandscapeMaterialVectorParameterValue(class FName ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(class FName ParameterName, class UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(class FName ParameterName, float Value);
	void LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies, bool ReturnValue);
	void GetLandscapeActor(class ALandscape* ReturnValue);
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, class FName EditLayerName);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// 0x0 (0x7F8 - 0x7F8)
// Class Landscape.Landscape
class ALandscape : public ALandscapeProxy
{
public:

	static class UClass* StaticClass();
	static class ALandscape* GetDefaultObj();

	void RenderHeightmap(const struct FTransform& InWorldTransform, const struct FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget);
};

// 0x0 (0xC8 - 0xC8)
// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{
public:

	static class UClass* StaticClass();
	static class ULandscapeLODStreamingProxy_DEPRECATED* GetDefaultObj();

};

// 0x200 (0x880 - 0x680)
// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int32                                        SectionBaseX;                                      // 0x680(0x4)(None)
	int32                                        SectionBaseY;                                      // 0x684(0x4)(None)
	int32                                        ComponentSizeQuads;                                // 0x688(0x4)(None)
	int32                                        SubsectionSizeQuads;                               // 0x68C(0x4)(None)
	int32                                        NumSubsections;                                    // 0x690(0x4)(None)
	uint8                                        Pad_2DC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x698(0x8)(ZeroConstructor)
	class UMaterialInterface*                    OverrideHoleMaterial;                              // 0x6A0(0x8)(ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>     MaterialInstances;                                 // 0x6A8(0x10)(ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>      MaterialInstancesDynamic;                          // 0x6B8(0x10)(ZeroConstructor)
	TArray<int8>                                 LODIndexToMaterialIndex;                           // 0x6C8(0x10)(None)
	class UTexture2D*                            XYOffsetmapTexture;                                // 0x6D8(0x8)(ZeroConstructor)
	struct FVector4                              WeightmapScaleBias;                                // 0x6E0(0x20)(None)
	float                                        WeightmapSubsectionOffset;                         // 0x700(0x4)(None)
	uint8                                        Pad_2DCC[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              HeightmapScaleBias;                                // 0x710(0x20)(None)
	struct FBox                                  CachedLocalBox;                                    // 0x730(0x38)(None)
	class ULandscapeHeightfieldCollisionComponent* CollisionComponentRef;                             // 0x768(0x8)(ZeroConstructor)
	bool                                         bUserTriggeredChangeRequested;                     // 0x770(0x1)(None)
	bool                                         bNaniteActive;                                     // 0x771(0x1)(None)
	uint8                                        Pad_2DCD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            HeightmapTexture;                                  // 0x778(0x8)(ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                         // 0x780(0x10)(ZeroConstructor)
	TArray<class UTexture2D*>                    WeightmapTextures;                                 // 0x790(0x10)(ZeroConstructor)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x7A0(0x10)(ZeroConstructor)
	float                                        GrassMapExtendedZScale;                            // 0x7B0(0x4)(None)
	uint8                                        Pad_2DCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             GrassMapExtendedBounds;                            // 0x7B8(0x10)(None)
	struct FGuid                                 MapBuildDataId;                                    // 0x7C8(0x10)(None)
	int32                                        CollisionMipLevel;                                 // 0x7D8(0x4)(None)
	int32                                        SimpleCollisionMipLevel;                           // 0x7DC(0x4)(None)
	float                                        NegativeZBoundsExtension;                          // 0x7E0(0x4)(None)
	float                                        PositiveZBoundsExtension;                          // 0x7E4(0x4)(None)
	float                                        StaticLightingResolution;                          // 0x7E8(0x4)(None)
	int32                                        ForcedLOD;                                         // 0x7EC(0x4)(None)
	int32                                        LODBias;                                           // 0x7F0(0x4)(None)
	struct FGuid                                 StateId;                                           // 0x7F4(0x10)(None)
	struct FGuid                                 BakedTextureMaterialGuid;                          // 0x804(0x10)(None)
	struct FGuid                                 LastBakedTextureMaterialGuid;                      // 0x814(0x10)(None)
	uint8                                        Pad_2DCF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            GIBakedBaseColorTexture;                           // 0x828(0x8)(ZeroConstructor)
	class UMaterialInterface*                    MobileMaterialInterface;                           // 0x830(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            MobileMaterialInterfaces;                          // 0x838(0x10)(ZeroConstructor)
	TArray<class UTexture2D*>                    MobileWeightmapTextures;                           // 0x848(0x10)(ZeroConstructor)
	uint8                                        Pad_2DD0[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeComponent* GetDefaultObj();

	void SetLODBias(int32 InLODBias);
	void SetForcedLOD(int32 InForcedLOD);
	void GetMaterialInstanceDynamic(int32 InIndex, class UMaterialInstanceDynamic* ReturnValue);
	void EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, class FName InPaintLayerName, float ReturnValue);
	void EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer, float ReturnValue);
};

// 0x0 (0x4B8 - 0x4B8)
// Class Landscape.LandscapeGizmoActor
class ALandscapeGizmoActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALandscapeGizmoActor* GetDefaultObj();

};

// 0x50 (0x508 - 0x4B8)
// Class Landscape.LandscapeGizmoActiveActor
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	uint8                                        Pad_2DD4[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALandscapeGizmoActiveActor* GetDefaultObj();

};

// 0x0 (0x680 - 0x680)
// Class Landscape.LandscapeGizmoRenderComponent
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class ULandscapeGizmoRenderComponent* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                 GrassVarieties;                                    // 0x28(0x10)(ZeroConstructor)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        BitPad_24C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           GrassMesh;                                         // 0x40(0x8)(None)
	float                                        GrassDensity;                                      // 0x48(0x4)(None)
	float                                        PlacementJitter;                                   // 0x4C(0x4)(None)
	int32                                        StartCullDistance;                                 // 0x50(0x4)(None)
	int32                                        EndCullDistance;                                   // 0x54(0x4)(None)
	bool                                         RandomRotation;                                    // 0x58(0x1)(None)
	bool                                         AlignToSurface;                                    // 0x59(0x1)(None)
	uint8                                        Pad_2DD8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LayerID;                                           // 0x5C(0x4)(None)

	static class UClass* StaticClass();
	static class ULandscapeGrassType* GetDefaultObj();

};

// 0xE8 (0x768 - 0x680)
// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>     ComponentLayerInfos;                               // 0x680(0x10)(ZeroConstructor)
	int32                                        SectionBaseX;                                      // 0x690(0x4)(None)
	int32                                        SectionBaseY;                                      // 0x694(0x4)(None)
	int32                                        CollisionSizeQuads;                                // 0x698(0x4)(None)
	float                                        CollisionScale;                                    // 0x69C(0x4)(None)
	int32                                        SimpleCollisionSizeQuads;                          // 0x6A0(0x4)(None)
	uint8                                        Pad_2DDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                CollisionQuadFlags;                                // 0x6A8(0x10)(None)
	struct FGuid                                 HeightfieldGuid;                                   // 0x6B8(0x10)(None)
	struct FBox                                  CachedLocalBox;                                    // 0x6C8(0x38)(None)
	class ULandscapeComponent*                   RenderComponentRef;                                // 0x700(0x8)(ZeroConstructor)
	uint8                                        Pad_2DDC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPhysicalMaterial*>             CookedPhysicalMaterials;                           // 0x718(0x10)(ZeroConstructor)
	uint8                                        Pad_2DDD[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeHeightfieldCollisionComponent* GetDefaultObj();

	void GetRenderComponent(class ULandscapeComponent* ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public UObject
{
public:
	int32                                        LandscapeInfoID;                                   // 0x28(0x4)(None)
	class FName                                  LayerName;                                         // 0x2C(0x8)(None)
	uint8                                        Pad_2DDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x38(0x8)(None)
	float                                        Hardness;                                          // 0x40(0x4)(None)
	struct FLinearColor                          LayerUsageDebugColor;                              // 0x44(0x10)(None)
	uint8                                        Pad_2DE0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeLayerInfoObject* GetDefaultObj();

};

// 0x18 (0x250 - 0x238)
// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                              // 0x238(0x10)(None)
	uint8                                        bIsLayerThumbnail : 1;                             // Mask: 0x1, PropSize: 0x10x248(0x1)(None)
	uint8                                        bDisableTessellation : 1;                          // Mask: 0x2, PropSize: 0x10x248(0x1)(None)
	uint8                                        bMobile : 1;                                       // Mask: 0x4, PropSize: 0x10x248(0x1)(None)
	uint8                                        bEditorToolUsage : 1;                              // Mask: 0x8, PropSize: 0x10x248(0x1)(None)
	uint8                                        Pad_2DE2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeMaterialInstanceConstant* GetDefaultObj();

};

// 0x18 (0x780 - 0x768)
// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                 MeshGuid;                                          // 0x768(0x10)(None)
	uint8                                        Pad_2DE3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeMeshCollisionComponent* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*          LandscapeMeshProxyComponent;                       // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ALandscapeMeshProxyActor* GetDefaultObj();

};

// 0x30 (0x780 - 0x750)
// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 LandscapeGuid;                                     // 0x750(0x10)(None)
	TArray<struct FIntPoint>                     ProxyComponentBases;                               // 0x760(0x10)(None)
	int8                                         ProxyLOD;                                          // 0x770(0x1)(None)
	uint8                                        Pad_2DE5[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeMeshProxyComponent* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Landscape.LandscapeSettings
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int32                                        MaxNumberOfLayers;                                 // 0x38(0x4)(None)
	enum class ELandscapeDirtyingMode            LandscapeDirtyingMode;                             // 0x3C(0x1)(None)
	uint8                                        Pad_2DE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SideResolutionLimit;                               // 0x40(0x4)(None)
	uint8                                        Pad_2DE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     DefaultLandscapeMaterial;                          // 0x48(0x30)(ZeroConstructor)
	TSoftObjectPtr<class ULandscapeLayerInfoObject> DefaultLayerInfoObject;                            // 0x78(0x30)(None)
	bool                                         bRestrictiveMode;                                  // 0xA8(0x1)(None)
	uint8                                        Pad_2DE8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeSettings* GetDefaultObj();

};

// 0x30 (0x6B0 - 0x680)
// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0x680(0x10)(ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x690(0x10)(ZeroConstructor)
	TArray<class UMeshComponent*>                CookedForeignMeshComponents;                       // 0x6A0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ULandscapeSplinesComponent* GetDefaultObj();

	void GetSplineMeshComponents(const TArray<class USplineMeshComponent*>& ReturnValue);
};

// 0xB0 (0xD8 - 0x28)
// Class Landscape.LandscapeSplineControlPoint
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                               Location;                                          // 0x28(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x40(0x18)(None)
	float                                        Width;                                             // 0x58(0x4)(None)
	float                                        LayerWidthRatio;                                   // 0x5C(0x4)(None)
	float                                        SideFalloff;                                       // 0x60(0x4)(None)
	float                                        LeftSideFalloffFactor;                             // 0x64(0x4)(None)
	float                                        RightSideFalloffFactor;                            // 0x68(0x4)(None)
	float                                        LeftSideLayerFalloffFactor;                        // 0x6C(0x4)(None)
	float                                        RightSideLayerFalloffFactor;                       // 0x70(0x4)(None)
	float                                        EndFalloff;                                        // 0x74(0x4)(None)
	TArray<struct FLandscapeSplineConnection>    ConnectedSegments;                                 // 0x78(0x10)(ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x88(0x10)(None)
	struct FBox                                  Bounds;                                            // 0x98(0x38)(None)
	class UControlPointMeshComponent*            LocalMeshComponent;                                // 0xD0(0x8)(None)

	static class UClass* StaticClass();
	static class ULandscapeSplineControlPoint* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection     Connections[0x2];                                  // 0x28(0x30)(ZeroConstructor)
	struct FInterpCurveVector                    SplineInfo;                                        // 0x58(0x18)(None)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x70(0x10)(None)
	struct FBox                                  Bounds;                                            // 0x80(0x38)(None)
	TArray<class USplineMeshComponent*>          LocalMeshComponents;                               // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class ULandscapeSplineSegment* GetDefaultObj();

};

// 0x30 (0x828 - 0x7F8)
// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TSoftObjectPtr<class ALandscape>             LandscapeActorRef;                                 // 0x7F8(0x30)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ALandscapeStreamingProxy* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeWeightmapUsage
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                   ChannelUsage[0x4];                                 // 0x28(0x20)(None)
	struct FGuid                                 LayerGuid;                                         // 0x48(0x10)(None)

	static class UClass* StaticClass();
	static class ULandscapeWeightmapUsage* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                   GrassTypes;                                        // 0xB0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeGrassOutput* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>              Layers;                                            // 0xB0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerBlend* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	enum class ETerrainCoordMappingType          MappingType;                                       // 0xB0(0x1)(None)
	enum class ELandscapeCustomizedCoordType     CustomUVType;                                      // 0xB1(0x1)(None)
	uint8                                        Pad_2DED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MappingScale;                                      // 0xB4(0x4)(None)
	float                                        MappingRotation;                                   // 0xB8(0x4)(None)
	float                                        MappingPanU;                                       // 0xBC(0x4)(None)
	float                                        MappingPanV;                                       // 0xC0(0x4)(None)
	uint8                                        Pad_2DEE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerCoords* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class Landscape.ControlPointMeshActor
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*            ControlPointMeshComponent;                         // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AControlPointMeshActor* GetDefaultObj();

};

// 0x0 (0x4B8 - 0x4B8)
// Class Landscape.LandscapeBlueprintBrushBase
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALandscapeBlueprintBrushBase* GetDefaultObj();

	void RequestLandscapeUpdate(bool bInUserTriggered);
	void Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, class FName InWeightmapLayerName, class UTextureRenderTarget2D* ReturnValue);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(const TArray<class UObject*>& OutStreamableAssets);
};

// 0x0 (0x28 - 0x28)
// Class Landscape.LandscapeHLODBuilder
class ULandscapeHLODBuilder : public UHLODBuilder
{
public:

	static class UClass* StaticClass();
	static class ULandscapeHLODBuilder* GetDefaultObj();

};

// 0x200 (0x228 - 0x28)
// Class Landscape.LandscapeInfo
class ULandscapeInfo : public UObject
{
public:
	TWeakObjectPtr<class ALandscape>             LandscapeActor;                                    // 0x28(0x8)(ZeroConstructor)
	struct FGuid                                 LandscapeGuid;                                     // 0x30(0x10)(None)
	int32                                        ComponentSizeQuads;                                // 0x40(0x4)(None)
	int32                                        SubsectionSizeQuads;                               // 0x44(0x4)(None)
	int32                                        ComponentNumSubsections;                           // 0x48(0x4)(None)
	uint8                                        Pad_2DF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DrawScale;                                         // 0x50(0x18)(None)
	uint8                                        Pad_2DF6[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class ALandscapeStreamingProxy>> StreamingProxies;                                  // 0x118(0x10)(None)
	uint8                                        Pad_2DF7[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeInfo* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Landscape.LandscapeInfoMap
class ULandscapeInfoMap : public UObject
{
public:
	uint8                                        Pad_2DF8[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeInfoMap* GetDefaultObj();

};

// 0x20 (0x770 - 0x750)
// Class Landscape.LandscapeNaniteComponent
class ULandscapeNaniteComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 ProxyContentId;                                    // 0x750(0x10)(None)
	bool                                         bEnabled;                                          // 0x760(0x1)(None)
	uint8                                        Pad_2DF9[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeNaniteComponent* GetDefaultObj();

};

// 0x18 (0x4D0 - 0x4B8)
// Class Landscape.LandscapeSplineActor
class ALandscapeSplineActor : public AActor
{
public:
	uint8                                        Pad_2DFA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 LandscapeGuid;                                     // 0x4C0(0x10)(None)

	static class UClass* StaticClass();
	static class ALandscapeSplineActor* GetDefaultObj();

};

// 0x10 (0x4C8 - 0x4B8)
// Class Landscape.LandscapeSplineMeshesActor
class ALandscapeSplineMeshesActor : public APartitionActor
{
public:
	TArray<class UStaticMeshComponent*>          StaticMeshComponents;                              // 0x4B8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ALandscapeSplineMeshesActor* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class Landscape.LandscapeSubsystem
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_2DFE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULandscapeSubsystem* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	class FName                                  ParameterName;                                     // 0xB0(0x8)(None)
	float                                        PreviewWeight;                                     // 0xB8(0x4)(None)
	uint8                                        Pad_2E00[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerSample* GetDefaultObj();

};

// 0x60 (0x110 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      LayerUsed;                                         // 0xB0(0x28)(ZeroConstructor)
	struct FExpressionInput                      LayerNotUsed;                                      // 0xD8(0x28)(ZeroConstructor)
	class FName                                  ParameterName;                                     // 0x100(0x8)(None)
	uint8                                        PreviewUsed : 1;                                   // Mask: 0x1, PropSize: 0x10x108(0x1)(None)
	uint8                                        Pad_2E09[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerSwitch* GetDefaultObj();

};

// 0x78 (0x128 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Base;                                              // 0xB0(0x28)(ZeroConstructor)
	struct FExpressionInput                      Layer;                                             // 0xD8(0x28)(ZeroConstructor)
	class FName                                  ParameterName;                                     // 0x100(0x8)(None)
	float                                        PreviewWeight;                                     // 0x108(0x4)(None)
	uint8                                        Pad_2E0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ConstBase;                                         // 0x110(0x18)(None)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerWeight* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>        Inputs;                                            // 0xB0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapePhysicalMaterialOutput* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeVisibilityMask
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeVisibilityMask* GetDefaultObj();

};

}


