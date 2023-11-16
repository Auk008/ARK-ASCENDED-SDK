#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// Class MediaAssets.MediaSource
class UMediaSource : public UObject
{
public:
	uint8                                        Pad_247E[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaSource* GetDefaultObj();

	void Validate(bool ReturnValue);
	void SetMediaOptionString(class FName Key, const class FString& Value);
	void SetMediaOptionInt64(class FName Key, int64 Value);
	void SetMediaOptionFloat(class FName Key, float Value);
	void SetMediaOptionBool(class FName Key, bool Value);
	void GetUrl(const class FString& ReturnValue);
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x80(0x8)(None)

	static class UClass* StaticClass();
	static class UBaseMediaSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaSourceRendererInterface
class IMediaSourceRendererInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMediaSourceRendererInterface* GetDefaultObj();

};

// 0xE8 (0x2C0 - 0x1D8)
// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(None)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(None)
	bool                                         AutoClear;                                         // 0x1DA(0x1)(None)
	uint8                                        Pad_24A1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ClearColor;                                        // 0x1DC(0x10)(None)
	bool                                         EnableGenMips;                                     // 0x1EC(0x1)(None)
	uint8                                        NumMips;                                           // 0x1ED(0x1)(None)
	bool                                         NewStyleOutput;                                    // 0x1EE(0x1)(None)
	enum class EMediaTextureOutputFormat         OutputFormat;                                      // 0x1EF(0x1)(None)
	float                                        CurrentAspectRatio;                                // 0x1F0(0x4)(None)
	enum class EMediaTextureOrientation          CurrentOrientation;                                // 0x1F4(0x1)(None)
	uint8                                        Pad_24A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          MediaPlayer;                                       // 0x1F8(0x8)(ZeroConstructor)
	uint8                                        Pad_24A3[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaTexture* GetDefaultObj();

	void UpdateResource();
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void GetWidth(int32 ReturnValue);
	void GetTextureNumMips(int32 ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
	void GetHeight(int32 ReturnValue);
	void GetAspectRatio(float ReturnValue);
};

// 0x28 (0xB0 - 0x88)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x88(0x10)(None)
	bool                                         PrecacheFile;                                      // 0x98(0x1)(None)
	uint8                                        Pad_24C7[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFileMediaSource* GetDefaultObj();

	void SetFilePath(const class FString& Path);
};

// 0x10 (0xC8 - 0xB8)
// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                         MediaTexture;                                      // 0xB8(0x8)(ZeroConstructor)
	class UMediaPlayer*                          MediaPlayer;                                       // 0xC0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMediaComponent* GetDefaultObj();

	void GetMediaTexture(class UMediaTexture* ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaTimeStampInfo
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                             Time;                                              // 0x28(0x8)(None)
	int64                                        SequenceIndex;                                     // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UMediaTimeStampInfo* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x38(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x48(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMediaOpenFailed;                                 // 0x58(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x68(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x78(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0x88(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0x98(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0xA8(0x10)(ZeroConstructor)
	struct FTimespan                             CacheAhead;                                        // 0xB8(0x8)(None)
	struct FTimespan                             CacheBehind;                                       // 0xC0(0x8)(None)
	struct FTimespan                             CacheBehindGame;                                   // 0xC8(0x8)(None)
	bool                                         NativeAudioOut;                                    // 0xD0(0x1)(None)
	bool                                         PlayOnOpen;                                        // 0xD1(0x1)(None)
	uint8                                        Pad_2502[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xD4(0x1)(None)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xD4(0x1)(None)
	uint8                                        BitPad_1CE : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2503[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlaylist*                        Playlist;                                          // 0xD8(0x8)(None)
	int32                                        PlaylistIndex;                                     // 0xE0(0x4)(None)
	uint8                                        Pad_2504[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             TimeDelay;                                         // 0xE8(0x8)(None)
	float                                        HorizontalFieldOfView;                             // 0xF0(0x4)(None)
	float                                        VerticalFieldOfView;                               // 0xF4(0x4)(None)
	struct FRotator                              ViewRotation;                                      // 0xF8(0x18)(None)
	uint8                                        Pad_2505[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 PlayerGuid;                                        // 0x138(0x10)(None)
	uint8                                        Pad_2506[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool ReturnValue);
	void SupportsScrubbing(bool ReturnValue);
	void SupportsRate(float Rate, bool Unthinned, bool ReturnValue);
	void SetViewRotation(const struct FRotator& Rotation, bool Absolute, bool ReturnValue);
	void SetViewField(float Horizontal, float Vertical, bool Absolute, bool ReturnValue);
	void SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate, bool ReturnValue);
	void SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex, bool ReturnValue);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	void SetRate(float Rate, bool ReturnValue);
	void SetNativeVolume(float Volume, bool ReturnValue);
	void SetMediaOptions(class UMediaSource* Options);
	void SetLooping(bool Looping, bool ReturnValue);
	void SetDesiredPlayerName(class FName PlayerName);
	void SetBlockOnTime(const struct FTimespan& Time);
	void SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, bool ReturnValue);
	void Seek(const struct FTimespan& Time, bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Reopen(bool ReturnValue);
	void Previous(bool ReturnValue);
	void PlayAndSeek();
	void Play(bool ReturnValue);
	void Pause(bool ReturnValue);
	void OpenUrl(const class FString& URL, bool ReturnValue);
	void OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool ReturnValue);
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool bSuccess);
	void OpenSource(class UMediaSource* MediaSource, bool ReturnValue);
	void OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index, bool ReturnValue);
	void OpenPlaylist(class UMediaPlaylist* InPlaylist, bool ReturnValue);
	void OpenFile(const class FString& FilePath, bool ReturnValue);
	void Next(bool ReturnValue);
	void IsReady(bool ReturnValue);
	void IsPreparing(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsConnecting(bool ReturnValue);
	void IsClosed(bool ReturnValue);
	void IsBuffering(bool ReturnValue);
	void HasError(bool ReturnValue);
	void GetViewRotation(const struct FRotator& ReturnValue);
	void GetVideoTrackType(int32 TrackIndex, int32 FormatIndex, const class FString& ReturnValue);
	void GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex, const struct FFloatRange& ReturnValue);
	void GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float ReturnValue);
	void GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex, const struct FIntPoint& ReturnValue);
	void GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex, float ReturnValue);
	void GetVerticalFieldOfView(float ReturnValue);
	void GetUrl(const class FString& ReturnValue);
	void GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, const class FString& ReturnValue);
	void GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 ReturnValue);
	void GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, class FText ReturnValue);
	void GetTimeStamp(class UMediaTimeStampInfo* ReturnValue);
	void GetTimeDelay(const struct FTimespan& ReturnValue);
	void GetTime(const struct FTimespan& ReturnValue);
	void GetSupportedRates(const TArray<struct FFloatRange>& OutRates, bool Unthinned);
	void GetSelectedTrack(enum class EMediaPlayerTrack TrackType, int32 ReturnValue);
	void GetRate(float ReturnValue);
	void GetPlaylistIndex(int32 ReturnValue);
	void GetPlaylist(class UMediaPlaylist* ReturnValue);
	void GetPlayerName(class FName ReturnValue);
	void GetNumTracks(enum class EMediaPlayerTrack TrackType, int32 ReturnValue);
	void GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 ReturnValue);
	void GetMediaName(class FText ReturnValue);
	void GetHorizontalFieldOfView(float ReturnValue);
	void GetDuration(const struct FTimespan& ReturnValue);
	void GetDesiredPlayerName(class FName ReturnValue);
	void GetAudioTrackType(int32 TrackIndex, int32 FormatIndex, const class FString& ReturnValue);
	void GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex, int32 ReturnValue);
	void GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex, int32 ReturnValue);
	void Close();
	void CanPlayUrl(const class FString& URL, bool ReturnValue);
	void CanPlaySource(class UMediaSource* MediaSource, bool ReturnValue);
	void CanPause(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaPlayerProxyInterface
class IMediaPlayerProxyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMediaPlayerProxyInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UMediaPlaylist* GetDefaultObj();

	void Replace(int32 Index, class UMediaSource* Replacement, bool ReturnValue);
	void RemoveAt(int32 Index, bool ReturnValue);
	void Remove(class UMediaSource* MediaSource, bool ReturnValue);
	void Num(int32 ReturnValue);
	void Insert(class UMediaSource* MediaSource, int32 Index);
	void GetRandom(int32 OutIndex, class UMediaSource* ReturnValue);
	void GetPrevious(int32 InOutIndex, class UMediaSource* ReturnValue);
	void GetNext(int32 InOutIndex, class UMediaSource* ReturnValue);
	void Get(int32 Index, class UMediaSource* ReturnValue);
	void AddUrl(const class FString& URL, bool ReturnValue);
	void AddFile(const class FString& FilePath, bool ReturnValue);
	void Add(class UMediaSource* MediaSource, bool ReturnValue);
};

// 0xE0 (0x8A0 - 0x7C0)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x7C0(0x4)(None)
	bool                                         DynamicRateAdjustment;                             // 0x7C4(0x1)(None)
	uint8                                        Pad_2518[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RateAdjustmentFactor;                              // 0x7C8(0x4)(None)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x7CC(0x10)(None)
	uint8                                        Pad_2519[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          MediaPlayer;                                       // 0x7E0(0x8)(ZeroConstructor)
	uint8                                        Pad_251A[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaSoundComponent* GetDefaultObj();

	void SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	void GetSpectralData(const TArray<struct FMediaSoundComponentSpectralData>& ReturnValue);
	void GetNormalizedSpectralData(const TArray<struct FMediaSoundComponentSpectralData>& ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
	void GetEnvelopeValue(float ReturnValue);
	void BP_GetAttenuationSettingsToApply(const struct FSoundAttenuationSettings& OutAttenuationSettings, bool ReturnValue);
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x80(0x8)(None)

	static class UClass* StaticClass();
	static class UPlatformMediaSource* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x88(0x10)(None)

	static class UClass* StaticClass();
	static class UStreamMediaSource* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x88(0x1)(None)
	uint8                                        Pad_251B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameDelay;                                        // 0x8C(0x4)(None)
	double                                       TimeDelay;                                         // 0x90(0x8)(None)
	bool                                         bAutoDetectInput;                                  // 0x98(0x1)(None)
	uint8                                        Pad_251C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTimeSynchronizableMediaSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaBlueprintFunctionLibrary
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMediaBlueprintFunctionLibrary* GetDefaultObj();

	void EnumerateWebcamCaptureDevices(const TArray<struct FMediaCaptureDevice>& OutDevices, int32 Filter);
	void EnumerateVideoCaptureDevices(const TArray<struct FMediaCaptureDevice>& OutDevices, int32 Filter);
	void EnumerateAudioCaptureDevices(const TArray<struct FMediaCaptureDevice>& OutDevices, int32 Filter);
};

}


