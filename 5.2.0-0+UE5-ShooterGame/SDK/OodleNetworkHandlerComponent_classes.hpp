#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA0 - 0x80)
// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	bool                                         bCompressionTest;                                  // 0x80(0x1)(None)
	bool                                         bWriteV5Dictionaries;                              // 0x81(0x1)(None)
	uint8                                        Pad_21B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HashTableSize;                                     // 0x84(0x4)(None)
	int32                                        DictionarySize;                                    // 0x88(0x4)(None)
	int32                                        DictionaryTrials;                                  // 0x8C(0x4)(None)
	int32                                        TrialRandomness;                                   // 0x90(0x4)(None)
	int32                                        TrialGenerations;                                  // 0x94(0x4)(None)
	bool                                         bNoTrials;                                         // 0x98(0x1)(None)
	uint8                                        Pad_21B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOodleNetworkTrainerCommandlet* GetDefaultObj();

};

}


