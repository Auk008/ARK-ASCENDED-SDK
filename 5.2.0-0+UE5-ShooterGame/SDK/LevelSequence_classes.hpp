#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x220 - 0x68)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                        Pad_4A8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ZeroConstructor)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x78(0x50)(None)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC8(0xF0)(None)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(ZeroConstructor)
	class UClass*                                DirectorClass;                                     // 0x208(0x8)(ZeroConstructor)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	void RemoveMetaDataByClass(class UClass* InClass);
	void FindOrAddMetaDataByClass(class UClass* InClass, class UObject* ReturnValue);
	void FindMetaDataByClass(class UClass* InClass, class UObject* ReturnValue);
	void CopyMetaData(class UObject* InMetaData, class UObject* ReturnValue);
};

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_4AE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(None)
	uint8                                        Pad_4AF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TransformOrigin;                                   // 0x40(0x60)(None)

	static class UClass* StaticClass();
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceMetaData
class ILevelSequenceMetaData : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILevelSequenceMetaData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.AnimSequenceLevelSequenceLink
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(None)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x20)(None)

	static class UClass* StaticClass();
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(None)
	uint8                                        Pad_4BF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x20)(None)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(None)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// 0x78 (0x530 - 0x4B8)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_4CE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4C8(0x20)(None)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x4E8(0x8)(ZeroConstructor)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x4F0(0x8)(ZeroConstructor)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x4F8(0x2)(None)
	uint8                                        Pad_4CF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x500(0x8)(ZeroConstructor)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x508(0x8)(ZeroConstructor)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x510(0x1)(None)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x510(0x1)(None)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x510(0x1)(None)
	uint8                                        BitPad_4E : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DefaultInstanceData;                               // 0x518(0x8)(ZeroConstructor)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x520(0x8)(ZeroConstructor)
	bool                                         bShowBurnin;                                       // 0x528(0x1)(None)
	uint8                                        Pad_4D1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetBindingByTag(class FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBindingByTag(class FName Tag, class AActor* Actor);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	void LoadSequence(class ULevelSequence* ReturnValue);
	void HideBurnin();
	void GetSequencePlayer(class ULevelSequencePlayer* ReturnValue);
	void GetSequence(class ULevelSequence* ReturnValue);
	void FindNamedBindings(class FName Tag, const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	void FindNamedBinding(class FName Tag, const struct FMovieSceneObjectBindingID& ReturnValue);
	void AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// 0x0 (0x530 - 0x530)
// Class LevelSequence.ReplicatedLevelSequenceActor
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{
public:

	static class UClass* StaticClass();
	static class AReplicatedLevelSequenceActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceAnimSequenceLink
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD8 (0x3F8 - 0x320)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x320(0xD0)(ZeroConstructor)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x3F0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	void SetSettings(class UObject* InSettings);
	void GetSettingsClass(class UClass* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(None)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(None)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(None)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
	void GetSequence(class UMovieSceneSequence* ReturnValue);
	void GetRootSequenceTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetMasterSequenceTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetCurrentTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding, const TArray<class UObject*>& ReturnValue);
	void GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding, class UObject* ReturnValue);
	void GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding, const TArray<class AActor*>& ReturnValue);
	void GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding, class AActor* ReturnValue);
};

// 0x0 (0xA8 - 0xA8)
// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj();

};

// 0x130 (0x600 - 0x4D0)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4D0(0x10)(ZeroConstructor)
	uint8                                        Pad_4DF[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	void GetActiveCameraComponent(class UCameraComponent* ReturnValue);
	void CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor* OutActor, class ULevelSequencePlayer* ReturnValue);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(None)
	uint8                                        Pad_4E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(None)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(None)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(None)
	uint8                                        Pad_4E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x4E0 - 0x4B8)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_4ED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   Sequence;                                          // 0x4C0(0x8)(ZeroConstructor)
	class UMediaComponent*                       MediaComponent;                                    // 0x4C8(0x8)(ZeroConstructor)
	float                                        ServerStartTimeSeconds;                            // 0x4D0(0x4)(None)
	uint8                                        Pad_4EE[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	void GetSequence(class ALevelSequenceActor* ReturnValue);
	void GetMediaComponent(class UMediaComponent* ReturnValue);
};

}


