#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class WmfMediaFactory.WmfMediaSettings
class UWmfMediaSettings : public UObject
{
public:
	bool                                         AllowNonStandardCodecs;                            // 0x28(0x1)(None)
	bool                                         LowLatency;                                        // 0x29(0x1)(None)
	bool                                         NativeAudioOut;                                    // 0x2A(0x1)(None)
	bool                                         HardwareAcceleratedVideoDecoding;                  // 0x2B(0x1)(None)
	uint8                                        Pad_255F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWmfMediaSettings* GetDefaultObj();

};

}


