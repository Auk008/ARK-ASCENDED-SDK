#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWaveTableResolution : uint8
{
	None                           = 0,
	Res_8                          = 3,
	Res_16                         = 4,
	Res_32                         = 5,
	Res_64                         = 6,
	Res_128                        = 7,
	Res_256                        = 8,
	Res_512                        = 9,
	Res_1024                       = 10,
	Res_2048                       = 11,
	Res_4096                       = 12,
	Res_Max                        = 12,
	Maximum                        = 13,
	EWaveTableResolution_MAX       = 14,
};

enum class EWaveTableCurve : uint8
{
	Linear                         = 0,
	Linear_Inv                     = 1,
	Exp                            = 2,
	Exp_Inverse                    = 3,
	Log                            = 4,
	Sin                            = 5,
	Sin_Full                       = 6,
	SCurve                         = 7,
	Shared                         = 8,
	Custom                         = 9,
	File                           = 10,
	Count                          = 11,
	EWaveTableCurve_MAX            = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct WaveTable.WaveTableTransform
struct FWaveTableTransform
{
public:
	enum class EWaveTableCurve                   Curve;                                             // 0x0(0x1)(None)
	uint8                                        Pad_2667[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scalar;                                            // 0x4(0x4)(None)
	struct FRichCurve                            CurveCustom;                                       // 0x8(0x80)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           CurveShared;                                       // 0x88(0x8)(None)
	TArray<float>                                WaveTable;                                         // 0x90(0x10)(None)
	float                                        FinalValue;                                        // 0xA0(0x4)(None)
	uint8                                        Pad_2668[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct WaveTable.WaveTableBankEntry
struct FWaveTableBankEntry
{
public:
	struct FWaveTableTransform                   Transform;                                         // 0x0(0xA8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WaveTable.WaveTableSettings
struct FWaveTableSettings
{
public:
	struct FFilePath                             FilePath;                                          // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        ChannelIndex;                                      // 0x10(0x4)(None)
	float                                        Phase;                                             // 0x14(0x4)(None)
	float                                        Top;                                               // 0x18(0x4)(None)
	float                                        Tail;                                              // 0x1C(0x4)(None)
	float                                        FadeIn;                                            // 0x20(0x4)(None)
	float                                        FadeOut;                                           // 0x24(0x4)(None)
	bool                                         bNormalize;                                        // 0x28(0x1)(None)
	bool                                         bRemoveOffset;                                     // 0x29(0x1)(None)
	uint8                                        Pad_2669[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                SourcePCMData;                                     // 0x30(0x10)(None)
};

}


