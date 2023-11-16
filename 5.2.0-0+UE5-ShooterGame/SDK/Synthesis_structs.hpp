#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESynth1OscType : uint8
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Noise                          = 4,
	Count                          = 5,
	ESynth1OscType_MAX             = 6,
};

enum class ESynthLFOType : uint8
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	ESynthLFOType_MAX              = 8,
};

enum class ESynthLFOMode : uint8
{
	Sync                           = 0,
	OneShot                        = 1,
	Free                           = 2,
	Count                          = 3,
	ESynthLFOMode_MAX              = 4,
};

enum class ESynthLFOPatchType : uint8
{
	PatchToNone                    = 0,
	PatchToGain                    = 1,
	PatchToOscFreq                 = 2,
	PatchToFilterFreq              = 3,
	PatchToFilterQ                 = 4,
	PatchToOscPulseWidth           = 5,
	PatchToOscPan                  = 6,
	PatchLFO1ToLFO2Frequency       = 7,
	PatchLFO1ToLFO2Gain            = 8,
	Count                          = 9,
	ESynthLFOPatchType_MAX         = 10,
};

enum class ESynthModEnvPatch : uint8
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvPatch_MAX          = 9,
};

enum class ESynthModEnvBiasPatch : uint8
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvBiasPatch_MAX      = 9,
};

enum class ESynthFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESynthFilterType_MAX           = 5,
};

enum class ESynthFilterAlgorithm : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESynthFilterAlgorithm_MAX      = 4,
};

enum class ESynthStereoDelayMode : uint8
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	ESynthStereoDelayMode_MAX      = 4,
};

enum class ESynth1PatchSource : uint8
{
	LFO1                           = 0,
	LFO2                           = 1,
	Envelope                       = 2,
	BiasEnvelope                   = 3,
	Count                          = 4,
	ESynth1PatchSource_MAX         = 5,
};

enum class ESynth1PatchDestination : uint8
{
	Osc1Gain                       = 0,
	Osc1Frequency                  = 1,
	Osc1Pulsewidth                 = 2,
	Osc2Gain                       = 3,
	Osc2Frequency                  = 4,
	Osc2Pulsewidth                 = 5,
	FilterFrequency                = 6,
	FilterQ                        = 7,
	Gain                           = 8,
	Pan                            = 9,
	LFO1Frequency                  = 10,
	LFO1Gain                       = 11,
	LFO2Frequency                  = 12,
	LFO2Gain                       = 13,
	Count                          = 14,
	ESynth1PatchDestination_MAX    = 15,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8
{
	BlockSize256                   = 0,
	BlockSize512                   = 1,
	BlockSize1024                  = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class ESourceEffectDynamicsProcessorType : uint8
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	UpwardsCompressor              = 4,
	Count                          = 5,
	ESourceEffectDynamicsProcessorType_MAX = 6,
};

enum class ESourceEffectDynamicsPeakMode : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class EEnvelopeFollowerPeakMode : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	EEnvelopeFollowerPeakMode_MAX  = 4,
};

enum class ESourceEffectFilterCircuit : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class ESourceEffectFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectFilterType_MAX    = 5,
};

enum class ESourceEffectFilterParam : uint8
{
	FilterFrequency                = 0,
	FilterResonance                = 1,
	Count                          = 2,
	ESourceEffectFilterParam_MAX   = 3,
};

enum class EStereoChannelMode : uint8
{
	MidSide                        = 0,
	LeftRight                      = 1,
	Count                          = 2,
	EStereoChannelMode_MAX         = 3,
};

enum class ESourceEffectMotionFilterModSource : uint8
{
	DistanceFromListener           = 0,
	SpeedRelativeToListener        = 1,
	SpeedOfSourceEmitter           = 2,
	SpeedOfListener                = 3,
	SpeedOfAngleDelta              = 4,
	Count                          = 5,
	ESourceEffectMotionFilterModSource_MAX = 6,
};

enum class ESourceEffectMotionFilterModDestination : uint8
{
	FilterACutoffFrequency         = 0,
	FilterAResonance               = 1,
	FilterAOutputVolumeDB          = 2,
	FilterBCutoffFrequency         = 3,
	FilterBResonance               = 4,
	FilterBOutputVolumeDB          = 5,
	FilterMix                      = 6,
	Count                          = 7,
	ESourceEffectMotionFilterModDestination_MAX = 8,
};

enum class ESourceEffectMotionFilterTopology : uint8
{
	SerialMode                     = 0,
	ParallelMode                   = 1,
	Count                          = 2,
	ESourceEffectMotionFilterTopology_MAX = 3,
};

enum class ESourceEffectMotionFilterCircuit : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectMotionFilterCircuit_MAX = 4,
};

enum class ESourceEffectMotionFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectMotionFilterType_MAX = 5,
};

enum class EPhaserLFOType : uint8
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	EPhaserLFOType_MAX             = 8,
};

enum class ERingModulatorTypeSourceEffect : uint8
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Count                          = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class EStereoDelaySourceEffect : uint8
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	EStereoDelaySourceEffect_MAX   = 4,
};

enum class EStereoDelayFiltertype : uint8
{
	Lowpass                        = 0,
	Highpass                       = 1,
	Bandpass                       = 2,
	Notch                          = 3,
	Count                          = 4,
	EStereoDelayFiltertype_MAX     = 5,
};

enum class ESubmixFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESubmixFilterType_MAX          = 5,
};

enum class ESubmixFilterAlgorithm : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESubmixFilterAlgorithm_MAX     = 4,
};

enum class ETapLineMode : uint8
{
	SendToChannel                  = 0,
	Panning                        = 1,
	Disabled                       = 2,
	ETapLineMode_MAX               = 3,
};

enum class EGranularSynthEnvelopeType : uint8
{
	Rectangular                    = 0,
	Triangle                       = 1,
	DownwardTriangle               = 2,
	UpwardTriangle                 = 3,
	ExponentialDecay               = 4,
	ExponentialIncrease            = 5,
	Gaussian                       = 6,
	Hanning                        = 7,
	Lanczos                        = 8,
	Cosine                         = 9,
	CosineSquared                  = 10,
	Welch                          = 11,
	Blackman                       = 12,
	BlackmanHarris                 = 13,
	Count                          = 14,
	EGranularSynthEnvelopeType_MAX = 15,
};

enum class EGranularSynthSeekType : uint8
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	Count                          = 2,
	EGranularSynthSeekType_MAX     = 3,
};

enum class ECurveInterpolationType : uint8
{
	AUTOINTERP                     = 0,
	LINEAR                         = 1,
	CONSTANT                       = 2,
	CurveInterpolationType_MAX     = 3,
};

enum class ESamplePlayerSeekType : uint8
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	FromEnd                        = 2,
	Count                          = 3,
	ESamplePlayerSeekType_MAX      = 4,
};

enum class ESynthKnobSize : uint8
{
	Medium                         = 0,
	Large                          = 1,
	Count                          = 2,
	ESynthKnobSize_MAX             = 3,
};

enum class ESynthSlateSizeType : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Count                          = 3,
	ESynthSlateSizeType_MAX        = 4,
};

enum class ESynthSlateColorStyle : uint8
{
	Light                          = 0,
	Dark                           = 1,
	Count                          = 2,
	ESynthSlateColorStyle_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.Synth1PatchCable
struct FSynth1PatchCable
{
public:
	float                                        Depth;                                             // 0x0(0x4)(None)
	enum class ESynth1PatchDestination           Destination;                                       // 0x4(0x1)(None)
	uint8                                        Pad_1CCC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Synthesis.PatchId
struct FPatchId
{
public:
	int32                                        ID;                                                // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.EpicSynth1Patch
struct FEpicSynth1Patch
{
public:
	enum class ESynth1PatchSource                PatchSource;                                       // 0x0(0x1)(None)
	uint8                                        Pad_1CCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSynth1PatchCable>             PatchCables;                                       // 0x8(0x10)(None)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct Synthesis.ModularSynthPreset
struct FModularSynthPreset : public FTableRowBase
{
public:
	uint8                                        bEnablePolyphony : 1;                              // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_141 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CCE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESynth1OscType                    Osc1Type;                                          // 0xC(0x1)(None)
	uint8                                        Pad_1CCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Osc1Gain;                                          // 0x10(0x4)(None)
	float                                        Osc1Octave;                                        // 0x14(0x4)(None)
	float                                        Osc1Semitones;                                     // 0x18(0x4)(None)
	float                                        Osc1Cents;                                         // 0x1C(0x4)(None)
	float                                        Osc1PulseWidth;                                    // 0x20(0x4)(None)
	enum class ESynth1OscType                    Osc2Type;                                          // 0x24(0x1)(None)
	uint8                                        Pad_1CD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Osc2Gain;                                          // 0x28(0x4)(None)
	float                                        Osc2Octave;                                        // 0x2C(0x4)(None)
	float                                        Osc2Semitones;                                     // 0x30(0x4)(None)
	float                                        Osc2Cents;                                         // 0x34(0x4)(None)
	float                                        Osc2PulseWidth;                                    // 0x38(0x4)(None)
	float                                        Portamento;                                        // 0x3C(0x4)(None)
	uint8                                        bEnableUnison : 1;                                 // Mask: 0x1, PropSize: 0x10x40(0x1)(None)
	uint8                                        bEnableOscillatorSync : 1;                         // Mask: 0x2, PropSize: 0x10x40(0x1)(None)
	uint8                                        BitPad_142 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Spread;                                            // 0x44(0x4)(None)
	float                                        Pan;                                               // 0x48(0x4)(None)
	float                                        LFO1Frequency;                                     // 0x4C(0x4)(None)
	float                                        LFO1Gain;                                          // 0x50(0x4)(None)
	enum class ESynthLFOType                     LFO1Type;                                          // 0x54(0x1)(None)
	enum class ESynthLFOMode                     LFO1Mode;                                          // 0x55(0x1)(None)
	enum class ESynthLFOPatchType                LFO1PatchType;                                     // 0x56(0x1)(None)
	uint8                                        Pad_1CD4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LFO2Frequency;                                     // 0x58(0x4)(None)
	float                                        LFO2Gain;                                          // 0x5C(0x4)(None)
	enum class ESynthLFOType                     LFO2Type;                                          // 0x60(0x1)(None)
	enum class ESynthLFOMode                     LFO2Mode;                                          // 0x61(0x1)(None)
	enum class ESynthLFOPatchType                LFO2PatchType;                                     // 0x62(0x1)(None)
	uint8                                        Pad_1CD6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GainDb;                                            // 0x64(0x4)(None)
	float                                        AttackTime;                                        // 0x68(0x4)(None)
	float                                        DecayTime;                                         // 0x6C(0x4)(None)
	float                                        SustainGain;                                       // 0x70(0x4)(None)
	float                                        ReleaseTime;                                       // 0x74(0x4)(None)
	enum class ESynthModEnvPatch                 ModEnvPatchType;                                   // 0x78(0x1)(None)
	enum class ESynthModEnvBiasPatch             ModEnvBiasPatchType;                               // 0x79(0x1)(None)
	uint8                                        Pad_1CD7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bInvertModulationEnvelope : 1;                     // Mask: 0x1, PropSize: 0x10x7C(0x1)(None)
	uint8                                        bInvertModulationEnvelopeBias : 1;                 // Mask: 0x2, PropSize: 0x10x7C(0x1)(None)
	uint8                                        BitPad_143 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModulationEnvelopeDepth;                           // 0x80(0x4)(None)
	float                                        ModulationEnvelopeAttackTime;                      // 0x84(0x4)(None)
	float                                        ModulationEnvelopeDecayTime;                       // 0x88(0x4)(None)
	float                                        ModulationEnvelopeSustainGain;                     // 0x8C(0x4)(None)
	float                                        ModulationEnvelopeReleaseTime;                     // 0x90(0x4)(None)
	uint8                                        bLegato : 1;                                       // Mask: 0x1, PropSize: 0x10x94(0x1)(None)
	uint8                                        bRetrigger : 1;                                    // Mask: 0x2, PropSize: 0x10x94(0x1)(None)
	uint8                                        BitPad_144 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FilterFrequency;                                   // 0x98(0x4)(None)
	float                                        FilterQ;                                           // 0x9C(0x4)(None)
	enum class ESynthFilterType                  FilterType;                                        // 0xA0(0x1)(None)
	enum class ESynthFilterAlgorithm             FilterAlgorithm;                                   // 0xA1(0x1)(None)
	uint8                                        Pad_1CDB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bStereoDelayEnabled : 1;                           // Mask: 0x1, PropSize: 0x10xA4(0x1)(None)
	uint8                                        BitPad_145 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESynthStereoDelayMode             StereoDelayMode;                                   // 0xA8(0x1)(None)
	uint8                                        Pad_1CDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StereoDelayTime;                                   // 0xAC(0x4)(None)
	float                                        StereoDelayFeedback;                               // 0xB0(0x4)(None)
	float                                        StereoDelayWetlevel;                               // 0xB4(0x4)(None)
	float                                        StereoDelayRatio;                                  // 0xB8(0x4)(None)
	uint8                                        bChorusEnabled : 1;                                // Mask: 0x1, PropSize: 0x10xBC(0x1)(None)
	uint8                                        BitPad_146 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChorusDepth;                                       // 0xC0(0x4)(None)
	float                                        ChorusFeedback;                                    // 0xC4(0x4)(None)
	float                                        ChorusFrequency;                                   // 0xC8(0x4)(None)
	uint8                                        Pad_1CDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEpicSynth1Patch>              Patches;                                           // 0xD0(0x10)(None)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Synthesis.ModularSynthPresetBankEntry
struct FModularSynthPresetBankEntry
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FModularSynthPreset                   Preset;                                            // 0x10(0xE0)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
struct FSourceEffectBitCrusherBaseSettings
{
public:
	float                                        SampleRate;                                        // 0x0(0x4)(None)
	float                                        BitDepth;                                          // 0x4(0x4)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
struct FSourceEffectBitCrusherSettings
{
public:
	float                                        CrushedSampleRate;                                 // 0x0(0x4)(None)
	uint8                                        Pad_1CE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundModulationDestinationSettings   SampleRateModulation;                              // 0x8(0x60)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        CrushedBits;                                       // 0x68(0x4)(None)
	uint8                                        Pad_1CE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundModulationDestinationSettings   BitModulation;                                     // 0x70(0x60)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
struct FSourceEffectChorusBaseSettings
{
public:
	float                                        Depth;                                             // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	float                                        Feedback;                                          // 0x8(0x4)(None)
	float                                        WetLevel;                                          // 0xC(0x4)(None)
	float                                        DryLevel;                                          // 0x10(0x4)(None)
	float                                        Spread;                                            // 0x14(0x4)(None)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct Synthesis.SourceEffectChorusSettings
struct FSourceEffectChorusSettings
{
public:
	float                                        Depth;                                             // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	float                                        Feedback;                                          // 0x8(0x4)(None)
	float                                        WetLevel;                                          // 0xC(0x4)(None)
	float                                        DryLevel;                                          // 0x10(0x4)(None)
	float                                        Spread;                                            // 0x14(0x4)(None)
	struct FSoundModulationDestinationSettings   DepthModulation;                                   // 0x18(0x60)(ZeroConstructor, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoundModulationDestinationSettings   FrequencyModulation;                               // 0x78(0x60)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoundModulationDestinationSettings   FeedbackModulation;                                // 0xD8(0x60)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoundModulationDestinationSettings   WetModulation;                                     // 0x138(0x60)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoundModulationDestinationSettings   DryModulation;                                     // 0x198(0x60)(ZeroConstructor, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoundModulationDestinationSettings   SpreadModulation;                                  // 0x1F8(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectConvolutionReverbSettings
struct FSourceEffectConvolutionReverbSettings
{
public:
	float                                        NormalizationVolumeDb;                             // 0x0(0x4)(None)
	float                                        WetVolumeDb;                                       // 0x4(0x4)(None)
	float                                        DryVolumeDb;                                       // 0x8(0x4)(None)
	bool                                         bBypass;                                           // 0xC(0x1)(None)
	uint8                                        Pad_1CEB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
struct FSourceEffectDynamicsProcessorSettings
{
public:
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(None)
	enum class ESourceEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(None)
	uint8                                        Pad_1CED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAheadMsec;                                     // 0x4(0x4)(None)
	float                                        AttackTimeMsec;                                    // 0x8(0x4)(None)
	float                                        ReleaseTimeMsec;                                   // 0xC(0x4)(None)
	float                                        ThresholdDb;                                       // 0x10(0x4)(None)
	float                                        Ratio;                                             // 0x14(0x4)(None)
	float                                        KneeBandwidthDb;                                   // 0x18(0x4)(None)
	float                                        InputGainDb;                                       // 0x1C(0x4)(None)
	float                                        OutputGainDb;                                      // 0x20(0x4)(None)
	uint8                                        bStereoLinked : 1;                                 // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        bAnalogMode : 1;                                   // Mask: 0x2, PropSize: 0x10x24(0x1)(None)
	uint8                                        Pad_1CEF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
struct FSourceEffectEnvelopeFollowerSettings
{
public:
	float                                        AttackTime;                                        // 0x0(0x4)(None)
	float                                        ReleaseTime;                                       // 0x4(0x4)(None)
	enum class EEnvelopeFollowerPeakMode         PeakMode;                                          // 0x8(0x1)(None)
	bool                                         bIsAnalogMode;                                     // 0x9(0x1)(None)
	uint8                                        Pad_1CF2[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectEQBand
struct FSourceEffectEQBand
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(None)
	float                                        Bandwidth;                                         // 0x4(0x4)(None)
	float                                        GainDb;                                            // 0x8(0x4)(None)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        Pad_1CF4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectEQSettings
struct FSourceEffectEQSettings
{
public:
	TArray<struct FSourceEffectEQBand>           EQBands;                                           // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
struct FSourceEffectFilterAudioBusModulationSettings
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(None)
	int32                                        EnvelopeFollowerAttackTimeMsec;                    // 0x8(0x4)(None)
	int32                                        EnvelopeFollowerReleaseTimeMsec;                   // 0xC(0x4)(None)
	float                                        EnvelopeGainMultiplier;                            // 0x10(0x4)(None)
	enum class ESourceEffectFilterParam          FilterParam;                                       // 0x14(0x1)(None)
	uint8                                        Pad_1CF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFrequencyModulation;                            // 0x18(0x4)(None)
	float                                        MaxFrequencyModulation;                            // 0x1C(0x4)(None)
	float                                        MinResonanceModulation;                            // 0x20(0x4)(None)
	float                                        MaxResonanceModulation;                            // 0x24(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.SourceEffectFilterSettings
struct FSourceEffectFilterSettings
{
public:
	enum class ESourceEffectFilterCircuit        FilterCircuit;                                     // 0x0(0x1)(None)
	enum class ESourceEffectFilterType           FilterType;                                        // 0x1(0x1)(None)
	uint8                                        Pad_1CF9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CutoffFrequency;                                   // 0x4(0x4)(None)
	float                                        FilterQ;                                           // 0x8(0x4)(None)
	uint8                                        Pad_1CFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
struct FSourceEffectFoldbackDistortionSettings
{
public:
	float                                        InputGainDb;                                       // 0x0(0x4)(None)
	float                                        ThresholdDb;                                       // 0x4(0x4)(None)
	float                                        OutputGainDb;                                      // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
struct FSourceEffectMidSideSpreaderSettings
{
public:
	float                                        SpreadAmount;                                      // 0x0(0x4)(None)
	enum class EStereoChannelMode                InputMode;                                         // 0x4(0x1)(None)
	enum class EStereoChannelMode                OutputMode;                                        // 0x5(0x1)(None)
	bool                                         bEqualPower;                                       // 0x6(0x1)(None)
	uint8                                        Pad_1CFC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectIndividualFilterSettings
struct FSourceEffectIndividualFilterSettings
{
public:
	enum class ESourceEffectMotionFilterCircuit  FilterCircuit;                                     // 0x0(0x1)(None)
	enum class ESourceEffectMotionFilterType     FilterType;                                        // 0x1(0x1)(None)
	uint8                                        Pad_1CFD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CutoffFrequency;                                   // 0x4(0x4)(None)
	float                                        FilterQ;                                           // 0x8(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Synthesis.SourceEffectMotionFilterModulationSettings
struct FSourceEffectMotionFilterModulationSettings
{
public:
	enum class ESourceEffectMotionFilterModSource ModulationSource;                                  // 0x0(0x1)(None)
	uint8                                        Pad_1CFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ModulationInputRange;                              // 0x8(0x10)(None)
	struct FVector2D                             ModulationOutputMinimumRange;                      // 0x18(0x10)(None)
	struct FVector2D                             ModulationOutputMaximumRange;                      // 0x28(0x10)(None)
	float                                        UpdateEaseMS;                                      // 0x38(0x4)(None)
	uint8                                        Pad_1CFF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Synthesis.SourceEffectMotionFilterSettings
struct FSourceEffectMotionFilterSettings
{
public:
	enum class ESourceEffectMotionFilterTopology MotionFilterTopology;                              // 0x0(0x1)(None)
	uint8                                        Pad_1D01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MotionFilterMix;                                   // 0x4(0x4)(None)
	struct FSourceEffectIndividualFilterSettings FilterASettings;                                   // 0x8(0xC)(None)
	struct FSourceEffectIndividualFilterSettings FilterBSettings;                                   // 0x14(0xC)(None)
	TMap<enum class ESourceEffectMotionFilterModDestination, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings;                                // 0x20(0x50)(None)
	float                                        DryVolumeDb;                                       // 0x70(0x4)(None)
	uint8                                        Pad_1D02[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectPannerSettings
struct FSourceEffectPannerSettings
{
public:
	float                                        Spread;                                            // 0x0(0x4)(None)
	float                                        Pan;                                               // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectPhaserSettings
struct FSourceEffectPhaserSettings
{
public:
	float                                        WetLevel;                                          // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	float                                        Feedback;                                          // 0x8(0x4)(None)
	enum class EPhaserLFOType                    LFOType;                                           // 0xC(0x1)(None)
	bool                                         UseQuadraturePhase;                                // 0xD(0x1)(None)
	uint8                                        Pad_1D03[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.SourceEffectRingModulationSettings
struct FSourceEffectRingModulationSettings
{
public:
	enum class ERingModulatorTypeSourceEffect    ModulatorType;                                     // 0x0(0x1)(None)
	uint8                                        Pad_1D04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Frequency;                                         // 0x4(0x4)(None)
	float                                        Depth;                                             // 0x8(0x4)(None)
	float                                        DryLevel;                                          // 0xC(0x4)(None)
	float                                        WetLevel;                                          // 0x10(0x4)(None)
	uint8                                        Pad_1D05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioBus*                             AudioBusModulator;                                 // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
struct FSourceEffectSimpleDelaySettings
{
public:
	float                                        SpeedOfSound;                                      // 0x0(0x4)(None)
	float                                        DelayAmount;                                       // 0x4(0x4)(None)
	float                                        DryAmount;                                         // 0x8(0x4)(None)
	float                                        WetAmount;                                         // 0xC(0x4)(None)
	float                                        Feedback;                                          // 0x10(0x4)(None)
	uint8                                        bDelayBasedOnDistance : 1;                         // Mask: 0x1, PropSize: 0x10x14(0x1)(None)
	uint8                                        bUseDistanceOverride : 1;                          // Mask: 0x2, PropSize: 0x10x14(0x1)(None)
	uint8                                        Pad_1D08[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
struct FSourceEffectStereoDelaySettings
{
public:
	enum class EStereoDelaySourceEffect          DelayMode;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1D09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayTimeMsec;                                     // 0x4(0x4)(None)
	float                                        Feedback;                                          // 0x8(0x4)(None)
	float                                        DelayRatio;                                        // 0xC(0x4)(None)
	float                                        WetLevel;                                          // 0x10(0x4)(None)
	float                                        DryLevel;                                          // 0x14(0x4)(None)
	bool                                         bFilterEnabled;                                    // 0x18(0x1)(None)
	enum class EStereoDelayFiltertype            FilterType;                                        // 0x19(0x1)(None)
	uint8                                        Pad_1D0A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FilterFrequency;                                   // 0x1C(0x4)(None)
	float                                        FilterQ;                                           // 0x20(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
struct FSourceEffectWaveShaperSettings
{
public:
	float                                        Amount;                                            // 0x0(0x4)(None)
	float                                        OutputGainDb;                                      // 0x4(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
struct FSubmixEffectConvolutionReverbSettings
{
public:
	float                                        NormalizationVolumeDb;                             // 0x0(0x4)(None)
	float                                        WetVolumeDb;                                       // 0x4(0x4)(None)
	float                                        DryVolumeDb;                                       // 0x8(0x4)(None)
	bool                                         bBypass;                                           // 0xC(0x1)(None)
	bool                                         bMixInputChannelFormatToImpulseResponseFormat;     // 0xD(0x1)(None)
	bool                                         bMixReverbOutputToOutputChannelFormat;             // 0xE(0x1)(None)
	uint8                                        Pad_1D0B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SurroundRearChannelBleedDb;                        // 0x10(0x4)(None)
	bool                                         bInvertRearChannelBleedPhase;                      // 0x14(0x1)(None)
	bool                                         bSurroundRearChannelFlip;                          // 0x15(0x1)(None)
	uint8                                        Pad_1D0C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SurroundRearChannelBleedAmount;                    // 0x18(0x4)(None)
	uint8                                        Pad_1D0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x20(0x8)(None)
	bool                                         AllowHardwareAcceleration;                         // 0x28(0x1)(None)
	uint8                                        Pad_1D0E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SubmixEffectDelaySettings
struct FSubmixEffectDelaySettings
{
public:
	float                                        MaximumDelayLength;                                // 0x0(0x4)(None)
	float                                        InterpolationTime;                                 // 0x4(0x4)(None)
	float                                        DelayLength;                                       // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SubmixEffectFilterSettings
struct FSubmixEffectFilterSettings
{
public:
	enum class ESubmixFilterType                 FilterType;                                        // 0x0(0x1)(None)
	enum class ESubmixFilterAlgorithm            FilterAlgorithm;                                   // 0x1(0x1)(None)
	uint8                                        Pad_1D12[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FilterFrequency;                                   // 0x4(0x4)(None)
	float                                        FilterQ;                                           // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
struct FSubmixEffectFlexiverbSettings
{
public:
	float                                        PreDelay;                                          // 0x0(0x4)(None)
	float                                        DecayTime;                                         // 0x4(0x4)(None)
	float                                        RoomDampening;                                     // 0x8(0x4)(None)
	int32                                        Complexity;                                        // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.DynamicsBandSettings
struct FDynamicsBandSettings
{
public:
	float                                        CrossoverTopFrequency;                             // 0x0(0x4)(None)
	float                                        AttackTimeMsec;                                    // 0x4(0x4)(None)
	float                                        ReleaseTimeMsec;                                   // 0x8(0x4)(None)
	float                                        ThresholdDb;                                       // 0xC(0x4)(None)
	float                                        Ratio;                                             // 0x10(0x4)(None)
	float                                        KneeBandwidthDb;                                   // 0x14(0x4)(None)
	float                                        InputGainDb;                                       // 0x18(0x4)(None)
	float                                        OutputGainDb;                                      // 0x1C(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
struct FSubmixEffectMultibandCompressorSettings
{
public:
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(None)
	enum class ESubmixEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(None)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode;                                          // 0x2(0x1)(None)
	uint8                                        Pad_1D18[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAheadMsec;                                     // 0x4(0x4)(None)
	bool                                         bAnalogMode;                                       // 0x8(0x1)(None)
	bool                                         bFourPole;                                         // 0x9(0x1)(None)
	bool                                         bBypass;                                           // 0xA(0x1)(None)
	enum class ESubmixEffectDynamicsKeySource    KeySource;                                         // 0xB(0x1)(None)
	uint8                                        Pad_1D1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioBus*                             ExternalAudioBus;                                  // 0x10(0x8)(ZeroConstructor)
	class USoundSubmix*                          ExternalSubmix;                                    // 0x18(0x8)(None)
	float                                        KeyGainDb;                                         // 0x20(0x4)(None)
	bool                                         bKeyAudition;                                      // 0x24(0x1)(None)
	uint8                                        Pad_1D1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDynamicsBandSettings>         Bands;                                             // 0x28(0x10)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
struct FSubmixEffectStereoDelaySettings
{
public:
	enum class EStereoDelaySourceEffect          DelayMode;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1D1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayTimeMsec;                                     // 0x4(0x4)(None)
	float                                        Feedback;                                          // 0x8(0x4)(None)
	float                                        DelayRatio;                                        // 0xC(0x4)(None)
	float                                        WetLevel;                                          // 0x10(0x4)(None)
	float                                        DryLevel;                                          // 0x14(0x4)(None)
	bool                                         bFilterEnabled;                                    // 0x18(0x1)(None)
	enum class EStereoDelayFiltertype            FilterType;                                        // 0x19(0x1)(None)
	uint8                                        Pad_1D20[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FilterFrequency;                                   // 0x1C(0x4)(None)
	float                                        FilterQ;                                           // 0x20(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SubmixEffectStereoToQuadSettings
struct FSubmixEffectStereoToQuadSettings
{
public:
	bool                                         bFlipChannels;                                     // 0x0(0x1)(None)
	uint8                                        Pad_1D21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RearChannelGain;                                   // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.TapDelayInfo
struct FTapDelayInfo
{
public:
	enum class ETapLineMode                      TapLineMode;                                       // 0x0(0x1)(None)
	uint8                                        Pad_1D22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayLength;                                       // 0x4(0x4)(None)
	float                                        Gain;                                              // 0x8(0x4)(None)
	int32                                        OutputChannel;                                     // 0xC(0x4)(None)
	float                                        PanInDegrees;                                      // 0x10(0x4)(None)
	int32                                        TapId;                                             // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
struct FSubmixEffectTapDelaySettings
{
public:
	float                                        MaximumDelayLength;                                // 0x0(0x4)(None)
	float                                        InterpolationTime;                                 // 0x4(0x4)(None)
	TArray<struct FTapDelayInfo>                 Taps;                                              // 0x8(0x10)(None)
};

// 0x428 (0x430 - 0x8)
// ScriptStruct Synthesis.Synth2DSliderStyle
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_1D26[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           NormalThumbImage;                                  // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DisabledThumbImage;                                // 0xE0(0xD0)(ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           NormalBarImage;                                    // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x280(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BackgroundImage;                                   // 0x350(0xD0)(None)
	float                                        BarThickness;                                      // 0x420(0x4)(None)
	uint8                                        Pad_1D28[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x358 (0x360 - 0x8)
// ScriptStruct Synthesis.SynthKnobStyle
struct FSynthKnobStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_1D2A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           LargeKnob;                                         // 0x10(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           LargeKnobOverlay;                                  // 0xE0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           MediumKnob;                                        // 0x1B0(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           MediumKnobOverlay;                                 // 0x280(0xD0)(None)
	float                                        MinValueAngle;                                     // 0x350(0x4)(None)
	float                                        MaxValueAngle;                                     // 0x354(0x4)(None)
	enum class ESynthKnobSize                    KnobSize;                                          // 0x358(0x1)(None)
	uint8                                        Pad_1D2B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Synthesis.SynthSlateStyle
struct FSynthSlateStyle : public FSlateWidgetStyle
{
public:
	enum class ESynthSlateSizeType               SizeType;                                          // 0x8(0x1)(None)
	enum class ESynthSlateColorStyle             ColorStyle;                                        // 0x9(0x1)(None)
	uint8                                        Pad_1D2D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


