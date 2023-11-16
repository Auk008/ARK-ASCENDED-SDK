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

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
struct USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundscapePalette*                    SoundscapePaletteIn;                               // 0x8(0x8)(ZeroConstructor)
	class UActiveSoundscapePalette*              SoundscapePaletteAgentsOut;                        // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_630[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
struct USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class USoundscapeColor*                      SoundscapeColorIn;                                 // 0x8(0x8)(ZeroConstructor)
	class UActiveSoundscapeColor*                ActiveSoundscapeColor;                             // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_63D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
struct UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function Soundscape.ActiveSoundscapeColor.Stop
struct UActiveSoundscapeColor_Stop_Params
{
public:
	float                                        ColorFadeOutTime;                                  // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function Soundscape.ActiveSoundscapeColor.Play
struct UActiveSoundscapeColor_Play_Params
{
public:
	float                                        ColorVolume;                                       // 0x0(0x4)(None)
	float                                        ColorPitch;                                        // 0x4(0x4)(None)
	float                                        ColorFadeInTime;                                   // 0x8(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Soundscape.ActiveSoundscapeColor.IsPlaying
struct UActiveSoundscapeColor_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
struct USoundscapeColorPointHashMap_SetGridCenterpoint_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
struct USoundscapeColorPointHashMap_NumColorPointsInCell_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FGameplayTag                          ColorPoint;                                        // 0x18(0x8)(None)
	int32                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_64C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
struct USoundscapeColorPointHashMap_InitializeHash_Params
{
public:
	float                                        HashCellSizeIn;                                    // 0x0(0x4)(None)
	uint8                                        Pad_64F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GridCenterIn;                                      // 0x8(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
struct USoundscapeColorPointHashMap_CalculateHashIndex_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	uint64                                       ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
struct USoundscapeColorPointHashMap_AddColorPointToHash_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FGameplayTag                          ColorPoint;                                        // 0x18(0x8)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_655[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
struct USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(None)
	struct FGameplayTag                          ColorPoint;                                        // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function Soundscape.SoundscapeSubsystem.SetState
struct USoundscapeSubsystem_SetState_Params
{
public:
	struct FGameplayTag                          SoundscapeState;                                   // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
struct USoundscapeSubsystem_RemovePaletteCollection_Params
{
public:
	class FName                                  PaletteCollectionName;                             // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_664[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
struct USoundscapeSubsystem_RemoveColorPointCollection_Params
{
public:
	class FName                                  ColorPointCollectionName;                          // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_665[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Soundscape.SoundscapeSubsystem.ClearState
struct USoundscapeSubsystem_ClearState_Params
{
public:
	struct FGameplayTag                          SoundscapeState;                                   // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
struct USoundscapeSubsystem_CheckColorPointDensity_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FGameplayTag                          ColorPoint;                                        // 0x18(0x8)(None)
	int32                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_666[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
struct USoundscapeSubsystem_AddPaletteCollection_Params
{
public:
	class FName                                  PaletteCollectionName;                             // 0x0(0x8)(None)
	struct FSoundscapePaletteCollection          PaletteCollection;                                 // 0x8(0x50)(None)
	bool                                         ReturnValue;                                       // 0x58(0x1)(None)
	uint8                                        Pad_668[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
struct USoundscapeSubsystem_AddColorPointCollection_Params
{
public:
	class FName                                  ColorPointCollectionName;                          // 0x0(0x8)(None)
	struct FSoundscapeColorPointCollection       ColorPointCollection;                              // 0x8(0x10)(None)
};

}
}


