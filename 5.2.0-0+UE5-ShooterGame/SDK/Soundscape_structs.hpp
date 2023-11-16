#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESoundscapeColorAltitudeClampMode : uint8
{
	Relative                       = 0,
	Absolute                       = 1,
	ESoundscapeColorAltitudeClampMode_MAX = 2,
};

enum class ESoundscapeLOD : uint8
{
	LOD1                           = 0,
	LOD2                           = 1,
	LOD3                           = 2,
	ESoundscapeLOD_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x88 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorSpawnSettings
struct FSoundscapeColorSpawnSettings
{
public:
	bool                                         bDelayFirstSpawn;                                  // 0x0(0x1)(None)
	uint8                                        Pad_671[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFirstSpawnDelay;                                // 0x4(0x4)(None)
	float                                        MaxFirstSpawnDelay;                                // 0x8(0x4)(None)
	bool                                         bContinuouslyRespawn;                              // 0xC(0x1)(None)
	uint8                                        Pad_672[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSpawnDelay;                                     // 0x10(0x4)(None)
	float                                        MaxSpawnDelay;                                     // 0x14(0x4)(None)
	int32                                        MaxNumberOfSpawnedElements;                        // 0x18(0x4)(None)
	float                                        MinSpawnDistance;                                  // 0x1C(0x4)(None)
	float                                        MaxSpawnDistance;                                  // 0x20(0x4)(None)
	bool                                         bCullByMaxSpawnDistance;                           // 0x24(0x1)(None)
	uint8                                        Pad_673[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSpawnAngle;                                     // 0x28(0x4)(None)
	float                                        MaxSpawnAngle;                                     // 0x2C(0x4)(None)
	bool                                         bClampHeight;                                      // 0x30(0x1)(None)
	enum class ESoundscapeColorAltitudeClampMode ClampMode;                                         // 0x31(0x1)(None)
	uint8                                        Pad_674[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSpawnHeightClamp;                               // 0x34(0x4)(None)
	float                                        MaxSpawnHeightClamp;                               // 0x38(0x4)(None)
	bool                                         bRotateSoundSource;                                // 0x3C(0x1)(None)
	uint8                                        Pad_675[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAzimuthalRotationAngle;                         // 0x40(0x4)(None)
	float                                        MaxAzimuthalRotationAngle;                         // 0x44(0x4)(None)
	float                                        MinAltitudinalRotationAngle;                       // 0x48(0x4)(None)
	float                                        MaxAltitudinalRotationAngle;                       // 0x4C(0x4)(None)
	bool                                         bPositionByTrace;                                  // 0x50(0x1)(None)
	uint8                                        Pad_676[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TraceVector;                                       // 0x58(0x18)(None)
	float                                        TraceDistance;                                     // 0x70(0x4)(None)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x74(0x1)(None)
	bool                                         bFilterByColorPointDensity;                        // 0x75(0x1)(None)
	uint8                                        Pad_677[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ColorPoint;                                        // 0x78(0x8)(None)
	int32                                        MinColorPointNumber;                               // 0x80(0x4)(None)
	bool                                         bIgnoreZAxisWhenCullingByMaxDistance;              // 0x84(0x1)(None)
	uint8                                        Pad_678[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorModulationSettings
struct FSoundscapeColorModulationSettings
{
public:
	bool                                         bRandomizeVolume;                                  // 0x0(0x1)(None)
	uint8                                        Pad_67A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeMin;                                         // 0x4(0x4)(None)
	float                                        VolumeMax;                                         // 0x8(0x4)(None)
	bool                                         bRandomizePitch;                                   // 0xC(0x1)(None)
	uint8                                        Pad_67B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PitchMin;                                          // 0x10(0x4)(None)
	float                                        PitchMax;                                          // 0x14(0x4)(None)
	bool                                         bFadeVolume;                                       // 0x18(0x1)(None)
	uint8                                        Pad_67C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFadeInTime;                                     // 0x1C(0x4)(None)
	float                                        MaxFadeInTime;                                     // 0x20(0x4)(None)
	float                                        MinFadeOutTime;                                    // 0x24(0x4)(None)
	float                                        MaxFadeOutTime;                                    // 0x28(0x4)(None)
	bool                                         bOnlyFadeInOnRetrigger;                            // 0x2C(0x1)(None)
	uint8                                        Pad_67D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPlaybackSettings
struct FSoundscapeColorPlaybackSettings
{
public:
	bool                                         bRandomizeStartingSeekTime;                        // 0x0(0x1)(None)
	bool                                         bLimitPlaybackDuration;                            // 0x1(0x1)(None)
	uint8                                        Pad_67E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinPlaybackDuration;                               // 0x4(0x4)(None)
	float                                        MaxPlaybackDuration;                               // 0x8(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorVoiceParams
struct FSoundscapeColorVoiceParams
{
public:
	uint8                                        Pad_680[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPoint
struct FSoundscapeColorPoint
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointVectorArray
struct FSoundscapeColorPointVectorArray
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(None)
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteColor
struct FSoundscapePaletteColor
{
public:
	class USoundscapeColor*                      SoundscapeColor;                                   // 0x0(0x8)(None)
	float                                        ColorVolume;                                       // 0x8(0x4)(None)
	float                                        ColorPitch;                                        // 0xC(0x4)(None)
	float                                        ColorFadeIn;                                       // 0x10(0x4)(None)
	float                                        ColorFadeOut;                                      // 0x14(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteCollection
struct FSoundscapePaletteCollection
{
public:
	TSet<struct FSoftObjectPath>                 SoundscapePaletteCollection;                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteCollectionLoaded
struct FSoundscapePaletteCollectionLoaded
{
public:
	TSet<class USoundscapePalette*>              SoundscapePaletteCollection;                       // 0x0(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointCollection
struct FSoundscapeColorPointCollection
{
public:
	TArray<struct FSoundscapeColorPointVectorArray> ColorPointCollection;                              // 0x0(0x10)(None)
};

}


