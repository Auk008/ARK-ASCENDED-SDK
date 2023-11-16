#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	uint8                                        Pad_25A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Signature;                                         // 0x2C(0x10)(None)
	uint8                                        Pad_25C[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSignedObject* GetDefaultObj();

};

// 0x98 (0xF0 - 0x58)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0x58(0x2)(None)
	uint8                                        Pad_26B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEasingSettings             Easing;                                            // 0x60(0x38)(None)
	struct FMovieSceneFrameRange                 SectionRange;                                      // 0x98(0x10)(None)
	struct FFrameNumber                          PreRollFrames;                                     // 0xA8(0x4)(None)
	struct FFrameNumber                          PostRollFrames;                                    // 0xAC(0x4)(None)
	int32                                        RowIndex;                                          // 0xB0(0x4)(None)
	int32                                        OverlapPriority;                                   // 0xB4(0x4)(None)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(None)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB8(0x1)(None)
	uint8                                        BitPad_19 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_26C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xBC(0x4)(None)
	float                                        EndTime;                                           // 0xC0(0x4)(None)
	float                                        PrerollTime;                                       // 0xC4(0x4)(None)
	float                                        PostrollTime;                                      // 0xC8(0x4)(None)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xCC(0x1)(None)
	uint8                                        BitPad_1A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_26E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupportsInfiniteRange;                            // 0xD0(0x1)(None)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0xD1(0x2)(None)
	uint8                                        Pad_26F[0x1D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSection* GetDefaultObj();

	void SetRowIndex(int32 NewRowIndex);
	void SetPreRollFrames(int32 InPreRollFrames);
	void SetPostRollFrames(int32 InPostRollFrames);
	void SetOverlapPriority(int32 NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);
	void SetColorTint(const struct FColor& InColorTint);
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);
	void IsLocked(bool ReturnValue);
	void IsActive(bool ReturnValue);
	void GetRowIndex(int32 ReturnValue);
	void GetPreRollFrames(int32 ReturnValue);
	void GetPostRollFrames(int32 ReturnValue);
	void GetOverlapPriority(int32 ReturnValue);
	void GetCompletionMode(enum class EMovieSceneCompletionMode ReturnValue);
	void GetColorTint(const struct FColor& ReturnValue);
	void GetBlendType(const struct FOptionalMovieSceneBlendType& ReturnValue);
};

// 0x40 (0x98 - 0x58)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0x58(0x4)(None)
	uint8                                        Pad_274[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsEvalDisabled;                                   // 0x5D(0x1)(None)
	uint8                                        Pad_275[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RowsDisabled;                                      // 0x60(0x10)(None)
	uint8                                        Pad_276[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 EvaluationFieldGuid;                               // 0x74(0x10)(None)
	uint8                                        Pad_277[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTrackEvaluationField       EvaluationField;                                   // 0x88(0x10)(None)

	static class UClass* StaticClass();
	static class UMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNameableTrack* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*               CompiledData;                                      // 0x58(0x8)(None)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x60(0x1)(None)
	bool                                         bParentContextsAreSignificant;                     // 0x61(0x1)(None)
	bool                                         bPlayableDirectly;                                 // 0x62(0x1)(None)
	enum class EMovieSceneSequenceFlags          SequenceFlags;                                     // 0x63(0x1)(None)
	uint8                                        Pad_27D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSequence* GetDefaultObj();

	void GetEarliestTimecodeSource(const struct FMovieSceneTimecodeSource& ReturnValue);
	void FindBindingsByTag(class FName InBindingName, const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	void FindBindingByTag(class FName InBindingName, const struct FMovieSceneObjectBindingID& ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class MovieScene.MovieSceneEntitySystem
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x28(0x8)(None)
	uint8                                        Pad_27E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneEntityInstantiatorSystem
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEntityInstantiatorSystem* GetDefaultObj();

};

// 0x6D0 (0x6F8 - 0x28)
// Class MovieScene.MovieSceneEntitySystemLinker
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	uint8                                        Pad_27F[0x278];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEntitySystemGraph          SystemGraph;                                       // 0x2A0(0x150)(None)
	uint8                                        Pad_280[0x308];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystemLinker* GetDefaultObj();

};

// 0x48 (0x138 - 0xF0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_284[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xF8(0x24)(None)
	float                                        StartOffset;                                       // 0x11C(0x4)(None)
	float                                        TimeScale;                                         // 0x120(0x4)(None)
	float                                        PrerollTime;                                       // 0x124(0x4)(None)
	uint8                                        NetworkMask;                                       // 0x128(0x1)(None)
	uint8                                        Pad_285[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   SubSequence;                                       // 0x130(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneSubSection* GetDefaultObj();

	void SetSequence(class UMovieSceneSequence* Sequence);
	void GetSequence(class UMovieSceneSequence* ReturnValue);
};

// 0x4A8 (0x4D0 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_2B2[0x200];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IMovieSceneSequencePlayerObserver> Observer;                                          // 0x228(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPlay;                                            // 0x238(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPlayReverse;                                     // 0x248(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnStop;                                            // 0x258(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPause;                                           // 0x268(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x278(0x10)(ZeroConstructor)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x288(0x1)(None)
	uint8                                        Pad_2B6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x28C(0x1)(None)
	uint8                                        BitPad_27 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2B7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   Sequence;                                          // 0x290(0x8)(ZeroConstructor)
	struct FFrameNumber                          StartTime;                                         // 0x298(0x4)(None)
	int32                                        DurationFrames;                                    // 0x29C(0x4)(None)
	float                                        DurationSubFrames;                                 // 0x2A0(0x4)(None)
	int32                                        CurrentNumLoops;                                   // 0x2A4(0x4)(None)
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x2A8(0x20)(None)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2C8(0x88)(ZeroConstructor)
	uint8                                        Pad_2B9[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequenceReplProperties     NetSyncProps;                                      // 0x3E0(0x10)(None)
	TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                                    // 0x3F0(0x10)(ZeroConstructor)
	class UMovieSceneSequenceTickManager*        TickManager;                                       // 0x400(0x8)(None)
	uint8                                        Pad_2BA[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSequencePlayer* GetDefaultObj();

	void StopAtCurrentTime();
	void Stop();
	void SetWeight(double InWeight);
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	void ScrubToMarkedFrame(const class FString& InLabel, bool ReturnValue);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void RestoreState();
	void RemoveWeight();
	void PlayToSeconds(float TimeInSeconds);
	void PlayToMarkedFrame(const class FString& InLabel, bool ReturnValue);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams);
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToMarkedFrame(const class FString& InLabel, bool ReturnValue);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	void IsReversed(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void GoToEndAndStop();
	void GetStartTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetSequenceName(bool bAddClientInfo, const class FString& ReturnValue);
	void GetSequence(class UMovieSceneSequence* ReturnValue);
	void GetPlayRate(float ReturnValue);
	void GetObjectBindings(class UObject* InObject, const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	void GetFrameRate(const struct FFrameRate& ReturnValue);
	void GetFrameDuration(int32 ReturnValue);
	void GetEndTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetDuration(const struct FQualifiedFrameTime& ReturnValue);
	void GetDisableCameraCuts(bool ReturnValue);
	void GetCurrentTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding, const TArray<class UObject*>& ReturnValue);
	void ChangePlaybackDirection();
};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneSubTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBlenderSystemSupport
class IMovieSceneBlenderSystemSupport : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBlenderSystemSupport* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneChannelOverrideProvider
class IMovieSceneChannelOverrideProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneChannelOverrideProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneDeterminismSource
class IMovieSceneDeterminismSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneDeterminismSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEvaluationHook
class IMovieSceneEvaluationHook : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEvaluationHook* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePlaybackClient
class IMovieScenePlaybackClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePlaybackClient* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequencePlayerObserver
class IMovieSceneSequencePlayerObserver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneSequencePlayerObserver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class IMovieSceneBindingOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBindingOwnerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCachedTrack
class IMovieSceneCachedTrack : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCachedTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class IMovieSceneEasingFunction : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEasingFunction* GetDefaultObj();

	void OnEvaluate(float Interp, float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneKeyProxy
class IMovieSceneKeyProxy : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneKeyProxy* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManagerClient
class IMovieSceneSequenceTickManagerClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneSequenceTickManagerClient* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieScene.MovieSceneChannelOverrideContainer
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneChannelOverrideContainer* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
class UMovieSceneSectionChannelOverrideRegistry : public UObject
{
public:
	TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;                                         // 0x28(0x50)(None)

	static class UClass* StaticClass();
	static class UMovieSceneSectionChannelOverrideRegistry* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneTrackTemplateProducer
class IMovieSceneTrackTemplateProducer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneTrackTemplateProducer* GetDefaultObj();

};

// 0x3D0 (0x3F8 - 0x28)
// Class MovieScene.MovieSceneCompiledData
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate         EvaluationTemplate;                                // 0x28(0x160)(ZeroConstructor)
	struct FMovieSceneSequenceHierarchy          Hierarchy;                                         // 0x188(0x118)(None)
	struct FMovieSceneEntityComponentField       EntityComponentField;                              // 0x2A0(0xF0)(None)
	struct FMovieSceneEvaluationField            TrackTemplateField;                                // 0x390(0x30)(None)
	TArray<struct FFrameTime>                    DeterminismFences;                                 // 0x3C0(0x10)(None)
	struct FGuid                                 CompiledSignature;                                 // 0x3D0(0x10)(None)
	struct FGuid                                 CompilerVersion;                                   // 0x3E0(0x10)(None)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;                                   // 0x3F0(0x1)(None)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;                                     // 0x3F1(0x1)(None)
	enum class EMovieSceneSequenceFlags          AccumulatedFlags;                                  // 0x3F2(0x1)(None)
	uint8                                        Pad_2D6[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCompiledData* GetDefaultObj();

};

// 0x208 (0x230 - 0x28)
// Class MovieScene.MovieSceneCompiledDataManager
class UMovieSceneCompiledDataManager : public UObject
{
public:
	uint8                                        Pad_2D8[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FMovieSceneSequenceHierarchy> Hierarchies;                                       // 0xD8(0x50)(None)
	TMap<int32, struct FMovieSceneEvaluationTemplate> TrackTemplates;                                    // 0x128(0x50)(ZeroConstructor)
	TMap<int32, struct FMovieSceneEvaluationField> TrackTemplateFields;                               // 0x178(0x50)(None)
	TMap<int32, struct FMovieSceneEntityComponentField> EntityComponentFields;                             // 0x1C8(0x50)(None)
	uint8                                        Pad_2D9[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCompiledDataManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEntityProvider
class IMovieSceneEntityProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEntityProvider* GetDefaultObj();

};

// 0x28 (0x68 - 0x40)
// Class MovieScene.MovieSceneBlenderSystem
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_2DC[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneBlenderSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneGenericBoundObjectInstantiator* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBoundSceneComponentInstantiator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneValueDecomposer
class IMovieSceneValueDecomposer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneValueDecomposer* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class MovieScene.MovieSceneEvalTimeSystem
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_2E1[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneEvalTimeSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieScene.MovieSceneEvaluationHookSystem
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                       // 0x40(0x50)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneEvaluationHookSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
class IMovieScenePreAnimatedStateSystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePreAnimatedStateSystemInterface* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCachePreAnimatedStateSystem* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_2EF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneRestorePreAnimatedStateSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneRootInstantiatorSystem
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneRootInstantiatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneSpawnablesSystem
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSpawnablesSystem* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class MovieScene.MovieSceneTrackInstance
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                               AnimatedObject;                                    // 0x28(0x8)(ZeroConstructor)
	bool                                         bIsRootTrackInstance;                              // 0x30(0x1)(None)
	uint8                                        Pad_2F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneEntitySystemLinker*         PrivateLinker;                                     // 0x38(0x8)(ZeroConstructor)
	TArray<struct FMovieSceneTrackInstanceInput> Inputs;                                            // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstance* GetDefaultObj();

};

// 0xB0 (0xF0 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceInstantiator
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_2F4[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceInstantiator* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceSystem
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*  Instantiator;                                      // 0x40(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCustomClockSource
class IMovieSceneCustomClockSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCustomClockSource* GetDefaultObj();

	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
	void OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate, const struct FFrameTime& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_2F9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(None)
	uint8                                        Pad_2FA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_2FB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UMovieSceneEasingExternalCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.NodeAndChannelMappings
class INodeAndChannelMappings : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INodeAndChannelMappings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroup
class UMovieSceneNodeGroup : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNodeGroup* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroupCollection
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNodeGroupCollection* GetDefaultObj();

};

// 0x108 (0x160 - 0x58)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	uint8                                        Pad_2FD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0x60(0x10)(ZeroConstructor)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0x70(0x10)(None)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0x80(0x10)(ZeroConstructor)
	TMap<class FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                     // 0x90(0x50)(None)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0xE0(0x10)(ZeroConstructor)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(None)
	struct FMovieSceneFrameRange                 SelectionRange;                                    // 0xF8(0x10)(None)
	struct FMovieSceneFrameRange                 PlaybackRange;                                     // 0x108(0x10)(None)
	struct FFrameRate                            TickResolution;                                    // 0x118(0x8)(None)
	struct FFrameRate                            DisplayRate;                                       // 0x120(0x8)(None)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0x128(0x1)(None)
	enum class EUpdateClockSource                ClockSource;                                       // 0x129(0x1)(None)
	uint8                                        Pad_300[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       CustomClockSourcePath;                             // 0x130(0x20)(None)
	TArray<struct FMovieSceneMarkedFrame>        MarkedFrames;                                      // 0x150(0x10)(None)

	static class UClass* StaticClass();
	static class UMovieScene* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x28(0x10)(None)
	uint8                                        Pad_302[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneBindingOverrides* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	uint8                                        Pad_303[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FolderName;                                        // 0x2C(0x8)(None)
	uint8                                        Pad_304[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x38(0x10)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ChildTracks;                                       // 0x48(0x10)(None)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x58(0x10)(None)
	uint8                                        Pad_305[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneFolder* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManager
class UMovieSceneSequenceTickManager : public UObject
{
public:
	uint8                                        Pad_306[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSequenceTickManager* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieScene.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                         DefaultValue;                                      // 0xF0(0x1)(None)
	uint8                                        Pad_30A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0xF8(0x100)(None)

	static class UClass* StaticClass();
	static class UMovieSceneBoolSection* GetDefaultObj();

};

// 0x18 (0x108 - 0xF0)
// Class MovieScene.MovieSceneHookSection
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_30B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRequiresRangedHook : 1;                           // Mask: 0x1, PropSize: 0x10x100(0x1)(None)
	uint8                                        bRequiresTriggerHooks : 1;                         // Mask: 0x2, PropSize: 0x10x100(0x1)(None)
	uint8                                        Pad_30C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneHookSection* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class MovieScene.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	uint8                                        Pad_30F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSpawnSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_315[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHighPassFilter;                                   // 0xA0(0x1)(None)
	uint8                                        Pad_316[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTestMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MovieScene.TestMovieSceneSection
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSection* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTestMovieSceneSequence* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTestMovieSceneSubTrack* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MovieScene.TestMovieSceneSubSection
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSubSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.TestMovieSceneEvalHookTrack
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x98(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookTrack* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class MovieScene.TestMovieSceneEvalHookSection
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	uint8                                        Pad_31C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ZeroConstructor)
	struct FGuid                                 ObjectGuid;                                        // 0xA8(0x10)(None)

	static class UClass* StaticClass();
	static class UMovieSceneSpawnTrack* GetDefaultObj();

};

}


