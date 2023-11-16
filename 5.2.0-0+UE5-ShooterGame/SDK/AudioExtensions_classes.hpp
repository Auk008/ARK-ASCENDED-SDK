#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEncodingSettingsBase
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEncodingSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SpatializationPluginSourceSettingsBase
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
class USourceDataOverridePluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USourceDataOverridePluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.OcclusionPluginSourceSettingsBase
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.ReverbPluginSourceSettingsBase
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UReverbPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioParameterControllerInterface
class IAudioParameterControllerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioParameterControllerInterface* GetDefaultObj();

	void SetTriggerParameter(class FName InName);
	void SetStringParameter(class FName InName, const class FString& InValue);
	void SetStringArrayParameter(class FName InName, const TArray<class FString>& InValue);
	void SetParameters_Blueprint(const TArray<struct FAudioParameter>& InParameters);
	void SetObjectParameter(class FName InName, class UObject* InValue);
	void SetObjectArrayParameter(class FName InName, const TArray<class UObject*>& InValue);
	void SetIntParameter(class FName InName, int32 InInt);
	void SetIntArrayParameter(class FName InName, const TArray<int32>& InValue);
	void SetFloatParameter(class FName InName, float InFloat);
	void SetFloatArrayParameter(class FName InName, const TArray<float>& InValue);
	void SetBoolParameter(class FName InName, bool InBool);
	void SetBoolArrayParameter(class FName InName, const TArray<bool>& InValue);
	void ResetParameters();
};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.AudioCodecEncoderSettings
class UAudioCodecEncoderSettings : public UObject
{
public:
	int32                                        Version;                                           // 0x28(0x4)(None)
	uint8                                        Pad_26BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCodecEncoderSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioEndpointSettingsBase
class UAudioEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioEndpointSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.DummyEndpointSettings
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
public:

	static class UClass* StaticClass();
	static class UDummyEndpointSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundModulatorBase
class USoundModulatorBase : public UObject
{
public:
	uint8                                        Pad_26C1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundModulatorBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEndpointSettingsBase
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEndpointSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEffectSettingsBase
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEffectSettingsBase* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundfieldEffectBase
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*         Settings;                                          // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class USoundfieldEffectBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.WaveformTransformationBase
class UWaveformTransformationBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaveformTransformationBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class AudioExtensions.WaveformTransformationChain
class UWaveformTransformationChain : public UObject
{
public:
	TArray<class UWaveformTransformationBase*>   Transformations;                                   // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UWaveformTransformationChain* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AudioExtensions.AudioPcmEncoderSettings
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
public:
	enum class EPcmBitDepthConversion            BitDepthConversion;                                // 0x30(0x1)(None)
	uint8                                        Pad_26C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioPcmEncoderSettings* GetDefaultObj();

};

}


