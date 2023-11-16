#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BinkMediaPlayer.BinkFunctionLibrary
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBinkFunctionLibrary* GetDefaultObj();

	void BinkLoadingMovie_GetTime(const struct FTimespan& ReturnValue);
	void BinkLoadingMovie_GetDuration(const struct FTimespan& ReturnValue);
	void Bink_DrawOverlays();
};

// 0xF0 (0x118 - 0x28)
// Class BinkMediaPlayer.BinkMediaPlayer
class UBinkMediaPlayer : public UObject
{
public:
	uint8                                        Pad_202[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(None)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(None)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(None)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(None)
	uint8                                        BitPad_10 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_203[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(None)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(None)
	class FString                                URL;                                               // 0x98(0x10)(None)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(None)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(None)
	uint8                                        Pad_204[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(None)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(None)
	uint8                                        Pad_205[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(None)
	float                                        VolumeScale;                                       // 0xB8(0x4)(None)
	uint8                                        Pad_206[0x5C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBinkMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool ReturnValue);
	void SupportsScrubbing(bool ReturnValue);
	void SupportsRate(float Rate, bool Unthinned, bool ReturnValue);
	void Stop();
	void SetVolume(float Rate);
	void SetRate(float Rate, bool ReturnValue);
	void SetLooping(bool InLooping, bool ReturnValue);
	void Seek(const struct FTimespan& InTime, bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Play(bool ReturnValue);
	void Pause(bool ReturnValue);
	void OpenUrl(const class FString& NewUrl, bool ReturnValue);
	void IsStopped(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsInitialized(bool ReturnValue);
	void GetUrl(const class FString& ReturnValue);
	void GetTime(const struct FTimespan& ReturnValue);
	void GetRate(float ReturnValue);
	void GetDuration(const struct FTimespan& ReturnValue);
	void Draw(class UTexture* Texture, bool Tonemap, int32 Out_nits, float Alpha, bool Srgb_decode, bool Hdr);
	void CloseUrl();
	void CanPlay(bool ReturnValue);
	void CanPause(bool ReturnValue);
};

// 0x38 (0x210 - 0x1D8)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(None)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(None)
	uint8                                        Pad_210[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1E0(0x8)(ZeroConstructor)
	enum class EPixelFormat                      PixelFormat;                                       // 0x1E8(0x1)(None)
	bool                                         Tonemap;                                           // 0x1E9(0x1)(None)
	uint8                                        Pad_211[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutputNits;                                        // 0x1EC(0x4)(None)
	float                                        Alpha;                                             // 0x1F0(0x4)(None)
	bool                                         DecodeSRGB;                                        // 0x1F4(0x1)(None)
	uint8                                        Pad_212[0x1B];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBinkMediaTexture* GetDefaultObj();

	void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
	void Clear();
};

// 0x30 (0x58 - 0x28)
// Class BinkMediaPlayer.BinkMoviePlayerSettings
class UBinkMoviePlayerSettings : public UObject
{
public:
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(None)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(None)
	uint8                                        Pad_213[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(None)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(None)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(None)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(None)
	uint8                                        Pad_214[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBinkMoviePlayerSettings* GetDefaultObj();

};

}


