#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function SteelShield.SteelShieldSubsystem.Start
struct USteelShieldSubsystem_Start_Params
{
public:
	int32                                        TokenNum;                                          // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_7A4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteelShield.SteelShieldSubsystem.SetTokenProvider
struct USteelShieldSubsystem_SetTokenProvider_Params
{
public:
	class UClass*                                TokenProviderClass;                                // 0x0(0x8)(ZeroConstructor)
	class USteelShieldTokenProvider*             ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction SteelShield.SteelShieldSubsystem.OnInitializedBP__DelegateSignature
struct USteelShieldSubsystem_OnInitializedBP__DelegateSignature_Params
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SteelShield.SteelShieldSubsystem.IsRolloverInProgress
struct USteelShieldSubsystem_IsRolloverInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SteelShield.SteelShieldSubsystem.IsEnabled
struct USteelShieldSubsystem_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function SteelShield.SteelShieldSubsystem.GetTokenProvider
struct USteelShieldSubsystem_GetTokenProvider_Params
{
public:
	class USteelShieldTokenProvider*             ReturnValue;                                       // 0x0(0x8)(None)
};

}
}


