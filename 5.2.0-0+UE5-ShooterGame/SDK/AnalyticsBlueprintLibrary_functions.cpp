#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// (None)

class UClass* UAnalyticsBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnalyticsBlueprintLibrary");

	return Clss;
}


// AnalyticsBlueprintLibrary AnalyticsBlueprintLibrary.Default__AnalyticsBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnalyticsBlueprintLibrary* UAnalyticsBlueprintLibrary::GetDefaultObj()
{
	static class UAnalyticsBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnalyticsBlueprintLibrary*>(UAnalyticsBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)
// bool                               ReturnValue                                                      (None)

void UAnalyticsBlueprintLibrary::StartSessionWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSessionWithAttributes");

	Params::UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UAnalyticsBlueprintLibrary::StartSession(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSession");

	Params::UAnalyticsBlueprintLibrary_StartSession_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      UserId                                                           (None)

void UAnalyticsBlueprintLibrary::SetUserId(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetUserId");

	Params::UAnalyticsBlueprintLibrary_SetUserId_Params Parms{};

	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SessionId                                                        (None)

void UAnalyticsBlueprintLibrary::SetSessionId(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetSessionId");

	Params::UAnalyticsBlueprintLibrary_SetSessionId_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Location                                                         (None)

void UAnalyticsBlueprintLibrary::SetLocation(const class FString& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetLocation");

	Params::UAnalyticsBlueprintLibrary_SetLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Gender                                                           (None)

void UAnalyticsBlueprintLibrary::SetGender(const class FString& Gender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetGender");

	Params::UAnalyticsBlueprintLibrary_SetGender_Params Parms{};

	Parms.Gender = Gender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BuildInfo                                                        (None)

void UAnalyticsBlueprintLibrary::SetBuildInfo(const class FString& BuildInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetBuildInfo");

	Params::UAnalyticsBlueprintLibrary_SetBuildInfo_Params Parms{};

	Parms.BuildInfo = BuildInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Age                                                              (None)

void UAnalyticsBlueprintLibrary::SetAge(int32 Age)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetAge");

	Params::UAnalyticsBlueprintLibrary_SetAge_Params Parms{};

	Parms.Age = Age;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (None)
// int32                              ItemQuantity                                                     (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(const class FString& ItemID, int32 ItemQuantity, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params Parms{};

	Parms.ItemID = ItemID;
	Parms.ItemQuantity = ItemQuantity;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (None)
// int32                              ItemQuantity                                                     (None)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(const class FString& ItemID, int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params Parms{};

	Parms.ItemID = ItemID;
	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (None)
// int32                              GameCurrencyAmount                                               (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params Parms{};

	Parms.GameCurrencyType = GameCurrencyType;
	Parms.GameCurrencyAmount = GameCurrencyAmount;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (None)
// int32                              GameCurrencyAmount                                               (None)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int32 GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params Parms{};

	Parms.GameCurrencyType = GameCurrencyType;
	Parms.GameCurrencyAmount = GameCurrencyAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (None)
// TArray<class FString>              ProgressNames                                                    (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, const TArray<class FString>& ProgressNames, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithFullHierarchyAndAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params Parms{};

	Parms.ProgressType = ProgressType;
	Parms.ProgressNames = ProgressNames;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (None)
// class FString                      ProgressName                                                     (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params Parms{};

	Parms.ProgressType = ProgressType;
	Parms.ProgressName = ProgressName;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (None)
// class FString                      ProgressName                                                     (None)

void UAnalyticsBlueprintLibrary::RecordProgress(const class FString& ProgressType, const class FString& ProgressName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgress");

	Params::UAnalyticsBlueprintLibrary_RecordProgress_Params Parms{};

	Parms.ProgressType = ProgressType;
	Parms.ProgressName = ProgressName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (None)
// class FString                      Currency                                                         (None)
// int32                              PerItemCost                                                      (None)
// int32                              ItemQuantity                                                     (None)

void UAnalyticsBlueprintLibrary::RecordItemPurchase(const class FString& ItemID, const class FString& Currency, int32 PerItemCost, int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordItemPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordItemPurchase_Params Parms{};

	Parms.ItemID = ItemID;
	Parms.Currency = Currency;
	Parms.PerItemCost = PerItemCost;
	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(const class FString& EventName, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params Parms{};

	Parms.EventName = EventName;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (None)
// class FString                      AttributeName                                                    (None)
// class FString                      AttributeValue                                                   (None)

void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttribute");

	Params::UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params Parms{};

	Parms.EventName = EventName;
	Parms.AttributeName = AttributeName;
	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (None)

void UAnalyticsBlueprintLibrary::RecordEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEvent");

	Params::UAnalyticsBlueprintLibrary_RecordEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(const class FString& Error, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordErrorWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params Parms{};

	Parms.Error = Error;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (None)

void UAnalyticsBlueprintLibrary::RecordError(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordError");

	Params::UAnalyticsBlueprintLibrary_RecordError_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (None)
// int32                              GameCurrencyAmount                                               (None)
// class FString                      RealCurrencyType                                                 (None)
// float                              RealMoneyCost                                                    (None)
// class FString                      PaymentProvider                                                  (None)

void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params Parms{};

	Parms.GameCurrencyType = GameCurrencyType;
	Parms.GameCurrencyAmount = GameCurrencyAmount;
	Parms.RealCurrencyType = RealCurrencyType;
	Parms.RealMoneyCost = RealMoneyCost;
	Parms.PaymentProvider = PaymentProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (None)
// int32                              GameCurrencyAmount                                               (None)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (None)

void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGivenWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params Parms{};

	Parms.GameCurrencyType = GameCurrencyType;
	Parms.GameCurrencyAmount = GameCurrencyAmount;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (None)
// int32                              GameCurrencyAmount                                               (None)

void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(const class FString& GameCurrencyType, int32 GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGiven");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params Parms{};

	Parms.GameCurrencyType = GameCurrencyType;
	Parms.GameCurrencyAmount = GameCurrencyAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttributeName                                                    (None)
// class FString                      AttributeValue                                                   (None)
// struct FAnalyticsEventAttr         ReturnValue                                                      (None)

void UAnalyticsBlueprintLibrary::MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue, const struct FAnalyticsEventAttr& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "MakeEventAttribute");

	Params::UAnalyticsBlueprintLibrary_MakeEventAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.AttributeValue = AttributeValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UAnalyticsBlueprintLibrary::GetUserId(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "GetUserId");

	Params::UAnalyticsBlueprintLibrary_GetUserId_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UAnalyticsBlueprintLibrary::GetSessionId(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "GetSessionId");

	Params::UAnalyticsBlueprintLibrary_GetSessionId_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnalyticsBlueprintLibrary::FlushEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "FlushEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnalyticsBlueprintLibrary::EndSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "EndSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


