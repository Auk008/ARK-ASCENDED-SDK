#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(ZeroConstructor)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(None)
	bool                                         bLoop;                                             // 0x44(0x1)(None)
	uint8                                        Pad_2546[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(ZeroConstructor)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneObjectBindingID            MediaSourceProxy;                                  // 0x10(0x18)(None)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(None)
	uint8                                        Pad_2547[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(ZeroConstructor)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(None)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(None)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x44(0x4)(None)
	bool                                         bLooping;                                          // 0x48(0x1)(None)
	uint8                                        Pad_2548[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          StartFrameOffset;                                  // 0x4C(0x4)(None)
	struct FMovieSceneFloatChannel               ProxyTextureBlend;                                 // 0x50(0x110)(None)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams         Params;                                            // 0x20(0x160)(ZeroConstructor)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(ZeroConstructor)
};

}


