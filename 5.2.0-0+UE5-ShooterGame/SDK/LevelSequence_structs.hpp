#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings
{
public:
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(None)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_4F0[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_4F1[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_4F2[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x0(0x10)(None)
	struct FSoftObjectPath                       PathToAnimSequence;                                // 0x10(0x20)(None)
	bool                                         bExportTransforms;                                 // 0x30(0x1)(None)
	bool                                         bExportMorphTargets;                               // 0x31(0x1)(None)
	bool                                         bExportAttributeCurves;                            // 0x32(0x1)(None)
	bool                                         bExportMaterialCurves;                             // 0x33(0x1)(None)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x34(0x1)(None)
	enum class ERichCurveInterpMode              CurveInterpolation;                                // 0x35(0x1)(None)
	bool                                         bRecordInWorldSpace;                               // 0x36(0x1)(None)
	bool                                         bEvaluateAllSkeletalMeshComponents;                // 0x37(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FSoftObjectPath                       ExternalObjectPath;                                // 0x10(0x20)(AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                ObjectPath;                                        // 0x30(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0(0x10)(None)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TSet<struct FGuid>                           PostProcessInstances;                              // 0xA0(0x50)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(ZeroConstructor)
	uint8                                        Pad_4F8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ComponentName;                                     // 0x20(0x10)(None)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        Pad_4F9[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FString                                RootName;                                          // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FQualifiedFrameTime                   RootTime;                                          // 0x10(0x10)(None)
	struct FQualifiedFrameTime                   SourceTime;                                        // 0x20(0x10)(None)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FQualifiedFrameTime                   CurrentShotLocalTime;                              // 0x40(0x10)(None)
	struct FQualifiedFrameTime                   CurrentShotSourceTime;                             // 0x50(0x10)(None)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x30)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class ULevelSequence*                        ActiveShot;                                        // 0xA0(0x8)(None)
	struct FMovieSceneSequenceID                 ShotID;                                            // 0xA8(0x4)(None)
	uint8                                        Pad_4FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MasterName;                                        // 0xB0(0x10)(None)
	struct FQualifiedFrameTime                   MasterTime;                                        // 0xC0(0x10)(None)
};

}


