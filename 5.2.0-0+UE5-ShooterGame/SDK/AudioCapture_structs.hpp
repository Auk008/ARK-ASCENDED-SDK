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

// 0x30 (0x30 - 0x0)
// ScriptStruct AudioCapture.AudioInputDeviceInfo
struct FAudioInputDeviceInfo
{
public:
	class FString                                DeviceName;                                        // 0x0(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DeviceID;                                          // 0x10(0x10)(None)
	int32                                        InputChannels;                                     // 0x20(0x4)(None)
	int32                                        PreferredSampleRate;                               // 0x24(0x4)(None)
	uint8                                        bSupportsHardwareAEC : 1;                          // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        Pad_25A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
struct FAudioCaptureDeviceInfo
{
public:
	class FName                                  DeviceName;                                        // 0x0(0x8)(None)
	int32                                        NumInputChannels;                                  // 0x8(0x4)(None)
	int32                                        SampleRate;                                        // 0xC(0x4)(None)
};

}


