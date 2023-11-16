#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELiveLinkTimecodeProviderEvaluationType : int32
{
	Lerp                           = 0,
	Nearest                        = 1,
	Latest                         = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3,
};

enum class ELiveLinkAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	XNeg                           = 3,
	YNeg                           = 4,
	ZNeg                           = 5,
	ELiveLinkAxis_MAX              = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference
{
public:
	uint8                                        Pad_D51[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LiveLink.ProviderPollResult
struct FProviderPollResult
{
public:
	uint8                                        Pad_D52[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                MachineName;                                       // 0x20(0x10)(None)
	double                                       MachineTimeOffset;                                 // 0x30(0x8)(None)
	bool                                         bIsValidProvider;                                  // 0x38(0x1)(None)
	uint8                                        Pad_D53[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
struct FLiveLinkRoleProjectSetting
{
public:
	class UClass*                                Role;                                              // 0x0(0x8)(ZeroConstructor)
	class UClass*                                SettingClass;                                      // 0x8(0x8)(ZeroConstructor)
	class UClass*                                FrameInterpolationProcessor;                       // 0x10(0x8)(ZeroConstructor)
	TArray<class UClass*>                        FramePreProcessors;                                // 0x18(0x10)(None)
};

}


