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

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
struct UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
{
public:
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_1073[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
struct UAnalyticsBlueprintLibrary_StartSession_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
struct UAnalyticsBlueprintLibrary_SetUserId_Params
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
struct UAnalyticsBlueprintLibrary_SetSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
struct UAnalyticsBlueprintLibrary_SetLocation_Params
{
public:
	class FString                                Location;                                          // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
struct UAnalyticsBlueprintLibrary_SetGender_Params
{
public:
	class FString                                Gender;                                            // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
public:
	class FString                                BuildInfo;                                         // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
struct UAnalyticsBlueprintLibrary_SetAge_Params
{
public:
	int32                                        Age;                                               // 0x0(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(None)
	int32                                        ItemQuantity;                                      // 0x10(0x4)(None)
	uint8                                        Pad_1074[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(None)
	int32                                        ItemQuantity;                                      // 0x10(0x4)(None)
	uint8                                        Pad_1075[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(None)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(None)
	uint8                                        Pad_1077[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(None)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(None)
	uint8                                        Pad_1078[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(None)
	TArray<class FString>                        ProgressNames;                                     // 0x10(0x10)(None)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(None)
	class FString                                ProgressName;                                      // 0x10(0x10)(None)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
struct UAnalyticsBlueprintLibrary_RecordProgress_Params
{
public:
	class FString                                ProgressType;                                      // 0x0(0x10)(None)
	class FString                                ProgressName;                                      // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(None)
	class FString                                Currency;                                          // 0x10(0x10)(None)
	int32                                        PerItemCost;                                       // 0x20(0x4)(None)
	int32                                        ItemQuantity;                                      // 0x24(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(None)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(None)
	class FString                                AttributeName;                                     // 0x10(0x10)(None)
	class FString                                AttributeValue;                                    // 0x20(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
struct UAnalyticsBlueprintLibrary_RecordEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(None)
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
struct UAnalyticsBlueprintLibrary_RecordError_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(None)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(None)
	uint8                                        Pad_107A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RealCurrencyType;                                  // 0x18(0x10)(None)
	float                                        RealMoneyCost;                                     // 0x28(0x4)(None)
	uint8                                        Pad_107B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PaymentProvider;                                   // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(None)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(None)
	uint8                                        Pad_107C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnalyticsEventAttr>           Attributes;                                        // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
public:
	class FString                                GameCurrencyType;                                  // 0x0(0x10)(None)
	int32                                        GameCurrencyAmount;                                // 0x10(0x4)(None)
	uint8                                        Pad_107D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(None)
	class FString                                AttributeValue;                                    // 0x10(0x10)(None)
	struct FAnalyticsEventAttr                   ReturnValue;                                       // 0x20(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
struct UAnalyticsBlueprintLibrary_GetUserId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
struct UAnalyticsBlueprintLibrary_GetSessionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

}
}


