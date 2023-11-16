#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieSceneKeyInterpolation : uint8
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EMovieSceneCompletionMode : uint8
{
	KeepState                      = 0,
	RestoreState                   = 1,
	ProjectDefault                 = 2,
	EMovieSceneCompletionMode_MAX  = 3,
};

enum class EMovieScenePlayerStatus : uint8
{
	Stopped                        = 0,
	Playing                        = 1,
	Scrubbing                      = 2,
	Jumping                        = 3,
	Stepping                       = 4,
	Paused                         = 5,
	MAX                            = 6,
};

enum class EMovieSceneEvaluationType : uint8
{
	FrameLocked                    = 0,
	WithSubFrames                  = 1,
	EMovieSceneEvaluationType_MAX  = 2,
};

enum class EUpdateClockSource : uint8
{
	Tick                           = 0,
	Platform                       = 1,
	Audio                          = 2,
	RelativeTimecode               = 3,
	Timecode                       = 4,
	PlayEveryFrame                 = 5,
	Custom                         = 6,
	EUpdateClockSource_MAX         = 7,
};

enum class EMovieSceneSequenceFlags : uint8
{
	None                           = 0,
	Volatile                       = 1,
	BlockingEvaluation             = 2,
	DynamicWeighting               = 4,
	InheritedFlags                 = 1,
	EMovieSceneSequenceFlags_MAX   = 5,
};

enum class EMovieSceneServerClientMask : uint8
{
	None                           = 0,
	Server                         = 1,
	Client                         = 2,
	All                            = 3,
	EMovieSceneServerClientMask_MAX = 4,
};

enum class ESectionEvaluationFlags : uint8
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3,
};

enum class EMovieSceneBlendType : uint8
{
	Invalid                        = 0,
	Absolute                       = 1,
	Additive                       = 2,
	Relative                       = 4,
	AdditiveFromBase               = 8,
	EMovieSceneBlendType_MAX       = 9,
};

enum class EEvaluationMethod : uint8
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2,
};

enum class EMovieSceneBuiltInEasing : uint8
{
	Linear                         = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	QuadIn                         = 4,
	QuadOut                        = 5,
	QuadInOut                      = 6,
	Cubic                          = 7,
	CubicIn                        = 8,
	CubicOut                       = 9,
	CubicInOut                     = 10,
	HermiteCubicInOut              = 11,
	QuartIn                        = 12,
	QuartOut                       = 13,
	QuartInOut                     = 14,
	QuintIn                        = 15,
	QuintOut                       = 16,
	QuintInOut                     = 17,
	ExpoIn                         = 18,
	ExpoOut                        = 19,
	ExpoInOut                      = 20,
	CircIn                         = 21,
	CircOut                        = 22,
	CircInOut                      = 23,
	Custom                         = 24,
	EMovieSceneBuiltInEasing_MAX   = 25,
};

enum class EMovieSceneObjectBindingSpace : uint8
{
	Local                          = 0,
	Root                           = 1,
	Unused                         = 2,
	EMovieSceneObjectBindingSpace_MAX = 3,
};

enum class EUpdatePositionMethod : uint8
{
	Play                           = 0,
	Jump                           = 1,
	Scrub                          = 2,
	EUpdatePositionMethod_MAX      = 3,
};

enum class EMovieScenePositionType : uint8
{
	Frame                          = 0,
	Time                           = 1,
	MarkedFrame                    = 2,
	EMovieScenePositionType_MAX    = 3,
};

enum class ESpawnOwnership : uint8
{
	InnerSequence                  = 0,
	RootSequence                   = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase
{
public:
	uint8                                        Pad_321[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
public:
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x10(0x1)(None)
	uint8                                        Pad_322[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMovieSceneSection>     SourceSectionPtr;                                  // 0x14(0x8)(None)
	uint8                                        Pad_323[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneChannel
struct FMovieSceneChannel
{
public:
	uint8                                        Pad_324[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x88 - 0x88)
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
public:
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneBoolChannel
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         DefaultValue;                                      // 0x60(0x1)(None)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(None)
	uint8                                        Pad_325[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 Values;                                            // 0x68(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x78(0x88)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(None)
	float                                        LeaveTangent;                                      // 0x4(0x4)(None)
	float                                        ArriveTangentWeight;                               // 0x8(0x4)(None)
	float                                        LeaveTangentWeight;                                // 0xC(0x4)(None)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x10(0x1)(None)
	uint8                                        Pad_327[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
	struct FMovieSceneTangentData                Tangent;                                           // 0x4(0x14)(None)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x18(0x1)(None)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x19(0x1)(None)
	uint8                                        PaddingByte;                                       // 0x1A(0x1)(None)
	uint8                                        Pad_32C[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieScene.MovieSceneFloatChannel
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(None)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(None)
	uint8                                        Pad_32F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatValue>         Values;                                            // 0x68(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	float                                        DefaultValue;                                      // 0x78(0x4)(None)
	bool                                         bHasDefaultValue;                                  // 0x7C(0x1)(None)
	uint8                                        Pad_332[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x80(0x88)(None)
	struct FFrameRate                            TickResolution;                                    // 0x108(0x8)(None)
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        DefaultValue;                                      // 0x60(0x4)(None)
	bool                                         bHasDefaultValue;                                  // 0x64(0x1)(None)
	uint8                                        Pad_333[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Values;                                            // 0x68(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x78(0x88)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct FMovieSceneSequenceInstanceData
{
public:
	uint8                                        Pad_334[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(None)
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x10(0x4)(None)
};

// 0xB8 (0x108 - 0x50)
// ScriptStruct MovieScene.MovieSceneByteChannel
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        DefaultValue;                                      // 0x60(0x1)(None)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(None)
	uint8                                        Pad_335[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Values;                                            // 0x68(0x10)(Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UEnum*                                 Enum;                                              // 0x78(0x8)(None)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x80(0x88)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(None)
	class FString                                PropertyPath;                                      // 0x8(0x10)(None)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x18)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertyBinding
struct FMovieScenePropertyBinding
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(None)
	class FName                                  PropertyPath;                                      // 0x8(0x8)(None)
	bool                                         bCanUseClassLookup;                                // 0x10(0x1)(None)
	uint8                                        Pad_336[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	int32                                        SequenceID;                                        // 0x10(0x4)(None)
	int32                                        ResolveParentIndex;                                // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.ActorForWorldTransforms
struct FActorForWorldTransforms
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ZeroConstructor)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x8(0x8)(None)
	class FName                                  SocketName;                                        // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneDeterminismData
struct FMovieSceneDeterminismData
{
public:
	TArray<struct FFrameTime>                    Fences;                                            // 0x0(0x10)(None)
	bool                                         bParentSequenceRequiresLowerFence;                 // 0x10(0x1)(None)
	bool                                         bParentSequenceRequiresUpperFence;                 // 0x11(0x1)(None)
	uint8                                        Pad_337[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct
{
public:
	uint8                                        Pad_338[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(None)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(None)
	uint32                                       SectionIndex;                                      // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_339[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
struct FGeneratedMovieSceneKeyStruct
{
public:
	uint8                                        Pad_33A[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(None)
	uint8                                        Pad_33B[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters
{
public:
	struct FFrameNumber                          StartFrameOffset;                                  // 0x0(0x4)(None)
	bool                                         bCanLoop;                                          // 0x4(0x1)(None)
	uint8                                        Pad_33C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          EndFrameOffset;                                    // 0x8(0x4)(None)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0xC(0x4)(None)
	float                                        TimeScale;                                         // 0x10(0x4)(None)
	int32                                        HierarchicalBias;                                  // 0x14(0x4)(None)
	float                                        StartOffset;                                       // 0x18(0x4)(None)
	float                                        PrerollTime;                                       // 0x1C(0x4)(None)
	float                                        PostrollTime;                                      // 0x20(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier
{
public:
	int32                                        IdentifierIndex;                                   // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData
{
public:
	int32                                        ImplIndex;                                         // 0x0(0x4)(None)
	struct FFrameNumber                          ForcedTime;                                        // 0x4(0x4)(None)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x8(0x1)(None)
	uint8                                        Pad_33D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment
{
public:
	uint8                                        Pad_33E[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount
{
public:
	int32                                        Value;                                             // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTickInterval
struct FMovieSceneSequenceTickInterval
{
public:
	float                                        TickIntervalSeconds;                               // 0x0(0x4)(None)
	float                                        EvaluationBudgetMicroseconds;                      // 0x4(0x4)(None)
	bool                                         bTickWhenPaused;                                   // 0x8(0x1)(None)
	bool                                         bAllowRounding;                                    // 0x9(0x1)(None)
	uint8                                        Pad_33F[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings
{
public:
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_33 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_340[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequenceLoopCount          LoopCount;                                         // 0x4(0x4)(None)
	struct FMovieSceneSequenceTickInterval       TickInterval;                                      // 0x8(0xC)(None)
	float                                        PlayRate;                                          // 0x14(0x4)(None)
	float                                        StartTime;                                         // 0x18(0x4)(None)
	uint8                                        bRandomStartTime : 1;                              // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bDisableMovementInput : 1;                         // Mask: 0x4, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bDisableLookAtInput : 1;                           // Mask: 0x8, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bHidePlayer : 1;                                   // Mask: 0x10, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bHideHud : 1;                                      // Mask: 0x20, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bDisableCameraCuts : 1;                            // Mask: 0x40, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bPauseAtEnd : 1;                                   // Mask: 0x80, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bInheritTickIntervalFromOwner : 1;                 // Mask: 0x1, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bDynamicWeighting : 1;                             // Mask: 0x2, PropSize: 0x10x1D(0x1)(None)
	uint8                                        Pad_342[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform
{
public:
	float                                        TimeScale;                                         // 0x0(0x4)(None)
	struct FFrameTime                            Offset;                                            // 0x4(0x8)(None)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieScene.MovieSceneAudioTriggerChannel
struct FMovieSceneAudioTriggerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 Values;                                            // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, HasGetValueTypeHash)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneDoubleValue
struct FMovieSceneDoubleValue
{
public:
	double                                       Value;                                             // 0x0(0x8)(None)
	struct FMovieSceneTangentData                Tangent;                                           // 0x8(0x14)(None)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x1C(0x1)(None)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x1D(0x1)(None)
	uint8                                        PaddingByte;                                       // 0x1E(0x1)(None)
	uint8                                        Pad_343[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x118 - 0x50)
// ScriptStruct MovieScene.MovieSceneDoubleChannel
struct FMovieSceneDoubleChannel : public FMovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(None)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(None)
	uint8                                        Pad_344[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneDoubleValue>        Values;                                            // 0x68(0x10)(BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash)
	double                                       DefaultValue;                                      // 0x78(0x8)(None)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(None)
	uint8                                        Pad_345[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x88(0x88)(None)
	struct FFrameRate                            TickResolution;                                    // 0x110(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue
{
public:
	TSoftObjectPtr<class UObject>                SoftPtr;                                           // 0x0(0x30)(ZeroConstructor)
	class UObject*                               HardPtr;                                           // 0x30(0x8)(None)
};

// 0xE8 (0x138 - 0x50)
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
public:
	class UClass*                                PropertyClass;                                     // 0x50(0x8)(ZeroConstructor)
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;                                            // 0x68(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, HasGetValueTypeHash)
	struct FMovieSceneObjectPathChannelKeyValue  DefaultValue;                                      // 0x78(0x38)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, HasGetValueTypeHash)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0xB0(0x88)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
struct FMovieSceneSequenceCompilerMaskStruct
{
public:
	uint8                                        bHierarchy : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEvaluationTemplate : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEvaluationTemplateField : 1;                      // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEntityComponentField : 1;                         // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
struct FMovieSceneCompiledSequenceFlagStruct
{
public:
	uint8                                        bParentSequenceRequiresLowerFence : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bParentSequenceRequiresUpperFence : 1;             // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.EasingComponentData
struct FEasingComponentData
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
struct FMovieSceneTrackInstanceComponent
{
public:
	class UMovieSceneSection*                    Owner;                                             // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackInstanceClass;                                // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
struct FMovieSceneEvaluationHookComponent
{
public:
	TScriptInterface<class IMovieSceneEvaluationHook> Interface;                                         // 0x0(0x10)(None)
	uint8                                        Pad_34C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.TrackInstanceInputComponent
struct FTrackInstanceInputComponent
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        OutputIndex;                                       // 0x8(0x4)(None)
	uint8                                        Pad_34F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
struct FMovieSceneEntitySystemGraphNode
{
public:
	uint8                                        Pad_350[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneEntitySystem*               System;                                            // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
struct FMovieSceneEntitySystemGraphNodes
{
public:
	uint8                                        Pad_351[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
struct FMovieSceneEntitySystemGraph
{
public:
	uint8                                        Pad_352[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEntitySystemGraphNodes     Nodes;                                             // 0x80(0x38)(None)
	uint8                                        Pad_353[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
struct FMovieSceneEvaluationHookEvent
{
public:
	struct FMovieSceneEvaluationHookComponent    Hook;                                              // 0x0(0x20)(None)
	uint8                                        Pad_354[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
struct FMovieSceneEvaluationHookEventContainer
{
public:
	TArray<struct FMovieSceneEvaluationHookEvent> Events;                                            // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
struct FMovieSceneEvaluationInstanceKey
{
public:
	uint8                                        Pad_355[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
struct FMovieSceneTrackInstanceInput
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	uint8                                        Pad_356[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
struct FMovieSceneTrackInstanceEntry
{
public:
	class UObject*                               BoundObject;                                       // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrackInstance*              TrackInstance;                                     // 0x8(0x8)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType
{
public:
	enum class EMovieSceneBlendType              BlendType;                                         // 0x0(0x1)(None)
	bool                                         bIsValid;                                          // 0x1(0x1)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr
{
public:
	uint8                                        Pad_357[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
struct FMovieSceneEvaluationFieldEntityKey
{
public:
	TWeakObjectPtr<class UObject>                EntityOwner;                                       // 0x0(0x8)(None)
	uint32                                       EntityID;                                          // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
struct FMovieSceneEvaluationFieldEntity
{
public:
	struct FMovieSceneEvaluationFieldEntityKey   Key;                                               // 0x0(0xC)(None)
	int32                                        SharedMetaDataIndex;                               // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
struct FMovieSceneEvaluationFieldEntityMetaData
{
public:
	class FString                                OverrideBoundPropertyPath;                         // 0x0(0x10)(None)
	struct FFrameNumber                          ForcedTime;                                        // 0x10(0x4)(None)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x14(0x1)(None)
	uint8                                        bEvaluateInSequencePreRoll : 1;                    // Mask: 0x1, PropSize: 0x10x15(0x1)(None)
	uint8                                        bEvaluateInSequencePostRoll : 1;                   // Mask: 0x2, PropSize: 0x10x15(0x1)(None)
	uint8                                        Pad_358[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
struct FMovieSceneEvaluationFieldEntityTree
{
public:
	uint8                                        Pad_359[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntityComponentField
struct FMovieSceneEntityComponentField
{
public:
	struct FMovieSceneEvaluationFieldEntityTree  PersistentEntityTree;                              // 0x0(0x60)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash)
	struct FMovieSceneEvaluationFieldEntityTree  OneShotEntityTree;                                 // 0x60(0x60)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneEvaluationFieldEntity> Entities;                                          // 0xC0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                                    // 0xD0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                    // 0xE0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(None)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(None)
};

// 0x4 (0xC - 0x8)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSegmentIdentifier          SegmentID;                                         // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
struct FMovieSceneFieldEntry_EvaluationTrack
{
public:
	struct FMovieSceneEvaluationFieldTrackPtr    TrackPtr;                                          // 0x0(0x8)(None)
	uint16                                       NumChildren;                                       // 0x8(0x2)(None)
	uint8                                        Pad_35A[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
struct FMovieSceneFieldEntry_ChildTemplate
{
public:
	uint16                                       ChildIndex;                                        // 0x0(0x2)(None)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x2(0x1)(None)
	uint8                                        Pad_35B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          ForcedTime;                                        // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex
{
public:
	int32                                        NumInitPtrs;                                       // 0x0(0x4)(None)
	int32                                        NumEvalPtrs;                                       // 0x4(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup
{
public:
	TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                                        // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;                                          // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;                                        // 0x20(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey
{
public:
	struct FMovieSceneEvaluationKey              Key;                                               // 0x0(0xC)(None)
	uint16                                       SetupIndex;                                        // 0xC(0x2)(None)
	uint16                                       TearDownIndex;                                     // 0xE(0x2)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData
{
public:
	TArray<struct FMovieSceneSequenceID>         ActiveSequences;                                   // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;                                    // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneFrameRange
struct FMovieSceneFrameRange
{
public:
	uint8                                        Pad_35E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField
{
public:
	TArray<struct FMovieSceneFrameRange>         Ranges;                                            // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneEvaluationGroup>    Groups;                                            // 0x10(0x10)(Protected, BlueprintCallable, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneEvaluationMetaData> MetaData;                                          // 0x20(0x10)(None)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger
{
public:
	struct FMovieSceneTrackIdentifier            LastTrackIdentifier;                               // 0x0(0x4)(None)
	uint8                                        Pad_360[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                   // 0x8(0x50)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance)
	TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;                                  // 0x58(0x50)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData
{
public:
	TWeakObjectPtr<class UMovieSceneSubSection>  Section;                                           // 0x0(0x8)(None)
	struct FGuid                                 ObjectBindingID;                                   // 0x8(0x10)(None)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x18(0x1)(None)
	uint8                                        Pad_364[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr
{
public:
	uint8                                        Pad_365[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(None)
	uint16                                       EvaluationPriority;                                // 0x10(0x2)(None)
	enum class EEvaluationMethod                 EvaluationMethod;                                  // 0x12(0x1)(None)
	uint8                                        Pad_368[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMovieSceneTrack>       SourceTrack;                                       // 0x14(0x8)(None)
	uint8                                        Pad_369[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneEvalTemplatePtr>    ChildTemplates;                                    // 0x20(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, HasGetValueTypeHash)
	struct FMovieSceneTrackImplementationPtr     TrackTemplate;                                     // 0x30(0x38)(None)
	class FName                                  EvaluationGroup;                                   // 0x68(0x8)(None)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x1, PropSize: 0x10x70(0x1)(None)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x2, PropSize: 0x10x70(0x1)(None)
	uint8                                        bTearDownPriority : 1;                             // Mask: 0x4, PropSize: 0x10x70(0x1)(None)
	uint8                                        Pad_36A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate
{
public:
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                            // 0x0(0x50)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, HasGetValueTypeHash)
	uint8                                        Pad_36D[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 SequenceSignature;                                 // 0xA0(0x10)(None)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                              // 0xB0(0x4)(None)
	uint8                                        Pad_36E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTemplateGenerationLedger   TemplateLedger;                                    // 0xB8(0xA8)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance
{
public:
	TWeakObjectPtr<class UMovieSceneSequence>    WeakRootSequence;                                  // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneCompiledDataManager*        CompiledDataManager;                               // 0x8(0x8)(ZeroConstructor)
	uint8                                        Pad_36F[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneEntitySystemLinker*         EntitySystemLinker;                                // 0x28(0x8)(ZeroConstructor)
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;                                 // 0x30(0x50)(None)
	uint8                                        Pad_370[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping
{
public:
	struct FFrameNumber                          Start;                                             // 0x0(0x4)(None)
	struct FFrameNumber                          End;                                               // 0x4(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform
{
public:
	struct FMovieSceneTimeTransform              LinearTransform;                                   // 0x0(0xC)(None)
	struct FMovieSceneTimeWarping                Warping;                                           // 0xC(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform
{
public:
	struct FMovieSceneTimeTransform              LinearTransform;                                   // 0x0(0xC)(None)
	uint8                                        Pad_371[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;                                  // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct FMovieSceneSequenceInstanceDataPtr
{
public:
	uint8                                        Pad_372[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData
{
public:
	struct FSoftObjectPath                       Sequence;                                          // 0x0(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, HasGetValueTypeHash)
	struct FMovieSceneSequenceTransform          OuterToInnerTransform;                             // 0x20(0x20)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash)
	struct FMovieSceneSequenceTransform          RootToSequenceTransform;                           // 0x40(0x20)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash)
	struct FFrameRate                            TickResolution;                                    // 0x60(0x8)(None)
	struct FMovieSceneSequenceID                 DeterministicSequenceID;                           // 0x68(0x4)(None)
	struct FMovieSceneFrameRange                 ParentPlayRange;                                   // 0x6C(0x10)(None)
	struct FFrameNumber                          ParentStartFrameOffset;                            // 0x7C(0x4)(None)
	struct FFrameNumber                          ParentEndFrameOffset;                              // 0x80(0x4)(None)
	struct FFrameNumber                          ParentFirstLoopStartFrameOffset;                   // 0x84(0x4)(None)
	bool                                         bCanLoop;                                          // 0x88(0x1)(None)
	uint8                                        Pad_373[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFrameRange                 PlayRange;                                         // 0x8C(0x10)(None)
	struct FMovieSceneFrameRange                 FullPlayRange;                                     // 0x9C(0x10)(None)
	struct FMovieSceneFrameRange                 UnwarpedPlayRange;                                 // 0xAC(0x10)(None)
	struct FMovieSceneFrameRange                 PreRollRange;                                      // 0xBC(0x10)(None)
	struct FMovieSceneFrameRange                 PostRollRange;                                     // 0xCC(0x10)(None)
	int16                                        HierarchicalBias;                                  // 0xDC(0x2)(None)
	uint8                                        Pad_374[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequenceInstanceDataPtr    InstanceData;                                      // 0xE0(0x18)(None)
	uint8                                        Pad_375[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 SubSectionSignature;                               // 0x100(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode
{
public:
	struct FMovieSceneSequenceID                 ParentID;                                          // 0x0(0x4)(None)
	uint8                                        Pad_376[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneSequenceID>         Children;                                          // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
struct FMovieSceneSubSequenceTreeEntry
{
public:
	uint8                                        Pad_378[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTree
struct FMovieSceneSubSequenceTree
{
public:
	uint8                                        Pad_37A[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy
{
public:
	struct FMovieSceneSequenceHierarchyNode      RootNode;                                          // 0x0(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, HasGetValueTypeHash)
	struct FMovieSceneSubSequenceTree            Tree;                                              // 0x18(0x60)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                      // 0x78(0x50)(AutoWeak, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                         // 0xC8(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter
{
public:
	TArray<uint32>                               WarpCounts;                                        // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame
{
public:
	struct FFrameNumber                          FrameNumber;                                       // 0x0(0x4)(None)
	uint8                                        Pad_37D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Label;                                             // 0x8(0x10)(None)
	bool                                         bIsDeterminismFence;                               // 0x18(0x1)(None)
	uint8                                        Pad_37E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData
{
public:
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                   // 0x0(0x50)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        PinnedNodes;                                       // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	double                                       ViewStart;                                         // 0x60(0x8)(None)
	double                                       ViewEnd;                                           // 0x68(0x8)(None)
	double                                       WorkStart;                                         // 0x70(0x8)(None)
	double                                       WorkEnd;                                           // 0x78(0x8)(None)
	TSet<struct FFrameNumber>                    MarkedFrames;                                      // 0x80(0x50)(None)
	struct FFloatRange                           WorkingRange;                                      // 0xD0(0x10)(None)
	struct FFloatRange                           ViewRange;                                         // 0xE0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs
{
public:
	TArray<struct FMovieSceneObjectBindingID>    IDs;                                               // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup
{
public:
	TArray<TWeakObjectPtr<class UMovieSceneSection>> Sections;                                          // 0x0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding
{
public:
	struct FGuid                                 ObjectGuid;                                        // 0x0(0x10)(None)
	class FString                                BindingName;                                       // 0x10(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0x20(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData
{
public:
	struct FMovieSceneObjectBindingID            ObjectBindingID;                                   // 0x0(0x18)(None)
	TSoftObjectPtr<class UObject>                Object;                                            // 0x18(0x30)(None)
	bool                                         bOverridesDefault;                                 // 0x48(0x1)(None)
	uint8                                        Pad_380[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingProxy
struct FMovieSceneBindingProxy
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(None)
	class UMovieSceneSequence*                   Sequence;                                          // 0x10(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable
{
public:
	TArray<class FName>                          Tags;                                              // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(None)
	class FString                                Name;                                              // 0x20(0x10)(None)
	struct FGuid                                 ParentGuid;                                        // 0x30(0x10)(None)
	struct FMovieSceneObjectBindingID            SpawnableObjectBindingID;                          // 0x40(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions
{
public:
	bool                                         bCanEditCompletionMode;                            // 0x0(0x1)(None)
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x1(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings
{
public:
	int32                                        AutoEaseInDuration;                                // 0x0(0x4)(None)
	int32                                        AutoEaseOutDuration;                               // 0x4(0x4)(None)
	TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                                            // 0x8(0x10)(ZeroConstructor)
	bool                                         bManualEaseIn;                                     // 0x18(0x1)(None)
	uint8                                        Pad_383[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ManualEaseInDuration;                              // 0x1C(0x4)(None)
	TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                                           // 0x20(0x10)(None)
	bool                                         bManualEaseOut;                                    // 0x30(0x1)(None)
	uint8                                        Pad_384[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ManualEaseOutDuration;                             // 0x34(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource
{
public:
	struct FTimecode                             Timecode;                                          // 0x0(0x14)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties
{
public:
	struct FFrameTime                            LastKnownPosition;                                 // 0x0(0x8)(None)
	enum class EMovieScenePlayerStatus           LastKnownStatus;                                   // 0x8(0x1)(None)
	uint8                                        Pad_38B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastKnownNumLoops;                                 // 0xC(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
struct FMovieSceneSequencePlaybackParams
{
public:
	struct FFrameTime                            Frame;                                             // 0x0(0x8)(None)
	float                                        Time;                                              // 0x8(0x4)(None)
	uint8                                        Pad_38C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MarkedFrame;                                       // 0x10(0x10)(None)
	enum class EMovieScenePositionType           PositionType;                                      // 0x20(0x1)(None)
	enum class EUpdatePositionMethod             UpdateMethod;                                      // 0x21(0x1)(None)
	bool                                         bHasJumped;                                        // 0x22(0x1)(None)
	uint8                                        Pad_38D[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlayToParams
struct FMovieSceneSequencePlayToParams
{
public:
	bool                                         bExclusive;                                        // 0x0(0x1)(None)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable
{
public:
	struct FTransform                            SpawnTransform;                                    // 0x0(0x60)(None)
	TArray<class FName>                          Tags;                                              // 0x60(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash)
	bool                                         bContinuouslyRespawn;                              // 0x70(0x1)(None)
	bool                                         bNetAddressableName;                               // 0x71(0x1)(None)
	bool                                         bEvaluateTracksWhenNotSpawned;                     // 0x72(0x1)(None)
	uint8                                        Pad_391[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x74(0x10)(None)
	uint8                                        Pad_394[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x88(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	class UObject*                               ObjectTemplate;                                    // 0x98(0x8)(None)
	TArray<struct FGuid>                         ChildPossessables;                                 // 0xA0(0x10)(None)
	enum class ESpawnOwnership                   Ownership;                                         // 0xB0(0x1)(None)
	uint8                                        Pad_395[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LevelName;                                         // 0xB4(0x8)(None)
	uint8                                        Pad_396[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions
{
public:
	uint8                                        bCanEvaluateNearestSection : 1;                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEvalNearestSection : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEvaluateNearestSection : 1;                       // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_398[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions
{
public:
	uint8                                        bShowVerticalFrames : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_399[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
struct FMovieSceneTrackEvaluationFieldEntry
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	struct FFrameNumberRange                     Range;                                             // 0x8(0x10)(None)
	struct FFrameNumber                          ForcedTime;                                        // 0x18(0x4)(None)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x1C(0x1)(None)
	uint8                                        Pad_39B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        LegacySortOrder;                                   // 0x1E(0x2)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
struct FMovieSceneTrackEvaluationField
{
public:
	TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;                                           // 0x0(0x10)(None)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
public:
};

}


