#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ReportToast.UI_ReportToast_C
// (None)

class UClass* UUI_ReportToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ReportToast_C");

	return Clss;
}


// UI_ReportToast_C UI_ReportToast.Default__UI_ReportToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ReportToast_C* UUI_ReportToast_C::GetDefaultObj()
{
	static class UUI_ReportToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ReportToast_C*>(UUI_ReportToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ReportToast.UI_ReportToast_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)

void UUI_ReportToast_C::OnClicked(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReportToast_C", "OnClicked");

	Params::UUI_ReportToast_C_OnClicked_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ReportToast.UI_ReportToast_C.OnPopOutEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ReportToast_C::OnPopOutEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReportToast_C", "OnPopOutEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ReportToast.UI_ReportToast_C.BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ReportToast_C::BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReportToast_C", "BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ReportToast.UI_ReportToast_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_ReportToast_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReportToast_C", "PreConstruct");

	Params::UUI_ReportToast_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ReportToast.UI_ReportToast_C.Event Pop In Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ReportToast_C::Event_Pop_In_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReportToast_C", "Event Pop In Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ReportToast.UI_ReportToast_C.ExecuteUbergraph_UI_ReportToast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (None)

void UUI_ReportToast_C::ExecuteUbergraph_UI_ReportToast(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReportToast_C", "ExecuteUbergraph_UI_ReportToast");

	Params::UUI_ReportToast_C_ExecuteUbergraph_UI_ReportToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


