#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOscillatorWaveform : uint8
{
	SineWave                       = 0,
	PerlinNoise                    = 1,
	EOscillatorWaveform_MAX        = 2,
};

enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,
};

enum class ECameraAnimationPlaySpace : uint8
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimationPlaySpace_MAX  = 3,
};

enum class ECameraAnimationEasingType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Quadratic                      = 2,
	Cubic                          = 3,
	Quartic                        = 4,
	Quintic                        = 5,
	Exponential                    = 6,
	Circular                       = 7,
	ECameraAnimationEasingType_MAX = 8,
};

enum class EInitialWaveOscillatorOffsetType : uint8
{
	Random                         = 0,
	Zero                           = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct GameplayCameras.FOscillator
struct FFOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	enum class EInitialOscillatorOffset          InitialOffset;                                     // 0x8(0x1)(None)
	enum class EOscillatorWaveform               Waveform;                                          // 0x9(0x1)(None)
	uint8                                        Pad_211C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GameplayCameras.ROscillator
struct FROscillator
{
public:
	struct FFOscillator                          Pitch;                                             // 0x0(0xC)(None)
	struct FFOscillator                          Yaw;                                               // 0xC(0xC)(None)
	struct FFOscillator                          Roll;                                              // 0x18(0xC)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GameplayCameras.VOscillator
struct FVOscillator
{
public:
	struct FFOscillator                          X;                                                 // 0x0(0xC)(None)
	struct FFOscillator                          Y;                                                 // 0xC(0xC)(None)
	struct FFOscillator                          Z;                                                 // 0x18(0xC)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayCameras.CameraAnimationParams
struct FCameraAnimationParams
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(None)
	float                                        Scale;                                             // 0x4(0x4)(None)
	enum class ECameraAnimationEasingType        EaseInType;                                        // 0x8(0x1)(None)
	uint8                                        Pad_211E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseInDuration;                                    // 0xC(0x4)(None)
	enum class ECameraAnimationEasingType        EaseOutType;                                       // 0x10(0x1)(None)
	uint8                                        Pad_211F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseOutDuration;                                   // 0x14(0x4)(None)
	bool                                         bLoop;                                             // 0x18(0x1)(None)
	bool                                         bRandomStartTime;                                  // 0x19(0x1)(None)
	uint8                                        Pad_2120[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationOverride;                                  // 0x1C(0x4)(None)
	enum class ECameraAnimationPlaySpace         PlaySpace;                                         // 0x20(0x1)(None)
	uint8                                        Pad_2121[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserPlaySpaceRot;                                  // 0x28(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayCameras.CameraAnimationHandle
struct FCameraAnimationHandle
{
public:
	uint8                                        Pad_2124[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
struct FActiveCameraAnimationInfo
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	struct FCameraAnimationParams                Params;                                            // 0x8(0x40)(None)
	struct FCameraAnimationHandle                Handle;                                            // 0x48(0x4)(None)
	uint8                                        Pad_2125[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x50(0x8)(ZeroConstructor)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x58(0x8)(None)
	float                                        EaseInCurrentTime;                                 // 0x60(0x4)(None)
	float                                        EaseOutCurrentTime;                                // 0x64(0x4)(None)
	bool                                         bIsEasingIn;                                       // 0x68(0x1)(None)
	bool                                         bIsEasingOut;                                      // 0x69(0x1)(None)
	uint8                                        Pad_2126[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayCameras.PerlinNoiseShaker
struct FPerlinNoiseShaker
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayCameras.WaveOscillator
struct FWaveOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	enum class EInitialWaveOscillatorOffsetType  InitialOffsetType;                                 // 0x8(0x1)(None)
	uint8                                        Pad_2129[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


