#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C
// (None)

class UClass* UASAUI_MainMenuWidget_Card_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_MainMenuWidget_Card_C");

	return Clss;
}


// ASAUI_MainMenuWidget_Card_C ASAUI_MainMenuWidget_Card.Default__ASAUI_MainMenuWidget_Card_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_MainMenuWidget_Card_C* UASAUI_MainMenuWidget_Card_C::GetDefaultObj()
{
	static class UASAUI_MainMenuWidget_Card_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_MainMenuWidget_Card_C*>(UASAUI_MainMenuWidget_Card_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseEnterFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (None)

void UASAUI_MainMenuWidget_Card_C::OnMouseEnterFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "OnMouseEnterFunc");

	Params::UASAUI_MainMenuWidget_Card_C_OnMouseEnterFunc_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.StopAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_Card_C::StopAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "StopAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseLeaveFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (None)

void UASAUI_MainMenuWidget_Card_C::OnMouseLeaveFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "OnMouseLeaveFunc");

	Params::UASAUI_MainMenuWidget_Card_C_OnMouseLeaveFunc_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (None)

void UASAUI_MainMenuWidget_Card_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "OnMouseLeave");

	Params::UASAUI_MainMenuWidget_Card_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)

void UASAUI_MainMenuWidget_Card_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "OnMouseEnter");

	Params::UASAUI_MainMenuWidget_Card_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_Card_C::BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UASAUI_MainMenuWidget_Card_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "PreConstruct");

	Params::UASAUI_MainMenuWidget_Card_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_Card_C::BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_Card_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_Card_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.ExecuteUbergraph_ASAUI_MainMenuWidget_Card
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)

void UASAUI_MainMenuWidget_Card_C::ExecuteUbergraph_ASAUI_MainMenuWidget_Card(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "ExecuteUbergraph_ASAUI_MainMenuWidget_Card");

	Params::UASAUI_MainMenuWidget_Card_C_ExecuteUbergraph_ASAUI_MainMenuWidget_Card_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnCardClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_Card_C::OnCardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_Card_C", "OnCardClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


