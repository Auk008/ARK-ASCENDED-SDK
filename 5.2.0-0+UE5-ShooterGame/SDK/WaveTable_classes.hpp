#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class WaveTable.WaveTableBank
class UWaveTableBank : public UObject
{
public:
	uint8                                        Pad_2665[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWaveTableResolution              Resolution;                                        // 0x30(0x1)(None)
	bool                                         bBipolar;                                          // 0x31(0x1)(None)
	uint8                                        Pad_2666[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWaveTableBankEntry>           Entries;                                           // 0x38(0x10)(None)

	static class UClass* StaticClass();
	static class UWaveTableBank* GetDefaultObj();

};

}


