#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class NetCore.NetAnalyticsAggregatorConfig
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>       NetAnalyticsData;                                  // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class NetCore.StatePerObjectConfig
class UStatePerObjectConfig : public UObject
{
public:
	uint8                                        Pad_2C43[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PerObjectConfigSection;                            // 0x50(0x10)(None)
	bool                                         bEnabled;                                          // 0x60(0x1)(None)
	uint8                                        Pad_2C44[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStatePerObjectConfig* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class NetCore.EscalationManagerConfig
class UEscalationManagerConfig : public UStatePerObjectConfig
{
public:
	TArray<class FString>                        EscalationSeverity;                                // 0x68(0x10)(None)
	uint8                                        Pad_2C45[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEscalationManagerConfig* GetDefaultObj();

};

}


