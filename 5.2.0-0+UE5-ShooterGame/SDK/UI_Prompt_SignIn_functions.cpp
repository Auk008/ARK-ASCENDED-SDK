#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Prompt_SignIn.UI_Prompt_SignIn_C
// (None)

class UClass* UUI_Prompt_SignIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Prompt_SignIn_C");

	return Clss;
}


// UI_Prompt_SignIn_C UI_Prompt_SignIn.Default__UI_Prompt_SignIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Prompt_SignIn_C* UUI_Prompt_SignIn_C::GetDefaultObj()
{
	static class UUI_Prompt_SignIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Prompt_SignIn_C*>(UUI_Prompt_SignIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)

void UUI_Prompt_SignIn_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "OnKeyDown");

	Params::UUI_Prompt_SignIn_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event CloseD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_CloseD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event CloseD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_Prompt_SignIn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "PreConstruct");

	Params::UUI_Prompt_SignIn_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Prompt_SignIn_C_BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Bind On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StoreMenu_C*             StoreMenuRef                                                     (None)

void UUI_Prompt_SignIn_C::Event_Bind_On_Input_Device_Changed(class UUI_StoreMenu_C* StoreMenuRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Bind On Input Device Changed");

	Params::UUI_Prompt_SignIn_C_Event_Bind_On_Input_Device_Changed_Params Parms{};

	Parms.StoreMenuRef = StoreMenuRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (None)

void UUI_Prompt_SignIn_C::Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event On Input Device Changed");

	Params::UUI_Prompt_SignIn_C_Event_On_Input_Device_Changed_Params Parms{};

	Parms.Device = Device;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Failed To Send Security Code
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_Prompt_SignIn_C::Event_Failed_To_Send_Security_Code(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Failed To Send Security Code");

	Params::UUI_Prompt_SignIn_C_Event_Failed_To_Send_Security_Code_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event On Security Code Sent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_On_Security_Code_Sent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event On Security Code Sent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Send Security Code
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_Send_Security_Code()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Send Security Code");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.ExecuteUbergraph_UI_Prompt_SignIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UUI_Verification_C*          CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// class UUI_PrivacyAndTerms_2_C*     CallFunc_Create_ReturnValue_1                                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (AssetRegistrySearchable, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (ContainsInstancedReference, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UUI_StoreMenu_C*             K2Node_CustomEvent_StoreMenuRef                                  (Edit, ZeroConstructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (None)
// enum class ENUM_InputDevices       K2Node_CustomEvent_Device                                        (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// enum class ENUM_InputDevices       CallFunc_CheckPlayerInputDevices_UsingGamepad_                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (ContainsInstancedReference, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (None)

void UUI_Prompt_SignIn_C::ExecuteUbergraph_UI_Prompt_SignIn(int32 EntryPoint, class UUI_Verification_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, enum class ENUM_InputDevices Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUI_PrivacyAndTerms_2_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetEmptyText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class UUI_StoreMenu_C* K2Node_CustomEvent_StoreMenuRef, bool CallFunc_NotEqual_TextText_ReturnValue, enum class ENUM_InputDevices K2Node_CustomEvent_Device, enum class ESlateVisibility K2Node_Select_Default, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, bool CallFunc_IsValid_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FCFCoreError& K2Node_CustomEvent_error, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "ExecuteUbergraph_UI_Prompt_SignIn");

	Params::UUI_Prompt_SignIn_C_ExecuteUbergraph_UI_Prompt_SignIn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_CustomEvent_StoreMenuRef = K2Node_CustomEvent_StoreMenuRef;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_CustomEvent_Device = K2Node_CustomEvent_Device;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CheckPlayerInputDevices_UsingGamepad_ = CallFunc_CheckPlayerInputDevices_UsingGamepad_;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_SlateColor_8 = K2Node_MakeStruct_SlateColor_8;
	Parms.K2Node_MakeStruct_SlateColor_9 = K2Node_MakeStruct_SlateColor_9;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


