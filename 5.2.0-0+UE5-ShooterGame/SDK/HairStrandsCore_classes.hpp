#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomDataInterface
class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.OptimusGroomDataProvider
class UOptimusGroomDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       Groom;                                             // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class UOptimusGroomDataProvider* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.OptimusGroomExecDataInterface
class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{
public:
	enum class EOptimusGroomExecDomain           Domain;                                            // 0x28(0x1)(None)
	uint8                                        Pad_1173[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOptimusGroomExecDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomExecDataProvider
class UOptimusGroomExecDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x28(0x8)(None)
	enum class EOptimusGroomExecDomain           Domain;                                            // 0x30(0x1)(None)
	uint8                                        Pad_1174[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOptimusGroomExecDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomWriteDataInterface
class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomWriteDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomWriteDataProvider
class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x28(0x8)(None)
	uint8                                        Pad_1175[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOptimusGroomWriteDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomComponentSource
class UOptimusGroomComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomComponentSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class HairStrandsCore.GroomCacheImportOptions
class UGroomCacheImportOptions : public UObject
{
public:
	struct FGroomCacheImportSettings             ImportSettings;                                    // 0x28(0x68)(None)

	static class UClass* StaticClass();
	static class UGroomCacheImportOptions* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class HairStrandsCore.GroomCacheImportData
class UGroomCacheImportData : public UAssetImportData
{
public:
	struct FGroomCacheImportSettings             Settings;                                          // 0x28(0x68)(None)

	static class UClass* StaticClass();
	static class UGroomCacheImportData* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class HairStrandsCore.GroomActor
class AGroomActor : public AActor
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AGroomActor* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class HairStrandsCore.GroomAsset
class UGroomAsset : public UObject
{
public:
	uint8                                        Pad_1179[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHairGroupInfoWithVisibility>  HairGroupsInfo;                                    // 0x30(0x10)(None)
	TArray<struct FHairGroupsRendering>          HairGroupsRendering;                               // 0x40(0x10)(ZeroConstructor)
	TArray<struct FHairGroupsPhysics>            HairGroupsPhysics;                                 // 0x50(0x10)(ZeroConstructor)
	TArray<struct FHairGroupsInterpolation>      HairGroupsInterpolation;                           // 0x60(0x10)(None)
	TArray<struct FHairGroupsLOD>                HairGroupsLOD;                                     // 0x70(0x10)(None)
	TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards;                                   // 0x80(0x10)(ZeroConstructor)
	TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes;                                  // 0x90(0x10)(ZeroConstructor)
	TArray<struct FHairGroupsMaterial>           HairGroupsMaterials;                               // 0xA0(0x10)(ZeroConstructor)
	uint8                                        Pad_117C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableGlobalInterpolation;                         // 0xC0(0x1)(None)
	enum class EGroomInterpolationType           HairInterpolationType;                             // 0xC1(0x1)(None)
	uint8                                        Pad_117D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         RiggedSkeletalMesh;                                // 0xC8(0x8)(ZeroConstructor)
	TArray<int32>                                DeformedGroupSections;                             // 0xD0(0x10)(None)
	struct FPerPlatformInt                       MinLOD;                                            // 0xE0(0x4)(None)
	struct FPerPlatformBool                      DisableBelowMinLodStripping;                       // 0xE4(0x1)(None)
	uint8                                        Pad_117E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                EffectiveLODBias;                                  // 0xE8(0x10)(None)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0xF8(0x10)(None)
	uint8                                        Pad_117F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.HairCardGenerationSettings
class UHairCardGenerationSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UHairCardGenerationSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.GroomAssetImportData
class UGroomAssetImportData : public UAssetImportData
{
public:
	class UGroomImportOptions*                   ImportOptions;                                     // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class UGroomAssetImportData* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class HairStrandsCore.GroomBindingAsset
class UGroomBindingAsset : public UObject
{
public:
	enum class EGroomBindingMeshType             GroomBindingType;                                  // 0x28(0x1)(None)
	uint8                                        Pad_1183[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomAsset*                           Groom;                                             // 0x30(0x8)(ZeroConstructor)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x38(0x8)(ZeroConstructor)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0x40(0x8)(ZeroConstructor)
	class UGeometryCache*                        SourceGeometryCache;                               // 0x48(0x8)(ZeroConstructor)
	class UGeometryCache*                        TargetGeometryCache;                               // 0x50(0x8)(None)
	int32                                        NumInterpolationPoints;                            // 0x58(0x4)(None)
	int32                                        MatchingSection;                                   // 0x5C(0x4)(None)
	TArray<struct FGoomBindingGroupInfo>         GroupInfos;                                        // 0x60(0x10)(None)
	uint8                                        Pad_1184[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomBindingAsset* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.GroomBindingAssetList
class UGroomBindingAssetList : public UObject
{
public:
	TArray<class UGroomBindingAsset*>            Bindings;                                          // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UGroomBindingAssetList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.GroomBlueprintLibrary
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGroomBlueprintLibrary* GetDefaultObj();

	void CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection, class UGroomBindingAsset* ReturnValue);
	void CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection, class UGroomBindingAsset* ReturnValue);
	void CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection, class UGroomBindingAsset* ReturnValue);
	void CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection, class UGroomBindingAsset* ReturnValue);
};

// 0x50 (0x78 - 0x28)
// Class HairStrandsCore.GroomCache
class UGroomCache : public UObject
{
public:
	uint8                                        Pad_1197[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGroomCacheInfo                       GroomCacheInfo;                                    // 0x3C(0x28)(None)
	uint8                                        Pad_1198[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomCache* GetDefaultObj();

};

// 0x260 (0x920 - 0x6C0)
// Class HairStrandsCore.GroomComponent
class UGroomComponent : public UMeshComponent
{
public:
	uint8                                        Pad_11A6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomAsset*                           GroomAsset;                                        // 0x6D0(0x8)(ZeroConstructor)
	class UGroomCache*                           GroomCache;                                        // 0x6D8(0x8)(ZeroConstructor)
	TArray<class UNiagaraComponent*>             NiagaraComponents;                                 // 0x6E0(0x10)(ZeroConstructor)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x6F0(0x8)(ZeroConstructor)
	class UGroomBindingAsset*                    BindingAsset;                                      // 0x6F8(0x8)(ZeroConstructor)
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x700(0x8)(ZeroConstructor)
	uint8                                        Pad_11A7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairSimulationSettings               SimulationSettings;                                // 0x718(0x90)(None)
	class UMeshDeformer*                         MeshDeformer;                                      // 0x7A8(0x8)(ZeroConstructor)
	class UMeshDeformerInstance*                 MeshDeformerInstance;                              // 0x7B0(0x8)(ZeroConstructor)
	class UMeshDeformerInstanceSettings*         MeshDeformerInstanceSettings;                      // 0x7B8(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Strands_DebugMaterial;                             // 0x7C0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Strands_DefaultMaterial;                           // 0x7C8(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Cards_DefaultMaterial;                             // 0x7D0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Meshes_DefaultMaterial;                            // 0x7D8(0x8)(ZeroConstructor)
	class UNiagaraSystem*                        AngularSpringsSystem;                              // 0x7E0(0x8)(ZeroConstructor)
	class UNiagaraSystem*                        CosseratRodsSystem;                                // 0x7E8(0x8)(ZeroConstructor)
	class FString                                AttachmentName;                                    // 0x7F0(0x10)(None)
	uint8                                        Pad_11A8[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHairGroupDesc>                GroomGroupsDesc;                                   // 0x890(0x10)(None)
	bool                                         bUseCards;                                         // 0x8A0(0x1)(None)
	bool                                         bRunning;                                          // 0x8A1(0x1)(None)
	bool                                         bLooping;                                          // 0x8A2(0x1)(None)
	bool                                         bManualTick;                                       // 0x8A3(0x1)(None)
	float                                        ElapsedTime;                                       // 0x8A4(0x4)(None)
	uint8                                        Pad_11A9[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomComponent* GetDefaultObj();

	void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);
	void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);
	void SetHairLengthScaleEnable(bool bEnable);
	void SetHairLengthScale(float Scale);
	void SetGroomAsset(class UGroomAsset* Asset);
	void SetEnableSimulation(bool bInEnableSimulation);
	void SetBindingAsset(class UGroomBindingAsset* InBinding);
	void ResetSimulation();
	void ResetCollisionComponents();
	void GetNiagaraComponent(int32 GroupIndex, class UNiagaraComponent* ReturnValue);
	void GetIsHairLengthScaleEnabled(bool ReturnValue);
	void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0x30 (0x58 - 0x28)
// Class HairStrandsCore.GroomCreateBindingOptions
class UGroomCreateBindingOptions : public UObject
{
public:
	enum class EGroomBindingMeshType             GroomBindingType;                                  // 0x28(0x1)(None)
	uint8                                        Pad_11B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x30(0x8)(ZeroConstructor)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0x38(0x8)(ZeroConstructor)
	class UGeometryCache*                        SourceGeometryCache;                               // 0x40(0x8)(ZeroConstructor)
	class UGeometryCache*                        TargetGeometryCache;                               // 0x48(0x8)(None)
	int32                                        NumInterpolationPoints;                            // 0x50(0x4)(None)
	int32                                        MatchingSection;                                   // 0x54(0x4)(None)

	static class UClass* StaticClass();
	static class UGroomCreateBindingOptions* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class HairStrandsCore.GroomCreateFollicleMaskOptions
class UGroomCreateFollicleMaskOptions : public UObject
{
public:
	int32                                        Resolution;                                        // 0x28(0x4)(None)
	int32                                        RootRadius;                                        // 0x2C(0x4)(None)
	TArray<struct FFollicleMaskOptions>          Grooms;                                            // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UGroomCreateFollicleMaskOptions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
class UGroomCreateStrandsTexturesOptions : public UObject
{
public:
	int32                                        Resolution;                                        // 0x28(0x4)(None)
	enum class EStrandsTexturesTraceType         TraceType;                                         // 0x2C(0x1)(None)
	uint8                                        Pad_11B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceDistance;                                     // 0x30(0x4)(None)
	enum class EStrandsTexturesMeshType          MeshType;                                          // 0x34(0x1)(None)
	uint8                                        Pad_11B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x38(0x8)(ZeroConstructor)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x40(0x8)(None)
	int32                                        LODIndex;                                          // 0x48(0x4)(None)
	int32                                        SectionIndex;                                      // 0x4C(0x4)(None)
	int32                                        UVChannelIndex;                                    // 0x50(0x4)(None)
	uint8                                        Pad_11B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                GroupIndex;                                        // 0x58(0x10)(None)

	static class UClass* StaticClass();
	static class UGroomCreateStrandsTexturesOptions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HairStrandsCore.GroomImportOptions
class UGroomImportOptions : public UObject
{
public:
	struct FGroomConversionSettings              ConversionSettings;                                // 0x28(0x30)(None)
	TArray<struct FHairGroupsInterpolation>      InterpolationSettings;                             // 0x58(0x10)(None)

	static class UClass* StaticClass();
	static class UGroomImportOptions* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.GroomHairGroupsPreview
class UGroomHairGroupsPreview : public UObject
{
public:
	TArray<struct FGroomHairGroupPreview>        Groups;                                            // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UGroomHairGroupsPreview* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.GroomPluginSettings
class UGroomPluginSettings : public UObject
{
public:
	float                                        GroomCacheLookAheadBuffer;                         // 0x28(0x4)(None)
	uint8                                        Pad_11B8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomPluginSettings* GetDefaultObj();

};

// 0x20 (0x110 - 0xF0)
// Class HairStrandsCore.MovieSceneGroomCacheSection
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGroomCacheParams           Params;                                            // 0xF0(0x20)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneGroomCacheSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class HairStrandsCore.MovieSceneGroomCacheTrack
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_11B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneGroomCacheTrack* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_11BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomAsset*                           DefaultSource;                                     // 0x40(0x8)(ZeroConstructor)
	class AActor*                                SourceActor;                                       // 0x48(0x8)(None)
	uint8                                        Pad_11BB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceHairStrands* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            GridSize;                                          // 0x38(0xC)(None)
	uint8                                        Pad_11BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVelocityGrid* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePressureGrid* GetDefaultObj();

};

}


