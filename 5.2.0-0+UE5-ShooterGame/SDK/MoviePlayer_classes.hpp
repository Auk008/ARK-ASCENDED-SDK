#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class MoviePlayer.MoviePlayerSettings
class UMoviePlayerSettings : public UObject
{
public:
	bool                                         bWaitForMoviesToComplete;                          // 0x28(0x1)(None)
	bool                                         bMoviesAreSkippable;                               // 0x29(0x1)(None)
	uint8                                        Pad_2F4C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        StartupMovies;                                     // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UMoviePlayerSettings* GetDefaultObj();

};

}


