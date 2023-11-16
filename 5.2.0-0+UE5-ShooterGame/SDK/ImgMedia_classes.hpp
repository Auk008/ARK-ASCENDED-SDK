#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xD0 - 0x88)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(None)
	uint8                                        Pad_24DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(None)
	uint8                                        Pad_24DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProxyOverride;                                     // 0x98(0x10)(None)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(None)
	uint8                                        Pad_24DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(None)
	uint8                                        Pad_24E0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetTokenizedSequencePath(const class FString& Path);
	void SetSequencePath(const class FString& Path);
	void SetMipLevelDistance(float Distance);
	void RemoveTargetObject(class AActor* InActor);
	void RemoveGlobalCamera(class AActor* InActor);
	void GetSequencePath(const class FString& ReturnValue);
	void GetProxies(const TArray<class FString>& OutProxies);
	void AddTargetObject(class AActor* InActor);
	void AddGlobalCamera(class AActor* InActor);
};

}


