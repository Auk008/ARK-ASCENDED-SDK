#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// Class GeometryCacheStreamer.GeometryCacheStreamerSettings
class UGeometryCacheStreamerSettings : public UDeveloperSettings
{
public:
	float                                        LookAheadBuffer;                                   // 0x38(0x4)(None)
	float                                        MaxMemoryAllowed;                                  // 0x3C(0x4)(None)

	static class UClass* StaticClass();
	static class UGeometryCacheStreamerSettings* GetDefaultObj();

};

}


