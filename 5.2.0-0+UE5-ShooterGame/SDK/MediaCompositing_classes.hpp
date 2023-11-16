#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xF0(0x8)(ZeroConstructor)
	bool                                         bLoop;                                             // 0xF8(0x1)(None)
	uint8                                        Pad_253C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertySection* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_253E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertyTrack* GetDefaultObj();

};

// 0x60 (0x150 - 0xF0)
// Class MediaCompositing.MovieSceneMediaSection
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xF0(0x8)(ZeroConstructor)
	int32                                        MediaSourceProxyIndex;                             // 0xF8(0x4)(None)
	bool                                         bLooping;                                          // 0xFC(0x1)(None)
	uint8                                        Pad_253F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          StartFrameOffset;                                  // 0x100(0x4)(None)
	uint8                                        Pad_2540[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaTexture*                         MediaTexture;                                      // 0x108(0x8)(ZeroConstructor)
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x110(0x8)(ZeroConstructor)
	bool                                         bUseExternalMediaPlayer;                           // 0x118(0x1)(None)
	uint8                                        Pad_2541[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          ExternalMediaPlayer;                               // 0x120(0x8)(ZeroConstructor)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0x128(0x8)(None)
	int32                                        TextureIndex;                                      // 0x130(0x4)(None)
	bool                                         bHasMediaPlayerProxy;                              // 0x134(0x1)(None)
	uint8                                        Pad_2542[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneObjectBindingID            MediaSourceProxyBindingID;                         // 0x138(0x18)(None)

	static class UClass* StaticClass();
	static class UMovieSceneMediaSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MediaCompositing.MovieSceneMediaTrack
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_2544[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            MediaSections;                                     // 0xA0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneMediaTrack* GetDefaultObj();

};

}


