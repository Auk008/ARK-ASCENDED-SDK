#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x230 - 0xF0)
// Class GameplayCameras.MatineeCameraShake
class UMatineeCameraShake : public UCameraShakeBase
{
public:
	float                                        OscillationDuration;                               // 0xF0(0x4)(None)
	float                                        OscillationBlendInTime;                            // 0xF4(0x4)(None)
	float                                        OscillationBlendOutTime;                           // 0xF8(0x4)(None)
	struct FROscillator                          RotOscillation;                                    // 0xFC(0x24)(None)
	struct FVOscillator                          LocOscillation;                                    // 0x120(0x24)(None)
	struct FFOscillator                          FOVOscillation;                                    // 0x144(0xC)(None)
	float                                        AnimPlayRate;                                      // 0x150(0x4)(None)
	float                                        AnimScale;                                         // 0x154(0x4)(None)
	float                                        AnimBlendInTime;                                   // 0x158(0x4)(None)
	float                                        AnimBlendOutTime;                                  // 0x15C(0x4)(None)
	float                                        RandomAnimSegmentDuration;                         // 0x160(0x4)(None)
	uint8                                        Pad_20D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnim*                           Anim;                                              // 0x168(0x8)(ZeroConstructor)
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x170(0x8)(ZeroConstructor)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x178(0x1)(None)
	uint8                                        BitPad_17A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_20D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OscillatorTimeRemaining;                           // 0x17C(0x4)(None)
	class UCameraAnimInst*                       AnimInst;                                          // 0x180(0x8)(ZeroConstructor)
	uint8                                        Pad_20D5[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x200(0x8)(ZeroConstructor)
	uint8                                        Pad_20D6[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMatineeCameraShake* GetDefaultObj();

	void StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot, class UMatineeCameraShake* ReturnValue);
	void StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot, class UMatineeCameraShake* ReturnValue);
	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	void ReceiveIsFinished(bool ReturnValue);
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, const struct FMinimalViewInfo& ModifiedPOV);
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MatineeCameraShakePattern
class UMatineeCameraShakePattern : public UCameraShakePattern
{
public:

	static class UClass* StaticClass();
	static class UMatineeCameraShakePattern* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMatineeCameraShakeEvaluator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMatineeCameraShakeFunctionLibrary* GetDefaultObj();

	void Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake, class UMatineeCameraShake* ReturnValue);
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>    ActiveAnimations;                                  // 0x48(0x10)(ZeroConstructor)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(None)
	uint8                                        Pad_20F8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraAnimationCameraModifier* GetDefaultObj();

	void StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopAllCameraAnimations(bool bImmediate);
	void PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params, const struct FCameraAnimationHandle& ReturnValue);
	void IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle, bool ReturnValue);
	void GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController, class UCameraAnimationCameraModifier* ReturnValue);
	void GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32 ControllerId, class UCameraAnimationCameraModifier* ReturnValue);
	void GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32 PlayerIndex, class UCameraAnimationCameraModifier* ReturnValue);
};

// 0x20 (0x48 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(None)
	uint8                                        Pad_20FB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositeCameraShakePattern* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class GameplayCameras.DefaultCameraShakeBase
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:

	static class UClass* StaticClass();
	static class UDefaultCameraShakeBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GameplayCameras.GameplayCamerasSubsystem
class UGameplayCamerasSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UGameplayCamerasSubsystem* GetDefaultObj();

	void StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
	void PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params, const struct FCameraAnimationHandle& ReturnValue);
	void IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(None)
	float                                        BlendInTime;                                       // 0x2C(0x4)(None)
	float                                        BlendOutTime;                                      // 0x30(0x4)(None)
	uint8                                        Pad_210B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USimpleCameraShakePattern* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(None)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(None)
	struct FPerlinNoiseShaker                    X;                                                 // 0x40(0x8)(None)
	struct FPerlinNoiseShaker                    Y;                                                 // 0x48(0x8)(None)
	struct FPerlinNoiseShaker                    Z;                                                 // 0x50(0x8)(None)
	float                                        RotationAmplitudeMultiplier;                       // 0x58(0x4)(None)
	float                                        RotationFrequencyMultiplier;                       // 0x5C(0x4)(None)
	struct FPerlinNoiseShaker                    Pitch;                                             // 0x60(0x8)(None)
	struct FPerlinNoiseShaker                    Yaw;                                               // 0x68(0x8)(None)
	struct FPerlinNoiseShaker                    Roll;                                              // 0x70(0x8)(None)
	struct FPerlinNoiseShaker                    FOV;                                               // 0x78(0x8)(None)
	uint8                                        Pad_2110[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class GameplayCameras.TestCameraShake
class UTestCameraShake : public UCameraShakeBase
{
public:

	static class UClass* StaticClass();
	static class UTestCameraShake* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class GameplayCameras.ConstantCameraShakePattern
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(None)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(None)

	static class UClass* StaticClass();
	static class UConstantCameraShakePattern* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(None)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(None)
	struct FWaveOscillator                       X;                                                 // 0x40(0xC)(None)
	struct FWaveOscillator                       Y;                                                 // 0x4C(0xC)(None)
	struct FWaveOscillator                       Z;                                                 // 0x58(0xC)(None)
	float                                        RotationAmplitudeMultiplier;                       // 0x64(0x4)(None)
	float                                        RotationFrequencyMultiplier;                       // 0x68(0x4)(None)
	struct FWaveOscillator                       Pitch;                                             // 0x6C(0xC)(None)
	struct FWaveOscillator                       Yaw;                                               // 0x78(0xC)(None)
	struct FWaveOscillator                       Roll;                                              // 0x84(0xC)(None)
	struct FWaveOscillator                       FOV;                                               // 0x90(0xC)(None)
	uint8                                        Pad_211A[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj();

};

}


