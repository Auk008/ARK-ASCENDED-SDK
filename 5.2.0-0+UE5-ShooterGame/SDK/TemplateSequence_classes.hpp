#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xF0 - 0x68)
// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ZeroConstructor)
	TSoftClassPtr<class AActor>                  BoundActorClass;                                   // 0x70(0x30)(ZeroConstructor)
	TMap<struct FGuid, class FName>              BoundActorComponents;                              // 0xA0(0x50)(None)

	static class UClass* StaticClass();
	static class UTemplateSequence* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class TemplateSequence.CameraAnimationSequence
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSequence* GetDefaultObj();

};

// 0x8A8 (0x8D0 - 0x28)
// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
class UCameraAnimationSequenceCameraStandIn : public UObject
{
public:
	float                                        FieldOfView;                                       // 0x28(0x4)(None)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(None)
	uint8                                        BitPad_181 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AspectRatio;                                       // 0x30(0x4)(None)
	uint8                                        Pad_21A2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x770)(ZeroConstructor)
	float                                        PostProcessBlendWeight;                            // 0x7B0(0x4)(None)
	struct FCameraFilmbackSettings               Filmback;                                          // 0x7B4(0xC)(None)
	struct FCameraLensSettings                   LensSettings;                                      // 0x7C0(0x1C)(None)
	uint8                                        Pad_21A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x7E0(0x68)(None)
	float                                        CurrentFocalLength;                                // 0x848(0x4)(None)
	float                                        CurrentAperture;                                   // 0x84C(0x4)(None)
	float                                        CurrentFocusDistance;                              // 0x850(0x4)(None)
	uint8                                        Pad_21A5[0x7C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceCameraStandIn* GetDefaultObj();

};

// 0x368 (0x390 - 0x28)
// Class TemplateSequence.CameraAnimationSequencePlayer
class UCameraAnimationSequencePlayer : public UObject
{
public:
	uint8                                        Pad_21A8[0x270];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               BoundObjectOverride;                               // 0x298(0x8)(ZeroConstructor)
	class UMovieSceneSequence*                   Sequence;                                          // 0x2A0(0x8)(ZeroConstructor)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2A8(0x88)(None)
	uint8                                        Pad_21A9[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraAnimationSequencePlayer* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationSpawnableSystem
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSpawnableSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationBoundObjectInstantiator* GetDefaultObj();

};

// 0x0 (0x6F8 - 0x6F8)
// Class TemplateSequence.CameraAnimationEntitySystemLinker
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationEntitySystemLinker* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class TemplateSequence.CameraAnimationSequenceSubsystem
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x30(0x8)(None)
	uint8                                        Pad_21AD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceSubsystem* GetDefaultObj();

};

// 0x10 (0x148 - 0x138)
// Class TemplateSequence.TemplateSequenceSection
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	TArray<struct FTemplateSectionPropertyScale> PropertyScales;                                    // 0x138(0x10)(None)

	static class UClass* StaticClass();
	static class UTemplateSequenceSection* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class TemplateSequence.SequenceCameraShakePattern
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x28(0x8)(ZeroConstructor)
	float                                        PlayRate;                                          // 0x30(0x4)(None)
	float                                        Scale;                                             // 0x34(0x4)(None)
	float                                        BlendInTime;                                       // 0x38(0x4)(None)
	float                                        BlendOutTime;                                      // 0x3C(0x4)(None)
	float                                        RandomSegmentDuration;                             // 0x40(0x4)(None)
	bool                                         bRandomSegment;                                    // 0x44(0x1)(None)
	uint8                                        Pad_21B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x48(0x8)(ZeroConstructor)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x50(0x8)(None)

	static class UClass* StaticClass();
	static class USequenceCameraShakePattern* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class TemplateSequence.TemplateSequenceSystem
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_21B1[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequenceSystem* GetDefaultObj();

};

// 0x58 (0x98 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_21B4[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_21B6[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj();

};

// 0x60 (0x518 - 0x4B8)
// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public AActor
{
public:
	uint8                                        Pad_21C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4C0(0x20)(None)
	class UTemplateSequencePlayer*               SequencePlayer;                                    // 0x4E0(0x8)(ZeroConstructor)
	struct FSoftObjectPath                       TemplateSequence;                                  // 0x4E8(0x20)(None)
	struct FTemplateSequenceBindingOverrideData  BindingOverride;                                   // 0x508(0xC)(ZeroConstructor)
	uint8                                        Pad_21C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATemplateSequenceActor* GetDefaultObj();

	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class AActor* Actor, bool bOverridesDefault);
	void LoadSequence(class UTemplateSequence* ReturnValue);
	void GetSequencePlayer(class UTemplateSequencePlayer* ReturnValue);
	void GetSequence(class UTemplateSequence* ReturnValue);
};

// 0x8 (0x4D8 - 0x4D0)
// Class TemplateSequence.TemplateSequencePlayer
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_21D5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequencePlayer* GetDefaultObj();

	void CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor* OutActor, class UTemplateSequencePlayer* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TemplateSequence.SequenceCameraShakeTestUtil
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceCameraShakeTestUtil* GetDefaultObj();

	void GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, const struct FPostProcessSettings& OutPPSettings, float OutPPBlendWeight, bool ReturnValue);
	void GetLastFrameCameraCachePOV(class APlayerController* PlayerController, const struct FMinimalViewInfo& ReturnValue);
	void GetCameraCachePOV(class APlayerController* PlayerController, const struct FMinimalViewInfo& ReturnValue);
};

// 0x0 (0xA8 - 0xA8)
// Class TemplateSequence.TemplateSequenceTrack
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UTemplateSequenceTrack* GetDefaultObj();

};

}


