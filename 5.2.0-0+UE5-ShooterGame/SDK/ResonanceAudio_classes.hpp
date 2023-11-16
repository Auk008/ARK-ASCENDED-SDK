#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
public:
	enum class EResonanceRenderMode              RenderMode;                                        // 0x28(0x1)(None)
	uint8                                        Pad_26BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResonanceAudioSoundfieldSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UResonanceAudioBlueprintFunctionLibrary* GetDefaultObj();

	void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
	void GetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* ReturnValue);
};

// 0x80 (0x538 - 0x4B8)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_26C2[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             Material;                                          // 0x528(0x8)(ZeroConstructor)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x530(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj();

};

// 0x108 (0x170 - 0x68)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_26D3[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0x100(0x70)(None)

	static class UClass* StaticClass();
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj();

	void SetRoomRotation(const struct FQuat& InRotation);
	void SetRoomPosition(const struct FVector& InPosition);
	void SetRoomMaterials(const TArray<enum class ERaMaterialName>& InMaterials);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetReverbGain(float InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// 0x68 (0x90 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                       OutputSubmix;                                      // 0x28(0x20)(None)
	enum class ERaQualityMode                    QualityMode;                                       // 0x48(0x1)(None)
	uint8                                        Pad_26D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x50(0x20)(None)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x70(0x20)(None)

	static class UClass* StaticClass();
	static class UResonanceAudioSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(None)
	uint8                                        Pad_26D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Pattern;                                           // 0x2C(0x4)(None)
	float                                        Sharpness;                                         // 0x30(0x4)(None)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(None)
	uint8                                        Pad_26D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x38(0x4)(None)
	float                                        Spread;                                            // 0x3C(0x4)(None)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(None)
	uint8                                        Pad_26D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistance;                                       // 0x44(0x4)(None)
	float                                        MaxDistance;                                       // 0x48(0x4)(None)
	uint8                                        Pad_26D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj();

	void SetSoundSourceSpread(float InSpread);
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};

}


