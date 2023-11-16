#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConfirmationDialogGeneric.ConfirmationDialogGeneric_C
// (None)

class UClass* UConfirmationDialogGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConfirmationDialogGeneric_C");

	return Clss;
}


// ConfirmationDialogGeneric_C ConfirmationDialogGeneric.Default__ConfirmationDialogGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConfirmationDialogGeneric_C* UConfirmationDialogGeneric_C::GetDefaultObj()
{
	static class UConfirmationDialogGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConfirmationDialogGeneric_C*>(UConfirmationDialogGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UConfirmationDialogGeneric_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelText                                                       (None)

void UConfirmationDialogGeneric_C::OverrideCancelButtonText(class FText CancelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideCancelButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params Parms{};

	Parms.CancelText = CancelText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        AcceptText                                                       (None)

void UConfirmationDialogGeneric_C::OverrideAcceptButtonText(class FText AcceptText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideAcceptButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params Parms{};

	Parms.AcceptText = AcceptText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (ZeroConstructor)
// class FText                        K2Node_Event_CancelText                                          (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        K2Node_Event_AcceptText                                          (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_GetNumLocalPlayerControllers_ReturnValue                (None)
// int32                              CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor)
// class FString                      CallFunc_GetObjectName_ReturnValue_1                             (None)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)

void UConfirmationDialogGeneric_C::ExecuteUbergraph_ConfirmationDialogGeneric(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class FText K2Node_Event_CancelText, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FText K2Node_Event_AcceptText, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNumLocalPlayerControllers_ReturnValue, int32 CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue_1, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "ExecuteUbergraph_ConfirmationDialogGeneric");

	Params::UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.K2Node_Event_CancelText = K2Node_Event_CancelText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_Event_AcceptText = K2Node_Event_AcceptText;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNumLocalPlayerControllers_ReturnValue = CallFunc_GetNumLocalPlayerControllers_ReturnValue;
	Parms.CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue = CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetObjectName_ReturnValue_1 = CallFunc_GetObjectName_ReturnValue_1;
	Parms.CallFunc_GetIconForKeyName_ReturnValue_1 = CallFunc_GetIconForKeyName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


