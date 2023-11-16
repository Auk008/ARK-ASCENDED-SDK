#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xB8 - 0x28)
// Class UdpMessaging.UdpMessagingSettings
class UUdpMessagingSettings : public UObject
{
public:
	bool                                         EnabledByDefault;                                  // 0x28(0x1)(None)
	bool                                         EnableTransport;                                   // 0x29(0x1)(None)
	bool                                         bAutoRepair;                                       // 0x2A(0x1)(None)
	uint8                                        Pad_2562[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSendRate;                                       // 0x2C(0x4)(None)
	uint32                                       AutoRepairAttemptLimit;                            // 0x30(0x4)(None)
	uint16                                       WorkQueueSize;                                     // 0x34(0x2)(None)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x36(0x1)(None)
	uint8                                        Pad_2563[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UnicastEndpoint;                                   // 0x38(0x10)(None)
	class FString                                MulticastEndpoint;                                 // 0x48(0x10)(None)
	enum class EUdpMessageFormat                 MessageFormat;                                     // 0x58(0x1)(None)
	uint8                                        MulticastTimeToLive;                               // 0x59(0x1)(None)
	uint8                                        Pad_2564[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        StaticEndpoints;                                   // 0x60(0x10)(None)
	TArray<class FString>                        ExcludedEndpoints;                                 // 0x70(0x10)(None)
	bool                                         EnableTunnel;                                      // 0x80(0x1)(None)
	uint8                                        Pad_2565[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TunnelUnicastEndpoint;                             // 0x88(0x10)(None)
	class FString                                TunnelMulticastEndpoint;                           // 0x98(0x10)(None)
	TArray<class FString>                        RemoteTunnelEndpoints;                             // 0xA8(0x10)(None)

	static class UClass* StaticClass();
	static class UUdpMessagingSettings* GetDefaultObj();

};

}


