#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
public:
	float                                        VolumeMultiplier;                                  // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
public:
	class USoundSubmixBase*                      Submix;                                            // 0x0(0x8)(None)
	float                                        SendLevel;                                         // 0x8(0x4)(None)
	uint8                                        Pad_448[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.SetOutputToBusOnly
struct USynthComponent_SetOutputToBusOnly_Params
{
public:
	bool                                         bInOutputToBusOnly;                                // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
struct USynthComponent_SetLowPassFilterFrequency_Params
{
public:
	float                                        InLowPassFilterFrequency;                          // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
struct USynthComponent_SetLowPassFilterEnabled_Params
{
public:
	bool                                         InLowPassFilterEnabled;                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function AudioMixer.SynthComponent.FadeOut
struct USynthComponent_FadeOut_Params
{
public:
	float                                        FadeOutDuration;                                   // 0x0(0x4)(None)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(None)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0x8(0x1)(None)
	uint8                                        Pad_452[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.FadeIn
struct USynthComponent_FadeIn_Params
{
public:
	float                                        FadeInDuration;                                    // 0x0(0x4)(None)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(None)
	float                                        StartTime;                                         // 0x8(0x4)(None)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0xC(0x1)(None)
	uint8                                        Pad_458[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function AudioMixer.SynthComponent.AdjustVolume
struct USynthComponent_AdjustVolume_Params
{
public:
	float                                        AdjustVolumeDuration;                              // 0x0(0x4)(None)
	float                                        AdjustVolumeLevel;                                 // 0x4(0x4)(None)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0x8(0x1)(None)
	uint8                                        Pad_45B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
{
public:
	float                                        InMegabytesToFree;                                 // 0x0(0x4)(None)
	float                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
struct UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class FString                                NewDeviceId;                                       // 0x8(0x10)(None)
	FDelegateProperty_                           OnCompletedDeviceSwap;                             // 0x18(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	enum class EAudioRecordingExportType         ExportType;                                        // 0x8(0x1)(None)
	uint8                                        Pad_46F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x10(0x10)(None)
	class FString                                Path;                                              // 0x20(0x10)(None)
	class USoundSubmix*                          SubmixToRecord;                                    // 0x30(0x8)(ZeroConstructor)
	class USoundWave*                            ExistingSoundWaveToOverwrite;                      // 0x38(0x8)(ZeroConstructor)
	class USoundWave*                            ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
struct UAudioMixerBlueprintLibrary_StopAudioBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SubmixToStopAnalyzing;                             // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	float                                        ExpectedDuration;                                  // 0x8(0x4)(None)
	uint8                                        Pad_471[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundSubmix*                          SubmixToRecord;                                    // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
struct UAudioMixerBlueprintLibrary_StartAudioBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x8(0x8)(None)
	enum class EFFTSize                          FFTSize;                                           // 0x10(0x1)(None)
	enum class EFFTPeakInterpolationMethod       InterpolationMethod;                               // 0x11(0x1)(None)
	enum class EFFTWindowType                    WindowType;                                        // 0x12(0x1)(None)
	uint8                                        Pad_473[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HopSize;                                           // 0x14(0x4)(None)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x18(0x1)(None)
	uint8                                        Pad_474[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(ZeroConstructor)
	TArray<class USoundEffectSubmixPreset*>      SubmixEffectPresetChain;                           // 0x10(0x10)(None)
	float                                        FadeTimeSec;                                       // 0x20(0x4)(None)
	uint8                                        Pad_476[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(None)
	int32                                        EntryIndex;                                        // 0x10(0x4)(None)
	bool                                         bBypassed;                                         // 0x14(0x1)(None)
	uint8                                        Pad_478[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SubmixToPause;                                     // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
struct UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          InSoundSubmix;                                     // 0x8(0x8)(ZeroConstructor)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(None)
	uint8                                        Pad_47B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          InSoundSubmix;                                     // 0x8(0x8)(ZeroConstructor)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(None)
	uint8                                        Pad_480[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(None)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(None)
	uint8                                        Pad_483[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(ZeroConstructor)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(None)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(None)
	uint8                                        Pad_491[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(ZeroConstructor)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(None)
	int32                                        EntryIndex;                                        // 0x10(0x4)(None)
	uint8                                        Pad_498[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
public:
	class USoundWave*                            SoundWave;                                         // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           OnLoadCompletion;                                  // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
{
public:
	class USoundCue*                             SoundCue;                                          // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SubmixToPause;                                     // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params
{
public:
	enum class EAudioSpectrumBandPresetType      InBandPresetType;                                  // 0x0(0x1)(None)
	uint8                                        Pad_49D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InNumBands;                                        // 0x4(0x4)(None)
	int32                                        InAttackTimeMsec;                                  // 0x8(0x4)(None)
	int32                                        InReleaseTimeMsec;                                 // 0xC(0x4)(None)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params
{
public:
	int32                                        InNumSemitones;                                    // 0x0(0x4)(None)
	enum class EMusicalNoteName                  InStartingMusicalNote;                             // 0x4(0x1)(None)
	uint8                                        Pad_4A2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InStartingOctave;                                  // 0x8(0x4)(None)
	int32                                        InAttackTimeMsec;                                  // 0xC(0x4)(None)
	int32                                        InReleaseTimeMsec;                                 // 0x10(0x4)(None)
	uint8                                        Pad_4A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params
{
public:
	int32                                        InNumBands;                                        // 0x0(0x4)(None)
	float                                        InMinimumFrequency;                                // 0x4(0x4)(None)
	float                                        InMaximumFrequency;                                // 0x8(0x4)(None)
	int32                                        InAttackTimeMsec;                                  // 0xC(0x4)(None)
	int32                                        InReleaseTimeMsec;                                 // 0x10(0x4)(None)
	uint8                                        Pad_4A5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
struct UAudioMixerBlueprintLibrary_IsAudioBusActive_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_4A7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	TArray<float>                                Frequencies;                                       // 0x8(0x10)(None)
	TArray<float>                                Phases;                                            // 0x18(0x10)(None)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_4B3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	TArray<float>                                Frequencies;                                       // 0x8(0x10)(None)
	TArray<float>                                Magnitudes;                                        // 0x18(0x10)(None)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
struct UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           OnObtainCurrentDeviceEvent;                        // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
struct UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           OnObtainDevicesEvent;                              // 0x8(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
struct UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params
{
public:
	struct FAudioOutputDeviceInfo                Info;                                              // 0x0(0x48)(None)
	class FString                                ReturnValue;                                       // 0x48(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(None)
	float                                        FadeTimeSec;                                       // 0x10(0x4)(None)
	uint8                                        Pad_4C0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(ZeroConstructor)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_4C1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(ZeroConstructor)
	struct FSourceEffectChainEntry               Entry;                                             // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x8(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
public:
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x0(0x60)(None)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
{
public:
	class USoundSubmix*                          Submix;                                            // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
struct USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
public:
	struct FSubmixEffectSubmixEQSettings         InSettings;                                        // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
public:
	class UReverbEffect*                         InReverbEffect;                                    // 0x0(0x8)(None)
	float                                        WetLevel;                                          // 0x8(0x4)(None)
	float                                        DryLevel;                                          // 0xC(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
public:
	struct FSubmixEffectReverbSettings           InSettings;                                        // 0x0(0x40)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
struct UQuartzClockHandle_UnsubscribeFromTimeDivision_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	enum class EQuartzCommandQuantization        InQuantizationBoundary;                            // 0x8(0x1)(None)
	uint8                                        Pad_4D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
struct UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
struct UQuartzClockHandle_SubscribeToQuantizationEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	enum class EQuartzCommandQuantization        InQuantizationBoundary;                            // 0x8(0x1)(None)
	uint8                                        Pad_4D9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnQuantizationEvent;                               // 0xC(0x10)(ZeroConstructor)
	uint8                                        Pad_4DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
struct UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           OnQuantizationEvent;                               // 0x8(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.StopClock
struct UQuartzClockHandle_StopClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	bool                                         CancelPendingEvents;                               // 0x8(0x1)(None)
	uint8                                        Pad_4DC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x10(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzClockHandle.StartOtherClock
struct UQuartzClockHandle_StartOtherClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class FName                                  OtherClockName;                                    // 0x8(0x8)(None)
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x10(0x20)(None)
	FDelegateProperty_                           InDelegate;                                        // 0x30(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.StartClock
struct UQuartzClockHandle_StartClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
struct UQuartzClockHandle_SetTicksPerSecond_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(None)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(None)
	float                                        TicksPerSecond;                                    // 0x40(0x4)(None)
	uint8                                        Pad_4DE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
struct UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(None)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(None)
	float                                        ThirtySecondsNotesPerMinute;                       // 0x40(0x4)(None)
	uint8                                        Pad_4E0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
struct UQuartzClockHandle_SetSecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(None)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(None)
	float                                        SecondsPerTick;                                    // 0x40(0x4)(None)
	uint8                                        Pad_4E5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
struct UQuartzClockHandle_SetMillisecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(None)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(None)
	float                                        MillisecondsPerTick;                               // 0x40(0x4)(None)
	uint8                                        Pad_4E7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
struct UQuartzClockHandle_SetBeatsPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(None)
	FDelegateProperty_                           Delegate;                                          // 0x28(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(None)
	float                                        BeatsPerMinute;                                    // 0x40(0x4)(None)
	uint8                                        Pad_4EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResumeClock
struct UQuartzClockHandle_ResumeClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
struct UQuartzClockHandle_ResetTransportQuantized_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x8(0x20)(None)
	FDelegateProperty_                           InDelegate;                                        // 0x28(0x10)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResetTransport
struct UQuartzClockHandle_ResetTransport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           InDelegate;                                        // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.PauseClock
struct UQuartzClockHandle_PauseClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.IsClockRunning
struct UQuartzClockHandle_IsClockRunning_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_4FE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
struct UQuartzClockHandle_GetTicksPerSecond_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_500[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
struct UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_502[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
struct UQuartzClockHandle_GetSecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_504[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
struct UQuartzClockHandle_GetMillisecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_506[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
struct UQuartzClockHandle_GetEstimatedRunTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_508[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
struct UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	enum class EQuartzCommandQuantization        QuantizationType;                                  // 0x8(0x1)(None)
	uint8                                        Pad_50A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Multiplier;                                        // 0xC(0x4)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_50B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
struct UQuartzClockHandle_GetCurrentTimestamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	struct FQuartzTransportTimeStamp             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
struct UQuartzClockHandle_GetBeatsPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_50D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
struct UQuartzSubsystem_IsQuartzEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.IsClockRunning
struct UQuartzSubsystem_IsClockRunning_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	class FName                                  ClockName;                                         // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_511[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
struct UQuartzSubsystem_GetRoundTripMinLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_512[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
struct UQuartzSubsystem_GetRoundTripMaxLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_513[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
struct UQuartzSubsystem_GetRoundTripAverageLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_514[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetHandleForClock
struct UQuartzSubsystem_GetHandleForClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class FName                                  ClockName;                                         // 0x8(0x8)(None)
	class UQuartzClockHandle*                    ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_517[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_519[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_51B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
struct UQuartzSubsystem_GetEstimatedClockRunTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	class FName                                  InClockName;                                       // 0x8(0x8)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_51F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
struct UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	class FName                                  ClockName;                                         // 0x8(0x8)(None)
	enum class EQuartzCommandQuantization        QuantizationType;                                  // 0x10(0x1)(None)
	uint8                                        Pad_522[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Multiplier;                                        // 0x14(0x4)(None)
	float                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_523[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
struct UQuartzSubsystem_GetCurrentClockTimestamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	class FName                                  InClockName;                                       // 0x8(0x8)(None)
	struct FQuartzTransportTimeStamp             ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.DoesClockExist
struct UQuartzSubsystem_DoesClockExist_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	class FName                                  ClockName;                                         // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_52C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DeleteClockByName
struct UQuartzSubsystem_DeleteClockByName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	class FName                                  ClockName;                                         // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
struct UQuartzSubsystem_DeleteClockByHandle_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UQuartzClockHandle*                    InClockHandle;                                     // 0x8(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzSubsystem.CreateNewClock
struct UQuartzSubsystem_CreateNewClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class FName                                  ClockName;                                         // 0x8(0x8)(None)
	struct FQuartzClockSettings                  InSettings;                                        // 0x10(0x20)(None)
	bool                                         bOverrideSettingsIfClockExists;                    // 0x30(0x1)(None)
	bool                                         bUseAudioEngineClockManager;                       // 0x31(0x1)(None)
	uint8                                        Pad_53C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuartzClockHandle*                    ReturnValue;                                       // 0x38(0x8)(None)
};

}
}


