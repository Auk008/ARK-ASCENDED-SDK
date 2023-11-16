#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUStreamlineFeature : uint8
{
	DLSSG                          = 0,
	Reflex                         = 1,
	Count                          = 2,
	UStreamlineFeature_MAX         = 3,
};

enum class EUStreamlineFeatureSupport : uint8
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedHardewareSchedulingDisabled = 5,
	NotSupportedByRHI              = 6,
	NotSupportedByPlatformAtBuildTime = 7,
	NotSupportedIncompatibleAPICaptureToolActive = 8,
	UStreamlineFeatureSupport_MAX  = 9,
};

enum class EUStreamlineFeatureRequirementsFlags : uint8
{
	None                           = 0,
	D3D11Supported                 = 1,
	D3D12Supported                 = 2,
	VulkanSupported                = 4,
	VSyncOffRequired               = 8,
	HardwareSchedulingRequired     = 16,
	UStreamlineFeatureRequirementsFlags_MAX = 17,
};

enum class EUStreamlineDLSSGMode : uint8
{
	Off                            = 0,
	On                             = 1,
	Auto                           = 2,
	UStreamlineDLSSGMode_MAX       = 3,
};

enum class EUStreamlineReflexMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledPlusBoost               = 3,
	UStreamlineReflexMode_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct StreamlineBlueprint.StreamlineVersion
struct FStreamlineVersion
{
public:
	int32                                        Major;                                             // 0x0(0x4)(None)
	int32                                        Minor;                                             // 0x4(0x4)(None)
	int32                                        Build;                                             // 0x8(0x4)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct StreamlineBlueprint.StreamlineFeatureRequirements
struct FStreamlineFeatureRequirements
{
public:
	enum class EUStreamlineFeatureSupport        Support;                                           // 0x0(0x1)(None)
	enum class EUStreamlineFeatureRequirementsFlags Requirements;                                      // 0x1(0x1)(None)
	uint8                                        Pad_1FD2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStreamlineVersion                    RequiredOperatingSystemVersion;                    // 0x4(0xC)(None)
	struct FStreamlineVersion                    DetectedOperatingSystemVersion;                    // 0x10(0xC)(None)
	struct FStreamlineVersion                    RequiredDriverVersion;                             // 0x1C(0xC)(None)
	struct FStreamlineVersion                    DetectedDriverVersion;                             // 0x28(0xC)(None)
};

}


