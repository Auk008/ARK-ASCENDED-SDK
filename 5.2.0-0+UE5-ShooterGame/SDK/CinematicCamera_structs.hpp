#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECameraFocusMethod : uint8
{
	DoNotOverride                  = 0,
	Manual                         = 1,
	Tracking                       = 2,
	Disable                        = 3,
	MAX                            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings
{
public:
	uint8                                        bEnableLookAtTracking : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bDrawDebugLookAtTrackingPosition : 1;              // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_252 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2EB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtTrackingInterpSpeed;                         // 0x4(0x4)(None)
	uint8                                        Pad_2EB9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x20(0x30)(None)
	struct FVector                               RelativeOffset;                                    // 0x50(0x18)(None)
	uint8                                        bAllowRoll : 1;                                    // Mask: 0x1, PropSize: 0x10x68(0x1)(None)
	uint8                                        Pad_2EBA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings
{
public:
	float                                        SensorWidth;                                       // 0x0(0x4)(None)
	float                                        SensorHeight;                                      // 0x4(0x4)(None)
	float                                        SensorAspectRatio;                                 // 0x8(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(None)
	uint8                                        Pad_2EBB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings
{
public:
	float                                        MinFocalLength;                                    // 0x0(0x4)(None)
	float                                        MaxFocalLength;                                    // 0x4(0x4)(None)
	float                                        MinFStop;                                          // 0x8(0x4)(None)
	float                                        MaxFStop;                                          // 0xC(0x4)(None)
	float                                        MinimumFocusDistance;                              // 0x10(0x4)(None)
	float                                        SqueezeFactor;                                     // 0x14(0x4)(None)
	int32                                        DiaphragmBladeCount;                               // 0x18(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x1C)(None)
	uint8                                        Pad_2EBC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CinematicCamera.PlateCropSettings
struct FPlateCropSettings
{
public:
	float                                        AspectRatio;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CinematicCamera.NamedPlateCropPreset
struct FNamedPlateCropPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	struct FPlateCropSettings                    CropSettings;                                      // 0x10(0x4)(None)
	uint8                                        Pad_2EBD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings
{
public:
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x0(0x30)(None)
	struct FVector                               RelativeOffset;                                    // 0x30(0x18)(None)
	uint8                                        bDrawDebugTrackingFocusPoint : 1;                  // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        Pad_2EBE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings
{
public:
	enum class ECameraFocusMethod                FocusMethod;                                       // 0x0(0x1)(None)
	uint8                                        Pad_2EC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualFocusDistance;                               // 0x4(0x4)(None)
	struct FCameraTrackingFocusSettings          TrackingFocusSettings;                             // 0x8(0x50)(None)
	uint8                                        bSmoothFocusChanges : 1;                           // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        BitPad_253 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2EC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FocusSmoothingInterpSpeed;                         // 0x5C(0x4)(None)
	float                                        FocusOffset;                                       // 0x60(0x4)(None)
	uint8                                        Pad_2EC2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


