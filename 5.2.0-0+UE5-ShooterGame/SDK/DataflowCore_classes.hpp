#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xE0 - 0x38)
// Class DataflowCore.DataflowSettings
class UDataflowSettings : public UDeveloperSettings
{
public:
	struct FLinearColor                          ArrayPinTypeColor;                                 // 0x38(0x10)(None)
	struct FLinearColor                          ManagedArrayCollectionPinTypeColor;                // 0x48(0x10)(None)
	struct FLinearColor                          BoxPinTypeColor;                                   // 0x58(0x10)(None)
	struct FLinearColor                          SpherePinTypeColor;                                // 0x68(0x10)(None)
	TMap<class FName, struct FNodeColors>        NodeColorsMap;                                     // 0x78(0x50)(None)
	uint8                                        Pad_2C9E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataflowSettings* GetDefaultObj();

};

}


