#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class StreamlineRHI.StreamlineOverrideSettings
class UStreamlineOverrideSettings : public UObject
{
public:
	enum class EStreamlineSettingOverride        EnableDLSSFGInPlayInEditorViewportsOverride;       // 0x28(0x1)(None)
	enum class EStreamlineSettingOverride        LoadDebugOverlayOverride;                          // 0x29(0x1)(None)
	uint8                                        Pad_1EFE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStreamlineOverrideSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class StreamlineRHI.StreamlineSettings
class UStreamlineSettings : public UObject
{
public:
	bool                                         bEnableStreamlineD3D12;                            // 0x28(0x1)(None)
	bool                                         bEnableStreamlineD3D11;                            // 0x29(0x1)(None)
	bool                                         bEnableDLSSFGInPlayInEditorViewports;              // 0x2A(0x1)(None)
	bool                                         bLoadDebugOverlay;                                 // 0x2B(0x1)(None)
	bool                                         bAllowOTAUpdate;                                   // 0x2C(0x1)(None)
	uint8                                        Pad_1F1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NVIDIANGXApplicationId;                            // 0x30(0x4)(None)
	uint8                                        Pad_1F1B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStreamlineSettings* GetDefaultObj();

};

}


