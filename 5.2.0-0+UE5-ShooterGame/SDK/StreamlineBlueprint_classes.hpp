#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibrary
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibrary* GetDefaultObj();

	void QueryStreamlineFeatureSupport(enum class EUStreamlineFeature Feature, enum class EUStreamlineFeatureSupport ReturnValue);
	void IsStreamlineFeatureSupported(enum class EUStreamlineFeature Feature, bool ReturnValue);
	void GetStreamlineFeatureInformation(enum class EUStreamlineFeature Feature, const struct FStreamlineFeatureRequirements& ReturnValue);
	void BreakStreamlineFeatureRequirements(enum class EUStreamlineFeatureRequirementsFlags Requirements, bool D3D11Supported, bool D3D12Supported, bool VulkanSupported, bool VSyncOffRequired, bool HardwareSchedulingRequired);
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryDLSSG
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryDLSSG* GetDefaultObj();

	void SetDLSSGMode(enum class EUStreamlineDLSSGMode DLSSGMode);
	void QueryDLSSGSupport(enum class EUStreamlineFeatureSupport ReturnValue);
	void IsDLSSGSupported(bool ReturnValue);
	void IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode DLSSGMode, bool ReturnValue);
	void GetSupportedDLSSGModes(const TArray<enum class EUStreamlineDLSSGMode>& ReturnValue);
	void GetDLSSGMode(enum class EUStreamlineDLSSGMode ReturnValue);
	void GetDLSSGFrameTiming(float FrameRateInHertz, int32 FramesPresented);
	void GetDefaultDLSSGMode(enum class EUStreamlineDLSSGMode ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryReflex
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryReflex* GetDefaultObj();

	void SetReflexMode(enum class EUStreamlineReflexMode Mode);
	void QueryReflexSupport(enum class EUStreamlineFeatureSupport ReturnValue);
	void IsReflexSupported(bool ReturnValue);
	void GetRenderLatencyInMs(float ReturnValue);
	void GetReflexMode(enum class EUStreamlineReflexMode ReturnValue);
	void GetGameToRenderLatencyInMs(float ReturnValue);
	void GetGameLatencyInMs(float ReturnValue);
	void GetDefaultReflexMode(enum class EUStreamlineReflexMode ReturnValue);
};

}


