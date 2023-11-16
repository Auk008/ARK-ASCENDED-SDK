#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// Class MediaPlate.MediaPlate
class AMediaPlate : public AActor
{
public:
	class UMediaPlateComponent*                  MediaPlateComponent;                               // 0x4B8(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4C0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AMediaPlate* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MediaPlate.MediaPlateAssetUserData
class UMediaPlateAssetUserData : public UAssetUserData
{
public:
	uint8                                        Pad_254D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaPlateAssetUserData* GetDefaultObj();

};

// 0xC8 (0x180 - 0xB8)
// Class MediaPlate.MediaPlateComponent
class UMediaPlateComponent : public UActorComponent
{
public:
	uint8                                        Pad_2557[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlayOnOpen;                                       // 0xC0(0x1)(None)
	bool                                         bAutoPlay;                                         // 0xC1(0x1)(None)
	bool                                         bEnableAudio;                                      // 0xC2(0x1)(None)
	uint8                                        Pad_2558[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xC4(0x4)(None)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0xC8(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0xD0(0x8)(ZeroConstructor)
	TArray<class UStaticMeshComponent*>          Letterboxes;                                       // 0xD8(0x10)(ZeroConstructor)
	class UMediaPlaylist*                        MediaPlaylist;                                     // 0xE8(0x8)(ZeroConstructor)
	int32                                        PlaylistIndex;                                     // 0xF0(0x4)(None)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0xF4(0x8)(None)
	bool                                         bIsMediaPlatePlaying;                              // 0xFC(0x1)(None)
	uint8                                        Pad_2559[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlayOnlyWhenVisible;                              // 0x104(0x1)(None)
	bool                                         bLoop;                                             // 0x105(0x1)(None)
	enum class EMediaTextureVisibleMipsTiles     VisibleMipsTilesCalculations;                      // 0x106(0x1)(None)
	uint8                                        Pad_255A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MipMapBias;                                        // 0x108(0x4)(None)
	bool                                         bIsAspectRatioAuto;                                // 0x10C(0x1)(None)
	bool                                         bEnableMipMapUpscaling;                            // 0x10D(0x1)(None)
	uint8                                        Pad_255B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MipLevelToUpscale;                                 // 0x110(0x4)(None)
	float                                        LetterboxAspectRatio;                              // 0x114(0x4)(None)
	uint8                                        Pad_255C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MeshRange;                                         // 0x120(0x10)(None)
	TArray<class UMediaTexture*>                 MediaTextures;                                     // 0x130(0x10)(ZeroConstructor)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x140(0x8)(ZeroConstructor)
	uint8                                        Pad_255D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaPlateComponent* GetDefaultObj();

	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
	void SetMeshRange(const struct FVector2D& InMeshRange);
	void SetLoop(bool bInLoop);
	void SetLetterboxAspectRatio(float AspectRatio);
	void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);
	void Seek(const struct FTimespan& Time, bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Play();
	void Pause();
	void Open();
	void OnMediaOpened(const class FString& DeviceUrl);
	void OnMediaEnd();
	void IsMediaPlatePlaying(bool ReturnValue);
	void GetMeshRange(const struct FVector2D& ReturnValue);
	void GetMediaTexture(int32 Index, class UMediaTexture* ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
	void GetLoop(bool ReturnValue);
	void GetLetterboxAspectRatio(float ReturnValue);
	void GetIsAspectRatioAuto(bool ReturnValue);
	void Close();
};

}


