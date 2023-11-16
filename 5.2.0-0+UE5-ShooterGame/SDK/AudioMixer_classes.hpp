#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F8 (0x7C0 - 0x2C8)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        BitPad_3E : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_45E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2CC(0x1)(None)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2CC(0x1)(None)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2CC(0x1)(None)
	uint8                                        BitPad_3F : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_45F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2D0(0x8)(ZeroConstructor)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2D8(0x3C8)(ZeroConstructor)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x6A0(0x8)(ZeroConstructor)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x6A8(0x50)(ZeroConstructor)
	class USoundClass*                           SoundClass;                                        // 0x6F8(0x8)(ZeroConstructor)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x700(0x8)(ZeroConstructor)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x708(0x8)(ZeroConstructor)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x710(0x10)(ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x720(0x10)(ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x730(0x10)(ZeroConstructor)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x740(0x1)(None)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x740(0x1)(None)
	uint8                                        BitPad_40 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_460[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnvelopeFollowerAttackTime;                        // 0x744(0x4)(None)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x748(0x4)(None)
	uint8                                        Pad_461[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x750(0x10)(ZeroConstructor)
	uint8                                        Pad_462[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USynthSound*                           Synth;                                             // 0x780(0x8)(ZeroConstructor)
	class UAudioComponent*                       AudioComponent;                                    // 0x788(0x8)(ZeroConstructor)
	uint8                                        Pad_463[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetOutputToBusOnly(bool bInOutputToBusOnly);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void IsPlaying(bool ReturnValue);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve);
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_466[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class AudioMixer.AudioBusSubsystem
class UAudioBusSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_467[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioBusSubsystem* GetDefaultObj();

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_468[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(ZeroConstructor)
	uint8                                        Pad_469[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(ZeroConstructor)
	uint8                                        Pad_46A[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(ZeroConstructor)
	uint8                                        Pad_46B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(ZeroConstructor)
	uint8                                        Pad_46C[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(ZeroConstructor)
	uint8                                        Pad_46D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(None)
	uint8                                        Pad_46E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioDeviceNotificationSubsystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioMixerBlueprintLibrary* GetDefaultObj();

	void TrimAudioCache(float InMegabytesToFree, float ReturnValue);
	void SwapAudioOutputDevice(class UObject* WorldContextObject, const class FString& NewDeviceId, FDelegateProperty_ OnCompletedDeviceSwap);
	void StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite, class USoundWave* ReturnValue);
	void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType);
	void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_ OnLoadCompletion);
	void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	void MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	void MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	void IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus, bool ReturnValue);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, const TArray<float>& Frequencies, const TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze);
	void GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 ReturnValue);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, const TArray<float>& Frequencies, const TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty_ OnObtainCurrentDeviceEvent);
	void GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty_ OnObtainDevicesEvent);
	void Conv_AudioOutputDeviceInfoToString(const struct FAudioOutputDeviceInfo& Info, const class FString& ReturnValue);
	void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset, int32 ReturnValue);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0x20 (0x4E0 - 0x4C0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x4C0(0x8)(ZeroConstructor)
	uint8                                        Pad_4CD[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4D2[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(None)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4D4[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(None)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4D6[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(None)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// 0x1C0 (0x1E8 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_50E[0x1C0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle* ClockHandle);
	void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle* ClockHandle);
	void SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle);
	void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle);
	void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle* ClockHandle);
	void StartOtherClock(class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate);
	void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle* ClockHandle);
	void SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float TicksPerSecond);
	void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float ThirtySecondsNotesPerMinute);
	void SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float SecondsPerTick);
	void SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float MillisecondsPerTick);
	void SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float BeatsPerMinute);
	void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle* ClockHandle);
	void ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate, class UQuartzClockHandle* ClockHandle);
	void ResetTransport(class UObject* WorldContextObject, FDelegateProperty_ InDelegate);
	void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle* ClockHandle);
	void IsClockRunning(class UObject* WorldContextObject, bool ReturnValue);
	void GetTicksPerSecond(class UObject* WorldContextObject, float ReturnValue);
	void GetThirtySecondNotesPerMinute(class UObject* WorldContextObject, float ReturnValue);
	void GetSecondsPerTick(class UObject* WorldContextObject, float ReturnValue);
	void GetMillisecondsPerTick(class UObject* WorldContextObject, float ReturnValue);
	void GetEstimatedRunTime(class UObject* WorldContextObject, float ReturnValue);
	void GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization QuantizationType, float Multiplier, float ReturnValue);
	void GetCurrentTimestamp(class UObject* WorldContextObject, const struct FQuartzTransportTimeStamp& ReturnValue);
	void GetBeatsPerMinute(class UObject* WorldContextObject, float ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_53F[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	void IsQuartzEnabled(bool ReturnValue);
	void IsClockRunning(class UObject* WorldContextObject, class FName ClockName, bool ReturnValue);
	void GetRoundTripMinLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetRoundTripMaxLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetRoundTripAverageLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetHandleForClock(class UObject* WorldContextObject, class FName ClockName, class UQuartzClockHandle* ReturnValue);
	void GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetEstimatedClockRunTime(class UObject* WorldContextObject, class FName InClockName, float ReturnValue);
	void GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, class FName ClockName, enum class EQuartzCommandQuantization QuantizationType, float Multiplier, float ReturnValue);
	void GetCurrentClockTimestamp(class UObject* WorldContextObject, class FName InClockName, const struct FQuartzTransportTimeStamp& ReturnValue);
	void GetAudioRenderThreadToGameThreadMinLatency(float ReturnValue);
	void GetAudioRenderThreadToGameThreadMaxLatency(float ReturnValue);
	void GetAudioRenderThreadToGameThreadAverageLatency(float ReturnValue);
	void DoesClockExist(class UObject* WorldContextObject, class FName ClockName, bool ReturnValue);
	void DeleteClockByName(class UObject* WorldContextObject, class FName ClockName);
	void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle* InClockHandle);
	void CreateNewClock(class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager, class UQuartzClockHandle* ReturnValue);
};

}


