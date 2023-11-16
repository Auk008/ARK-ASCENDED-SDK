#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ZoomImage.UI_ZoomImage_C
// (None)

class UClass* UUI_ZoomImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ZoomImage_C");

	return Clss;
}


// UI_ZoomImage_C UI_ZoomImage.Default__UI_ZoomImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ZoomImage_C* UUI_ZoomImage_C::GetDefaultObj()
{
	static class UUI_ZoomImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ZoomImage_C*>(UUI_ZoomImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ZoomImage.UI_ZoomImage_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)

void UUI_ZoomImage_C::BPGamepadReleased(const struct FKey& TheKey, bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPGamepadReleased");

	Params::UUI_ZoomImage_C_BPGamepadReleased_Params Parms{};

	Parms.TheKey = TheKey;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUI_ZoomImage_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPHighlightWidgetOnStart");

	Params::UUI_ZoomImage_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ImageIndex                                                       (None)
// class FString                      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_ZoomImage_C::UpdateScreenshotDescription(int32 ImageIndex, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateScreenshotDescription");

	Params::UUI_ZoomImage_C_UpdateScreenshotDescription_Params Parms{};

	Parms.ImageIndex = ImageIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdatePageCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ImageIndex                                                       (None)
// int32                              _numOfScreenshots                                                (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UUI_ZoomImage_C::UpdatePageCounter(int32 ImageIndex, int32 _numOfScreenshots, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdatePageCounter");

	Params::UUI_ZoomImage_C_UpdatePageCounter_Params Parms{};

	Parms.ImageIndex = ImageIndex;
	Parms._numOfScreenshots = _numOfScreenshots;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ImageIndex                                                       (None)
// class UObject*                     Temp_object_Variable                                             (Edit, ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UObject*                     K2Node_Select_Default                                            (Edit, ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ZoomImage_C::UpdateScreenshotImage(int32 ImageIndex, class UObject* Temp_object_Variable, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTexture2DDynamic* CallFunc_Array_Get_Item, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateScreenshotImage");

	Params::UUI_ZoomImage_C_UpdateScreenshotImage_Params Parms{};

	Parms.ImageIndex = ImageIndex;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.InitScreenshot_Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void UUI_ZoomImage_C::InitScreenshot_Info(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "InitScreenshot_Info");

	Params::UUI_ZoomImage_C_InitScreenshot_Info_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateButtonsStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, ZeroConstructor)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1                         (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_1                         (Edit, ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)

void UUI_ZoomImage_C::UpdateButtonsStyle(bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue_1, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateButtonsStyle");

	Params::UUI_ZoomImage_C_UpdateButtonsStyle_Params Parms{};

	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue_1 = CallFunc_BPGetGlobalUIData_ReturnValue_1;
	Parms.CallFunc_GetIconForKeyName_ReturnValue_1 = CallFunc_GetIconForKeyName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (None)

void UUI_ZoomImage_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "OnKeyDown");

	Params::UUI_ZoomImage_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__ZoomImage_UI_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__ZoomImage_UI_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__ZoomImage_UI_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__ZoomImage_UI_NextImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__ZoomImage_UI_NextImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__ZoomImage_UI_NextImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)

void UUI_ZoomImage_C::ButtonCall(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "ButtonCall");

	Params::UUI_ZoomImage_C_ButtonCall_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.GoBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.PrevImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::PrevImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "PrevImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.NextImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::NextImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "NextImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UUI_ZoomImage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Tick");

	Params::UUI_ZoomImage_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.ExecuteUbergraph_UI_ZoomImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// int32                              Temp_int_Variable_1                                              (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (None)
// struct FKey                        K2Node_CustomEvent_Key                                           (None)
// enum class EViewState              K2Node_CustomEvent_State                                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)

void UUI_ZoomImage_C::ExecuteUbergraph_UI_ZoomImage(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "ExecuteUbergraph_UI_ZoomImage");

	Params::UUI_ZoomImage_C_ExecuteUbergraph_UI_ZoomImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


