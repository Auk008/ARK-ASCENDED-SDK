#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAsset
class UHoudiniAsset : public UObject
{
public:
	class FString                                AssetFileName;                                     // 0x28(0x10)(None)
	TArray<uint8>                                AssetBytes;                                        // 0x38(0x10)(None)
	uint32                                       AssetBytesCount;                                   // 0x48(0x4)(None)
	bool                                         bAssetLimitedCommercial;                           // 0x4C(0x1)(None)
	bool                                         bAssetNonCommercial;                               // 0x4D(0x1)(None)
	bool                                         bAssetExpanded;                                    // 0x4E(0x1)(None)
	uint8                                        Pad_B7E[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAsset* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class HoudiniEngineRuntime.HoudiniAssetActor
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                HoudiniAssetComponent;                             // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AHoudiniAssetActor* GetDefaultObj();

};

// 0x500 (0xB80 - 0x680)
// Class HoudiniEngineRuntime.HoudiniAssetComponent
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_B80[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x688(0x8)(ZeroConstructor)
	bool                                         bCookOnParameterChange;                            // 0x690(0x1)(None)
	bool                                         bUploadTransformsToHoudiniEngine;                  // 0x691(0x1)(None)
	bool                                         bCookOnTransformChange;                            // 0x692(0x1)(None)
	bool                                         bCookOnAssetInputCook;                             // 0x693(0x1)(None)
	bool                                         bOutputless;                                       // 0x694(0x1)(None)
	bool                                         bOutputTemplateGeos;                               // 0x695(0x1)(None)
	bool                                         bUseOutputNodes;                                   // 0x696(0x1)(None)
	uint8                                        Pad_B81[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        TemporaryCookFolder;                               // 0x698(0x10)(None)
	struct FDirectoryPath                        BakeFolder;                                        // 0x6A8(0x10)(None)
	enum class EHoudiniStaticMeshMethod          StaticMeshMethod;                                  // 0x6B8(0x1)(None)
	uint8                                        Pad_B82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;                    // 0x6C0(0x188)(ZeroConstructor)
	struct FMeshBuildSettings                    StaticMeshBuildSettings;                           // 0x848(0x48)(ZeroConstructor)
	bool                                         bOverrideGlobalProxyStaticMeshSettings;            // 0x890(0x1)(None)
	bool                                         bEnableProxyStaticMeshOverride;                    // 0x891(0x1)(None)
	bool                                         bEnableProxyStaticMeshRefinementByTimerOverride;   // 0x892(0x1)(None)
	uint8                                        Pad_B83[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProxyMeshAutoRefineTimeoutSecondsOverride;         // 0x894(0x4)(None)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x898(0x1)(None)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x899(0x1)(None)
	bool                                         bLandscapeUseTempLayers;                           // 0x89A(0x1)(None)
	uint8                                        Pad_B85[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AssetId;                                           // 0x89C(0x4)(None)
	TArray<int32>                                NodeIdsToCook;                                     // 0x8A0(0x10)(None)
	TMap<int32, int32>                           OutputNodeCookCounts;                              // 0x8B0(0x50)(None)
	TSet<class UHoudiniAssetComponent*>          DownstreamHoudiniAssets;                           // 0x900(0x50)(ZeroConstructor)
	struct FGuid                                 ComponentGUID;                                     // 0x950(0x10)(None)
	struct FGuid                                 HapiGUID;                                          // 0x960(0x10)(None)
	class FString                                HapiAssetName;                                     // 0x970(0x10)(None)
	enum class EHoudiniAssetState                AssetState;                                        // 0x980(0x1)(None)
	enum class EHoudiniAssetState                DebugLastAssetState;                               // 0x981(0x1)(None)
	enum class EHoudiniAssetStateResult          AssetStateResult;                                  // 0x982(0x1)(None)
	uint8                                        Pad_B87[0xD];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LastComponentTransform;                            // 0x990(0x60)(None)
	uint32                                       SubAssetIndex;                                     // 0x9F0(0x4)(None)
	int32                                        AssetCookCount;                                    // 0x9F4(0x4)(None)
	bool                                         bHasBeenLoaded;                                    // 0x9F8(0x1)(None)
	bool                                         bHasBeenDuplicated;                                // 0x9F9(0x1)(None)
	bool                                         bPendingDelete;                                    // 0x9FA(0x1)(None)
	bool                                         bRecookRequested;                                  // 0x9FB(0x1)(None)
	bool                                         bRebuildRequested;                                 // 0x9FC(0x1)(None)
	bool                                         bEnableCooking;                                    // 0x9FD(0x1)(None)
	bool                                         bForceNeedUpdate;                                  // 0x9FE(0x1)(None)
	bool                                         bLastCookSuccess;                                  // 0x9FF(0x1)(None)
	bool                                         bParameterDefinitionUpdateNeeded;                  // 0xA00(0x1)(None)
	bool                                         bBlueprintStructureModified;                       // 0xA01(0x1)(None)
	bool                                         bBlueprintModified;                                // 0xA02(0x1)(None)
	uint8                                        Pad_B88[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameter*>             Parameters;                                        // 0xA08(0x10)(ZeroConstructor)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0xA18(0x10)(ZeroConstructor)
	TArray<class UHoudiniOutput*>                Outputs;                                           // 0xA28(0x10)(ZeroConstructor)
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0xA38(0x10)(ZeroConstructor)
	TArray<TWeakObjectPtr<class AActor>>         UntrackedOutputs;                                  // 0xA48(0x10)(ZeroConstructor)
	TArray<class UHoudiniHandleComponent*>       HandleComponents;                                  // 0xA58(0x10)(ZeroConstructor)
	bool                                         bHasComponentTransformChanged;                     // 0xA68(0x1)(None)
	bool                                         bFullyLoaded;                                      // 0xA69(0x1)(None)
	uint8                                        Pad_B89[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniPDGAssetLink*                  PDGAssetLink;                                      // 0xA70(0x8)(ZeroConstructor)
	struct FTimerHandle                          RefineMeshesTimer;                                 // 0xA78(0x8)(None)
	uint8                                        Pad_B8B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bNoProxyMeshNextCookRequested;                     // 0xA98(0x1)(None)
	uint8                                        Pad_B8C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UObject*, int32>                  InputPresets;                                      // 0xAA0(0x50)(ZeroConstructor)
	bool                                         bBakeAfterNextCook;                                // 0xAF0(0x1)(None)
	uint8                                        Pad_B8E[0x5F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCachedIsPreview;                                  // 0xB50(0x1)(None)
	uint8                                        Pad_B8F[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastTickTime;                                      // 0xB60(0x8)(None)
	uint8                                        Pad_B90[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetComponent* GetDefaultObj();

};

// 0x100 (0xC80 - 0xB80)
// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
public:
	uint8                                        Pad_BA0[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         FauxBPProperty;                                    // 0xBC8(0x1)(None)
	bool                                         bHoudiniAssetChanged;                              // 0xBC9(0x1)(None)
	bool                                         bUpdatedFromTemplate;                              // 0xBCA(0x1)(None)
	bool                                         bIsInBlueprintEditor;                              // 0xBCB(0x1)(None)
	bool                                         bCanDeleteHoudiniNodes;                            // 0xBCC(0x1)(None)
	bool                                         bHasRegisteredComponentTemplate;                   // 0xBCD(0x1)(None)
	uint8                                        Pad_BA5[0xA];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes;                                 // 0xBD8(0x50)(None)
	TMap<struct FGuid, struct FGuid>             CachedInputNodes;                                  // 0xC28(0x50)(None)
	uint8                                        Pad_BA7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetBlueprintComponent* GetDefaultObj();

	void SetToggleValueAt(const class FString& Name, bool Value, int32 Index);
	void SetFloatParameter(const class FString& Name, float Value, int32 Index);
	void HasParameter(const class FString& Name, bool ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetParameter
class UHoudiniAssetParameter : public UObject
{
public:
	uint8                                        Pad_BAD[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameter* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterButton* GetDefaultObj();

};

// 0x38 (0xB8 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BB2[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterChoice* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BB5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterColor* GetDefaultObj();

};

// 0x28 (0xA8 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BB6[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFile* GetDefaultObj();

};

// 0x38 (0xB8 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BB9[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFloat* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFolder* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterFolderList* GetDefaultObj();

};

// 0x30 (0xB0 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BBA[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterInt* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterLabel* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BBC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterMultiparm* GetDefaultObj();

};

// 0x18 (0x98 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BBF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterRamp* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterSeparator* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterString
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BC1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterString* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BC2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetParameterToggle* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
class UHoudiniAssetComponentMaterials_V1 : public UObject
{
public:
	uint8                                        Pad_BC5[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetComponentMaterials_V1* GetDefaultObj();

};

// 0x98 (0x360 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
class UHoudiniHandleComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_BC6[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniHandleComponent_V1* GetDefaultObj();

};

// 0x128 (0x3F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
class UHoudiniSplineComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_BC7[0x128];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniSplineComponent_V1* GetDefaultObj();

};

// 0x160 (0x1E0 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetInput
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BC9[0x160];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetInput* GetDefaultObj();

};

// 0x110 (0x190 - 0x80)
// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
public:
	uint8                                        Pad_BCD[0x110];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetInstanceInput* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
class UHoudiniAssetInstanceInputField : public UObject
{
public:
	uint8                                        Pad_BCE[0x198];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetInstanceInputField* GetDefaultObj();

};

// 0x500 (0xB80 - 0x680)
// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{
public:
	uint8                                        bGeneratedDoubleSidedGeometry : 1;                 // Mask: 0x1, PropSize: 0x10x680(0x1)(None)
	uint8                                        BitPad_A1 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BD1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     GeneratedPhysMaterial;                             // 0x688(0x8)(ZeroConstructor)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0x690(0x138)(ZeroConstructor)
	enum class ECollisionTraceFlag               GeneratedCollisionTraceFlag;                       // 0x7C8(0x1)(None)
	uint8                                        Pad_BD3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeneratedLightMapResolution;                       // 0x7CC(0x4)(None)
	float                                        GeneratedDistanceFieldResolutionScale;             // 0x7D0(0x4)(None)
	struct FWalkableSlopeOverride                GeneratedWalkableSlopeOverride;                    // 0x7D4(0x10)(None)
	int32                                        GeneratedLightMapCoordinateIndex;                  // 0x7E4(0x4)(None)
	uint8                                        bGeneratedUseMaximumStreamingTexelRatio : 1;       // Mask: 0x1, PropSize: 0x10x7E8(0x1)(None)
	uint8                                        BitPad_A2 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BD5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeneratedStreamingDistanceMultiplier;              // 0x7EC(0x4)(None)
	class UFoliageType_InstancedStaticMesh*      GeneratedFoliageDefaultSettings;                   // 0x7F0(0x8)(ZeroConstructor)
	TArray<class UAssetUserData*>                GeneratedAssetUserData;                            // 0x7F8(0x10)(ZeroConstructor)
	class FText                                  BakeFolder;                                        // 0x808(0x18)(None)
	class FText                                  TempCookFolder;                                    // 0x820(0x18)(None)
	uint8                                        Pad_BD7[0x348];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetComponent_V1* GetDefaultObj();

};

// 0x18 (0x2E0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_BD8[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInstancedActorComponent_V1* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{
public:
	uint8                                        Pad_BD9[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniMeshSplitInstancerComponent_V1* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniEngineCopyPropertiesInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HoudiniEngineRuntime.HoudiniHandleParameter
class UHoudiniHandleParameter : public UObject
{
public:
	class UHoudiniParameter*                     AssetParameter;                                    // 0x28(0x8)(None)
	int32                                        TupleIndex;                                        // 0x30(0x4)(None)
	uint8                                        Pad_BE1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniHandleParameter* GetDefaultObj();

};

// 0x38 (0x300 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniHandleComponent
class UHoudiniHandleComponent : public USceneComponent
{
public:
	TArray<class UHoudiniHandleParameter*>       XformParms;                                        // 0x2C8(0x10)(ZeroConstructor)
	class UHoudiniHandleParameter*               RSTParm;                                           // 0x2D8(0x8)(ZeroConstructor)
	class UHoudiniHandleParameter*               RotOrderParm;                                      // 0x2E0(0x8)(ZeroConstructor)
	enum class EHoudiniHandleType                HandleType;                                        // 0x2E8(0x1)(None)
	uint8                                        Pad_BE4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HandleName;                                        // 0x2F0(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniHandleComponent* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInput
class UHoudiniInput : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(None)
	class FString                                Label;                                             // 0x38(0x10)(None)
	enum class EHoudiniInputType                 Type;                                              // 0x48(0x1)(None)
	enum class EHoudiniInputType                 PreviousType;                                      // 0x49(0x1)(None)
	uint8                                        Pad_BEB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AssetNodeId;                                       // 0x4C(0x4)(None)
	int32                                        InputNodeId;                                       // 0x50(0x4)(None)
	int32                                        InputIndex;                                        // 0x54(0x4)(None)
	int32                                        ParmId;                                            // 0x58(0x4)(None)
	bool                                         bIsObjectPathParameter;                            // 0x5C(0x1)(None)
	uint8                                        Pad_BEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CreatedDataNodeIds;                                // 0x60(0x10)(None)
	bool                                         bHasChanged;                                       // 0x70(0x1)(None)
	bool                                         bNeedsToTriggerUpdate;                             // 0x71(0x1)(None)
	uint8                                        Pad_BED[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  CachedBounds;                                      // 0x78(0x38)(None)
	class FString                                Help;                                              // 0xB0(0x10)(None)
	enum class EHoudiniXformType                 KeepWorldTransform;                                // 0xC0(0x1)(None)
	bool                                         bPackBeforeMerge;                                  // 0xC1(0x1)(None)
	bool                                         bImportAsReference;                                // 0xC2(0x1)(None)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0xC3(0x1)(None)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0xC4(0x1)(None)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0xC5(0x1)(None)
	bool                                         bExportLODs;                                       // 0xC6(0x1)(None)
	bool                                         bExportSockets;                                    // 0xC7(0x1)(None)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xC8(0x1)(None)
	bool                                         bExportColliders;                                  // 0xC9(0x1)(None)
	bool                                         bExportMaterialParameters;                         // 0xCA(0x1)(None)
	bool                                         bCookOnCurveChanged;                               // 0xCB(0x1)(None)
	uint8                                        Pad_BEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           GeometryInputObjects;                              // 0xD0(0x10)(ZeroConstructor)
	bool                                         bStaticMeshChanged;                                // 0xE0(0x1)(None)
	uint8                                        Pad_BEF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           AssetInputObjects;                                 // 0xE8(0x10)(ZeroConstructor)
	bool                                         bInputAssetConnectedInHoudini;                     // 0xF8(0x1)(None)
	uint8                                        Pad_BF0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           CurveInputObjects;                                 // 0x100(0x10)(ZeroConstructor)
	float                                        DefaultCurveOffset;                                // 0x110(0x4)(None)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x114(0x1)(None)
	bool                                         bUseLegacyInputCurves;                             // 0x115(0x1)(None)
	uint8                                        Pad_BF1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           LandscapeInputObjects;                             // 0x118(0x10)(ZeroConstructor)
	bool                                         bLandscapeHasExportTypeChanged;                    // 0x128(0x1)(None)
	uint8                                        Pad_BF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           WorldInputObjects;                                 // 0x130(0x10)(ZeroConstructor)
	TArray<class AActor*>                        WorldInputBoundSelectorObjects;                    // 0x140(0x10)(ZeroConstructor)
	bool                                         bIsWorldInputBoundSelector;                        // 0x150(0x1)(None)
	bool                                         bWorldInputBoundSelectorAutoUpdate;                // 0x151(0x1)(None)
	uint8                                        Pad_BF3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnrealSplineResolution;                            // 0x154(0x4)(None)
	TArray<class UHoudiniInputObject*>           SkeletalInputObjects;                              // 0x158(0x10)(ZeroConstructor)
	TArray<class UHoudiniInputObject*>           GeometryCollectionInputObjects;                    // 0x168(0x10)(ZeroConstructor)
	TSet<class ULandscapeComponent*>             LandscapeSelectedComponents;                       // 0x178(0x50)(ZeroConstructor)
	TSet<int32>                                  InputNodesPendingDelete;                           // 0x1C8(0x50)(None)
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                // 0x218(0x10)(ZeroConstructor)
	TArray<class UHoudiniInputObject*>           LastUndoDeletedInputs;                             // 0x228(0x10)(None)
	bool                                         bUpdateInputLandscape;                             // 0x238(0x1)(None)
	enum class EHoudiniLandscapeExportType       LandscapeExportType;                               // 0x239(0x1)(None)
	bool                                         bLandscapeExportSelectionOnly;                     // 0x23A(0x1)(None)
	bool                                         bLandscapeControlVisiblity;                        // 0x23B(0x1)(None)
	bool                                         bLandscapeAutoSelectComponent;                     // 0x23C(0x1)(None)
	bool                                         bLandscapeExportMaterials;                         // 0x23D(0x1)(None)
	bool                                         bLandscapeExportLighting;                          // 0x23E(0x1)(None)
	bool                                         bLandscapeExportNormalizedUVs;                     // 0x23F(0x1)(None)
	bool                                         bLandscapeExportTileUVs;                           // 0x240(0x1)(None)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x241(0x1)(None)
	uint8                                        Pad_BF9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInput* GetDefaultObj();

};

// 0x100 (0x128 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInputObject
class UHoudiniInputObject : public UObject
{
public:
	TSoftObjectPtr<class UObject>                InputObject;                                       // 0x28(0x30)(None)
	uint8                                        Pad_BFB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x60(0x60)(None)
	enum class EHoudiniInputObjectType           Type;                                              // 0xC0(0x1)(None)
	uint8                                        Pad_BFC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputNodeId;                                       // 0xC4(0x4)(None)
	int32                                        InputObjectNodeId;                                 // 0xC8(0x4)(None)
	struct FGuid                                 Guid;                                              // 0xCC(0x10)(None)
	uint8                                        Pad_BFD[0x2C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasChanged;                                       // 0x108(0x1)(None)
	bool                                         bNeedsToTriggerUpdate;                             // 0x109(0x1)(None)
	bool                                         bTransformChanged;                                 // 0x10A(0x1)(None)
	bool                                         bImportAsReference;                                // 0x10B(0x1)(None)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0x10C(0x1)(None)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0x10D(0x1)(None)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0x10E(0x1)(None)
	uint8                                        Pad_BFE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        MaterialReferences;                                // 0x110(0x10)(None)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x120(0x1)(None)
	uint8                                        Pad_BFF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputObject* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
public:
	uint8                                        Pad_C03[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputStaticMesh* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
public:
	uint8                                        Pad_C04[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMesh* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
public:
	uint8                                        Pad_C08[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollection* GetDefaultObj();

};

// 0x68 (0x190 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
public:
	uint8                                        Pad_C09[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ActorTransform;                                    // 0x130(0x60)(None)

	static class UClass* StaticClass();
	static class UHoudiniInputSceneComponent* GetDefaultObj();

};

// 0x30 (0x1C0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x190(0x30)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UHoudiniInputMeshComponent* GetDefaultObj();

};

// 0x10 (0x1D0 - 0x1C0)
// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
public:
	TArray<struct FTransform>                    InstanceTransforms;                                // 0x1C0(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniInputInstancedMeshComponent* GetDefaultObj();

};

// 0x20 (0x1B0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
public:
	int32                                        NumberOfSplineControlPoints;                       // 0x190(0x4)(None)
	float                                        SplineLength;                                      // 0x194(0x4)(None)
	float                                        SplineResolution;                                  // 0x198(0x4)(None)
	bool                                         SplineClosed;                                      // 0x19C(0x1)(None)
	uint8                                        Pad_C0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    SplineControlPoints;                               // 0x1A0(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniInputSplineComponent* GetDefaultObj();

};

// 0x0 (0x190 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollectionComponent* GetDefaultObj();

};

// 0x0 (0x190 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMeshComponent* GetDefaultObj();

};

// 0x18 (0x140 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
public:
	enum class EHoudiniCurveType                 CurveType;                                         // 0x128(0x1)(None)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x129(0x1)(None)
	bool                                         Reversed;                                          // 0x12A(0x1)(None)
	uint8                                        Pad_C12[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniSplineComponent*               CachedComponent;                                   // 0x130(0x8)(ZeroConstructor)
	uint8                                        Pad_C13[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniSplineComponent* GetDefaultObj();

};

// 0x20 (0x1B0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
public:
	float                                        FOV;                                               // 0x190(0x4)(None)
	float                                        AspectRatio;                                       // 0x194(0x4)(None)
	bool                                         bIsOrthographic;                                   // 0x198(0x1)(None)
	uint8                                        Pad_C18[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrthoWidth;                                        // 0x19C(0x4)(None)
	float                                        OrthoNearClipPlane;                                // 0x1A0(0x4)(None)
	float                                        OrthoFarClipPlane;                                 // 0x1A4(0x4)(None)
	uint8                                        Pad_C1A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputCameraComponent* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
public:
	int32                                        AssetOutputIndex;                                  // 0x128(0x4)(None)
	uint8                                        Pad_C1D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniAsset* GetDefaultObj();

};

// 0x68 (0x190 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputActor
class UHoudiniInputActor : public UHoudiniInputObject
{
public:
	TArray<class UHoudiniInputSceneComponent*>   ActorComponents;                                   // 0x128(0x10)(ZeroConstructor)
	TSet<TSoftObjectPtr<class UObject>>          ActorSceneComponents;                              // 0x138(0x50)(ZeroConstructor)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x188(0x4)(None)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x18C(0x4)(None)

	static class UClass* StaticClass();
	static class UHoudiniInputActor* GetDefaultObj();

};

// 0x10 (0x1A0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputLandscape
class UHoudiniInputLandscape : public UHoudiniInputActor
{
public:
	int32                                        CachedNumLandscapeComponents;                      // 0x190(0x4)(None)
	uint8                                        Pad_C25[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputLandscape* GetDefaultObj();

};

// 0x20 (0x1B0 - 0x190)
// Class HoudiniEngineRuntime.HoudiniInputBrush
class UHoudiniInputBrush : public UHoudiniInputActor
{
public:
	TArray<struct FHoudiniBrushInfo>             BrushesInfo;                                       // 0x190(0x10)(ZeroConstructor)
	class UModel*                                CombinedModel;                                     // 0x1A0(0x8)(ZeroConstructor)
	bool                                         bIgnoreInputObject;                                // 0x1A8(0x1)(None)
	enum class EBrushType                        CachedInputBrushType;                              // 0x1A9(0x1)(None)
	uint8                                        Pad_C27[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputBrush* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputDataTable
class UHoudiniInputDataTable : public UHoudiniInputObject
{
public:
	uint8                                        Pad_C2B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputDataTable* GetDefaultObj();

};

// 0x0 (0x130 - 0x130)
// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x68 (0x190 - 0x128)
// Class HoudiniEngineRuntime.HoudiniInputBlueprint
class UHoudiniInputBlueprint : public UHoudiniInputObject
{
public:
	TArray<class UHoudiniInputSceneComponent*>   BPComponents;                                      // 0x128(0x10)(ZeroConstructor)
	TSet<TSoftObjectPtr<class UObject>>          BPSceneComponents;                                 // 0x138(0x50)(ZeroConstructor)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x188(0x4)(None)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x18C(0x4)(None)

	static class UClass* StaticClass();
	static class UHoudiniInputBlueprint* GetDefaultObj();

};

// 0x18 (0x2E0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	class UObject*                               InstancedObject;                                   // 0x2C8(0x8)(ZeroConstructor)
	TArray<class AActor*>                        InstancedActors;                                   // 0x2D0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UHoudiniInstancedActorComponent* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	TArray<class UStaticMeshComponent*>          Instances;                                         // 0x2C8(0x10)(ZeroConstructor)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x2D8(0x10)(ZeroConstructor)
	class UStaticMesh*                           InstancedMesh;                                     // 0x2E8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UHoudiniMeshSplitInstancerComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapePtr
class UHoudiniLandscapePtr : public UObject
{
public:
	TSoftObjectPtr<class ALandscapeProxy>        LandscapeSoftPtr;                                  // 0x28(0x30)(None)
	enum class EHoudiniLandscapeOutputBakeType   BakeType;                                          // 0x58(0x1)(None)
	uint8                                        Pad_C3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EditLayerName;                                     // 0x5C(0x8)(None)
	uint8                                        Pad_C3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniLandscapePtr* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
class UHoudiniLandscapeTargetLayerOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ZeroConstructor)
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x30(0x8)(ZeroConstructor)
	class FString                                BakedEditLayer;                                    // 0x38(0x10)(None)
	class FString                                CookedEditLayer;                                   // 0x48(0x10)(None)
	class FString                                TargetLayer;                                       // 0x58(0x10)(None)
	struct FHoudiniExtents                       Extents;                                           // 0x68(0x10)(None)
	bool                                         bClearLayer;                                       // 0x78(0x1)(None)
	bool                                         bCreatedLandscape;                                 // 0x79(0x1)(None)
	bool                                         bCookedLayerRequiresBaking;                        // 0x7A(0x1)(None)
	uint8                                        Pad_C45[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BakedLandscapeName;                                // 0x80(0x10)(None)
	TArray<class ULandscapeLayerInfoObject*>     LayerInfoObjects;                                  // 0x90(0x10)(ZeroConstructor)
	class FString                                BakeOutlinerFolder;                                // 0xA0(0x10)(None)
	class UMaterialInterface*                    MaterialInstance;                                  // 0xB0(0x8)(None)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeTargetLayerOutput* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeOutput
class UHoudiniLandscapeOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ZeroConstructor)
	class FString                                BakedName;                                         // 0x30(0x10)(None)
	TArray<class UHoudiniLandscapeTargetLayerOutput*> Layers;                                            // 0x40(0x10)(None)
	bool                                         bCreated;                                          // 0x50(0x1)(None)
	uint8                                        Pad_C47[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniLandscapeOutput* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniOutput
class UHoudiniOutput : public UObject
{
public:
	enum class EHoudiniOutputType                Type;                                              // 0x28(0x1)(None)
	uint8                                        Pad_C4B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHoudiniGeoPartObject>         HoudiniGeoPartObjects;                             // 0x30(0x10)(None)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                     // 0x40(0x50)(ZeroConstructor)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                  // 0x90(0x50)(ZeroConstructor)
	TMap<class FString, class UMaterialInterface*> AssignementMaterials;                              // 0xE0(0x50)(ZeroConstructor)
	TMap<class FString, class UMaterialInterface*> ReplacementMaterials;                              // 0x130(0x50)(ZeroConstructor)
	uint8                                        Pad_C4E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLandscapeWorldComposition;                        // 0x184(0x1)(None)
	uint8                                        Pad_C4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HoudiniCreatedSocketActors;                        // 0x188(0x10)(ZeroConstructor)
	TArray<class AActor*>                        HoudiniAttachedSocketActors;                       // 0x198(0x10)(None)
	bool                                         bIsEditableNode;                                   // 0x1A8(0x1)(None)
	bool                                         bHasEditableNodeBuilt;                             // 0x1A9(0x1)(None)
	bool                                         bIsUpdating;                                       // 0x1AA(0x1)(None)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x1AB(0x1)(None)
	uint8                                        Pad_C54[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniOutput* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameter
class UHoudiniParameter : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(None)
	class FString                                Label;                                             // 0x38(0x10)(None)
	enum class EHoudiniParameterType             ParmType;                                          // 0x48(0x1)(None)
	uint8                                        Pad_C5B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       TupleSize;                                         // 0x4C(0x4)(None)
	int32                                        NodeID;                                            // 0x50(0x4)(None)
	int32                                        ParmId;                                            // 0x54(0x4)(None)
	int32                                        ParentParmId;                                      // 0x58(0x4)(None)
	int32                                        ChildIndex;                                        // 0x5C(0x4)(None)
	bool                                         bIsVisible;                                        // 0x60(0x1)(None)
	bool                                         bIsParentFolderVisible;                            // 0x61(0x1)(None)
	bool                                         bIsDisabled;                                       // 0x62(0x1)(None)
	bool                                         bHasChanged;                                       // 0x63(0x1)(None)
	bool                                         bNeedsToTriggerUpdate;                             // 0x64(0x1)(None)
	bool                                         bIsDefault;                                        // 0x65(0x1)(None)
	bool                                         bIsSpare;                                          // 0x66(0x1)(None)
	bool                                         bJoinNext;                                         // 0x67(0x1)(None)
	bool                                         bIsChildOfMultiParm;                               // 0x68(0x1)(None)
	bool                                         bIsDirectChildOfMultiParm;                         // 0x69(0x1)(None)
	bool                                         bPendingRevertToDefault;                           // 0x6A(0x1)(None)
	uint8                                        Pad_C5E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                TuplePendingRevertToDefault;                       // 0x70(0x10)(None)
	class FString                                Help;                                              // 0x80(0x10)(None)
	uint32                                       TagCount;                                          // 0x90(0x4)(None)
	int32                                        ValueIndex;                                        // 0x94(0x4)(None)
	bool                                         bHasExpression;                                    // 0x98(0x1)(None)
	bool                                         bShowExpression;                                   // 0x99(0x1)(None)
	uint8                                        Pad_C5F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ParamExpression;                                   // 0xA0(0x10)(None)
	TMap<class FString, class FString>           Tags;                                              // 0xB0(0x50)(None)
	bool                                         bAutoUpdate;                                       // 0x100(0x1)(None)
	uint8                                        Pad_C60[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameter* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterButton
class UHoudiniParameterButton : public UHoudiniParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniParameterButton* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
public:
	int32                                        Count;                                             // 0x108(0x4)(None)
	uint8                                        Pad_C69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Labels;                                            // 0x110(0x10)(None)
	TArray<int32>                                Values;                                            // 0x120(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterButtonStrip* GetDefaultObj();

};

// 0x70 (0x178 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterChoice
class UHoudiniParameterChoice : public UHoudiniParameter
{
public:
	int32                                        IntValue;                                          // 0x108(0x4)(None)
	int32                                        DefaultIntValue;                                   // 0x10C(0x4)(None)
	class FString                                StringValue;                                       // 0x110(0x10)(None)
	class FString                                DefaultStringValue;                                // 0x120(0x10)(None)
	TArray<class FString>                        StringChoiceValues;                                // 0x130(0x10)(None)
	TArray<class FString>                        StringChoiceLabels;                                // 0x140(0x10)(None)
	uint8                                        Pad_C6F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsChildOfRamp;                                    // 0x160(0x1)(None)
	uint8                                        Pad_C70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                IntValuesArray;                                    // 0x168(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterChoice* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterColor
class UHoudiniParameterColor : public UHoudiniParameter
{
public:
	struct FLinearColor                          Color;                                             // 0x108(0x10)(None)
	struct FLinearColor                          DefaultColor;                                      // 0x118(0x10)(None)
	bool                                         bIsChildOfRamp;                                    // 0x128(0x1)(None)
	uint8                                        Pad_C71[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterColor* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFile
class UHoudiniParameterFile : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(None)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(None)
	class FString                                Filters;                                           // 0x128(0x10)(None)
	bool                                         bIsReadOnly;                                       // 0x138(0x1)(None)
	uint8                                        Pad_C77[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterFile* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFloat
class UHoudiniParameterFloat : public UHoudiniParameter
{
public:
	TArray<float>                                Values;                                            // 0x108(0x10)(None)
	TArray<float>                                DefaultValues;                                     // 0x118(0x10)(None)
	class FString                                Unit;                                              // 0x128(0x10)(None)
	bool                                         bNoSwap;                                           // 0x138(0x1)(None)
	bool                                         bHasMin;                                           // 0x139(0x1)(None)
	bool                                         bHasMax;                                           // 0x13A(0x1)(None)
	bool                                         bHasUIMin;                                         // 0x13B(0x1)(None)
	bool                                         bHasUIMax;                                         // 0x13C(0x1)(None)
	bool                                         bIsLogarithmic;                                    // 0x13D(0x1)(None)
	uint8                                        Pad_C7C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Min;                                               // 0x140(0x4)(None)
	float                                        Max;                                               // 0x144(0x4)(None)
	float                                        UIMin;                                             // 0x148(0x4)(None)
	float                                        UIMax;                                             // 0x14C(0x4)(None)
	bool                                         bIsChildOfRamp;                                    // 0x150(0x1)(None)
	uint8                                        Pad_C7E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterFloat* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolder
class UHoudiniParameterFolder : public UHoudiniParameter
{
public:
	enum class EHoudiniFolderParameterType       FolderType;                                        // 0x108(0x1)(None)
	bool                                         bExpanded;                                         // 0x109(0x1)(None)
	bool                                         bChosen;                                           // 0x10A(0x1)(None)
	uint8                                        Pad_C86[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChildCounter;                                      // 0x10C(0x4)(None)
	bool                                         bIsContentShown;                                   // 0x110(0x1)(None)
	uint8                                        Pad_C87[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterFolder* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolderList
class UHoudiniParameterFolderList : public UHoudiniParameter
{
public:
	bool                                         bIsTabMenu;                                        // 0x108(0x1)(None)
	bool                                         bIsTabsShown;                                      // 0x109(0x1)(None)
	uint8                                        Pad_C8D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterFolder*>       TabFolders;                                        // 0x110(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterFolderList* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterInt
class UHoudiniParameterInt : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(None)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(None)
	class FString                                Unit;                                              // 0x128(0x10)(None)
	bool                                         bHasMin;                                           // 0x138(0x1)(None)
	bool                                         bHasMax;                                           // 0x139(0x1)(None)
	bool                                         bHasUIMin;                                         // 0x13A(0x1)(None)
	bool                                         bHasUIMax;                                         // 0x13B(0x1)(None)
	bool                                         bIsLogarithmic;                                    // 0x13C(0x1)(None)
	uint8                                        Pad_C90[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Min;                                               // 0x140(0x4)(None)
	int32                                        Max;                                               // 0x144(0x4)(None)
	int32                                        UIMin;                                             // 0x148(0x4)(None)
	int32                                        UIMax;                                             // 0x14C(0x4)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterInt* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterLabel
class UHoudiniParameterLabel : public UHoudiniParameter
{
public:
	TArray<class FString>                        LabelStrings;                                      // 0x108(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterLabel* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
class UHoudiniParameterMultiParm : public UHoudiniParameter
{
public:
	bool                                         bIsShown;                                          // 0x108(0x1)(None)
	uint8                                        Pad_C97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x10C(0x4)(None)
	class FString                                TemplateName;                                      // 0x110(0x10)(None)
	int32                                        MultiparmValue;                                    // 0x120(0x4)(None)
	uint32                                       MultiParmInstanceNum;                              // 0x124(0x4)(None)
	uint32                                       MultiParmInstanceLength;                           // 0x128(0x4)(None)
	uint32                                       MultiParmInstanceCount;                            // 0x12C(0x4)(None)
	uint32                                       InstanceStartOffset;                               // 0x130(0x4)(None)
	uint8                                        Pad_C9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;                  // 0x138(0x10)(None)
	int32                                        DefaultInstanceCount;                              // 0x148(0x4)(None)
	uint8                                        Pad_C9B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterMultiParm* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
public:
	TWeakObjectPtr<class UHoudiniInput>          HoudiniInput;                                      // 0x108(0x8)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterOperatorPath* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
class UHoudiniParameterRampModificationEvent : public UObject
{
public:
	bool                                         bIsInsertEvent;                                    // 0x28(0x1)(None)
	bool                                         bIsFloatRamp;                                      // 0x29(0x1)(None)
	uint8                                        Pad_CA7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeleteInstanceIndex;                               // 0x2C(0x4)(None)
	float                                        InsertPosition;                                    // 0x30(0x4)(None)
	float                                        InsertFloat;                                       // 0x34(0x4)(None)
	struct FLinearColor                          InsertColor;                                       // 0x38(0x10)(None)
	enum class EHoudiniRampInterpolationType     InsertInterpolation;                               // 0x48(0x1)(None)
	uint8                                        Pad_CAA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterRampModificationEvent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
class UHoudiniParameterRampFloatPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(None)
	float                                        Value;                                             // 0x2C(0x4)(None)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x30(0x1)(None)
	uint8                                        Pad_CAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceIndex;                                     // 0x34(0x4)(None)
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x38(0x8)(ZeroConstructor)
	class UHoudiniParameterFloat*                ValueParentParm;                                   // 0x40(0x8)(ZeroConstructor)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x48(0x8)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloatPoint* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
class UHoudiniParameterRampColorPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(None)
	struct FLinearColor                          Value;                                             // 0x2C(0x10)(None)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x3C(0x1)(None)
	uint8                                        Pad_CB3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceIndex;                                     // 0x40(0x4)(None)
	uint8                                        Pad_CB4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x48(0x8)(ZeroConstructor)
	class UHoudiniParameterColor*                ValueParentParm;                                   // 0x50(0x8)(ZeroConstructor)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x58(0x8)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColorPoint* GetDefaultObj();

};

// 0x68 (0x1B8 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampFloatPoint*> Points;                                            // 0x150(0x10)(ZeroConstructor)
	TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;                                      // 0x160(0x10)(ZeroConstructor)
	TArray<float>                                DefaultPositions;                                  // 0x170(0x10)(None)
	TArray<float>                                DefaultValues;                                     // 0x180(0x10)(None)
	TArray<int32>                                DefaultChoices;                                    // 0x190(0x10)(None)
	int32                                        NumDefaultPoints;                                  // 0x1A0(0x4)(None)
	bool                                         bCaching;                                          // 0x1A4(0x1)(None)
	uint8                                        Pad_CBB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1A8(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloat* GetDefaultObj();

};

// 0x70 (0x1C0 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampColor
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampColorPoint*> Points;                                            // 0x150(0x10)(ZeroConstructor)
	bool                                         bCaching;                                          // 0x160(0x1)(None)
	uint8                                        Pad_CBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;                                      // 0x168(0x10)(ZeroConstructor)
	TArray<float>                                DefaultPositions;                                  // 0x178(0x10)(None)
	TArray<struct FLinearColor>                  DefaultValues;                                     // 0x188(0x10)(None)
	TArray<int32>                                DefaultChoices;                                    // 0x198(0x10)(None)
	int32                                        NumDefaultPoints;                                  // 0x1A8(0x4)(None)
	uint8                                        Pad_CBD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1B0(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColor* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterSeparator
class UHoudiniParameterSeparator : public UHoudiniParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniParameterSeparator* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterString
class UHoudiniParameterString : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(None)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(None)
	TArray<class UObject*>                       ChosenAssets;                                      // 0x128(0x10)(None)
	bool                                         bIsAssetRef;                                       // 0x138(0x1)(None)
	uint8                                        Pad_CC0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterString* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterToggle
class UHoudiniParameterToggle : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(None)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniParameterToggle* GetDefaultObj();

};

// 0x378 (0x3A0 - 0x28)
// Class HoudiniEngineRuntime.TOPNode
class UTOPNode : public UObject
{
public:
	int32                                        NodeID;                                            // 0x28(0x4)(None)
	uint8                                        Pad_CC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x30(0x10)(None)
	class FString                                NodePath;                                          // 0x40(0x10)(None)
	class FString                                ParentName;                                        // 0x50(0x10)(None)
	class UObject*                               WorkResultParent;                                  // 0x60(0x8)(ZeroConstructor)
	TArray<struct FTOPWorkResult>                WorkResult;                                        // 0x68(0x10)(ZeroConstructor)
	bool                                         bHidden;                                           // 0x78(0x1)(None)
	bool                                         bAutoLoad;                                         // 0x79(0x1)(None)
	enum class EPDGNodeState                     NodeState;                                         // 0x7A(0x1)(None)
	bool                                         bCachedHaveNotLoadedWorkResults;                   // 0x7B(0x1)(None)
	bool                                         bCachedHaveLoadedWorkResults;                      // 0x7C(0x1)(None)
	bool                                         bHasChildNodes;                                    // 0x7D(0x1)(None)
	uint8                                        Pad_CC4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FString>                          ClearedLandscapeLayers;                            // 0x80(0x50)(None)
	bool                                         bShow;                                             // 0xD0(0x1)(None)
	uint8                                        Pad_CC5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                      // 0xD8(0x50)(ZeroConstructor)
	struct FWorkItemTally                        WorkItemTally;                                     // 0x128(0x238)(None)
	struct FAggregatedWorkItemTally              AggregatedWorkItemTally;                           // 0x360(0x28)(None)
	bool                                         bHasReceivedCookCompleteEvent;                     // 0x388(0x1)(None)
	uint8                                        Pad_CC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x390(0x10)(None)

	static class UClass* StaticClass();
	static class UTOPNode* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class HoudiniEngineRuntime.TOPNetwork
class UTOPNetwork : public UObject
{
public:
	int32                                        NodeID;                                            // 0x28(0x4)(None)
	uint8                                        Pad_CC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x30(0x10)(None)
	class FString                                NodePath;                                          // 0x40(0x10)(None)
	TArray<class UTOPNode*>                      AllTOPNodes;                                       // 0x50(0x10)(None)
	int32                                        SelectedTOPIndex;                                  // 0x60(0x4)(None)
	uint8                                        Pad_CCA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ParentName;                                        // 0x68(0x10)(None)
	bool                                         bShowResults;                                      // 0x78(0x1)(None)
	bool                                         bAutoLoadResults;                                  // 0x79(0x1)(None)
	uint8                                        Pad_CCB[0x1E];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTOPNetwork* GetDefaultObj();

};

// 0x108 (0x130 - 0x28)
// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
class UHoudiniPDGAssetLink : public UObject
{
public:
	class FString                                AssetName;                                         // 0x28(0x10)(None)
	class FString                                AssetNodePath;                                     // 0x38(0x10)(None)
	int32                                        AssetId;                                           // 0x48(0x4)(None)
	uint8                                        Pad_CCC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTOPNetwork*>                   AllTOPNetworks;                                    // 0x50(0x10)(ZeroConstructor)
	int32                                        SelectedTOPNetworkIndex;                           // 0x60(0x4)(None)
	enum class EPDGLinkState                     LinkState;                                         // 0x64(0x1)(None)
	bool                                         bAutoCook;                                         // 0x65(0x1)(None)
	bool                                         bUseTOPNodeFilter;                                 // 0x66(0x1)(None)
	bool                                         bUseTOPOutputFilter;                               // 0x67(0x1)(None)
	class FString                                TOPNodeFilter;                                     // 0x68(0x10)(None)
	class FString                                TOPOutputFilter;                                   // 0x78(0x10)(None)
	int32                                        NumWorkItems;                                      // 0x88(0x4)(None)
	uint8                                        Pad_CCD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAggregatedWorkItemTally              WorkItemTally;                                     // 0x90(0x28)(None)
	class FString                                OutputCachePath;                                   // 0xB8(0x10)(None)
	bool                                         bNeedsUIRefresh;                                   // 0xC8(0x1)(None)
	uint8                                        Pad_CCF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OutputParentActor;                                 // 0xD0(0x8)(None)
	struct FDirectoryPath                        BakeFolder;                                        // 0xD8(0x10)(None)
	uint8                                        Pad_CD0[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniPDGAssetLink* GetDefaultObj();

};

// 0x2C0 (0x2E8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
class UHoudiniRuntimeSettings : public UObject
{
public:
	enum class EHoudiniRuntimeSettingsSessionType SessionType;                                       // 0x28(0x1)(None)
	uint8                                        Pad_CD2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerHost;                                        // 0x30(0x10)(None)
	int32                                        ServerPort;                                        // 0x40(0x4)(None)
	uint8                                        Pad_CD3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerPipeName;                                    // 0x48(0x10)(None)
	bool                                         bStartAutomaticServer;                             // 0x58(0x1)(None)
	uint8                                        Pad_CD4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutomaticServerTimeout;                            // 0x5C(0x4)(None)
	bool                                         bSyncWithHoudiniCook;                              // 0x60(0x1)(None)
	bool                                         bCookUsingHoudiniTime;                             // 0x61(0x1)(None)
	bool                                         bSyncViewport;                                     // 0x62(0x1)(None)
	bool                                         bSyncHoudiniViewport;                              // 0x63(0x1)(None)
	bool                                         bSyncUnrealViewport;                               // 0x64(0x1)(None)
	bool                                         bShowMultiAssetDialog;                             // 0x65(0x1)(None)
	bool                                         bPreferHdaMemoryCopyOverHdaSourceFile;             // 0x66(0x1)(None)
	bool                                         bPauseCookingOnStart;                              // 0x67(0x1)(None)
	bool                                         bDisplaySlateCookingNotifications;                 // 0x68(0x1)(None)
	uint8                                        Pad_CD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DefaultTemporaryCookFolder;                        // 0x70(0x10)(None)
	class FString                                DefaultBakeFolder;                                 // 0x80(0x10)(None)
	bool                                         bEnableTheReferenceCountedInputSystem;             // 0x90(0x1)(None)
	bool                                         MarshallingLandscapesUseDefaultUnrealScaling;      // 0x91(0x1)(None)
	bool                                         MarshallingLandscapesUseFullResolution;            // 0x92(0x1)(None)
	bool                                         MarshallingLandscapesForceMinMaxValues;            // 0x93(0x1)(None)
	float                                        MarshallingLandscapesForcedMinValue;               // 0x94(0x4)(None)
	float                                        MarshallingLandscapesForcedMaxValue;               // 0x98(0x4)(None)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x9C(0x1)(None)
	bool                                         bUseLegacyInputCurves;                             // 0x9D(0x1)(None)
	uint8                                        Pad_CD6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MarshallingSplineResolution;                       // 0xA0(0x4)(None)
	bool                                         bEnableProxyStaticMesh;                            // 0xA4(0x1)(None)
	bool                                         bShowDefaultMesh;                                  // 0xA5(0x1)(None)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xA6(0x1)(None)
	bool                                         bEnableProxyStaticMeshRefinementByTimer;           // 0xA7(0x1)(None)
	float                                        ProxyMeshAutoRefineTimeoutSeconds;                 // 0xA8(0x4)(None)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorld;    // 0xAC(0x1)(None)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIE;     // 0xAD(0x1)(None)
	uint8                                        Pad_CD7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDoubleSidedGeometry : 1;                          // Mask: 0x1, PropSize: 0x10xB0(0x1)(None)
	uint8                                        BitPad_A3 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_CD8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0xB8(0x8)(ZeroConstructor)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0xC0(0x138)(ZeroConstructor)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x1F8(0x1)(None)
	uint8                                        Pad_CD9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightMapResolution;                                // 0x1FC(0x4)(None)
	float                                        LpvBiasMultiplier;                                 // 0x200(0x4)(None)
	float                                        GeneratedDistanceFieldResolutionScale;             // 0x204(0x4)(None)
	struct FWalkableSlopeOverride                WalkableSlopeOverride;                             // 0x208(0x10)(None)
	int32                                        LightMapCoordinateIndex;                           // 0x218(0x4)(None)
	uint8                                        bUseMaximumStreamingTexelRatio : 1;                // Mask: 0x1, PropSize: 0x10x21C(0x1)(None)
	uint8                                        BitPad_A4 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_CDB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StreamingDistanceMultiplier;                       // 0x220(0x4)(None)
	uint8                                        Pad_CDC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType_InstancedStaticMesh*      FoliageDefaultSettings;                            // 0x228(0x8)(ZeroConstructor)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x230(0x10)(None)
	bool                                         bUseFullPrecisionUVs;                              // 0x240(0x1)(None)
	uint8                                        Pad_CDD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SrcLightmapIndex;                                  // 0x244(0x4)(None)
	int32                                        DstLightmapIndex;                                  // 0x248(0x4)(None)
	int32                                        MinLightmapResolution;                             // 0x24C(0x4)(None)
	bool                                         bRemoveDegenerates;                                // 0x250(0x1)(None)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag;                           // 0x251(0x1)(None)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag;                              // 0x252(0x1)(None)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag;                             // 0x253(0x1)(None)
	bool                                         bUseMikkTSpace;                                    // 0x254(0x1)(None)
	bool                                         bBuildAdjacencyBuffer;                             // 0x255(0x1)(None)
	uint8                                        bComputeWeightedNormals : 1;                       // Mask: 0x1, PropSize: 0x10x256(0x1)(None)
	uint8                                        bBuildReversedIndexBuffer : 1;                     // Mask: 0x2, PropSize: 0x10x256(0x1)(None)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x4, PropSize: 0x10x256(0x1)(None)
	uint8                                        BitPad_A5 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_CDF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFieldResolutionScale;                      // 0x258(0x4)(None)
	uint8                                        bGenerateDistanceFieldAsIfTwoSided : 1;            // Mask: 0x1, PropSize: 0x10x25C(0x1)(None)
	uint8                                        bSupportFaceRemap : 1;                             // Mask: 0x2, PropSize: 0x10x25C(0x1)(None)
	uint8                                        BitPad_A6 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bPDGAsyncCommandletImportEnabled;                  // 0x25D(0x1)(None)
	bool                                         bEnableBackwardCompatibility;                      // 0x25E(0x1)(None)
	bool                                         bAutomaticLegacyHDARebuild;                        // 0x25F(0x1)(None)
	bool                                         bUseCustomHoudiniLocation;                         // 0x260(0x1)(None)
	uint8                                        Pad_CEB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        CustomHoudiniLocation;                             // 0x268(0x10)(None)
	enum class EHoudiniExecutableType            HoudiniExecutable;                                 // 0x278(0x1)(None)
	uint8                                        Pad_CEC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        CustomHoudiniHomeLocation;                         // 0x280(0x10)(None)
	int32                                        CookingThreadStackSize;                            // 0x290(0x4)(None)
	uint8                                        Pad_CED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HoudiniEnvironmentFiles;                           // 0x298(0x10)(None)
	class FString                                OtlSearchPath;                                     // 0x2A8(0x10)(None)
	class FString                                DsoSearchPath;                                     // 0x2B8(0x10)(None)
	class FString                                ImageDsoSearchPath;                                // 0x2C8(0x10)(None)
	class FString                                AudioDsoSearchPath;                                // 0x2D8(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniRuntimeSettings* GetDefaultObj();

};

// 0x308 (0x5D0 - 0x2C8)
// Class HoudiniEngineRuntime.HoudiniSplineComponent
class UHoudiniSplineComponent : public USceneComponent
{
public:
	uint8                                        Pad_CF2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    CurvePoints;                                       // 0x2D0(0x10)(None)
	TArray<struct FVector3d>                     DisplayPoints;                                     // 0x2E0(0x10)(None)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x2F0(0x10)(None)
	class FString                                HoudiniSplineName;                                 // 0x300(0x10)(None)
	bool                                         bClosed;                                           // 0x310(0x1)(None)
	bool                                         bReversed;                                         // 0x311(0x1)(None)
	uint8                                        Pad_CF3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurveOrder;                                        // 0x314(0x4)(None)
	bool                                         bIsHoudiniSplineVisible;                           // 0x318(0x1)(None)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x319(0x1)(None)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x31A(0x1)(None)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;                   // 0x31B(0x1)(None)
	bool                                         bIsOutputCurve;                                    // 0x31C(0x1)(None)
	bool                                         bCookOnCurveChanged;                               // 0x31D(0x1)(None)
	bool                                         bIsLegacyInputCurve;                               // 0x31E(0x1)(None)
	uint8                                        Pad_CF8[0x291];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasChanged;                                       // 0x5B0(0x1)(None)
	bool                                         bNeedsToTriggerUpdate;                             // 0x5B1(0x1)(None)
	bool                                         bIsInputCurve;                                     // 0x5B2(0x1)(None)
	bool                                         bIsEditableOutputCurve;                            // 0x5B3(0x1)(None)
	int32                                        NodeID;                                            // 0x5B4(0x4)(None)
	class FString                                PartName;                                          // 0x5B8(0x10)(None)
	uint8                                        Pad_CFB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniSplineComponent* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniStaticMesh
class UHoudiniStaticMesh : public UObject
{
public:
	bool                                         bHasNormals;                                       // 0x28(0x1)(None)
	bool                                         bHasTangents;                                      // 0x29(0x1)(None)
	bool                                         bHasColors;                                        // 0x2A(0x1)(None)
	uint8                                        Pad_DBF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       NumUVLayers;                                       // 0x2C(0x4)(None)
	bool                                         bHasPerFaceMaterials;                              // 0x30(0x1)(None)
	uint8                                        Pad_DC1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector3f>                     VertexPositions;                                   // 0x38(0x10)(None)
	TArray<struct FIntVector>                    TriangleIndices;                                   // 0x48(0x10)(None)
	TArray<struct FColor>                        VertexInstanceColors;                              // 0x58(0x10)(None)
	TArray<struct FVector3f>                     VertexInstanceNormals;                             // 0x68(0x10)(None)
	TArray<struct FVector3f>                     VertexInstanceUTangents;                           // 0x78(0x10)(None)
	TArray<struct FVector3f>                     VertexInstanceVTangents;                           // 0x88(0x10)(None)
	TArray<struct FVector2f>                     VertexInstanceUVs;                                 // 0x98(0x10)(None)
	TArray<int32>                                MaterialIDsPerTriangle;                            // 0xA8(0x10)(None)
	TArray<struct FStaticMaterial>               StaticMaterials;                                   // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class UHoudiniStaticMesh* GetDefaultObj();

	void SetVertexPosition(uint32 InVertexIndex, const struct FVector3f& InPosition);
	void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const struct FVector3f& InVTangent);
	void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const struct FVector2f& InUV);
	void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const struct FVector3f& InUTangent);
	void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const struct FVector3f& InNormal);
	void SetTriangleVertexIndices(uint32 InTriangleIndex, const struct FIntVector& InTriangleVertexIndices);
	void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const struct FColor& InColor);
	void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);
	void SetStaticMaterial(uint32 InMaterialIndex, const struct FStaticMaterial& InStaticMaterial);
	void SetNumUVLayers(uint32 InNumUVLayers);
	void SetNumStaticMaterials(uint32 InNumStaticMaterials);
	void SetHasTangents(bool bInHasTangents);
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
	void SetHasNormals(bool bInHasNormals);
	void SetHasColors(bool bInHasColors);
	void Optimize();
	void IsValid(bool bInSkipVertexIndicesCheck, bool ReturnValue);
	void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
	void HasTangents(bool ReturnValue);
	void HasPerFaceMaterials(bool ReturnValue);
	void HasNormals(bool ReturnValue);
	void HasColors(bool ReturnValue);
	void GetVertexPositions(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceVTangents(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceUVs(const TArray<struct FVector2f>& ReturnValue);
	void GetVertexInstanceUTangents(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceNormals(const TArray<struct FVector3f>& ReturnValue);
	void GetVertexInstanceColors(const TArray<struct FColor>& ReturnValue);
	void GetTriangleIndices(const TArray<struct FIntVector>& ReturnValue);
	void GetStaticMaterials(const TArray<struct FStaticMaterial>& ReturnValue);
	void GetNumVertices(uint32 ReturnValue);
	void GetNumVertexInstances(uint32 ReturnValue);
	void GetNumUVLayers(uint32 ReturnValue);
	void GetNumTriangles(uint32 ReturnValue);
	void GetNumStaticMaterials(uint32 ReturnValue);
	void GetMaterialIndex(class FName InMaterialSlotName, int32 ReturnValue);
	void GetMaterialIDsPerTriangle(const TArray<int32>& ReturnValue);
	void GetMaterial(int32 InMaterialIndex, class UMaterialInterface* ReturnValue);
	void CalculateTangents(bool bInComputeWeightedNormals);
	void CalculateNormals(bool bInComputeWeightedNormals);
	void CalcBounds(const struct FBox& ReturnValue);
	void AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial, uint32 ReturnValue);
};

// 0x50 (0x710 - 0x6C0)
// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
class UHoudiniStaticMeshComponent : public UMeshComponent
{
public:
	class UHoudiniStaticMesh*                    Mesh;                                              // 0x6C0(0x8)(ZeroConstructor)
	struct FBox                                  LocalBounds;                                       // 0x6C8(0x38)(None)
	bool                                         bHoudiniIconVisible;                               // 0x700(0x1)(None)
	uint8                                        Pad_DEC[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniStaticMeshComponent* GetDefaultObj();

	void SetMesh(class UHoudiniStaticMesh* InMesh);
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
	void NotifyMeshUpdated();
	void IsHoudiniIconVisible(bool ReturnValue);
	void GetMesh(class UHoudiniStaticMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
class IHoudiniAssetStateEvents : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniAssetStateEvents* GetDefaultObj();

};

}


