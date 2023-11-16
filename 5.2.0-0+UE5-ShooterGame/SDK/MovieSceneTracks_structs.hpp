#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneFloatChannel               ParameterCurve;                                    // 0x8(0x110)(None)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneBoolChannel                ParameterCurve;                                    // 0x8(0x100)(None)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x110)(AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x118(0x110)(None)
};

// 0x338 (0x338 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x110)(SimpleDisplay, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x118(0x110)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               ZCurve;                                            // 0x228(0x110)(None)
};

// 0x448 (0x448 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0x8(0x110)(ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x118(0x110)(AssetRegistrySearchable, Protected, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x228(0x110)(ContainsInstancedReference, AssetRegistrySearchable, Protected, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x338(0x110)(None)
};

// 0x998 (0x998 - 0x0)
// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneFloatChannel               Translation[0x3];                                  // 0x8(0x330)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Rotation[0x3];                                     // 0x338(0x330)(AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Scale[0x3];                                        // 0x668(0x330)(None)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>  Scalars;                                           // 0x20(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FBoolParameterNameAndCurve>    Bools;                                             // 0x30(0x10)(ContainsInstancedReference, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;                                         // 0x40(0x10)(AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves> Vectors;                                           // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  Colors;                                            // 0x60(0x10)(AutoWeak, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransformParameterNameAndCurves> Transforms;                                        // 0x70(0x10)(None)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Values;                                            // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DefaultValue;                                      // 0x70(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(None)
	uint8                                        Pad_14F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x88(0x88)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData
{
public:
	class UCameraAnim*                           CameraAnim;                                        // 0x0(0x8)(None)
	float                                        PlayRate;                                          // 0x8(0x4)(None)
	float                                        PlayScale;                                         // 0xC(0x4)(None)
	float                                        BlendInTime;                                       // 0x10(0x4)(None)
	float                                        BlendOutTime;                                      // 0x14(0x4)(None)
	bool                                         bLooping;                                          // 0x18(0x1)(None)
	uint8                                        Pad_14F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraAnimSectionData      SourceData;                                        // 0x20(0x20)(ZeroConstructor)
	struct FFrameNumber                          SectionStartTime;                                  // 0x40(0x4)(None)
	uint8                                        Pad_14F7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
public:
	class UClass*                                ShakeClass;                                        // 0x0(0x8)(None)
	float                                        PlayScale;                                         // 0x8(0x4)(None)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0xC(0x1)(None)
	uint8                                        Pad_14F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0x18)(None)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x28)(ZeroConstructor)
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(None)
	uint8                                        Pad_14FB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
struct FMovieScenePreAnimatedMaterialParameters
{
public:
	class UMaterialInterface*                    PreviousMaterial;                                  // 0x0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    PreviousParameterContainer;                        // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
struct FMovieSceneCameraShakeSourceTrigger
{
public:
	class UClass*                                ShakeClass;                                        // 0x0(0x8)(None)
	float                                        PlayScale;                                         // 0x8(0x4)(None)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0xC(0x1)(None)
	uint8                                        Pad_14FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0x18)(None)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;                                         // 0x60(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.PerlinNoiseParams
struct FPerlinNoiseParams
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(None)
	uint8                                        Pad_14FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Amplitude;                                         // 0x8(0x8)(None)
	float                                        Offset;                                            // 0x10(0x4)(None)
	uint8                                        Pad_14FE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
struct FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                    PerlinNoiseParams;                                 // 0x50(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable
{
public:
	class FString                                Value;                                             // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(ZeroConstructor)
	FFieldPathProperty_                          BoundObjectProperty;                               // 0x8(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent
{
public:
	struct FMovieSceneEventPtrs                  Ptrs;                                              // 0x0(0x28)(None)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneEvent>              KeyValues;                                         // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(None)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                    PerlinNoiseParams;                                 // 0x50(0x18)(None)
};

// 0x130 (0x150 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            PathBindingID;                                     // 0x20(0x18)(None)
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x38(0x110)(None)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x148(0x1)(None)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x149(0x1)(None)
	uint8                                        Pad_1505[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x14C(0x1)(None)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x14C(0x1)(None)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x14C(0x1)(None)
	uint8                                        Pad_1506[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey
{
public:
	struct FMovieSceneObjectBindingID            Object;                                            // 0x0(0x18)(None)
	class FName                                  ComponentName;                                     // 0x18(0x8)(None)
	class FName                                  SocketName;                                        // 0x20(0x8)(None)
};

// 0xD0 (0x120 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	struct FMovieSceneActorReferenceKey          DefaultValue;                                      // 0x60(0x28)(None)
	TArray<struct FMovieSceneActorReferenceKey>  KeyValues;                                         // 0x88(0x10)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x98(0x88)(None)
};

// 0x138 (0x158 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x18)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0x38(0x120)(None)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAudioSection*               AudioSection;                                      // 0x20(0x8)(ZeroConstructor)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
struct FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x0(0x4)(None)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4(0x4)(None)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x28)(ZeroConstructor)
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(None)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(None)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FFrameNumber>                  TriggerTimes;                                      // 0x20(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;                                     // 0x30(0x10)(ZeroConstructor)
};

// 0x448 (0x480 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               Curves[0x4];                                       // 0x38(0x440)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x478(0x1)(None)
	uint8                                        Pad_1509[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
public:
	uint8                                        Pad_150A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(None)
	struct FMovieSceneEventParameters            Parameters;                                        // 0x8(0x30)(None)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FEventPayload>                 KeyValues;                                         // 0x60(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(None)
};

// 0x100 (0x120 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData           EventData;                                         // 0x20(0xF8)(None)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x118(0x1)(None)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x118(0x1)(None)
	uint8                                        Pad_150C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x170 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneObjectPathChannel          ObjectChannel;                                     // 0x38(0x138)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x0 (0x108 - 0x108)
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
public:
};

// 0x108 (0x128 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0x20(0x108)(ZeroConstructor)
};

// 0x100 (0x138 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0x38(0x100)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x110 (0x148 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0x38(0x110)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x110 (0x130 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel               SlomoCurve;                                        // 0x20(0x110)(None)
};

// 0x0 (0x138 - 0x138)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
struct FLevelVisibilityComponentData
{
public:
	class UMovieSceneLevelVisibilitySection*     Section;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
struct FMovieSceneDataLayerComponentData
{
public:
	class UMovieSceneDataLayerSection*           Section;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.ConstraintComponentData
struct FConstraintComponentData
{
public:
	class FName                                  ConstraintName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_1510[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
struct FMovieSceneSkeletalAnimationComponentData
{
public:
	class UMovieSceneSkeletalAnimationSection*   Section;                                           // 0x0(0x8)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FFrameNumber                          Time;                                              // 0x20(0x4)(None)
	uint8                                        Pad_1512[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FRotator                              Rotation;                                          // 0x8(0x18)(None)
	struct FFrameNumber                          Time;                                              // 0x20(0x4)(None)
	uint8                                        Pad_1513[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector3f                             Scale;                                             // 0x8(0xC)(None)
	struct FFrameNumber                          Time;                                              // 0x14(0x4)(None)
	uint8                                        Pad_1514[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(None)
	struct FVector3f                             Scale;                                             // 0x38(0xC)(None)
	struct FFrameNumber                          Time;                                              // 0x44(0x4)(None)
	uint8                                        Pad_1516[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheParams
struct FMovieSceneBaseCacheParams
{
public:
	uint8                                        Pad_1517[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(None)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(None)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(None)
	float                                        PlayRate;                                          // 0x14(0x4)(None)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        Pad_1518[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(None)
	struct FFrameNumber                          Time;                                              // 0x18(0x4)(None)
	uint8                                        Pad_1519[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneConsoleVariableCollection
struct FMovieSceneConsoleVariableCollection
{
public:
	TScriptInterface<class IMovieSceneConsoleVariableTrackInterface> Interface;                                         // 0x0(0x10)(None)
	bool                                         bOnlyIncludeChecked;                               // 0x10(0x1)(None)
	uint8                                        Pad_151C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
struct FMovieSceneCVarOverrides
{
public:
	TMap<class FString, class FString>           ValuesByCVar;                                      // 0x0(0x50)(None)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ZeroConstructor)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(None)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(None)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(None)
	float                                        PlayRate;                                          // 0x14(0x4)(None)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_107 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x1C(0x8)(None)
	uint8                                        Pad_1523[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x28(0x8)(None)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x30(0x110)(None)
	bool                                         bSkipAnimNotifiers;                                // 0x140(0x1)(None)
	bool                                         bForceCustomMode;                                  // 0x141(0x1)(None)
	enum class ESwapRootBone                     SwapRootBone;                                      // 0x142(0x1)(None)
	uint8                                        Pad_1524[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartOffset;                                       // 0x144(0x4)(None)
	float                                        EndOffset;                                         // 0x148(0x4)(None)
	uint8                                        Pad_1525[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(None)
	uint8                                        Pad_1529[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector2f                             Vector;                                            // 0x28(0x8)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector3f                             Vector;                                            // 0x28(0xC)(None)
	uint8                                        Pad_152C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	uint8                                        Pad_152E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4f                             Vector;                                            // 0x30(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(None)
	uint8                                        Pad_1531[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector2D                             Vector;                                            // 0x28(0x10)(None)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector3d                             Vector;                                            // 0x28(0x18)(None)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	uint8                                        Pad_1534[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4d                             Vector;                                            // 0x30(0x20)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
struct FMovieSceneEventTriggerData
{
public:
	struct FMovieSceneEventPtrs                  Ptrs;                                              // 0x0(0x28)(None)
	struct FGuid                                 ObjectBindingID;                                   // 0x28(0x10)(None)
	uint8                                        Pad_1536[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
public:
	uint8                                        Pad_1539[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


