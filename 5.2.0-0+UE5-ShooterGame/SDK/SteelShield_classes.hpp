#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class SteelShield.SteelShieldTokenProvider
class USteelShieldTokenProvider : public UObject
{
public:
	uint8                                        Pad_787[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteelShieldTokenProvider* GetDefaultObj();

};

// 0xB8 (0x118 - 0x60)
// Class SteelShield.ClientTokenProvider
class UClientTokenProvider : public USteelShieldTokenProvider
{
public:
	uint8                                        Pad_78D[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USteelShieldTokenRequest*>      ActiveRequests;                                    // 0x108(0x10)(None)

	static class UClass* StaticClass();
	static class UClientTokenProvider* GetDefaultObj();

};

// 0x10 (0x128 - 0x118)
// Class SteelShield.DefaultTokenProvider
class UDefaultTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_790[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USteelShieldJWT*                       JWT;                                               // 0x120(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDefaultTokenProvider* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class SteelShield.EOSTokenProvider
class UEOSTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_795[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSTokenProvider* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class SteelShield.SteelShieldJWT
class USteelShieldJWT : public UObject
{
public:
	uint8                                        Pad_798[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteelShieldJWT* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class SteelShield.SteelShieldRuntimeSettings
class USteelShieldRuntimeSettings : public UObject
{
public:
	int32                                        ApiVersion;                                        // 0x28(0x4)(None)
	uint8                                        Pad_79B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Developer;                                         // 0x30(0x10)(None)
	class FString                                Game;                                              // 0x40(0x10)(None)
	class FString                                Platform;                                          // 0x50(0x10)(None)
	class FString                                PlatformKey;                                       // 0x60(0x10)(None)
	class FString                                BackendURL;                                        // 0x70(0x10)(None)
	class FString                                AuthProvider;                                      // 0x80(0x10)(None)
	class FString                                GameClientVersion;                                 // 0x90(0x10)(None)
	class FString                                Certificate;                                       // 0xA0(0x10)(None)
	enum class EJWTCertificateType               CertificateType;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_79D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteelShieldRuntimeSettings* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class SteelShield.SteelShieldSubsystem
class USteelShieldSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_7BA[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInitializedBP;                                   // 0x50(0x10)(ZeroConstructor)
	class USteelShieldTokenProvider*             TokenProvider;                                     // 0x60(0x8)(None)
	uint8                                        Pad_7BB[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteelShieldSubsystem* GetDefaultObj();

	void Stop();
	void Start(int32 TokenNum, bool ReturnValue);
	void SetTokenProvider(class UClass* TokenProviderClass, class USteelShieldTokenProvider* ReturnValue);
	void OnInitializedBP__DelegateSignature(bool bSuccessful);
	void IsRolloverInProgress(bool ReturnValue);
	void IsEnabled(bool ReturnValue);
	void GetTokenProvider(class USteelShieldTokenProvider* ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class SteelShield.SteelShieldTokenRequest
class USteelShieldTokenRequest : public UObject
{
public:
	uint8                                        Pad_7BE[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteelShieldTokenRequest* GetDefaultObj();

};

}


