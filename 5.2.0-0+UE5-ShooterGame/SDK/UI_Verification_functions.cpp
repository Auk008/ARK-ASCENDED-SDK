#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Verification.UI_Verification_C
// (None)

class UClass* UUI_Verification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Verification_C");

	return Clss;
}


// UI_Verification_C UI_Verification.Default__UI_Verification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Verification_C* UUI_Verification_C::GetDefaultObj()
{
	static class UUI_Verification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Verification_C*>(UUI_Verification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Verification.UI_Verification_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)

void UUI_Verification_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "OnKeyDown");

	Params::UUI_Verification_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (None)

void UUI_Verification_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "OnPreviewKeyDown");

	Params::UUI_Verification_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Digits                                                           (None)

void UUI_Verification_C::BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature(const class FString& Digits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature");

	Params::UUI_Verification_C_BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature_Params Parms{};

	Parms.Digits = Digits;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.Event Bind On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StoreMenu_C*             StoreMenuRef                                                     (None)

void UUI_Verification_C::Event_Bind_On_Input_Device_Changed(class UUI_StoreMenu_C* StoreMenuRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event Bind On Input Device Changed");

	Params::UUI_Verification_C_Event_Bind_On_Input_Device_Changed_Params Parms{};

	Parms.StoreMenuRef = StoreMenuRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.Event On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (None)

void UUI_Verification_C::Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event On Input Device Changed");

	Params::UUI_Verification_C_Event_On_Input_Device_Changed_Params Parms{};

	Parms.Device = Device;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_Verification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "PreConstruct");

	Params::UUI_Verification_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.Event On Valid Auth Code Generated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Verification_C::Event_On_Valid_Auth_Code_Generated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event On Valid Auth Code Generated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.Event On Failed To Generate Auth Code
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_Verification_C::Event_On_Failed_To_Generate_Auth_Code(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event On Failed To Generate Auth Code");

	Params::UUI_Verification_C_Event_On_Failed_To_Generate_Auth_Code_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Verification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.ExecuteUbergraph_UI_Verification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (Protected, TextExportTransient, NativeAccessSpecifierPrivate)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// class FString                      K2Node_ComponentBoundEvent_Digits                                (ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
// class UUI_StoreMenu_C*             K2Node_CustomEvent_StoreMenuRef                                  (Edit, ZeroConstructor)
// enum class ENUM_InputDevices       K2Node_CustomEvent_Device                                        (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// enum class ENUM_InputDevices       CallFunc_CheckPlayerInputDevices_UsingGamepad_                   (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (AdvancedDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetDigits_Digits                                        (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (None)

void UUI_Verification_C::ExecuteUbergraph_UI_Verification(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, enum class ENUM_InputDevices Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& K2Node_ComponentBoundEvent_Digits, class UUI_StoreMenu_C* K2Node_CustomEvent_StoreMenuRef, enum class ENUM_InputDevices K2Node_CustomEvent_Device, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FCFCoreError& K2Node_CustomEvent_error, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetDigits_Digits, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "ExecuteUbergraph_UI_Verification");

	Params::UUI_Verification_C_ExecuteUbergraph_UI_Verification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Digits = K2Node_ComponentBoundEvent_Digits;
	Parms.K2Node_CustomEvent_StoreMenuRef = K2Node_CustomEvent_StoreMenuRef;
	Parms.K2Node_CustomEvent_Device = K2Node_CustomEvent_Device;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CheckPlayerInputDevices_UsingGamepad_ = CallFunc_CheckPlayerInputDevices_UsingGamepad_;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetDigits_Digits = CallFunc_GetDigits_Digits;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.K2Node_MakeStruct_SlateColor_8 = K2Node_MakeStruct_SlateColor_8;
	Parms.K2Node_MakeStruct_SlateColor_9 = K2Node_MakeStruct_SlateColor_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.Close_D__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Verification_C::Close_D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Close_D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


