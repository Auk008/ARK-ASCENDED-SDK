#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE0 - 0xB8)
// Class ImgMediaEngine.ImgMediaPlaybackComponent
class UImgMediaPlaybackComponent : public UActorComponent
{
public:
	float                                        LODBias;                                           // 0xB8(0x4)(None)
	uint8                                        Pad_2516[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImgMediaPlaybackComponent* GetDefaultObj();

};

}


