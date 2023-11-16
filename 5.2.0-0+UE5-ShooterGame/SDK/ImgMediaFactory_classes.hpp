#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class ImgMediaFactory.ImgMediaSettings
class UImgMediaSettings : public UObject
{
public:
	struct FFrameRate                            DefaultFrameRate;                                  // 0x28(0x8)(None)
	bool                                         BandwidthThrottlingEnabled;                        // 0x30(0x1)(None)
	uint8                                        Pad_116F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CacheBehindPercentage;                             // 0x34(0x4)(None)
	float                                        CacheSizeGB;                                       // 0x38(0x4)(None)
	int32                                        CacheThreads;                                      // 0x3C(0x4)(None)
	int32                                        CacheThreadStackSizeKB;                            // 0x40(0x4)(None)
	float                                        GlobalCacheSizeGB;                                 // 0x44(0x4)(None)
	bool                                         UseGlobalCache;                                    // 0x48(0x1)(None)
	uint8                                        Pad_1170[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ExrDecoderThreads;                                 // 0x4C(0x4)(None)
	class FString                                DefaultProxy;                                      // 0x50(0x10)(None)
	bool                                         UseDefaultProxy;                                   // 0x60(0x1)(None)
	uint8                                        Pad_1171[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImgMediaSettings* GetDefaultObj();

};

}


