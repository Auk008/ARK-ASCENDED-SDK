#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C
// (None)

class UClass* UASAUIWidget_Button_Style4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_Button_Style4_C");

	return Clss;
}


// ASAUIWidget_Button_Style4_C ASAUIWidget_Button_Style4.Default__ASAUIWidget_Button_Style4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_Button_Style4_C* UASAUIWidget_Button_Style4_C::GetDefaultObj()
{
	static class UASAUIWidget_Button_Style4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_Button_Style4_C*>(UASAUIWidget_Button_Style4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UASAUIWidget_Button_Style4_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "PreConstruct");

	Params::UASAUIWidget_Button_Style4_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::UpdateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "UpdateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (None)

void UASAUIWidget_Button_Style4_C::SetActive(bool NewActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "SetActive");

	Params::UASAUIWidget_Button_Style4_C_SetActive_Params Parms{};

	Parms.NewActive = NewActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.ExecuteUbergraph_ASAUIWidget_Button_Style4
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (Edit, ZeroConstructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// bool                               K2Node_CustomEvent_newActive                                     (None)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UButtonSlot*                 K2Node_DynamicCast_AsButton_Slot                                 (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (None)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast_1                       (None)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (None)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (None)

void UASAUIWidget_Button_Style4_C::ExecuteUbergraph_ASAUIWidget_Button_Style4(int32 EntryPoint, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_TextIsEmpty_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_newActive, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "ExecuteUbergraph_ASAUIWidget_Button_Style4");

	Params::UASAUIWidget_Button_Style4_C_ExecuteUbergraph_ASAUIWidget_Button_Style4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_newActive = K2Node_CustomEvent_newActive;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsButton_Slot = K2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast_1 = K2Node_MakeStruct_ImageSize_ImplicitCast_1;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_Style4_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_Style4_C", "OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


