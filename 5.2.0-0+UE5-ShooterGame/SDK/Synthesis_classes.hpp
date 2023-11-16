#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Synthesis.AudioImpulseResponse
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(None)
	int32                                        NumChannels;                                       // 0x38(0x4)(None)
	int32                                        SampleRate;                                        // 0x3C(0x4)(None)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(None)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(None)
	uint8                                        Pad_19F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                IRData;                                            // 0x48(0x10)(None)

	static class UClass* StaticClass();
	static class UAudioImpulseResponse* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UModularSynthPresetBank* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Synthesis.ModularSynthLibrary
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModularSynthLibrary* GetDefaultObj();

	void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName);
};

// 0x6D0 (0xE90 - 0x7C0)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x7C0(0x4)(None)
	uint8                                        Pad_1AD4[0x6CC];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModularSynthComponent* GetDefaultObj();

	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int32 OscIndex, enum class ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int32 OscIndex, float Semitones);
	void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
	void SetOscOctave(int32 OscIndex, float Octave);
	void SetOscGainMod(int32 OscIndex, float OscGainMod);
	void SetOscGain(int32 OscIndex, float OscGain);
	void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
	void SetOscCents(int32 OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int32 LFOIndex, enum class ESynthLFOType LFOType);
	void SetLFOPatch(int32 LFOIndex, enum class ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int32 LFOIndex, enum class ESynthLFOMode LFOMode);
	void SetLFOGainMod(int32 LFOIndex, float GainMod);
	void SetLFOGain(int32 LFOIndex, float Gain);
	void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(enum class ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	void SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled, bool ReturnValue);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32 Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	void CreatePatch(enum class ESynth1PatchSource PatchSource, const TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault, const struct FPatchId& ReturnValue);
};

// 0x1C8 (0x230 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B01[0xF8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x160(0xD0)(None)

	static class UClass* StaticClass();
	static class USourceEffectBitCrusherPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings);
	void SetSampleRateModulators(TSet<class USoundModulatorBase*> InModulators);
	void SetSampleRateModulator(class USoundModulatorBase* Modulator);
	void SetSampleRate(float SampleRate);
	void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);
	void SetBits(float Bits);
	void SetBitModulators(TSet<class USoundModulatorBase*> InModulators);
	void SetBitModulator(class USoundModulatorBase* Modulator);
};

// 0x4D8 (0x540 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B14[0x280];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2E8(0x258)(None)

	static class UClass* StaticClass();
	static class USourceEffectChorusPreset* GetDefaultObj();

	void SetWetModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetWetModulator(class USoundModulatorBase* Modulator);
	void SetWet(float WetAmount);
	void SetSpreadModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetSpreadModulator(class USoundModulatorBase* Modulator);
	void SetSpread(float Spread);
	void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings);
	void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);
	void SetFrequencyModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetFrequencyModulator(class USoundModulatorBase* Modulator);
	void SetFrequency(float Frequency);
	void SetFeedbackModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetFeedbackModulator(class USoundModulatorBase* Modulator);
	void SetFeedback(float Feedback);
	void SetDryModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetDryModulator(class USoundModulatorBase* Modulator);
	void SetDry(float DryAmount);
	void SetDepthModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetDepthModulator(class USoundModulatorBase* Modulator);
	void SetDepth(float Depth);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectConvolutionReverbPreset
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(None)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(None)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(None)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(None)
	uint8                                        Pad_1B17[0x3E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USourceEffectConvolutionReverbPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// 0x78 (0xE0 - 0x68)
// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B1B[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(None)

	static class UClass* StaticClass();
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// 0x20 (0xD8 - 0xB8)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xB8(0x10)(ZeroConstructor)
	uint8                                        Pad_1B1C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvelopeFollowerListener* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B2C[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(None)

	static class UClass* StaticClass();
	static class USourceEffectEnvelopeFollowerPreset* GetDefaultObj();

	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B36[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(None)

	static class UClass* StaticClass();
	static class USourceEffectEQPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectEQSettings& InSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B38[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(None)

	static class UClass* StaticClass();
	static class USourceEffectFilterPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B3A[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(None)

	static class UClass* StaticClass();
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B3D[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(None)

	static class UClass* StaticClass();
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B3F[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(None)

	static class UClass* StaticClass();
	static class USourceEffectMotionFilterPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B41[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(None)

	static class UClass* StaticClass();
	static class USourceEffectPannerPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B45[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(None)

	static class UClass* StaticClass();
	static class USourceEffectPhaserPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B46[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(None)

	static class UClass* StaticClass();
	static class USourceEffectRingModulationPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B49[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(None)

	static class UClass* StaticClass();
	static class USourceEffectSimpleDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B54[0x4C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(None)

	static class UClass* StaticClass();
	static class USourceEffectStereoDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1B6B[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(None)

	static class UClass* StaticClass();
	static class USourceEffectWaveShaperPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(ZeroConstructor)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(None)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(None)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(None)
	uint8                                        Pad_1B7B[0x5E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubmixEffectConvolutionReverbPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SubmixEffectDelayStatics
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USubmixEffectDelayStatics* GetDefaultObj();

	void SetMaximumDelayLength(const struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength, const struct FSubmixEffectDelaySettings& ReturnValue);
	void SetInterpolationTime(const struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime, const struct FSubmixEffectDelaySettings& ReturnValue);
	void SetDelayLength(const struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength, const struct FSubmixEffectDelaySettings& ReturnValue);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BA4[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(None)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(None)
	uint8                                        Pad_1BA5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubmixEffectDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	void SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void GetMaxDelayInMilliseconds(float ReturnValue);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BAB[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(None)

	static class UClass* StaticClass();
	static class USubmixEffectFilterPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(enum class ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BB1[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(None)

	static class UClass* StaticClass();
	static class USubmixEffectFlexiverbPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BC4[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(None)

	static class UClass* StaticClass();
	static class USubmixEffectMultibandCompressorPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectStereoDelayPreset
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BC8[0x4C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(None)

	static class UClass* StaticClass();
	static class USubmixEffectStereoDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SubmixEffectStereoToQuadPreset
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BCA[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectStereoToQuadSettings     Settings;                                          // 0x98(0x8)(None)

	static class UClass* StaticClass();
	static class USubmixEffectStereoToQuadPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectStereoToQuadSettings& InSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1BD7[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(None)
	uint8                                        Pad_1BD8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubmixEffectTapDelayPreset* GetDefaultObj();

	void SetTap(int32 TapId, const struct FTapDelayInfo& TapInfo);
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int32 TapId);
	void GetTapIds(const TArray<int32>& TapIds);
	void GetTap(int32 TapId, const struct FTapDelayInfo& TapInfo);
	void GetMaxDelayInMilliseconds(float ReturnValue);
	void AddTap(int32 TapId);
};

// 0x3E0 (0xBA0 - 0x7C0)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x7C0(0x8)(ZeroConstructor)
	uint8                                        Pad_1C1F[0x3D8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGranularSynth* GetDefaultObj();

	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32 Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	void IsLoaded(bool ReturnValue);
	void GetSampleDuration(float ReturnValue);
	void GetCurrentPlayheadTime(float ReturnValue);
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(None)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        BitPad_13C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(None)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(None)
	uint8                                        Pad_1C27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(None)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        Pad_1C28[0x117];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMonoWaveTableSynthPreset* GetDefaultObj();

};

// 0x750 (0xF10 - 0x7C0)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x7C0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x7D0(0x10)(ZeroConstructor)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x7E0(0x8)(ZeroConstructor)
	uint8                                        Pad_1C87[0x728];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponentMonoWaveTable* GetDefaultObj();

	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	void SetCurveValue(int32 TableIndex, int32 KeyframeIndex, float NewValue, bool ReturnValue);
	void SetCurveTangent(int32 TableIndex, float InNewTangent, bool ReturnValue);
	void SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32 TableIndex, bool ReturnValue);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int32 Index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	void GetNumTableEntries(int32 ReturnValue);
	void GetMaxTableIndex(int32 ReturnValue);
	void GetKeyFrameValuesForTable(float TableIndex, const TArray<float>& ReturnValue);
	void GetCurveTangent(int32 TableIndex, float ReturnValue);
};

// 0xF0 (0x8B0 - 0x7C0)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x7C0(0x4)(None)
	float                                        Volume;                                            // 0x7C4(0x4)(None)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x7C8(0x88)(ZeroConstructor)
	struct FVector2D                             DistanceRange;                                     // 0x850(0x10)(None)
	float                                        AttenuationDbAtMaxRange;                           // 0x860(0x4)(None)
	uint8                                        Pad_1C93[0x4C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponentToneGenerator* GetDefaultObj();

	void SetVolume(float InVolume);
	void SetFrequency(float InFrequency);
};

// 0x130 (0x8F0 - 0x7C0)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x7C0(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x7C8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x7D8(0x10)(ZeroConstructor)
	uint8                                        Pad_1CA1[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthSamplePlayer* GetDefaultObj();

	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);
	void IsLoaded(bool ReturnValue);
	void GetSampleDuration(float ReturnValue);
	void GetCurrentPlaybackProgressTime(float ReturnValue);
	void GetCurrentPlaybackProgressPercent(float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USynthesisUtilitiesBlueprintFunctionLibrary* GetDefaultObj();

	void GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax, float ReturnValue);
	void GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax, float ReturnValue);
};

// 0x4F0 (0x6E0 - 0x1F0)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x1F0(0x4)(None)
	float                                        ValueY;                                            // 0x1F4(0x4)(None)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x1F8(0x10)(ZeroConstructor)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x208(0x10)(ZeroConstructor)
	uint8                                        Pad_1CB5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x220(0x430)(ZeroConstructor)
	struct FLinearColor                          SliderHandleColor;                                 // 0x650(0x10)(None)
	bool                                         IndentHandle;                                      // 0x660(0x1)(None)
	bool                                         Locked;                                            // 0x661(0x1)(None)
	uint8                                        Pad_1CB6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x664(0x4)(None)
	bool                                         IsFocusable;                                       // 0x668(0x1)(None)
	uint8                                        Pad_1CB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x670(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x680(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x690(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x6A0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x6B0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x6C0(0x10)(ZeroConstructor)
	uint8                                        Pad_1CB8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynth2DSlider* GetDefaultObj();

	void SetValue(const struct FVector2D& InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void GetValue(const struct FVector2D& ReturnValue);
};

// 0x430 (0x620 - 0x1F0)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(None)
	float                                        StepSize;                                          // 0x1F4(0x4)(None)
	float                                        MouseSpeed;                                        // 0x1F8(0x4)(None)
	float                                        MouseFineTuneSpeed;                                // 0x1FC(0x4)(None)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x200(0x1)(None)
	uint8                                        BitPad_140 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ParameterName;                                     // 0x208(0x18)(None)
	class FText                                  ParameterUnits;                                    // 0x220(0x18)(None)
	FDelegateProperty_                           ValueDelegate;                                     // 0x238(0x10)(ZeroConstructor)
	uint8                                        Pad_1CC2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x250(0x360)(ZeroConstructor)
	bool                                         Locked;                                            // 0x5B0(0x1)(None)
	bool                                         IsFocusable;                                       // 0x5B1(0x1)(None)
	uint8                                        Pad_1CC4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5B8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5C8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5D8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x5E8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x5F8(0x10)(ZeroConstructor)
	uint8                                        Pad_1CC5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthKnob* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	void GetValue(float ReturnValue);
};

}


