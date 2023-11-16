#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class PCG.PCGAttributeExtractorTestObject
class UPCGAttributeExtractorTestObject : public UObject
{
public:
	double                                       DoubleValue;                                       // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGAttributeExtractorTestObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGAttributePropertySelectorBlueprintHelpers
class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGAttributePropertySelectorBlueprintHelpers* GetDefaultObj();

	void SetPointProperty(const struct FPCGAttributePropertySelector& Selector, enum class EPCGPointProperties InPointProperty, bool ReturnValue);
	void SetAttributeName(const struct FPCGAttributePropertySelector& Selector, class FName InAttributeName, bool ReturnValue);
	void GetName(const struct FPCGAttributePropertySelector& Selector, class FName ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGData
class UPCGData : public UObject
{
public:
	uint64                                       UID;                                               // 0x28(0x8)(None)
	uint8                                        Pad_197E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGData* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class PCG.PCGSpatialData
class UPCGSpatialData : public UPCGData
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x38(0x8)(ZeroConstructor)
	class UPCGMetadata*                          MetaData;                                          // 0x40(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGSpatialData* GetDefaultObj();

	void UnionWith(class UPCGSpatialData* InOther, class UPCGUnionData* ReturnValue);
	void ToPointDataWithContext(const struct FPCGContext& Context, class UPCGPointData* ReturnValue);
	void ToPointData(class UPCGPointData* ReturnValue);
	void Subtract(class UPCGSpatialData* InOther, class UPCGDifferenceData* ReturnValue);
	void SamplePoint(const struct FTransform& Transform, const struct FBox& Bounds, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void ProjectPoint(const struct FTransform& InTransform, const struct FBox& InBounds, const struct FPCGProjectionParams& InParams, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void ProjectOn(class UPCGSpatialData* InOther, const struct FPCGProjectionParams& InParams, class UPCGSpatialData* ReturnValue);
	void MutableMetadata(class UPCGMetadata* ReturnValue);
	void IntersectWith(class UPCGSpatialData* InOther, class UPCGIntersectionData* ReturnValue);
	void InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes);
	void HasNonTrivialTransform(bool ReturnValue);
	void GetStrictBounds(const struct FBox& ReturnValue);
	void GetNormal(const struct FVector& ReturnValue);
	void GetDimension(int32 ReturnValue);
	void GetDensityAtPosition(const struct FVector& InPosition, float ReturnValue);
	void GetBounds(const struct FBox& ReturnValue);
	void CreateEmptyMetadata(class UPCGMetadata* ReturnValue);
	void ConstMetadata(class UPCGMetadata* ReturnValue);
};

// 0x50 (0x98 - 0x48)
// Class PCG.PCGSpatialDataWithPointCache
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{
public:
	class UPCGPointData*                         CachedPointData;                                   // 0x48(0x8)(ZeroConstructor)
	TArray<struct FBox>                          CachedBoundedPointDataBoxes;                       // 0x50(0x10)(None)
	TArray<class UPCGPointData*>                 CachedBoundedPointData;                            // 0x60(0x10)(ZeroConstructor)
	uint8                                        Pad_19FB[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSpatialDataWithPointCache* GetDefaultObj();

};

// 0xF8 (0x190 - 0x98)
// Class PCG.PCGCollisionShapeData
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_1A00[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xA0(0x60)(None)
	uint8                                        Pad_1A01[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  CachedBounds;                                      // 0x118(0x38)(None)
	struct FBox                                  CachedStrictBounds;                                // 0x150(0x38)(None)
	uint8                                        Pad_1A02[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGCollisionShapeData* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class PCG.PCGSettingsInterface
class UPCGSettingsInterface : public UPCGData
{
public:
	bool                                         bEnabled;                                          // 0x38(0x1)(None)
	bool                                         bDebug;                                            // 0x39(0x1)(None)
	uint8                                        Pad_1A05[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSettingsInterface* GetDefaultObj();

};

// 0x108 (0x148 - 0x40)
// Class PCG.PCGSettings
class UPCGSettings : public UPCGSettingsInterface
{
public:
	int32                                        Seed;                                              // 0x40(0x4)(None)
	uint8                                        Pad_1A08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FString>                          FilterOnTags;                                      // 0x48(0x50)(None)
	bool                                         bPassThroughFilteredOutInputs;                     // 0x98(0x1)(None)
	uint8                                        Pad_1A09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FString>                          TagsAppliedOnOutput;                               // 0xA0(0x50)(None)
	bool                                         bUseSeed;                                          // 0xF0(0x1)(None)
	uint8                                        Pad_1A0B[0x3F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPCGSettingsOverridableParam>  CachedOverridableParams;                           // 0x130(0x10)(None)
	uint8                                        Pad_1A0C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGDistanceSettings
class UPCGDistanceSettings : public UPCGSettings
{
public:
	class FName                                  AttributeName;                                     // 0x148(0x8)(None)
	bool                                         bOutputDistanceVector;                             // 0x150(0x1)(None)
	bool                                         bSetDensity;                                       // 0x151(0x1)(None)
	uint8                                        Pad_1A10[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaximumDistance;                                   // 0x158(0x8)(None)
	enum class EPCGDistanceShape                 SourceShape;                                       // 0x160(0x4)(None)
	enum class EPCGDistanceShape                 TargetShape;                                       // 0x164(0x4)(None)

	static class UClass* StaticClass();
	static class UPCGDistanceSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PCG.PCGEngineSettings
class UPCGEngineSettings : public UObject
{
public:
	struct FVector                               VolumeScale;                                       // 0x28(0x18)(None)
	bool                                         bGenerateOnDrop;                                   // 0x40(0x1)(None)
	uint8                                        Pad_1A15[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGEngineSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGGatherSettings
class UPCGGatherSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGatherSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGNormalToDensitySettings
class UPCGNormalToDensitySettings : public UPCGSettings
{
public:
	struct FVector                               Normal;                                            // 0x148(0x18)(None)
	double                                       Offset;                                            // 0x160(0x8)(None)
	double                                       Strength;                                          // 0x168(0x8)(None)
	enum class EPCGNormalToDensityMode           DensityMode;                                       // 0x170(0x1)(None)
	uint8                                        Pad_1A18[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGNormalToDensitySettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGRerouteSettings
class UPCGRerouteSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGRerouteSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGUserParameterGetSettings
class UPCGUserParameterGetSettings : public UPCGSettings
{
public:
	struct FGuid                                 PropertyGuid;                                      // 0x148(0x10)(None)
	class FName                                  PropertyName;                                      // 0x158(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGUserParameterGetSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class PCG.PCGUserParametersData
class UPCGUserParametersData : public UPCGData
{
public:
	class UPCGGraphInterface*                    OriginalGraph;                                     // 0x38(0x8)(ZeroConstructor)
	struct FInstancedStruct                      UserParameters;                                    // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGUserParametersData* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class PCG.PCGDifferenceData
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{
public:
	bool                                         bDiffMetadata;                                     // 0x98(0x1)(None)
	uint8                                        Pad_1A26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPCGSpatialData*                       Source;                                            // 0xA0(0x8)(ZeroConstructor)
	class UPCGSpatialData*                       Difference;                                        // 0xA8(0x8)(ZeroConstructor)
	class UPCGUnionData*                         DifferencesUnion;                                  // 0xB0(0x8)(ZeroConstructor)
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0xB8(0x1)(None)
	uint8                                        Pad_1A27[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGDifferenceData* GetDefaultObj();

	void SetDensityFunction(enum class EPCGDifferenceDensityFunction InDensityFunction);
	void Initialize(class UPCGSpatialData* InData);
	void AddDifference(class UPCGSpatialData* InDifference);
};

// 0x88 (0x120 - 0x98)
// Class PCG.PCGIntersectionData
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x98(0x1)(None)
	uint8                                        Pad_1A2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPCGSpatialData*                       A;                                                 // 0xA0(0x8)(ZeroConstructor)
	class UPCGSpatialData*                       B;                                                 // 0xA8(0x8)(ZeroConstructor)
	struct FBox                                  CachedBounds;                                      // 0xB0(0x38)(None)
	struct FBox                                  CachedStrictBounds;                                // 0xE8(0x38)(None)

	static class UClass* StaticClass();
	static class UPCGIntersectionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
};

// 0x68 (0x100 - 0x98)
// Class PCG.PCGSurfaceData
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_1A30[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xA0(0x60)(None)

	static class UClass* StaticClass();
	static class UPCGSurfaceData* GetDefaultObj();

};

// 0x70 (0x170 - 0x100)
// Class PCG.PCGLandscapeData
class UPCGLandscapeData : public UPCGSurfaceData
{
public:
	TArray<TSoftObjectPtr<class ALandscapeProxy>> Landscapes;                                        // 0x100(0x10)(ZeroConstructor)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(None)
	bool                                         bHeightOnly;                                       // 0x148(0x1)(None)
	bool                                         bUseMetadata;                                      // 0x149(0x1)(None)
	uint8                                        Pad_1A33[0x26];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGLandscapeData* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class PCG.PCGPolyLineData
class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
{
public:

	static class UClass* StaticClass();
	static class UPCGPolyLineData* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class PCG.PCGLandscapeSplineData
class UPCGLandscapeSplineData : public UPCGPolyLineData
{
public:
	TWeakObjectPtr<class ULandscapeSplinesComponent> Spline;                                            // 0x98(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGLandscapeSplineData* GetDefaultObj();

};

// 0x128 (0x170 - 0x48)
// Class PCG.PCGPointData
class UPCGPointData : public UPCGSpatialData
{
public:
	TArray<struct FPCGPoint>                     Points;                                            // 0x48(0x10)(None)
	uint8                                        Pad_1A41[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGPointData* GetDefaultObj();

	void SetPoints(const TArray<struct FPCGPoint>& InPoints);
	void GetPoints(const TArray<struct FPCGPoint>& ReturnValue);
	void GetPoint(int32 Index, const struct FPCGPoint& ReturnValue);
	void CopyPointsFrom(class UPCGPointData* InData, const TArray<int32>& InDataIndices);
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGPrimitiveData
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(None)
	TWeakObjectPtr<class UPrimitiveComponent>    Primitive;                                         // 0xB0(0x8)(ZeroConstructor)
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(None)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(None)

	static class UClass* StaticClass();
	static class UPCGPrimitiveData* GetDefaultObj();

};

// 0xA0 (0x138 - 0x98)
// Class PCG.PCGProjectionData
class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{
public:
	class UPCGSpatialData*                       Source;                                            // 0x98(0x8)(ZeroConstructor)
	class UPCGSpatialData*                       Target;                                            // 0xA0(0x8)(ZeroConstructor)
	struct FBox                                  CachedBounds;                                      // 0xA8(0x38)(None)
	struct FBox                                  CachedStrictBounds;                                // 0xE0(0x38)(None)
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x118(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGProjectionData* GetDefaultObj();

};

// 0xB0 (0x1B0 - 0x100)
// Class PCG.PCGBaseTextureData
class UPCGBaseTextureData : public UPCGSurfaceData
{
public:
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x100(0x1)(None)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x101(0x1)(None)
	uint8                                        Pad_1A4E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TexelSize;                                         // 0x104(0x4)(None)
	bool                                         bUseAdvancedTiling;                                // 0x108(0x1)(None)
	uint8                                        Pad_1A4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Tiling;                                            // 0x110(0x10)(None)
	struct FVector2D                             CenterOffset;                                      // 0x120(0x10)(None)
	float                                        Rotation;                                          // 0x130(0x4)(None)
	bool                                         bUseTileBounds;                                    // 0x134(0x1)(None)
	uint8                                        Pad_1A51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox2D                                TileBounds;                                        // 0x138(0x28)(None)
	TArray<struct FLinearColor>                  ColorData;                                         // 0x160(0x10)(None)
	struct FBox                                  Bounds;                                            // 0x170(0x38)(None)
	int32                                        Height;                                            // 0x1A8(0x4)(None)
	int32                                        Width;                                             // 0x1AC(0x4)(None)

	static class UClass* StaticClass();
	static class UPCGBaseTextureData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGRenderTargetData
class UPCGRenderTargetData : public UPCGBaseTextureData
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x1B0(0x8)(ZeroConstructor)
	uint8                                        Pad_1A6D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGRenderTargetData* GetDefaultObj();

	void Initialize(class UTextureRenderTarget2D* InRenderTarget, const struct FTransform& InTransform);
};

// 0x1A8 (0x240 - 0x98)
// Class PCG.PCGSplineData
class UPCGSplineData : public UPCGPolyLineData
{
public:
	uint8                                        Pad_1A73[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGSplineStruct                      SplineStruct;                                      // 0xA0(0x160)(ZeroConstructor)
	struct FBox                                  CachedBounds;                                      // 0x200(0x38)(None)
	uint8                                        Pad_1A74[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSplineData* GetDefaultObj();

};

// 0x18 (0x150 - 0x138)
// Class PCG.PCGSplineProjectionData
class UPCGSplineProjectionData : public UPCGProjectionData
{
public:
	struct FInterpCurveVector2D                  ProjectedPosition;                                 // 0x138(0x18)(None)

	static class UClass* StaticClass();
	static class UPCGSplineProjectionData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGTextureData
class UPCGTextureData : public UPCGBaseTextureData
{
public:
	TWeakObjectPtr<class UTexture2D>             Texture;                                           // 0x1B0(0x8)(ZeroConstructor)
	uint8                                        Pad_1A80[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGTextureData* GetDefaultObj();

	void Initialize(class UTexture2D* InTexture, const struct FTransform& InTransform);
};

// 0x98 (0x130 - 0x98)
// Class PCG.PCGUnionData
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{
public:
	TArray<class UPCGSpatialData*>               Data;                                              // 0x98(0x10)(ZeroConstructor)
	class UPCGSpatialData*                       FirstNonTrivialTransformData;                      // 0xA8(0x8)(ZeroConstructor)
	enum class EPCGUnionType                     UnionType;                                         // 0xB0(0x1)(None)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0xB1(0x1)(None)
	uint8                                        Pad_1A8B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(None)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(None)
	int32                                        CachedDimension;                                   // 0x128(0x4)(None)
	uint8                                        Pad_1A8C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGUnionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
	void AddData(class UPCGSpatialData* InData);
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGVolumeData
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(None)
	TWeakObjectPtr<class AVolume>                Volume;                                            // 0xB0(0x8)(ZeroConstructor)
	struct FBox                                  Bounds;                                            // 0xB8(0x38)(None)
	struct FBox                                  StrictBounds;                                      // 0xF0(0x38)(None)

	static class UClass* StaticClass();
	static class UPCGVolumeData* GetDefaultObj();

};

// 0x88 (0x1B0 - 0x128)
// Class PCG.PCGWorldVolumetricData
class UPCGWorldVolumetricData : public UPCGVolumeData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x128(0x8)(ZeroConstructor)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x130(0x8)(ZeroConstructor)
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x138(0x78)(None)

	static class UClass* StaticClass();
	static class UPCGWorldVolumetricData* GetDefaultObj();

};

// 0x100 (0x200 - 0x100)
// Class PCG.PCGWorldRayHitData
class UPCGWorldRayHitData : public UPCGSurfaceData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x100(0x8)(ZeroConstructor)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x108(0x8)(ZeroConstructor)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(None)
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(None)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitData* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGMetadataSettingsBase
class UPCGMetadataSettingsBase : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x148(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataSettingsBase* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBitwiseSettings
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBitwiseOperation      Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AD8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataBitwiseSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBooleanSettings
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBooleanOperation      Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AD9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataBooleanSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakTransformSettings
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakTransformSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakVectorSettings
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakVectorSettings* GetDefaultObj();

};

// 0x50 (0x1B8 - 0x168)
// Class PCG.PCGMetadataCompareSettings
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataCompareOperation      Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AE1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)
	double                                       Tolerance;                                         // 0x1B0(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataCompareSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGMetadataOperationSettings
class UPCGMetadataOperationSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(None)
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x168(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataOperationSettings* GetDefaultObj();

};

// 0x60 (0x1C8 - 0x168)
// Class PCG.PCGMetadataMakeTransformSettings
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataMakeTransformSettings* GetDefaultObj();

};

// 0x88 (0x1F0 - 0x168)
// Class PCG.PCGMetadataMakeVectorSettings
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource4;                                      // 0x1C8(0x20)(None)
	enum class EPCGMetadataTypes                 OutputType;                                        // 0x1E8(0x1)(None)
	enum class EPCGMetadataMakeVector3           MakeVector3Op;                                     // 0x1E9(0x1)(None)
	enum class EPCGMetadataMakeVector4           MakeVector4Op;                                     // 0x1EA(0x1)(None)
	uint8                                        Pad_1AE6[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGMetadataMakeVectorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataMathsSettings
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataMathsOperation        Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AE8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataMathsSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMetadataPartitionSettings
class UPCGMetadataPartitionSettings : public UPCGSettings
{
public:
	class FName                                  PartitionAttribute;                                // 0x148(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataPartitionSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGMetadataRenameSettings
class UPCGMetadataRenameSettings : public UPCGSettings
{
public:
	class FName                                  AttributeToRename;                                 // 0x148(0x8)(None)
	class FName                                  NewAttributeName;                                  // 0x150(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataRenameSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataRotatorSettings
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataRotatorOperation      Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AEE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataRotatorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataTransformSettings
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTransformOperation    Operation;                                         // 0x168(0x2)(None)
	enum class EPCGTransformLerpMode             TransformLerpMode;                                 // 0x16A(0x2)(None)
	uint8                                        Pad_1AEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataTransformSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataTrigSettings
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTrigOperation         Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AF1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataTrigSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataVectorSettings
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataVectorOperation       Operation;                                         // 0x168(0x2)(None)
	uint8                                        Pad_1AF2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(None)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGMetadataVectorSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGAttributeFilterSettings
class UPCGAttributeFilterSettings : public UPCGSettings
{
public:
	enum class EPCGAttributeFilterOperation      Operation;                                         // 0x148(0x4)(None)
	uint8                                        Pad_1AF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SelectedAttributes;                                // 0x150(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGAttributeFilterSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeGetFromPointIndexSettings
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(None)
	int32                                        Index;                                             // 0x168(0x4)(None)
	class FName                                  OutputAttributeName;                               // 0x16C(0x8)(None)
	uint8                                        Pad_1AF4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGAttributeGetFromPointIndexSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeReduceSettings
class UPCGAttributeReduceSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(None)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(None)
	enum class EPCGAttributeReduceOperation      Operation;                                         // 0x170(0x4)(None)
	uint8                                        Pad_1AF6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGAttributeReduceSettings* GetDefaultObj();

};

// 0x58 (0x1A0 - 0x148)
// Class PCG.PCGAttributeSelectSettings
class UPCGAttributeSelectSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(None)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(None)
	enum class EPCGAttributeSelectOperation      Operation;                                         // 0x170(0x4)(None)
	enum class EPCGAttributeSelectAxis           Axis;                                              // 0x174(0x4)(None)
	uint8                                        Pad_1AF7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CustomAxis;                                        // 0x180(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGAttributeSelectSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGAttributeTransferSettings
class UPCGAttributeTransferSettings : public UPCGSettings
{
public:
	class FName                                  SourceAttributeName;                               // 0x148(0x8)(None)
	class FName                                  TargetAttributeName;                               // 0x150(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGAttributeTransferSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGBoundsModifierSettings
class UPCGBoundsModifierSettings : public UPCGSettings
{
public:
	enum class EPCGBoundsModifierMode            Mode;                                              // 0x148(0x1)(None)
	uint8                                        Pad_1AF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BoundsMin;                                         // 0x150(0x18)(None)
	struct FVector                               BoundsMax;                                         // 0x168(0x18)(None)
	bool                                         bAffectSteepness;                                  // 0x180(0x1)(None)
	uint8                                        Pad_1AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Steepness;                                         // 0x184(0x4)(None)

	static class UClass* StaticClass();
	static class UPCGBoundsModifierSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGCollapseSettings
class UPCGCollapseSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGCollapseSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGCopyPointsSettings
class UPCGCopyPointsSettings : public UPCGSettings
{
public:
	enum class EPCGCopyPointsInheritanceMode     RotationInheritance;                               // 0x148(0x1)(None)
	enum class EPCGCopyPointsInheritanceMode     ScaleInheritance;                                  // 0x149(0x1)(None)
	enum class EPCGCopyPointsInheritanceMode     ColorInheritance;                                  // 0x14A(0x1)(None)
	enum class EPCGCopyPointsInheritanceMode     SeedInheritance;                                   // 0x14B(0x1)(None)
	enum class EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;                              // 0x14C(0x1)(None)
	uint8                                        Pad_1AFB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGCopyPointsSettings* GetDefaultObj();

};

// 0x188 (0x2D0 - 0x148)
// Class PCG.PCGCreateAttributeSettings
class UPCGCreateAttributeSettings : public UPCGSettings
{
public:
	class FName                                  OutputAttributeName;                               // 0x148(0x8)(None)
	bool                                         bFromSourceParam;                                  // 0x150(0x1)(None)
	bool                                         bDisplayFromSourceParamSetting;                    // 0x151(0x1)(None)
	uint8                                        Pad_1AFC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourceParamAttributeName;                          // 0x154(0x8)(None)
	uint8                                        Pad_1AFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x160(0x170)(None)

	static class UClass* StaticClass();
	static class UPCGCreateAttributeSettings* GetDefaultObj();

};

// 0x0 (0x2D0 - 0x2D0)
// Class PCG.PCGCreateAttributeSetSettings
class UPCGCreateAttributeSetSettings : public UPCGCreateAttributeSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGCreateAttributeSetSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGCreateSplineSettings
class UPCGCreateSplineSettings : public UPCGSettings
{
public:
	enum class EPCGCreateSplineMode              Mode;                                              // 0x148(0x1)(None)
	bool                                         bClosedLoop;                                       // 0x149(0x1)(None)
	bool                                         bLinear;                                           // 0x14A(0x1)(None)
	bool                                         bApplyCustomTangents;                              // 0x14B(0x1)(None)
	class FName                                  ArriveTangentAttribute;                            // 0x14C(0x8)(None)
	class FName                                  LeaveTangentAttribute;                             // 0x154(0x8)(None)
	uint8                                        Pad_1AFE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGCreateSplineSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGDataFromActorSettings
class UPCGDataFromActorSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(ZeroConstructor)
	enum class EPCGGetDataFromActorMode          Mode;                                              // 0x168(0x1)(None)
	bool                                         bDisplayModeSettings;                              // 0x169(0x1)(None)
	uint8                                        Pad_1B00[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExpectedPins;                                      // 0x170(0x10)(None)
	class FName                                  PropertyName;                                      // 0x180(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGDataFromActorSettings* GetDefaultObj();

};

// 0x48 (0x190 - 0x148)
// Class PCG.PCGDataTableRowToParamDataSettings
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{
public:
	class FName                                  RowName;                                           // 0x148(0x8)(None)
	class FString                                PathOverride;                                      // 0x150(0x10)(None)
	TSoftObjectPtr<class UDataTable>             DataTable;                                         // 0x160(0x30)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGDataTableRowToParamDataSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGDebugSettings
class UPCGDebugSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGDebugSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGDensityFilterSettings
class UPCGDensityFilterSettings : public UPCGSettings
{
public:
	float                                        LowerBound;                                        // 0x148(0x4)(None)
	float                                        UpperBound;                                        // 0x14C(0x4)(None)
	bool                                         bInvertFilter;                                     // 0x150(0x1)(None)
	uint8                                        Pad_1B04[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGDensityFilterSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGDensityNoiseSettings
class UPCGDensityNoiseSettings : public UPCGSettings
{
public:
	enum class EPCGDensityNoiseMode              DensityMode;                                       // 0x148(0x1)(None)
	uint8                                        Pad_1B06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DensityNoiseMin;                                   // 0x14C(0x4)(None)
	float                                        DensityNoiseMax;                                   // 0x150(0x4)(None)
	bool                                         bInvertSourceDensity;                              // 0x154(0x1)(None)
	uint8                                        Pad_1B07[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGDensityNoiseSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGLinearDensityRemapSettings
class UPCGLinearDensityRemapSettings : public UPCGSettings
{
public:
	float                                        RemapMin;                                          // 0x148(0x4)(None)
	float                                        RemapMax;                                          // 0x14C(0x4)(None)
	bool                                         bMultiplyDensity;                                  // 0x150(0x1)(None)
	uint8                                        Pad_1B09[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGLinearDensityRemapSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGDensityRemapSettings
class UPCGDensityRemapSettings : public UPCGSettings
{
public:
	float                                        InRangeMin;                                        // 0x148(0x4)(None)
	float                                        InRangeMax;                                        // 0x14C(0x4)(None)
	float                                        OutRangeMin;                                       // 0x150(0x4)(None)
	float                                        OutRangeMax;                                       // 0x154(0x4)(None)
	bool                                         bExcludeValuesOutsideInputRange;                   // 0x158(0x1)(None)
	uint8                                        Pad_1B0D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGDensityRemapSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGDifferenceSettings
class UPCGDifferenceSettings : public UPCGSettings
{
public:
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0x148(0x1)(None)
	enum class EPCGDifferenceMode                Mode;                                              // 0x149(0x1)(None)
	bool                                         bDiffMetadata;                                     // 0x14A(0x1)(None)
	uint8                                        Pad_1B0E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGDifferenceSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGBlueprintElement
class UPCGBlueprintElement : public UObject
{
public:
	bool                                         bCreatesArtifacts;                                 // 0x28(0x1)(None)
	bool                                         bCacheable;                                        // 0x29(0x1)(None)
	bool                                         bCanBeMultithreaded;                               // 0x2A(0x1)(None)
	uint8                                        Pad_1B3B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPCGPinProperties>             CustomInputPins;                                   // 0x30(0x10)(None)
	TArray<struct FPCGPinProperties>             CustomOutputPins;                                  // 0x40(0x10)(None)
	bool                                         bHasDefaultInPin;                                  // 0x50(0x1)(None)
	bool                                         bHasDefaultOutPin;                                 // 0x51(0x1)(None)
	uint8                                        Pad_1B3C[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGBlueprintElement* GetDefaultObj();

	void VariableLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, class UPCGMetadata* OutMetadata, const TArray<struct FPCGPoint>& ReturnValue);
	void VariableLoop(const struct FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData* OutData, class UPCGPointData* OptionalOutData);
	void PointLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void PointLoop(const struct FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData* OutData, class UPCGPointData* OptionalOutData);
	void OutputLabels(TSet<class FName> ReturnValue);
	void NodeTypeOverride(enum class EPCGSettingsType ReturnValue);
	void NodeTitleOverride(class FName ReturnValue);
	void NodeColorOverride(const struct FLinearColor& ReturnValue);
	void NestedLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, const struct FPCGPoint& InOuterPoint, const struct FPCGPoint& InInnerPoint, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void NestedLoop(const struct FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData* OutData, class UPCGPointData* OptionalOutData);
	void IterationLoopBody(const struct FPCGContext& InContext, int64 Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void IterationLoop(const struct FPCGContext& InContext, int64 NumIterations, class UPCGPointData* OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData);
	void InputLabels(TSet<class FName> ReturnValue);
	void GetSeed(const struct FPCGContext& InContext, int32 ReturnValue);
	void GetRandomStream(const struct FPCGContext& InContext, const struct FRandomStream& ReturnValue);
	void ExecuteWithContext(const struct FPCGContext& InContext, const struct FPCGDataCollection& Input, const struct FPCGDataCollection& Output);
	void Execute(const struct FPCGDataCollection& Input, const struct FPCGDataCollection& Output);
};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGBlueprintSettings
class UPCGBlueprintSettings : public UPCGSettings
{
public:
	class UClass*                                BlueprintElementType;                              // 0x148(0x8)(ZeroConstructor)
	class UPCGBlueprintElement*                  BlueprintElementInstance;                          // 0x150(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGBlueprintSettings* GetDefaultObj();

	void SetElementType(class UClass* InElementType, class UPCGBlueprintElement* ElementInstance);
	void GetElementType(class UClass* ReturnValue);
};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGFilterByTagSettings
class UPCGFilterByTagSettings : public UPCGSettings
{
public:
	enum class EPCGFilterByTagOperation          Operation;                                         // 0x148(0x4)(None)
	uint8                                        Pad_1B4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SelectedTags;                                      // 0x150(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGFilterByTagSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGIntersectionSettings
class UPCGIntersectionSettings : public UPCGSettings
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x148(0x1)(None)
	uint8                                        Pad_1B50[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGIntersectionSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMergeSettings
class UPCGMergeSettings : public UPCGSettings
{
public:
	bool                                         bMergeMetadata;                                    // 0x148(0x1)(None)
	uint8                                        Pad_1B51[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGMergeSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGPointExtentsModifierSettings
class UPCGPointExtentsModifierSettings : public UPCGSettings
{
public:
	struct FVector                               Extents;                                           // 0x148(0x18)(None)
	enum class EPCGPointExtentsModifierMode      Mode;                                              // 0x160(0x1)(None)
	uint8                                        Pad_1B52[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGPointExtentsModifierSettings* GetDefaultObj();

};

// 0x1C8 (0x310 - 0x148)
// Class PCG.PCGPointFilterSettings
class UPCGPointFilterSettings : public UPCGSettings
{
public:
	enum class EPCGPointFilterOperator           Operator;                                          // 0x148(0x1)(None)
	uint8                                        Pad_1B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         TargetAttribute;                                   // 0x150(0x20)(None)
	bool                                         bUseConstantThreshold;                             // 0x170(0x1)(None)
	uint8                                        Pad_1B56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGAttributePropertySelector         ThresholdAttribute;                                // 0x178(0x20)(None)
	bool                                         bUseSpatialQuery;                                  // 0x198(0x1)(None)
	uint8                                        Pad_1B59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x1A0(0x170)(None)

	static class UClass* StaticClass();
	static class UPCGPointFilterSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGPointMatchAndSetSettings
class UPCGPointMatchAndSetSettings : public UPCGSettings
{
public:
	class UClass*                                MatchAndSetType;                                   // 0x148(0x8)(ZeroConstructor)
	class UPCGMatchAndSetBase*                   MatchAndSetInstance;                               // 0x150(0x8)(ZeroConstructor)
	struct FPCGAttributePropertySelector         SetTarget;                                         // 0x158(0x20)(None)
	enum class EPCGMetadataTypes                 SetTargetType;                                     // 0x178(0x1)(None)
	uint8                                        Pad_1B68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPCGMetadataTypesConstantStructStringMode SetTargetStringMode;                               // 0x17C(0x4)(None)

	static class UClass* StaticClass();
	static class UPCGPointMatchAndSetSettings* GetDefaultObj();

	void SetMatchAndSetType(class UClass* InMatchAndSetType);
};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGPointSamplerSettings
class UPCGPointSamplerSettings : public UPCGSettings
{
public:
	float                                        Ratio;                                             // 0x148(0x4)(None)
	uint8                                        Pad_1B6E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGPointSamplerSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGProjectionSettings
class UPCGProjectionSettings : public UPCGSettings
{
public:
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x148(0x20)(None)

	static class UClass* StaticClass();
	static class UPCGProjectionSettings* GetDefaultObj();

};

// 0x68 (0x1B0 - 0x148)
// Class PCG.PCGPropertyToParamDataSettings
class UPCGPropertyToParamDataSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(ZeroConstructor)
	bool                                         bSelectComponent;                                  // 0x168(0x1)(None)
	uint8                                        Pad_1B73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ComponentClass;                                    // 0x170(0x8)(ZeroConstructor)
	class FName                                  PropertyName;                                      // 0x178(0x8)(None)
	bool                                         bExtractObjectAndStruct;                           // 0x180(0x1)(None)
	uint8                                        Pad_1B75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OutputAttributeName;                               // 0x184(0x8)(None)
	bool                                         bAlwaysRequeryActors;                              // 0x18C(0x1)(None)
	enum class EPCGActorSelection                ActorSelection;                                    // 0x18D(0x1)(None)
	uint8                                        Pad_1B78[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActorSelectionTag;                                 // 0x190(0x8)(None)
	class FName                                  ActorSelectionName;                                // 0x198(0x8)(None)
	class UClass*                                ActorSelectionClass;                               // 0x1A0(0x8)(ZeroConstructor)
	enum class EPCGActorFilter                   ActorFilter;                                       // 0x1A8(0x1)(None)
	bool                                         bIncludeChildren;                                  // 0x1A9(0x1)(None)
	uint8                                        Pad_1B79[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGPropertyToParamDataSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGSelfPruningSettings
class UPCGSelfPruningSettings : public UPCGSettings
{
public:
	enum class EPCGSelfPruningType               PruningType;                                       // 0x148(0x1)(None)
	uint8                                        Pad_1B8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadiusSimilarityFactor;                            // 0x14C(0x4)(None)
	bool                                         bRandomizedPruning;                                // 0x150(0x1)(None)
	uint8                                        Pad_1B8C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSelfPruningSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGBaseSubgraphSettings
class UPCGBaseSubgraphSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGBaseSubgraphSettings* GetDefaultObj();

};

// 0x48 (0x190 - 0x148)
// Class PCG.PCGSpawnActorSettings
class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
{
public:
	class UClass*                                TemplateActorClass;                                // 0x148(0x8)(ZeroConstructor)
	TArray<class FName>                          PostSpawnFunctionNames;                            // 0x150(0x10)(None)
	enum class EPCGSpawnActorOption              Option;                                            // 0x160(0x1)(None)
	bool                                         bForceDisableActorParsing;                         // 0x161(0x1)(None)
	enum class EPCGSpawnActorGenerationTrigger   bGenerationTrigger;                                // 0x162(0x1)(None)
	bool                                         bInheritActorTags;                                 // 0x163(0x1)(None)
	uint8                                        Pad_1B8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TagsToAddOnActors;                                 // 0x168(0x10)(None)
	class AActor*                                TemplateActor;                                     // 0x178(0x8)(ZeroConstructor)
	TArray<struct FPCGActorPropertyOverride>     ActorOverrides;                                    // 0x180(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGSpawnActorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class PCG.PCGNode
class UPCGNode : public UObject
{
public:
	class FName                                  NodeTitle;                                         // 0x28(0x8)(None)
	class UPCGSettingsInterface*                 SettingsInterface;                                 // 0x30(0x8)(ZeroConstructor)
	TArray<class UPCGNode*>                      OutboundNodes;                                     // 0x38(0x10)(ZeroConstructor)
	TArray<class UPCGEdge*>                      InboundEdges;                                      // 0x48(0x10)(ZeroConstructor)
	TArray<class UPCGEdge*>                      OutboundEdges;                                     // 0x58(0x10)(ZeroConstructor)
	TArray<class UPCGPin*>                       InputPins;                                         // 0x68(0x10)(ZeroConstructor)
	TArray<class UPCGPin*>                       OutputPins;                                        // 0x78(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGNode* GetDefaultObj();

	void RemoveEdgeTo(class FName FromPinLable, class UPCGNode* To, class FName ToPinLabel, bool ReturnValue);
	void GetSettings(class UPCGSettings* ReturnValue);
	void GetGraph(class UPCGGraph* ReturnValue);
	void AddEdgeTo(class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode* ReturnValue);
};

// 0x8 (0x90 - 0x88)
// Class PCG.PCGBaseSubgraphNode
class UPCGBaseSubgraphNode : public UPCGNode
{
public:
	bool                                         bDynamicGraph;                                     // 0x88(0x1)(None)
	uint8                                        Pad_1BA8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGBaseSubgraphNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class PCG.PCGSpawnActorNode
class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
{
public:

	static class UClass* StaticClass();
	static class UPCGSpawnActorNode* GetDefaultObj();

};

// 0xC8 (0x210 - 0x148)
// Class PCG.PCGSplineSamplerSettings
class UPCGSplineSamplerSettings : public UPCGSettings
{
public:
	struct FPCGSplineSamplerParams               SamplerParams;                                     // 0x148(0xC8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGSplineSamplerSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGStaticMeshSpawnerSettings
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{
public:
	class UClass*                                MeshSelectorType;                                  // 0x148(0x8)(ZeroConstructor)
	class UPCGMeshSelectorBase*                  MeshSelectorInstance;                              // 0x150(0x8)(ZeroConstructor)
	class UClass*                                InstancePackerType;                                // 0x158(0x8)(ZeroConstructor)
	class UPCGInstancePackerBase*                InstancePackerInstance;                            // 0x160(0x8)(ZeroConstructor)
	class FName                                  OutAttributeName;                                  // 0x168(0x8)(None)
	TArray<struct FPCGStaticMeshSpawnerEntry>    Meshes;                                            // 0x170(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGStaticMeshSpawnerSettings* GetDefaultObj();

	void SetMeshSelectorType(class UClass* InMeshSelectorType);
	void SetInstancePackerType(class UClass* InInstancePackerType);
};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGSurfaceSamplerSettings
class UPCGSurfaceSamplerSettings : public UPCGSettings
{
public:
	float                                        PointsPerSquaredMeter;                             // 0x148(0x4)(None)
	uint8                                        Pad_1BAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PointExtents;                                      // 0x150(0x18)(None)
	float                                        Looseness;                                         // 0x168(0x4)(None)
	bool                                         bUnbounded;                                        // 0x16C(0x1)(None)
	bool                                         bApplyDensityToPoints;                             // 0x16D(0x1)(None)
	uint8                                        Pad_1BAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PointSteepness;                                    // 0x170(0x4)(None)
	uint8                                        Pad_1BAF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSurfaceSamplerSettings* GetDefaultObj();

};

// 0xF8 (0x240 - 0x148)
// Class PCG.PCGTextureSamplerSettings
class UPCGTextureSamplerSettings : public UPCGSettings
{
public:
	uint8                                        Pad_1BB3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x150(0x60)(None)
	bool                                         bUseAbsoluteTransform;                             // 0x1B0(0x1)(None)
	uint8                                        Pad_1BB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x1B8(0x30)(ZeroConstructor)
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x1E8(0x1)(None)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x1E9(0x1)(None)
	uint8                                        Pad_1BB8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TexelSize;                                         // 0x1EC(0x4)(None)
	bool                                         bUseAdvancedTiling;                                // 0x1F0(0x1)(None)
	uint8                                        Pad_1BB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Tiling;                                            // 0x1F8(0x10)(None)
	struct FVector2D                             CenterOffset;                                      // 0x208(0x10)(None)
	float                                        Rotation;                                          // 0x218(0x4)(None)
	bool                                         bUseTileBounds;                                    // 0x21C(0x1)(None)
	uint8                                        Pad_1BBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TileBoundsMin;                                     // 0x220(0x10)(None)
	struct FVector2D                             TileBoundsMax;                                     // 0x230(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGTextureSamplerSettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGTransformPointsSettings
class UPCGTransformPointsSettings : public UPCGSettings
{
public:
	bool                                         bApplyToAttribute;                                 // 0x148(0x1)(None)
	uint8                                        Pad_1BBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttributeName;                                     // 0x14C(0x8)(None)
	uint8                                        Pad_1BBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetMin;                                         // 0x158(0x18)(None)
	struct FVector                               OffsetMax;                                         // 0x170(0x18)(None)
	bool                                         bAbsoluteOffset;                                   // 0x188(0x1)(None)
	uint8                                        Pad_1BBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationMin;                                       // 0x190(0x18)(None)
	struct FRotator                              RotationMax;                                       // 0x1A8(0x18)(None)
	bool                                         bAbsoluteRotation;                                 // 0x1C0(0x1)(None)
	uint8                                        Pad_1BC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ScaleMin;                                          // 0x1C8(0x18)(None)
	struct FVector                               ScaleMax;                                          // 0x1E0(0x18)(None)
	bool                                         bAbsoluteScale;                                    // 0x1F8(0x1)(None)
	bool                                         bUniformScale;                                     // 0x1F9(0x1)(None)
	bool                                         bRecomputeSeed;                                    // 0x1FA(0x1)(None)
	uint8                                        Pad_1BC2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGTransformPointsSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetLandscapeSettings
class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetLandscapeSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetSplineSettings
class UPCGGetSplineSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetSplineSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetVolumeSettings
class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetVolumeSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetPrimitiveSettings
class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetPrimitiveSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGUnionSettings
class UPCGUnionSettings : public UPCGSettings
{
public:
	enum class EPCGUnionType                     Type;                                              // 0x148(0x1)(None)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0x149(0x1)(None)
	uint8                                        Pad_1BC7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGUnionSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGVolumeSamplerSettings
class UPCGVolumeSamplerSettings : public UPCGSettings
{
public:
	struct FVector                               VoxelSize;                                         // 0x148(0x18)(None)
	bool                                         bUnbounded;                                        // 0x160(0x1)(None)
	uint8                                        Pad_1BCB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGVolumeSamplerSettings* GetDefaultObj();

};

// 0x78 (0x1C0 - 0x148)
// Class PCG.PCGWorldQuerySettings
class UPCGWorldQuerySettings : public UPCGSettings
{
public:
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x148(0x78)(None)

	static class UClass* StaticClass();
	static class UPCGWorldQuerySettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGWorldRayHitSettings
class UPCGWorldRayHitSettings : public UPCGSettings
{
public:
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(None)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitSettings* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class PCG.PCGLandscapeCache
class UPCGLandscapeCache : public UObject
{
public:
	uint8                                        Pad_1BCD[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            CachedLayerNames;                                  // 0x78(0x50)(None)
	uint8                                        Pad_1BCE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGLandscapeCache* GetDefaultObj();

};

// 0xB8 (0x570 - 0x4B8)
// Class PCG.PCGPartitionActor
class APCGPartitionActor : public APartitionActor
{
public:
	struct FGuid                                 PCGGuid;                                           // 0x4B8(0x10)(None)
	uint8                                        Pad_1BD9[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UPCGComponent*, TSoftObjectPtr<class UPCGComponent>> LocalToOriginal;                                   // 0x518(0x50)(ZeroConstructor)
	uint32                                       PCGGridSize;                                       // 0x568(0x4)(None)
	bool                                         bUse2DGrid;                                        // 0x56C(0x1)(None)
	uint8                                        Pad_1BDA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APCGPartitionActor* GetDefaultObj();

	void GetOriginalComponent(class UPCGComponent* LocalComponent, class UPCGComponent* ReturnValue);
	void GetLocalComponent(class UPCGComponent* OriginalComponent, class UPCGComponent* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGActorHelpers
class UPCGActorHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGActorHelpers* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGBlueprintHelpers
class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGBlueprintHelpers* GetDefaultObj();

	void SetSeedFromPosition(const struct FPCGPoint& InPoint);
	void SetLocalCenter(const struct FPCGPoint& InPoint, const struct FVector& InLocalCenter);
	void SetExtents(const struct FPCGPoint& InPoint, const struct FVector& InExtents);
	void GetTransformedBounds(const struct FPCGPoint& InPoint, const struct FBox& ReturnValue);
	void GetTaskId(const struct FPCGContext& Context, int64 ReturnValue);
	void GetSettings(const struct FPCGContext& Context, class UPCGSettings* ReturnValue);
	void GetRandomStream(const struct FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent, const struct FRandomStream& ReturnValue);
	void GetOriginalComponent(const struct FPCGContext& Context, class UPCGComponent* ReturnValue);
	void GetLocalCenter(const struct FPCGPoint& InPoint, const struct FVector& ReturnValue);
	void GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, const struct FVector& Location, const TArray<struct FPCGLandscapeLayerWeight>& ReturnValue);
	void GetInputData(const struct FPCGContext& Context, class UPCGData* ReturnValue);
	void GetExtents(const struct FPCGPoint& InPoint, const struct FVector& ReturnValue);
	void GetComponent(const struct FPCGContext& Context, class UPCGComponent* ReturnValue);
	void GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents, const struct FBox& ReturnValue);
	void GetActorData(const struct FPCGContext& Context, class UPCGData* ReturnValue);
	void GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents, const struct FBox& ReturnValue);
	void CreatePCGDataFromActor(class AActor* InActor, bool bParseActor, class UPCGData* ReturnValue);
	void ComputeSeedFromPosition(const struct FVector& InPosition, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGInstancePackerBase
class UPCGInstancePackerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGInstancePackerBase* GetDefaultObj();

	void PackInstances(const struct FPCGContext& Context, class UPCGSpatialData* InSpatialData, const struct FPCGMeshInstanceList& InstanceList, const struct FPCGPackedCustomData& OutPackedCustomData);
	void PackCustomDataFromAttributes(const struct FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, const TArray<class FName>& AttributeNames, const struct FPCGPackedCustomData& OutPackedCustomData);
	void AddTypeToPacking(int32 TypeId, const struct FPCGPackedCustomData& OutPackedCustomData, bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByAttribute
class UPCGInstancePackerByAttribute : public UPCGInstancePackerBase
{
public:
	TArray<class FName>                          AttributeNames;                                    // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByAttribute* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByRegex
class UPCGInstancePackerByRegex : public UPCGInstancePackerBase
{
public:
	TArray<class FString>                        RegexPatterns;                                     // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByRegex* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class PCG.PCGMatchAndSetBase
class UPCGMatchAndSetBase : public UObject
{
public:
	enum class EPCGMetadataTypes                 Type;                                              // 0x28(0x1)(None)
	uint8                                        Pad_1C5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPCGMetadataTypesConstantStructStringMode StringMode;                                        // 0x2C(0x4)(None)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetBase* GetDefaultObj();

	void ValidatePreconditions(class UPCGPointData* InPointData, bool ReturnValue);
	void MatchAndSet(const struct FPCGContext& Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData);
};

// 0x20 (0x50 - 0x30)
// Class PCG.PCGMatchAndSetByAttribute
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{
public:
	class FName                                  MatchSourceAttribute;                              // 0x30(0x8)(None)
	enum class EPCGMetadataTypes                 MatchSourceType;                                   // 0x38(0x1)(None)
	uint8                                        Pad_1C60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode;                             // 0x3C(0x4)(None)
	TArray<struct FPCGMatchAndSetByAttributeEntry> Entries;                                           // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetByAttribute* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class PCG.PCGMatchAndSetWeighted
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{
public:
	TArray<struct FPCGMatchAndSetWeightedEntry>  Entries;                                           // 0x30(0x10)(None)
	bool                                         bShouldMutateSeed;                                 // 0x40(0x1)(None)
	uint8                                        Pad_1C63[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGMatchAndSetWeighted* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class PCG.PCGMatchAndSetWeightedByCategory
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x30(0x8)(None)
	enum class EPCGMetadataTypes                 CategoryType;                                      // 0x38(0x1)(None)
	uint8                                        Pad_1C65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPCGMetadataTypesConstantStructStringMode CategoryStringMode;                                // 0x3C(0x4)(None)
	TArray<struct FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                                        // 0x40(0x10)(None)
	bool                                         bShouldMutateSeed;                                 // 0x50(0x1)(None)
	uint8                                        Pad_1C67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGMatchAndSetWeightedByCategory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGMeshSelectorBase
class UPCGMeshSelectorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGMeshSelectorBase* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class PCG.PCGMeshSelectorByAttribute
class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
{
public:
	class FName                                  AttributeName;                                     // 0x28(0x8)(None)
	struct FSoftISMComponentDescriptor           TemplateDescriptor;                                // 0x30(0x1D0)(None)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x200(0x1)(None)
	uint8                                        Pad_1C6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x208(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorByAttribute* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class PCG.PCGMeshSelectorWeighted
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{
public:
	TArray<struct FPCGMeshSelectorWeightedEntry> MeshEntries;                                       // 0x28(0x10)(None)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x38(0x1)(None)
	uint8                                        Pad_1C6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeighted* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGMeshSelectorWeightedByCategory
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x28(0x8)(None)
	TArray<struct FPCGWeightedByCategoryEntryList> Entries;                                           // 0x30(0x10)(None)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x40(0x1)(None)
	uint8                                        Pad_1C70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x48(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeightedByCategory* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class PCG.PCGMetadata
class UPCGMetadata : public UObject
{
public:
	class UPCGMetadata*                          Parent;                                            // 0x28(0x8)(ZeroConstructor)
	TSet<TWeakObjectPtr<class UPCGMetadata>>     OtherParents;                                      // 0x30(0x50)(None)
	uint8                                        Pad_1D10[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGMetadata* GetDefaultObj();

	void SetPointAttributes(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const struct FPCGPoint& OutPoint);
	void SetAttributesByKey(int64 Key, class UPCGMetadata* InMetaData, int64 TargetKey, int64 OutKey);
	void ResetWeightedAttributesByKey(int64 TargetKey, int64 OutKey);
	void ResetPointWeightedAttributes(const struct FPCGPoint& OutPoint);
	void RenameAttribute(class FName AttributeToRename, class FName NewAttributeName, bool ReturnValue);
	void MergePointAttributes(const struct FPCGPoint& PointA, class UPCGMetadata* MetadataA, const struct FPCGPoint& PointB, class UPCGMetadata* MetadataB, const struct FPCGPoint& TargetPoint, enum class EPCGMetadataOp Op);
	void MergeAttributesByKey(int64 KeyA, class UPCGMetadata* MetadataA, int64 KeyB, class UPCGMetadata* MetadataB, int64 TargetKey, enum class EPCGMetadataOp Op, int64 OutKey);
	void InitializeWithAttributeFilter(class UPCGMetadata* InParent, TSet<class FName> InFilteredAttributes, enum class EPCGMetadataFilterMode InFilterMode);
	void InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, TSet<class FName> InFilteredAttributes, enum class EPCGMetadataFilterMode InFilterMode);
	void InitializeAsCopy(class UPCGMetadata* InMetadataToCopy);
	void Initialize(class UPCGMetadata* InParent);
	void HasCommonAttributes(class UPCGMetadata* InMetaData, bool ReturnValue);
	void HasAttribute(class FName AttributeName, bool ReturnValue);
	void GetAttributes(const TArray<class FName>& AttributeNames, const TArray<enum class EPCGMetadataTypes>& AttributeTypes);
	void DeleteAttribute(class FName AttributeName);
	void CreateVectorAttribute(class FName AttributeName, const struct FVector& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateVector4Attribute(class FName AttributeName, const struct FVector4& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateVector2Attribute(class FName AttributeName, const struct FVector2D& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateTransformAttribute(class FName AttributeName, const struct FTransform& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateStringAttribute(class FName AttributeName, const class FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateRotatorAttribute(class FName AttributeName, const struct FRotator& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateQuatAttribute(class FName AttributeName, const struct FQuat& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateInteger64Attribute(class FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateInteger32Attribute(class FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateFloatAttribute(class FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateDoubleAttribute(class FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CreateBoolAttribute(class FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
	void CopyExistingAttribute(class FName AttributeToCopy, class FName NewAttributeName, bool bKeepParent, bool ReturnValue);
	void CopyAttributes(class UPCGMetadata* InOther);
	void CopyAttribute(class UPCGMetadata* InOther, class FName AttributeToCopy, class FName NewAttributeName);
	void ClearAttribute(class FName AttributeToClear);
	void AddEntry(int64 ParentEntryKey, int64 ReturnValue);
	void AddAttributesFiltered(class UPCGMetadata* InOther, TSet<class FName> InFilteredAttributes, enum class EPCGMetadataFilterMode InFilterMode);
	void AddAttributes(class UPCGMetadata* InOther);
	void AddAttribute(class UPCGMetadata* InOther, class FName AttributeName);
	void AccumulateWeightedAttributesByKey(int64 Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64 OutKey);
	void AccumulatePointWeightedAttributes(const struct FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, const struct FPCGPoint& OutPoint);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGMetadataAccessorHelpers
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGMetadataAccessorHelpers* GetDefaultObj();

	void SetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& Value);
	void SetVectorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& Value);
	void SetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& Value);
	void SetVector4Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& Value);
	void SetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& Value);
	void SetVector2Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& Value);
	void SetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& Value);
	void SetTransformAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& Value);
	void SetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& Value);
	void SetStringAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& Value);
	void SetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& Value);
	void SetRotatorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& Value);
	void SetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& Value);
	void SetQuatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& Value);
	void SetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int64 Value);
	void SetInteger64Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int64 Value);
	void SetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int32 Value);
	void SetInteger32Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int32 Value);
	void SetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, float Value);
	void SetFloatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, float Value);
	void SetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, double Value);
	void SetDoubleAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, double Value);
	void SetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, bool Value);
	void SetBoolAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, bool Value);
	void SetAttributeFromPropertyByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, class UObject* Object, class FName PropertyName, bool ReturnValue);
	void InitializeMetadata(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const struct FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata);
	void HasAttributeSetByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue);
	void HasAttributeSet(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue);
	void GetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& ReturnValue);
	void GetVectorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& ReturnValue);
	void GetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& ReturnValue);
	void GetVector4Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& ReturnValue);
	void GetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& ReturnValue);
	void GetVector2Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& ReturnValue);
	void GetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& ReturnValue);
	void GetTransformAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& ReturnValue);
	void GetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& ReturnValue);
	void GetStringAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& ReturnValue);
	void GetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& ReturnValue);
	void GetRotatorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& ReturnValue);
	void GetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& ReturnValue);
	void GetQuatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& ReturnValue);
	void GetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int64 ReturnValue);
	void GetInteger64Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int64 ReturnValue);
	void GetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int32 ReturnValue);
	void GetInteger32Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int32 ReturnValue);
	void GetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, float ReturnValue);
	void GetFloatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, float ReturnValue);
	void GetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, double ReturnValue);
	void GetDoubleAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, double ReturnValue);
	void GetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue);
	void GetBoolAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue);
	void CopyPoint(const struct FPCGPoint& InPoint, const struct FPCGPoint& OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata);
};

// 0x100 (0x1B8 - 0xB8)
// Class PCG.PCGComponent
class UPCGComponent : public UActorComponent
{
public:
	enum class EPCGComponentInput                InputType;                                         // 0xB8(0x1)(None)
	bool                                         bParseActorComponents;                             // 0xB9(0x1)(None)
	uint8                                        Pad_1DEA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Seed;                                              // 0xBC(0x4)(None)
	bool                                         bActivated;                                        // 0xC0(0x1)(None)
	bool                                         bIsComponentPartitioned;                           // 0xC1(0x1)(None)
	enum class EPCGComponentGenerationTrigger    GenerationTrigger;                                 // 0xC2(0x1)(None)
	bool                                         bGenerated;                                        // 0xC3(0x1)(None)
	bool                                         bRuntimeGenerated;                                 // 0xC4(0x1)(None)
	uint8                                        Pad_1DEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PostGenerateFunctionNames;                         // 0xC8(0x10)(None)
	class UPCGGraphInstance*                     GraphInstance;                                     // 0xD8(0x8)(ZeroConstructor)
	class UPCGData*                              CachedPCGData;                                     // 0xE0(0x8)(ZeroConstructor)
	class UPCGData*                              CachedInputData;                                   // 0xE8(0x8)(ZeroConstructor)
	class UPCGData*                              CachedActorData;                                   // 0xF0(0x8)(ZeroConstructor)
	class UPCGData*                              CachedLandscapeData;                               // 0xF8(0x8)(ZeroConstructor)
	class UPCGData*                              CachedLandscapeHeightData;                         // 0x100(0x8)(ZeroConstructor)
	TArray<class UPCGManagedResource*>           GeneratedResources;                                // 0x108(0x10)(ZeroConstructor)
	uint8                                        Pad_1DEC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  LastGeneratedBounds;                               // 0x120(0x38)(None)
	struct FPCGDataCollection                    GeneratedGraphOutput;                              // 0x158(0x20)(ZeroConstructor)
	uint8                                        Pad_1DED[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsComponentLocal;                                 // 0x188(0x1)(None)
	uint8                                        Pad_1DEE[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGComponent* GetDefaultObj();

	void SetGraph(class UPCGGraphInterface* InGraph);
	void NotifyPropertiesChangedFromBlueprint();
	void GetGeneratedGraphOutput(const struct FPCGDataCollection& ReturnValue);
	void GenerateLocal(bool bForce);
	void Generate(bool bForce);
	void ClearPCGLink(class UClass* TemplateActor, class AActor* ReturnValue);
	void CleanupLocal(bool bRemoveComponents, bool bSave);
	void Cleanup(bool bRemoveComponents, bool bSave);
	void AddToManagedResources(class UPCGManagedResource* InResource);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGDataFunctionLibrary
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGDataFunctionLibrary* GetDefaultObj();

	void GetTaggedParams(const struct FPCGDataCollection& InCollection, const class FString& InTag, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetTaggedInputs(const struct FPCGDataCollection& InCollection, const class FString& InTag, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetParamsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetParams(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetInputsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetInputs(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetAllSettings(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGEdge
class UPCGEdge : public UObject
{
public:
	class FName                                  InboundLabel;                                      // 0x28(0x8)(None)
	class UPCGNode*                              InboundNode;                                       // 0x30(0x8)(ZeroConstructor)
	class FName                                  OutboundLabel;                                     // 0x38(0x8)(None)
	class UPCGNode*                              OutboundNode;                                      // 0x40(0x8)(ZeroConstructor)
	class UPCGPin*                               InputPin;                                          // 0x48(0x8)(ZeroConstructor)
	class UPCGPin*                               OutputPin;                                         // 0x50(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGEdge* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGGraphInterface
class UPCGGraphInterface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGGraphInterface* GetDefaultObj();

	void GetMutablePCGGraph(class UPCGGraph* ReturnValue);
	void GetConstPCGGraph(class UPCGGraph* ReturnValue);
};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGGraph
class UPCGGraph : public UPCGGraphInterface
{
public:
	bool                                         bLandscapeUsesMetadata;                            // 0x28(0x1)(None)
	uint8                                        Pad_1E12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPCGNode*>                      Nodes;                                             // 0x30(0x10)(ZeroConstructor)
	class UPCGNode*                              InputNode;                                         // 0x40(0x8)(ZeroConstructor)
	class UPCGNode*                              OutputNode;                                        // 0x48(0x8)(ZeroConstructor)
	struct FInstancedPropertyBag                 UserParameters;                                    // 0x50(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGGraph* GetDefaultObj();

	void RemoveNode(class UPCGNode* InNode);
	void RemoveEdge(class UPCGNode* From, class FName FromLabel, class UPCGNode* To, class FName ToLabel, bool ReturnValue);
	void GetOutputNode(class UPCGNode* ReturnValue);
	void GetInputNode(class UPCGNode* ReturnValue);
	void AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings* DefaultNodeSettings, class UPCGNode* ReturnValue);
	void AddNodeInstance(class UPCGSettings* InSettings, class UPCGNode* ReturnValue);
	void AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings* DefaultNodeSettings, class UPCGNode* ReturnValue);
	void AddEdge(class UPCGNode* From, class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode* ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class PCG.PCGGraphInstance
class UPCGGraphInstance : public UPCGGraphInterface
{
public:
	class UPCGGraphInterface*                    Graph;                                             // 0x28(0x8)(ZeroConstructor)
	struct FPCGOverrideInstancedPropertyBag      ParametersOverrides;                               // 0x30(0x60)(None)

	static class UClass* StaticClass();
	static class UPCGGraphInstance* GetDefaultObj();

};

// 0xA8 (0x1F0 - 0x148)
// Class PCG.PCGGraphInputOutputSettings
class UPCGGraphInputOutputSettings : public UPCGSettings
{
public:
	TSet<class FName>                            PinLabels;                                         // 0x148(0x50)(None)
	TArray<struct FPCGPinProperties>             CustomPins;                                        // 0x198(0x10)(None)
	uint8                                        Pad_1E14[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGGraphInputOutputSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGManagedResource
class UPCGManagedResource : public UObject
{
public:
	struct FPCGCrc                               Crc;                                               // 0x28(0x8)(None)
	bool                                         bIsMarkedUnused;                                   // 0x30(0x1)(None)
	uint8                                        Pad_1E17[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGManagedResource* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class PCG.PCGManagedActors
class UPCGManagedActors : public UPCGManagedResource
{
public:
	TSet<TSoftObjectPtr<class AActor>>           GeneratedActors;                                   // 0x38(0x50)(None)

	static class UClass* StaticClass();
	static class UPCGManagedActors* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class PCG.PCGManagedComponent
class UPCGManagedComponent : public UPCGManagedResource
{
public:
	TSoftObjectPtr<class UActorComponent>        GeneratedComponent;                                // 0x38(0x30)(None)

	static class UClass* StaticClass();
	static class UPCGManagedComponent* GetDefaultObj();

};

// 0x1C0 (0x228 - 0x68)
// Class PCG.PCGManagedISMComponent
class UPCGManagedISMComponent : public UPCGManagedComponent
{
public:
	bool                                         bHasDescriptor;                                    // 0x68(0x1)(None)
	uint8                                        Pad_1E1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FISMComponentDescriptor               Descriptor;                                        // 0x70(0x1A8)(ZeroConstructor)
	uint64                                       SettingsUID;                                       // 0x218(0x8)(None)
	uint8                                        Pad_1E1E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGManagedISMComponent* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class PCG.PCGParamData
class UPCGParamData : public UPCGData
{
public:
	class UPCGMetadata*                          MetaData;                                          // 0x38(0x8)(None)
	TMap<class FName, int64>                     NameMap;                                           // 0x40(0x50)(None)

	static class UClass* StaticClass();
	static class UPCGParamData* GetDefaultObj();

	void MutableMetadata(class UPCGMetadata* ReturnValue);
	void FindOrAddMetadataKey(class FName InName, int64 ReturnValue);
	void FindMetadataKey(class FName InName, int64 ReturnValue);
	void FilterParamsByName(class FName InName, class UPCGParamData* ReturnValue);
	void FilterParamsByKey(int64 InKey, class UPCGParamData* ReturnValue);
	void ConstMetadata(class UPCGMetadata* ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGPin
class UPCGPin : public UObject
{
public:
	class UPCGNode*                              Node;                                              // 0x28(0x8)(ZeroConstructor)
	class FName                                  Label;                                             // 0x30(0x8)(None)
	TArray<class UPCGEdge*>                      Edges;                                             // 0x38(0x10)(None)
	struct FPCGPinProperties                     Properties;                                        // 0x48(0x10)(None)

	static class UClass* StaticClass();
	static class UPCGPin* GetDefaultObj();

	void SetToolTip(class FText InTooltip);
	void GetTooltip(class FText ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class PCG.PCGSettingsInstance
class UPCGSettingsInstance : public UPCGSettingsInterface
{
public:
	class UPCGSettings*                          Settings;                                          // 0x40(0x8)(None)

	static class UClass* StaticClass();
	static class UPCGSettingsInstance* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGTrivialSettings
class UPCGTrivialSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGTrivialSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGSubgraphSettings
class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
{
public:
	class UPCGGraphInstance*                     SubgraphInstance;                                  // 0x148(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGSubgraphSettings* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class PCG.PCGSubgraphNode
class UPCGSubgraphNode : public UPCGBaseSubgraphNode
{
public:

	static class UClass* StaticClass();
	static class UPCGSubgraphNode* GetDefaultObj();

};

// 0x480 (0x4C0 - 0x40)
// Class PCG.PCGSubsystem
class UPCGSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_1E3E[0x480];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGSubsystem* GetDefaultObj();

};

// 0x8 (0x510 - 0x508)
// Class PCG.PCGVolume
class APCGVolume : public AVolume
{
public:
	class UPCGComponent*                         PCGComponent;                                      // 0x508(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class APCGVolume* GetDefaultObj();

};

// 0x18 (0x4D0 - 0x4B8)
// Class PCG.PCGWorldActor
class APCGWorldActor : public AActor
{
public:
	uint32                                       PartitionGridSize;                                 // 0x4B8(0x4)(None)
	uint8                                        Pad_1E4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPCGLandscapeCache*                    LandscapeCacheObject;                              // 0x4C0(0x8)(ZeroConstructor)
	bool                                         bUse2DGrid;                                        // 0x4C8(0x1)(None)
	uint8                                        Pad_1E4F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APCGWorldActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGDeterminismTestBlueprintBase
class UPCGDeterminismTestBlueprintBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGDeterminismTestBlueprintBase* GetDefaultObj();

	void ExecuteTest(class UPCGNode* InPCGNode, const struct FDeterminismTestResult& InOutTestResult);
};

// 0x188 (0x640 - 0x4B8)
// Class PCG.PCGUnitTestDummyActor
class APCGUnitTestDummyActor : public AActor
{
public:
	int32                                        IntProperty;                                       // 0x4B8(0x4)(None)
	float                                        FloatProperty;                                     // 0x4BC(0x4)(None)
	int64                                        Int64Property;                                     // 0x4C0(0x8)(None)
	double                                       DoubleProperty;                                    // 0x4C8(0x8)(None)
	bool                                         BoolProperty;                                      // 0x4D0(0x1)(None)
	uint8                                        Pad_1E5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NameProperty;                                      // 0x4D4(0x8)(None)
	uint8                                        Pad_1E60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringProperty;                                    // 0x4E0(0x10)(None)
	enum class EPCGUnitTestDummyEnum             EnumProperty;                                      // 0x4F0(0x8)(None)
	struct FVector                               VectorProperty;                                    // 0x4F8(0x18)(None)
	struct FVector4                              Vector4Property;                                   // 0x510(0x20)(None)
	struct FTransform                            TransformProperty;                                 // 0x530(0x60)(None)
	struct FRotator                              RotatorProperty;                                   // 0x590(0x18)(None)
	uint8                                        Pad_1E64[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 QuatProperty;                                      // 0x5B0(0x20)(None)
	struct FSoftObjectPath                       SoftObjectPathProperty;                            // 0x5D0(0x20)(None)
	struct FSoftClassPath                        SoftClassPathProperty;                             // 0x5F0(0x20)(None)
	class UClass*                                ClassProperty;                                     // 0x610(0x8)(ZeroConstructor)
	class UObject*                               ObjectProperty;                                    // 0x618(0x8)(ZeroConstructor)
	struct FVector2D                             Vector2Property;                                   // 0x620(0x10)(None)
	struct FColor                                ColorProperty;                                     // 0x630(0x4)(None)
	uint8                                        Pad_1E67[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APCGUnitTestDummyActor* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class PCG.PCGUnitTestDummyComponent
class UPCGUnitTestDummyComponent : public UActorComponent
{
public:
	int32                                        IntProperty;                                       // 0xB8(0x4)(None)
	uint8                                        Pad_1E6C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPCGUnitTestDummyComponent* GetDefaultObj();

};

}


