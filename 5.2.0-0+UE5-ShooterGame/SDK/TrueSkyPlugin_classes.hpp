#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// Class TrueSkyPlugin.TrueSkyComponent
class UTrueSkyComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UTrueSkyComponent* GetDefaultObj();

};

// 0x70 (0x528 - 0x4B8)
// Class TrueSkyPlugin.TrueSkySequenceActor
class ATrueSkySequenceActor : public ATrueSkyActorParent
{
public:
	TArray<class UTrueSkySequenceAsset*>         ActiveSequences;                                   // 0x4B8(0x10)(ZeroConstructor)
	TArray<float>                                BlendWeights;                                      // 0x4C8(0x10)(None)
	class UTexture2D*                            MoonTexture;                                       // 0x4D8(0x8)(ZeroConstructor)
	class UTexture2D*                            CosmicBackgroundTexture;                           // 0x4E0(0x8)(ZeroConstructor)
	class UTextureRenderTarget2D*                External_ScatterRT;                                // 0x4E8(0x8)(ZeroConstructor)
	class UTextureRenderTarget2D*                External_LossRT;                                   // 0x4F0(0x8)(ZeroConstructor)
	float                                        Brightness;                                        // 0x4F8(0x4)(None)
	float                                        MetresPerUnit;                                     // 0x4FC(0x4)(None)
	float                                        MinSimpleCloudShadowing;                           // 0x500(0x4)(None)
	float                                        MaxSimpleCloudShadowing;                           // 0x504(0x4)(None)
	float                                        MinSimpleCloudShadowingDistance;                   // 0x508(0x4)(None)
	float                                        MaxSimpleCloudShadowingDistance;                   // 0x50C(0x4)(None)
	float                                        SimpleCloudShadowSharpness;                        // 0x510(0x4)(None)
	uint8                                        Pad_3C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Visible;                                           // 0x518(0x1)(None)
	uint8                                        Pad_3C7[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATrueSkySequenceActor* GetDefaultObj();

	void SetTime(float Value);
	void SetPointLightSource(int32 ID, const struct FLinearColor& LightColour, float Intensity, const struct FVector& Pos, float MinRadius, float MaxRadius);
	void SetPointLight(class APointLight* Source);
	void SetKeyframeInt(int32 KeyframeUid, const class FString& Name, int32 Value);
	void SetKeyframeFloat(int32 KeyframeUid, const class FString& Name, float Value);
	void SetInt(const class FString& Name, int32 Value);
	void SetFloat(const class FString& Name, float Value);
	void GetSunRotation(const struct FRotator& ReturnValue);
	void GetSunColor(const struct FLinearColor& ReturnValue);
	void GetNextModifiableSkyKeyframe(int32 ReturnValue);
	void GetNextModifiableCloudKeyframe(int32 Layer, int32 ReturnValue);
	void GetKeyframeInt(int32 KeyframeUid, const class FString& Name, int32 ReturnValue);
	void GetKeyframeFloat(int32 KeyframeUid, const class FString& Name, float ReturnValue);
	void GetInt(const class FString& Name, int32 ReturnValue);
	void GetFloat(const class FString& Name, float ReturnValue);
	void ForceUpdate();
	void CloudPointTest(int32 QueryID, const struct FVector& Pos, float ReturnValue);
	void CloudLineTest(int32 QueryID, const struct FVector& StartPos, const struct FVector& EndPos, float ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class TrueSkyPlugin.TrueSkySequenceAsset
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<uint8>                                SequenceText;                                      // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UTrueSkySequenceAsset* GetDefaultObj();

};

}


