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

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
struct UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
struct UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
struct UBinkMediaPlayer_SupportsSeeking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
struct UBinkMediaPlayer_SupportsScrubbing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
struct UBinkMediaPlayer_SupportsRate_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(None)
	bool                                         Unthinned;                                         // 0x4(0x1)(None)
	bool                                         ReturnValue;                                       // 0x5(0x1)(None)
	uint8                                        Pad_1D8[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
struct UBinkMediaPlayer_SetVolume_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
struct UBinkMediaPlayer_SetRate_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_1DA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
struct UBinkMediaPlayer_SetLooping_Params
{
public:
	bool                                         InLooping;                                         // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Seek
struct UBinkMediaPlayer_Seek_Params
{
public:
	struct FTimespan                             InTime;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1EC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
struct UBinkMediaPlayer_Rewind_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Play
struct UBinkMediaPlayer_Play_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Pause
struct UBinkMediaPlayer_Pause_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
struct UBinkMediaPlayer_OpenUrl_Params
{
public:
	class FString                                NewUrl;                                            // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_1F2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
struct UBinkMediaPlayer_IsStopped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
struct UBinkMediaPlayer_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
struct UBinkMediaPlayer_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
struct UBinkMediaPlayer_IsLooping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
struct UBinkMediaPlayer_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
struct UBinkMediaPlayer_GetUrl_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
struct UBinkMediaPlayer_GetTime_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
struct UBinkMediaPlayer_GetRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
struct UBinkMediaPlayer_GetDuration_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.Draw
struct UBinkMediaPlayer_Draw_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(None)
	bool                                         Tonemap;                                           // 0x8(0x1)(None)
	uint8                                        Pad_1FC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Out_nits;                                          // 0xC(0x4)(None)
	float                                        Alpha;                                             // 0x10(0x4)(None)
	bool                                         Srgb_decode;                                       // 0x14(0x1)(None)
	bool                                         Hdr;                                               // 0x15(0x1)(None)
	uint8                                        Pad_1FD[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
struct UBinkMediaPlayer_CanPlay_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
struct UBinkMediaPlayer_CanPause_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
struct UBinkMediaTexture_SetMediaPlayer_Params
{
public:
	class UBinkMediaPlayer*                      InMediaPlayer;                                     // 0x0(0x8)(None)
};

}
}


