#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LikeDislikeButton.UI_LikeDislikeButton_C
// (None)

class UClass* UUI_LikeDislikeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LikeDislikeButton_C");

	return Clss;
}


// UI_LikeDislikeButton_C UI_LikeDislikeButton.Default__UI_LikeDislikeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LikeDislikeButton_C* UUI_LikeDislikeButton_C::GetDefaultObj()
{
	static class UUI_LikeDislikeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LikeDislikeButton_C*>(UUI_LikeDislikeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LikeDislikeButton.UI_LikeDislikeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_LikeDislikeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LikeDislikeButton_C", "PreConstruct");

	Params::UUI_LikeDislikeButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LikeDislikeButton.UI_LikeDislikeButton_C.BndEvt__UI_LikeDislikeButton_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_LikeDislikeButton_C::BndEvt__UI_LikeDislikeButton_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LikeDislikeButton_C", "BndEvt__UI_LikeDislikeButton_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LikeDislikeButton.UI_LikeDislikeButton_C.ExecuteUbergraph_UI_LikeDislikeButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)

void UUI_LikeDislikeButton_C::ExecuteUbergraph_UI_LikeDislikeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LikeDislikeButton_C", "ExecuteUbergraph_UI_LikeDislikeButton");

	Params::UUI_LikeDislikeButton_C_ExecuteUbergraph_UI_LikeDislikeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LikeDislikeButton.UI_LikeDislikeButton_C.Action__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LikeDislikeButton_C::Action__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LikeDislikeButton_C", "Action__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


