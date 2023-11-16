#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Soundscape.SoundscapeBPFunctionLibrary
class USoundscapeBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USoundscapeBPFunctionLibrary* GetDefaultObj();

	void SpawnSoundscapePalette(class UObject* WorldContextObject, class USoundscapePalette* SoundscapePaletteIn, class UActiveSoundscapePalette* SoundscapePaletteAgentsOut, bool ReturnValue);
	void SpawnSoundscapeColor(class UObject* WorldContextObject, class USoundscapeColor* SoundscapeColorIn, class UActiveSoundscapeColor* ActiveSoundscapeColor, bool ReturnValue);
};

// 0xD8 (0x100 - 0x28)
// Class Soundscape.SoundscapeColor
class USoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(None)
	float                                        VolumeBase;                                        // 0x30(0x4)(None)
	float                                        PitchBase;                                         // 0x34(0x4)(None)
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(None)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(None)
	uint8                                        Pad_63E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(None)

	static class UClass* StaticClass();
	static class USoundscapeColor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapeColorVoice
class UActiveSoundscapeColorVoice : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(None)
	struct FTimerHandle                          TimerHandle;                                       // 0x30(0x8)(None)
	bool                                         bFree;                                             // 0x38(0x1)(None)
	uint8                                        Pad_63F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActiveSoundscapeColorVoice* GetDefaultObj();

	void StopLimitedDurationVoice(float FadeOutTime);
};

// 0x168 (0x190 - 0x28)
// Class Soundscape.ActiveSoundscapeColor
class UActiveSoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(ZeroConstructor)
	uint8                                        Pad_640[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundscapeColorModulationSettings    ModulationBehavior;                                // 0x38(0x30)(None)
	struct FSoundscapeColorPlaybackSettings      PlaybackBehavior;                                  // 0x68(0xC)(None)
	uint8                                        Pad_642[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundscapeColorSpawnSettings         SpawnBehavior;                                     // 0x78(0x88)(None)
	uint8                                        Pad_643[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActiveSoundscapeColorVoice*>   SoundscapeColorVoicePool;                          // 0x178(0x10)(None)
	uint8                                        Pad_644[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActiveSoundscapeColor* GetDefaultObj();

	void UpdateSoundscapeColor();
	void Stop(float ColorFadeOutTime);
	void Play(float ColorVolume, float ColorPitch, float ColorFadeInTime);
	void IsPlaying(bool ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class Soundscape.SoundscapeColorPointComponent
class USoundscapeColorPointComponent : public UActorComponent
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0xB8(0x8)(None)

	static class UClass* StaticClass();
	static class USoundscapeColorPointComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Soundscape.SoundscapePalette
class USoundscapePalette : public UObject
{
public:
	struct FGameplayTagQuery                     SoundscapePalettePlaybackConditions;               // 0x28(0x48)(None)
	TArray<struct FSoundscapePaletteColor>       Colors;                                            // 0x70(0x10)(None)

	static class UClass* StaticClass();
	static class USoundscapePalette* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapePalette
class UActiveSoundscapePalette : public UObject
{
public:
	class UWorld*                                World;                                             // 0x28(0x8)(ZeroConstructor)
	TArray<class UActiveSoundscapeColor*>        ActiveSoundscapeColors;                            // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UActiveSoundscapePalette* GetDefaultObj();

	void Stop();
	void Play();
};

// 0x70 (0xA8 - 0x38)
// Class Soundscape.SoundscapeSettings
class USoundscapeSettings : public UDeveloperSettings
{
public:
	TSet<struct FSoftObjectPath>                 SoundscapePaletteCollection;                       // 0x38(0x50)(None)
	bool                                         bDebugDraw;                                        // 0x88(0x1)(None)
	uint8                                        Pad_647[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LOD1ColorPointHashWidth;                           // 0x8C(0x4)(None)
	float                                        LOD1ColorPointHashDistance;                        // 0x90(0x4)(None)
	float                                        LOD2ColorPointHashWidth;                           // 0x94(0x4)(None)
	float                                        LOD2ColorPointHashDistance;                        // 0x98(0x4)(None)
	float                                        LOD3ColorPointHashWidth;                           // 0x9C(0x4)(None)
	float                                        ActiveColorPointHashWidth;                         // 0xA0(0x4)(None)
	float                                        ActiveColorPointHashUpdateTimeSeconds;             // 0xA4(0x4)(None)

	static class UClass* StaticClass();
	static class USoundscapeSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Soundscape.SoundscapeColorPointHashCellDensity
class USoundscapeColorPointHashCellDensity : public UObject
{
public:
	TMap<uint64, int32>                          ColorPointHashCellDensity;                         // 0x28(0x50)(None)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashCellDensity* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMap
class USoundscapeColorPointHashMap : public UObject
{
public:
	TMap<struct FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                 // 0x28(0x50)(None)
	float                                        HashCellSize;                                      // 0x78(0x4)(None)
	int32                                        GridWidth;                                         // 0x7C(0x4)(None)
	int64                                        NumCells;                                          // 0x80(0x8)(None)
	float                                        HashCellFactor;                                    // 0x88(0x4)(None)
	uint8                                        Pad_65A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GridCenter;                                        // 0x90(0x18)(None)
	struct FVector                               GridOriginOffset;                                  // 0xA8(0x18)(None)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMap* GetDefaultObj();

	void SetGridCenterpoint(const struct FVector& Location);
	void NumColorPointsInCell(const struct FVector& Location, const struct FGameplayTag& ColorPoint, int32 ReturnValue);
	void InitializeHash(float HashCellSizeIn, const struct FVector& GridCenterIn);
	void ClearHash();
	void CalculateHashIndex(const struct FVector& Location, uint64 ReturnValue);
	void AddColorPointToHash(const struct FVector& Location, const struct FGameplayTag& ColorPoint, bool ReturnValue);
	void AddColorPointArrayToHash(const TArray<struct FVector>& Locations, const struct FGameplayTag& ColorPoint);
};

// 0x30 (0x58 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMapCollection
class USoundscapeColorPointHashMapCollection : public UObject
{
public:
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x28(0x8)(ZeroConstructor)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x30(0x8)(ZeroConstructor)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x38(0x8)(None)
	float                                        LOD1ColorPointHashWidth;                           // 0x40(0x4)(None)
	float                                        LOD1ColorPointHashDistance;                        // 0x44(0x4)(None)
	float                                        LOD2ColorPointHashWidth;                           // 0x48(0x4)(None)
	float                                        LOD2ColorPointHashDistance;                        // 0x4C(0x4)(None)
	float                                        LOD3ColorPointHashWidth;                           // 0x50(0x4)(None)
	uint8                                        Pad_660[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMapCollection* GetDefaultObj();

};

// 0x1E8 (0x218 - 0x30)
// Class Soundscape.SoundscapeSubsystem
class USoundscapeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_66B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class USoundscapePalette*>              LoadedPaletteCollectionSet;                        // 0x38(0x50)(ZeroConstructor)
	TMap<class FName, struct FSoundscapePaletteCollection> UnloadedPaletteCollections;                        // 0x88(0x50)(None)
	uint8                                        Pad_66C[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                    // 0xF8(0x50)(ZeroConstructor)
	uint8                                        Pad_66D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections;                      // 0x150(0x10)(ZeroConstructor)
	uint8                                        Pad_66E[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x1C0(0x8)(ZeroConstructor)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x1C8(0x8)(ZeroConstructor)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x1D0(0x8)(ZeroConstructor)
	class USoundscapeColorPointHashMap*          ActiveColorPointHashMap;                           // 0x1D8(0x8)(None)
	uint8                                        Pad_66F[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundscapeSubsystem* GetDefaultObj();

	void SetState(const struct FGameplayTag& SoundscapeState);
	void RestartSoundscape();
	void RemovePaletteCollection(class FName PaletteCollectionName, bool ReturnValue);
	void RemoveColorPointCollection(class FName ColorPointCollectionName, bool ReturnValue);
	void ClearState(const struct FGameplayTag& SoundscapeState);
	void CheckColorPointDensity(const struct FVector& Location, const struct FGameplayTag& ColorPoint, int32 ReturnValue);
	void AddPaletteCollection(class FName PaletteCollectionName, const struct FSoundscapePaletteCollection& PaletteCollection, bool ReturnValue);
	void AddColorPointCollection(class FName ColorPointCollectionName, const struct FSoundscapeColorPointCollection& ColorPointCollection);
};

}


