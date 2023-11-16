#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C
// (None)

class UClass* UUI_ModSuccessfullyInsalled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ModSuccessfullyInsalled_C");

	return Clss;
}


// UI_ModSuccessfullyInsalled_C UI_ModSuccessfullyInsalled.Default__UI_ModSuccessfullyInsalled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ModSuccessfullyInsalled_C* UUI_ModSuccessfullyInsalled_C::GetDefaultObj()
{
	static class UUI_ModSuccessfullyInsalled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ModSuccessfullyInsalled_C*>(UUI_ModSuccessfullyInsalled_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModSuccessfullyInsalled_C::OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23");

	Params::UUI_ModSuccessfullyInsalled_C_OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModSuccessfullyInsalled_C::OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23");

	Params::UUI_ModSuccessfullyInsalled_C_OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_ModSuccessfullyInsalled_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "PreConstruct");

	Params::UUI_ModSuccessfullyInsalled_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.Event Pop In Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod_Info                                                         (None)

void UUI_ModSuccessfullyInsalled_C::Event_Pop_In_Animation(const struct FInstallProgressMod& Mod_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "Event Pop In Animation");

	Params::UUI_ModSuccessfullyInsalled_C_Event_Pop_In_Animation_Params Parms{};

	Parms.Mod_Info = Mod_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.Event Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::Event_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "Event Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ExitAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::ExitAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ExitAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.EnterAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::EnterAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "EnterAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ResetClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::ResetClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ResetClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.RequestExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::RequestExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "RequestExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ExecuteUbergraph_UI_ModSuccessfullyInsalled
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ZeroConstructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// struct FInstallProgressMod         K2Node_CustomEvent_Mod_Info                                      (Edit, ZeroConstructor)
// bool                               Temp_bool_IsClosed_Variable                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)

void UUI_ModSuccessfullyInsalled_C::ExecuteUbergraph_UI_ModSuccessfullyInsalled(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_2, const struct FInstallProgressMod& K2Node_CustomEvent_Mod_Info, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ExecuteUbergraph_UI_ModSuccessfullyInsalled");

	Params::UUI_ModSuccessfullyInsalled_C_ExecuteUbergraph_UI_ModSuccessfullyInsalled_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Mod_Info = K2Node_CustomEvent_Mod_Info;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


