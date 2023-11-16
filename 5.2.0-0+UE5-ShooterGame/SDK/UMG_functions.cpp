#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UMG.Visual
// (None)

class UClass* UVisual::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Visual");

	return Clss;
}


// Visual UMG.Default__Visual
// (Public, ClassDefaultObject, ArchetypeObject)

class UVisual* UVisual::GetDefaultObj()
{
	static class UVisual* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisual*>(UVisual::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.Widget
// (None)

class UClass* UWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Widget");

	return Clss;
}


// Widget UMG.Default__Widget
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidget* UWidget::GetDefaultObj()
{
	static class UWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidget*>(UWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (None)

void UWidget::SetVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetVisibility");

	Params::UWidget_SetVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)

void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetUserFocus");

	Params::UWidget_SetUserFocus_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InToolTipText                                                    (None)

void UWidget::SetToolTipText(class FText InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTipText");

	Params::UWidget_SetToolTipText_Params Parms{};

	Parms.InToolTipText = InToolTipText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void UWidget::SetToolTip(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTip");

	Params::UWidget_SetToolTip_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Translation                                                      (None)

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTranslation");

	Params::UWidget_SetRenderTranslation_Params Parms{};

	Parms.Translation = Translation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pivot                                                            (None)

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformPivot");

	Params::UWidget_SetRenderTransformPivot_Params Parms{};

	Parms.Pivot = Pivot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (None)

void UWidget::SetRenderTransformAngle(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformAngle");

	Params::UWidget_SetRenderTransformAngle_Params Parms{};

	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform            InTransform                                                      (None)

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransform");

	Params::UWidget_SetRenderTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Shear                                                            (None)

void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderShear");

	Params::UWidget_SetRenderShear_Params Parms{};

	Parms.Shear = Shear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Scale                                                            (None)

void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderScale");

	Params::UWidget_SetRenderScale_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (None)

void UWidget::SetRenderOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderOpacity");

	Params::UWidget_SetRenderOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetNavigationRuleExplicit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (None)
// class UWidget*                     InWidget                                                         (None)

void UWidget::SetNavigationRuleExplicit(enum class EUINavigation Direction, class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleExplicit");

	Params::UWidget_SetNavigationRuleExplicit_Params Parms{};

	Parms.Direction = Direction;
	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetNavigationRuleCustomBoundary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (None)
// FDelegateProperty_                 InCustomDelegate                                                 (None)

void UWidget::SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustomBoundary");

	Params::UWidget_SetNavigationRuleCustomBoundary_Params Parms{};

	Parms.Direction = Direction;
	Parms.InCustomDelegate = InCustomDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetNavigationRuleCustom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (None)
// FDelegateProperty_                 InCustomDelegate                                                 (None)

void UWidget::SetNavigationRuleCustom(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustom");

	Params::UWidget_SetNavigationRuleCustom_Params Parms{};

	Parms.Direction = Direction;
	Parms.InCustomDelegate = InCustomDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetNavigationRuleBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (None)
// enum class EUINavigationRule       Rule                                                             (None)

void UWidget::SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleBase");

	Params::UWidget_SetNavigationRuleBase_Params Parms{};

	Parms.Direction = Direction;
	Parms.Rule = Rule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (None)
// enum class EUINavigationRule       Rule                                                             (None)
// class FName                        WidgetToFocus                                                    (None)

void UWidget::SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRule");

	Params::UWidget_SetNavigationRule_Params Parms{};

	Parms.Direction = Direction;
	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetKeyboardFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsEnabled                                                     (None)

void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetIsEnabled");

	Params::UWidget_SetIsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMouseCursor            InCursor                                                         (None)

void UWidget::SetCursor(enum class EMouseCursor InCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetCursor");

	Params::UWidget_SetCursor_Params Parms{};

	Parms.InCursor = InCursor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetClipping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetClipping         InClipping                                                       (None)

void UWidget::SetClipping(enum class EWidgetClipping InClipping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetClipping");

	Params::UWidget_SetClipping_Params Parms{};

	Parms.InClipping = InClipping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigationRule       Rule                                                             (None)
// class FName                        WidgetToFocus                                                    (None)

void UWidget::SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetAllNavigationRules");

	Params::UWidget_SetAllNavigationRules_Params Parms{};

	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ResetCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ResetCursor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidget::RemoveFromParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "RemoveFromParent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (None)

void UWidget::OnReply__DelegateSignature(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnReply__DelegateSignature");

	Params::UWidget_OnReply__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnPointerEvent__DelegateSignature");

	Params::UWidget_OnPointerEvent__DelegateSignature_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (None)
// FDelegateProperty_                 Delegate                                                         (None)

void UWidget::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_RemoveFieldValueChangedDelegate");

	Params::UWidget_K2_RemoveFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (None)

void UWidget::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_BroadcastFieldValueChanged");

	Params::UWidget_K2_BroadcastFieldValueChanged_Params Parms{};

	Parms.FieldId = FieldId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (None)
// FDelegateProperty_                 Delegate                                                         (None)

void UWidget::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_AddFieldValueChangedDelegate");

	Params::UWidget_K2_AddFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::IsVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsVisible");

	Params::UWidget_IsVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::IsRendered(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsRendered");

	Params::UWidget_IsRendered_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::IsInViewport(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsInViewport");

	Params::UWidget_IsInViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::IsHovered(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsHovered");

	Params::UWidget_IsHovered_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::InvalidateLayoutAndVolatility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "InvalidateLayoutAndVolatility");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// bool                               ReturnValue                                                      (None)

void UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocusedDescendants");

	Params::UWidget_HasUserFocusedDescendants_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// bool                               ReturnValue                                                      (None)

void UWidget::HasUserFocus(class APlayerController* PlayerController, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocus");

	Params::UWidget_HasUserFocus_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasMouseCaptureByUser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              UserIndex                                                        (None)
// int32                              PointerIndex                                                     (None)
// bool                               ReturnValue                                                      (None)

void UWidget::HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCaptureByUser");

	Params::UWidget_HasMouseCaptureByUser_Params Parms{};

	Parms.UserIndex = UserIndex;
	Parms.PointerIndex = PointerIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::HasMouseCapture(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCapture");

	Params::UWidget_HasMouseCapture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::HasKeyboardFocus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasKeyboardFocus");

	Params::UWidget_HasKeyboardFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::HasFocusedDescendants(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasFocusedDescendants");

	Params::UWidget_HasFocusedDescendants_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::HasAnyUserFocus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasAnyUserFocus");

	Params::UWidget_HasAnyUserFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UWidget::GetWidget__DelegateSignature(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetWidget__DelegateSignature");

	Params::UWidget_GetWidget__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)

void UWidget::GetVisibility(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetVisibility");

	Params::UWidget_GetVisibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetTickSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (None)

void UWidget::GetTickSpaceGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetTickSpaceGeometry");

	Params::UWidget_GetTickSpaceGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UWidget::GetText__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetText__DelegateSignature");

	Params::UWidget_GetText__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)

void UWidget::GetSlateVisibility__DelegateSignature(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateVisibility__DelegateSignature");

	Params::UWidget_GetSlateVisibility__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (None)

void UWidget::GetSlateColor__DelegateSignature(const struct FSlateColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateColor__DelegateSignature");

	Params::UWidget_GetSlateColor__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (None)

void UWidget::GetSlateBrush__DelegateSignature(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateBrush__DelegateSignature");

	Params::UWidget_GetSlateBrush__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidget::GetRenderTransformAngle(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderTransformAngle");

	Params::UWidget_GetRenderTransformAngle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetRenderOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidget::GetRenderOpacity(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderOpacity");

	Params::UWidget_GetRenderOpacity_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                ReturnValue                                                      (None)

void UWidget::GetParent(class UPanelWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetParent");

	Params::UWidget_GetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetPaintSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (None)

void UWidget::GetPaintSpaceGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetPaintSpaceGeometry");

	Params::UWidget_GetPaintSpaceGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetOwningPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (None)

void UWidget::GetOwningPlayer(class APlayerController* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningPlayer");

	Params::UWidget_GetOwningPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetOwningLocalPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (None)

void UWidget::GetOwningLocalPlayer(class ULocalPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningLocalPlayer");

	Params::UWidget_GetOwningLocalPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (None)

void UWidget::GetMouseCursor__DelegateSignature(enum class EMouseCursor ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetMouseCursor__DelegateSignature");

	Params::UWidget_GetMouseCursor__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)

void UWidget::GetLinearColor__DelegateSignature(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetLinearColor__DelegateSignature");

	Params::UWidget_GetLinearColor__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetIsThisAndParentsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::GetIsThisAndParentsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsThisAndParentsEnabled");

	Params::UWidget_GetIsThisAndParentsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::GetIsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsEnabled");

	Params::UWidget_GetIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UWidget::GetInt32__DelegateSignature(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetInt32__DelegateSignature");

	Params::UWidget_GetInt32__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetGameInstance
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameInstance*               ReturnValue                                                      (None)

void UWidget::GetGameInstance(class UGameInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetGameInstance");

	Params::UWidget_GetGameInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidget::GetFloat__DelegateSignature(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetFloat__DelegateSignature");

	Params::UWidget_GetFloat__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UWidget::GetDesiredSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetDesiredSize");

	Params::UWidget_GetDesiredSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetClipping         ReturnValue                                                      (None)

void UWidget::GetClipping(enum class EWidgetClipping ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetClipping");

	Params::UWidget_GetClipping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (None)

void UWidget::GetCheckBoxState__DelegateSignature(enum class ECheckBoxState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCheckBoxState__DelegateSignature");

	Params::UWidget_GetCheckBoxState__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (None)

void UWidget::GetCachedGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCachedGeometry");

	Params::UWidget_GetCachedGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidget::GetBool__DelegateSignature(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetBool__DelegateSignature");

	Params::UWidget_GetBool__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetAccessibleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UWidget::GetAccessibleText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleText");

	Params::UWidget_GetAccessibleText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetAccessibleSummaryText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UWidget::GetAccessibleSummaryText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleSummaryText");

	Params::UWidget_GetAccessibleSummaryText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Item                                                             (None)
// class UWidget*                     ReturnValue                                                      (None)

void UWidget::GenerateWidgetForString__DelegateSignature(const class FString& Item, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForString__DelegateSignature");

	Params::UWidget_GenerateWidgetForString__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (ZeroConstructor)
// class UWidget*                     ReturnValue                                                      (None)

void UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForObject__DelegateSignature");

	Params::UWidget_GenerateWidgetForObject__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (None)

void UWidget::ForceVolatile(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceVolatile");

	Params::UWidget_ForceVolatile_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ForceLayoutPrepass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceLayoutPrepass");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UserWidget
// (None)

class UClass* UUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserWidget");

	return Clss;
}


// UserWidget UMG.Default__UserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserWidget* UUserWidget::GetDefaultObj()
{
	static class UUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserWidget*>(UUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::UnregisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnregisterInputComponent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationStarted");

	Params::UUserWidget_UnbindFromAnimationStarted_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationFinished");

	Params::UUserWidget_UnbindFromAnimationFinished_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (None)

void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationStarted");

	Params::UUserWidget_UnbindAllFromAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (None)

void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationFinished");

	Params::UUserWidget_UnbindAllFromAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Tick");

	Params::UUserWidget_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (None)
// enum class EInputEvent             EventType                                                        (None)

void UUserWidget::StopListeningForInputAction(class FName ActionName, enum class EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForInputAction");

	Params::UUserWidget_StopListeningForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::StopListeningForAllInputActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForAllInputActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.StopAnimationsAndLatentActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::StopAnimationsAndLatentActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimationsAndLatentActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.StopAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)

void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimation");

	Params::UUserWidget_StopAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::StopAllAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAllAnimations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Position                                                         (None)
// bool                               bRemoveDPIScale                                                  (None)

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPositionInViewport");

	Params::UUserWidget_SetPositionInViewport_Params Parms{};

	Parms.Position = Position;
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// float                              PlaybackSpeed                                                    (None)

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPlaybackSpeed");

	Params::UUserWidget_SetPlaybackSpeed_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPadding");

	Params::UUserWidget_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           LocalPlayerController                                            (None)

void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetOwningPlayer");

	Params::UUserWidget_SetOwningPlayer_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// int32                              NumLoopsToPlay                                                   (None)

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetNumLoopsToPlay");

	Params::UUserWidget_SetNumLoopsToPlay_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (None)

void UUserWidget::SetInputActionPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionPriority");

	Params::UUserWidget_SetInputActionPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (None)

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionBlocking");

	Params::UUserWidget_SetInputActionBlocking_Params Parms{};

	Parms.bShouldBlock = bShouldBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (None)

void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetForegroundColor");

	Params::UUserWidget_SetForegroundColor_Params Parms{};

	Parms.InForegroundColor = InForegroundColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (None)

void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetDesiredSizeInViewport");

	Params::UUserWidget_SetDesiredSizeInViewport_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (None)

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetColorAndOpacity");

	Params::UUserWidget_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// float                              InTime                                                           (None)

void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnimationCurrentTime");

	Params::UUserWidget_SetAnimationCurrentTime_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    Anchors                                                          (None)

void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnchorsInViewport");

	Params::UUserWidget_SetAnchorsInViewport_Params Parms{};

	Parms.Anchors = Anchors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Alignment                                                        (None)

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAlignmentInViewport");

	Params::UUserWidget_SetAlignmentInViewport_Params Parms{};

	Parms.Alignment = Alignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)

void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ReverseAnimation");

	Params::UUserWidget_ReverseAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.RemoveFromViewport
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::RemoveFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveFromViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.RemoveExtensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InExtensionType                                                  (None)

void UUserWidget::RemoveExtensions(class UClass* InExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtensions");

	Params::UUserWidget_RemoveExtensions_Params Parms{};

	Parms.InExtensionType = InExtensionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.RemoveExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidgetExtension*        InExtension                                                      (None)

void UUserWidget::RemoveExtension(class UUserWidgetExtension* InExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtension");

	Params::UUserWidget_RemoveExtension_Params Parms{};

	Parms.InExtension = InExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::RegisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RegisterInputComponent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PreConstruct");

	Params::UUserWidget_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  SoundToPlay                                                      (None)

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlaySound");

	Params::UUserWidget_PlaySound_Params Parms{};

	Parms.SoundToPlay = SoundToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimationTimeRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ZeroConstructor)
// float                              StartAtTime                                                      (None)
// float                              EndAtTime                                                        (None)
// int32                              NumLoopsToPlay                                                   (None)
// enum class EUMGSequencePlayMode    PlayMode                                                         (None)
// float                              PlaybackSpeed                                                    (None)
// bool                               bRestoreState                                                    (None)
// class UUMGSequencePlayer*          ReturnValue                                                      (None)

void UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationTimeRange");

	Params::UUserWidget_PlayAnimationTimeRange_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimationReverse
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ZeroConstructor)
// float                              PlaybackSpeed                                                    (None)
// bool                               bRestoreState                                                    (None)
// class UUMGSequencePlayer*          ReturnValue                                                      (None)

void UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationReverse");

	Params::UUserWidget_PlayAnimationReverse_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimationForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ZeroConstructor)
// float                              PlaybackSpeed                                                    (None)
// bool                               bRestoreState                                                    (None)
// class UUMGSequencePlayer*          ReturnValue                                                      (None)

void UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationForward");

	Params::UUserWidget_PlayAnimationForward_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ZeroConstructor)
// float                              StartAtTime                                                      (None)
// int32                              NumLoopsToPlay                                                   (None)
// enum class EUMGSequencePlayMode    PlayMode                                                         (None)
// float                              PlaybackSpeed                                                    (None)
// bool                               bRestoreState                                                    (None)
// class UUMGSequencePlayer*          ReturnValue                                                      (None)

void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimation");

	Params::UUserWidget_PlayAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// float                              ReturnValue                                                      (None)

void UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PauseAnimation");

	Params::UUserWidget_PauseAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               InTouchEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchStarted");

	Params::UUserWidget_OnTouchStarted_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               InTouchEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchMoved");

	Params::UUserWidget_OnTouchMoved_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               GestureEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchGesture");

	Params::UUserWidget_OnTouchGesture_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.GestureEvent = GestureEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnTouchForceChanged
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               InTouchEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchForceChanged");

	Params::UUserWidget_OnTouchForceChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               InTouchEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchEnded");

	Params::UUserWidget_OnTouchEnded_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnRemovedFromFocusPath");

	Params::UUserWidget_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewMouseButtonDown");

	Params::UUserWidget_OnPreviewMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewKeyDown");

	Params::UUserWidget_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (None)

void UUserWidget::OnPaint(const struct FPaintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPaint");

	Params::UUserWidget_OnPaint_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseWheel");

	Params::UUserWidget_OnMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseMove");

	Params::UUserWidget_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (None)

void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseLeave");

	Params::UUserWidget_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)

void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseEnter");

	Params::UUserWidget_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseCaptureLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::OnMouseCaptureLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseCaptureLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonUp");

	Params::UUserWidget_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDown");

	Params::UUserWidget_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (None)
// struct FPointerEvent               InMouseEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDoubleClick");

	Params::UUserWidget_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FMotionEvent                InMotionEvent                                                    (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMotionDetected");

	Params::UUserWidget_OnMotionDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InMotionEvent = InMotionEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyUp");

	Params::UUserWidget_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyDown");

	Params::UUserWidget_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FCharacterEvent             InCharacterEvent                                                 (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyChar");

	Params::UUserWidget_OnKeyChar_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InCharacterEvent = InCharacterEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FFocusEvent                 InFocusEvent                                                     (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusReceived");

	Params::UUserWidget_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusLost");

	Params::UUserWidget_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               PointerEvent                                                     (None)
// class UDragDropOperation*          Operation                                                        (None)
// bool                               ReturnValue                                                      (None)

void UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDrop");

	Params::UUserWidget_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               PointerEvent                                                     (None)
// class UDragDropOperation*          Operation                                                        (None)
// bool                               ReturnValue                                                      (None)

void UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragOver");

	Params::UUserWidget_OnDragOver_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (None)
// class UDragDropOperation*          Operation                                                        (None)

void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragLeave");

	Params::UUserWidget_OnDragLeave_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               PointerEvent                                                     (None)
// class UDragDropOperation*          Operation                                                        (None)

void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragEnter");

	Params::UUserWidget_OnDragEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               PointerEvent                                                     (None)
// class UDragDropOperation*          Operation                                                        (None)

void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragDetected");

	Params::UUserWidget_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (None)
// class UDragDropOperation*          Operation                                                        (None)

void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragCancelled");

	Params::UUserWidget_OnDragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (None)

void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationStarted");

	Params::UUserWidget_OnAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (None)

void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationFinished");

	Params::UUserWidget_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnalogValueChanged");

	Params::UUserWidget_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAddedToFocusPath");

	Params::UUserWidget_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (None)
// enum class EInputEvent             EventType                                                        (None)
// bool                               bConsume                                                         (None)
// FDelegateProperty_                 Callback                                                         (None)

void UUserWidget::ListenForInputAction(class FName ActionName, enum class EInputEvent EventType, bool bConsume, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ListenForInputAction");

	Params::UUserWidget_ListenForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;
	Parms.bConsume = bConsume;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUserWidget::IsPlayingAnimation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsPlayingAnimation");

	Params::UUserWidget_IsPlayingAnimation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (None)
// bool                               ReturnValue                                                      (None)

void UUserWidget::IsListeningForInputAction(class FName ActionName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsListeningForInputAction");

	Params::UUserWidget_IsListeningForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUserWidget::IsInteractable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsInteractable");

	Params::UUserWidget_IsInteractable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUserWidget::IsAnyAnimationPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnyAnimationPlaying");

	Params::UUserWidget_IsAnyAnimationPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// bool                               ReturnValue                                                      (None)

void UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlayingForward");

	Params::UUserWidget_IsAnimationPlayingForward_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// bool                               ReturnValue                                                      (None)

void UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlaying");

	Params::UUserWidget_IsAnimationPlaying_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (None)

void UUserWidget::GetOwningPlayerPawn(class APawn* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerPawn");

	Params::UUserWidget_GetOwningPlayerPawn_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetOwningPlayerCameraManager
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*        ReturnValue                                                      (None)

void UUserWidget::GetOwningPlayerCameraManager(class APlayerCameraManager* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerCameraManager");

	Params::UUserWidget_GetOwningPlayerCameraManager_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUserWidget::GetIsVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetIsVisible");

	Params::UUserWidget_GetIsVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetExtensions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ExtensionType                                                    (ZeroConstructor)
// TArray<class UUserWidgetExtension*>ReturnValue                                                      (None)

void UUserWidget::GetExtensions(class UClass* ExtensionType, const TArray<class UUserWidgetExtension*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtensions");

	Params::UUserWidget_GetExtensions_Params Parms{};

	Parms.ExtensionType = ExtensionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetExtension
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ExtensionType                                                    (ZeroConstructor)
// class UUserWidgetExtension*        ReturnValue                                                      (None)

void UUserWidget::GetExtension(class UClass* ExtensionType, class UUserWidgetExtension* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtension");

	Params::UUserWidget_GetExtension_Params Parms{};

	Parms.ExtensionType = ExtensionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (None)
// float                              ReturnValue                                                      (None)

void UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnimationCurrentTime");

	Params::UUserWidget_GetAnimationCurrentTime_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (None)

void UUserWidget::GetAnchorsInViewport(const struct FAnchors& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnchorsInViewport");

	Params::UUserWidget_GetAnchorsInViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UUserWidget::GetAlignmentInViewport(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAlignmentInViewport");

	Params::UUserWidget_GetAlignmentInViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.FlushAnimations
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::FlushAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "FlushAnimations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.CancelLatentActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::CancelLatentActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "CancelLatentActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationStarted");

	Params::UUserWidget_BindToAnimationStarted_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationFinished");

	Params::UUserWidget_BindToAnimationFinished_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.BindToAnimationEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)
// enum class EWidgetAnimationEvent   AnimationEvent                                                   (None)
// class FName                        UserTag                                                          (None)

void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate, enum class EWidgetAnimationEvent AnimationEvent, class FName UserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationEvent");

	Params::UUserWidget_BindToAnimationEvent_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;
	Parms.AnimationEvent = AnimationEvent;
	Parms.UserTag = UserTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.AddToViewport
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (None)

void UUserWidget::AddToViewport(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToViewport");

	Params::UUserWidget_AddToViewport_Params Parms{};

	Parms.ZOrder = ZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (None)
// bool                               ReturnValue                                                      (None)

void UUserWidget::AddToPlayerScreen(int32 ZOrder, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToPlayerScreen");

	Params::UUserWidget_AddToPlayerScreen_Params Parms{};

	Parms.ZOrder = ZOrder;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.AddExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InExtensionType                                                  (ZeroConstructor)
// class UUserWidgetExtension*        ReturnValue                                                      (None)

void UUserWidget::AddExtension(class UClass* InExtensionType, class UUserWidgetExtension* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddExtension");

	Params::UUserWidget_AddExtension_Params Parms{};

	Parms.InExtensionType = InExtensionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Image
// (None)

class UClass* UImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Image");

	return Clss;
}


// Image UMG.Default__Image
// (Public, ClassDefaultObject, ArchetypeObject)

class UImage* UImage::GetDefaultObj()
{
	static class UImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UImage*>(UImage::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (None)

void UImage::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetOpacity");

	Params::UImage_SetOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetDesiredSizeOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   DesiredSize                                                      (None)

void UImage::SetDesiredSizeOverride(const struct FVector2D& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetDesiredSizeOverride");

	Params::UImage_SetDesiredSizeOverride_Params Parms{};

	Parms.DesiredSize = DesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (None)

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetColorAndOpacity");

	Params::UImage_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushTintColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 TintColor                                                        (None)

void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushTintColor");

	Params::UImage_SetBrushTintColor_Params Parms{};

	Parms.TintColor = TintColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushResourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ResourceObject                                                   (None)

void UImage::SetBrushResourceObject(class UObject* ResourceObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushResourceObject");

	Params::UImage_SetBrushResourceObject_Params Parms{};

	Parms.ResourceObject = ResourceObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)
// bool                               bMatchSize                                                       (None)

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTextureDynamic");

	Params::UImage_SetBrushFromTextureDynamic_Params Parms{};

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (None)
// bool                               bMatchSize                                                       (None)

void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTexture");

	Params::UImage_SetBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromSoftTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (None)
// bool                               bMatchSize                                                       (None)

void UImage::SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromSoftTexture");

	Params::UImage_SetBrushFromSoftTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromSoftMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>SoftMaterial                                                     (None)

void UImage::SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromSoftMaterial");

	Params::UImage_SetBrushFromSoftMaterial_Params Parms{};

	Parms.SoftMaterial = SoftMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (None)

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromMaterial");

	Params::UImage_SetBrushFromMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromAtlasInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISlateTextureAtlasInterface>AtlasRegion                                                      (None)
// bool                               bMatchSize                                                       (None)

void UImage::SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAtlasInterface");

	Params::UImage_SetBrushFromAtlasInterface_Params Parms{};

	Parms.AtlasRegion = AtlasRegion;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromAsset
// (Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (None)

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAsset");

	Params::UImage_SetBrushFromAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrush
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (None)

void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrush");

	Params::UImage_SetBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void UImage::GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "GetDynamicMaterial");

	Params::UImage_GetDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.TextLayoutWidget
// (None)

class UClass* UTextLayoutWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextLayoutWidget");

	return Clss;
}


// TextLayoutWidget UMG.Default__TextLayoutWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextLayoutWidget* UTextLayoutWidget::GetDefaultObj()
{
	static class UTextLayoutWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextLayoutWidget*>(UTextLayoutWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TextLayoutWidget.SetJustification
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (None)

void UTextLayoutWidget::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLayoutWidget", "SetJustification");

	Params::UTextLayoutWidget_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.RichTextBlock
// (None)

class UClass* URichTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlock");

	return Clss;
}


// RichTextBlock UMG.Default__RichTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlock* URichTextBlock::GetDefaultObj()
{
	static class URichTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlock*>(URichTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.RichTextBlock.SetTextTransformPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextTransformPolicy    InTransformPolicy                                                (None)

void URichTextBlock::SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextTransformPolicy");

	Params::URichTextBlock_SetTextTransformPolicy_Params Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetTextStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  NewTextStyleSet                                                  (None)

void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextStyleSet");

	Params::URichTextBlock_SetTextStyleSet_Params Parms{};

	Parms.NewTextStyleSet = NewTextStyleSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (None)

void URichTextBlock::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextOverflowPolicy");

	Params::URichTextBlock_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetText
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void URichTextBlock::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetText");

	Params::URichTextBlock_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (None)

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetMinDesiredWidth");

	Params::URichTextBlock_SetMinDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InDefaultTextStyle                                               (None)

void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultTextStyle");

	Params::URichTextBlock_SetDefaultTextStyle_Params Parms{};

	Parms.InDefaultTextStyle = InDefaultTextStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (None)

void URichTextBlock::SetDefaultStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultStrikeBrush");

	Params::URichTextBlock_SetDefaultStrikeBrush_Params Parms{};

	Parms.InStrikeBrush = InStrikeBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (None)

void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowOffset");

	Params::URichTextBlock_SetDefaultShadowOffset_Params Parms{};

	Parms.InShadowOffset = InShadowOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (None)

void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowColorAndOpacity");

	Params::URichTextBlock_SetDefaultShadowColorAndOpacity_Params Parms{};

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void URichTextBlock::SetDefaultMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultMaterial");

	Params::URichTextBlock_SetDefaultMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (None)

void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultFont");

	Params::URichTextBlock_SetDefaultFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (None)

void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultColorAndOpacity");

	Params::URichTextBlock_SetDefaultColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDecorators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              InDecoratorClasses                                               (None)

void URichTextBlock::SetDecorators(const TArray<class UClass*>& InDecoratorClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDecorators");

	Params::URichTextBlock_SetDecorators_Params Parms{};

	Parms.InDecoratorClasses = InDecoratorClasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (None)

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetAutoWrapText");

	Params::URichTextBlock_SetAutoWrapText_Params Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.RefreshTextLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URichTextBlock::RefreshTextLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "RefreshTextLayout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetTextStyleSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (None)

void URichTextBlock::GetTextStyleSet(class UDataTable* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetTextStyleSet");

	Params::URichTextBlock_GetTextStyleSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void URichTextBlock::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetText");

	Params::URichTextBlock_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetDefaultDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void URichTextBlock::GetDefaultDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDefaultDynamicMaterial");

	Params::URichTextBlock_GetDefaultDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      DecoratorClass                                                   (ZeroConstructor)
// class URichTextBlockDecorator*     ReturnValue                                                      (None)

void URichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass, class URichTextBlockDecorator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDecoratorByClass");

	Params::URichTextBlock_GetDecoratorByClass_Params Parms{};

	Parms.DecoratorClass = DecoratorClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
// (Final, Native, Public)
// Parameters:

void URichTextBlock::ClearAllDefaultStyleOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "ClearAllDefaultStyleOverrides");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.RichTextBlockDecorator
// (None)

class UClass* URichTextBlockDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlockDecorator");

	return Clss;
}


// RichTextBlockDecorator UMG.Default__RichTextBlockDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlockDecorator* URichTextBlockDecorator::GetDefaultObj()
{
	static class URichTextBlockDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlockDecorator*>(URichTextBlockDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.RichTextBlockImageDecorator
// (None)

class UClass* URichTextBlockImageDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlockImageDecorator");

	return Clss;
}


// RichTextBlockImageDecorator UMG.Default__RichTextBlockImageDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlockImageDecorator* URichTextBlockImageDecorator::GetDefaultObj()
{
	static class URichTextBlockImageDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlockImageDecorator*>(URichTextBlockImageDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.PanelWidget
// (None)

class UClass* UPanelWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PanelWidget");

	return Clss;
}


// PanelWidget UMG.Default__PanelWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPanelWidget* UPanelWidget::GetDefaultObj()
{
	static class UPanelWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPanelWidget*>(UPanelWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// bool                               ReturnValue                                                      (None)

void UPanelWidget::RemoveChildAt(int32 Index, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChildAt");

	Params::UPanelWidget_RemoveChildAt_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (None)
// bool                               ReturnValue                                                      (None)

void UPanelWidget::RemoveChild(class UWidget* Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChild");

	Params::UPanelWidget_RemoveChild_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (None)
// bool                               ReturnValue                                                      (None)

void UPanelWidget::HasChild(class UWidget* Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasChild");

	Params::UPanelWidget_HasChild_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UPanelWidget::HasAnyChildren(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasAnyChildren");

	Params::UPanelWidget_HasAnyChildren_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UPanelWidget::GetChildrenCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildrenCount");

	Params::UPanelWidget_GetChildrenCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (None)
// int32                              ReturnValue                                                      (None)

void UPanelWidget::GetChildIndex(class UWidget* Content, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildIndex");

	Params::UPanelWidget_GetChildIndex_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (None)
// class UWidget*                     ReturnValue                                                      (None)

void UPanelWidget::GetChildAt(int32 Index, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildAt");

	Params::UPanelWidget_GetChildAt_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.GetAllChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (None)

void UPanelWidget::GetAllChildren(const TArray<class UWidget*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetAllChildren");

	Params::UPanelWidget_GetAllChildren_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.ClearChildren
// (Native, Public, BlueprintCallable)
// Parameters:

void UPanelWidget::ClearChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "ClearChildren");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UPanelSlot*                  ReturnValue                                                      (None)

void UPanelWidget::AddChild(class UWidget* Content, class UPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "AddChild");

	Params::UPanelWidget_AddChild_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ContentWidget
// (None)

class UClass* UContentWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContentWidget");

	return Clss;
}


// ContentWidget UMG.Default__ContentWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UContentWidget* UContentWidget::GetDefaultObj()
{
	static class UContentWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UContentWidget*>(UContentWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UPanelSlot*                  ReturnValue                                                      (None)

void UContentWidget::SetContent(class UWidget* Content, class UPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "SetContent");

	Params::UContentWidget_SetContent_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*                  ReturnValue                                                      (None)

void UContentWidget::GetContentSlot(class UPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContentSlot");

	Params::UContentWidget_GetContentSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UContentWidget::GetContent(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContent");

	Params::UContentWidget_GetContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Button
// (None)

class UClass* UButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button");

	return Clss;
}


// Button UMG.Default__Button
// (Public, ClassDefaultObject, ArchetypeObject)

class UButton* UButton::GetDefaultObj()
{
	static class UButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton*>(UButton::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Button.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (None)

void UButton::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetTouchMethod");

	Params::UButton_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FButtonStyle                InStyle                                                          (None)

void UButton::SetStyle(const struct FButtonStyle& InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetStyle");

	Params::UButton_SetStyle_Params Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (None)

void UButton::SetPressMethod(enum class EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetPressMethod");

	Params::UButton_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (None)

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetColorAndOpacity");

	Params::UButton_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (None)

void UButton::SetClickMethod(enum class EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetClickMethod");

	Params::UButton_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBackgroundColor                                                (None)

void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetBackgroundColor");

	Params::UButton_SetBackgroundColor_Params Parms{};

	Parms.InBackgroundColor = InBackgroundColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.MimickClicked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFromGamepad                                                     (None)

void UButton::MimickClicked(bool bFromGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "MimickClicked");

	Params::UButton_MimickClicked_Params Parms{};

	Parms.bFromGamepad = bFromGamepad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UButton::IsPressed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "IsPressed");

	Params::UButton_IsPressed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ScrollBox
// (None)

class UClass* UScrollBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBox");

	return Clss;
}


// ScrollBox UMG.Default__ScrollBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBox* UScrollBox::GetDefaultObj()
{
	static class UScrollBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBox*>(UScrollBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScrollBox.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWheelScrollMultiplier                                         (None)

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetWheelScrollMultiplier");

	Params::UScrollBox_SetWheelScrollMultiplier_Params Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollWhenFocusChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges                                        (None)

void UScrollBox::SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollWhenFocusChanges");

	Params::UScrollBox_SetScrollWhenFocusChanges_Params Parms{};

	Parms.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewScrollOffset                                                  (None)

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollOffset");

	Params::UScrollBox_SetScrollOffset_Params Parms{};

	Parms.NewScrollOffset = NewScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        NewScrollBarVisibility                                           (None)

void UScrollBox::SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollBarVisibility");

	Params::UScrollBox_SetScrollBarVisibility_Params Parms{};

	Parms.NewScrollBarVisibility = NewScrollBarVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollbarThickness
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   NewScrollbarThickness                                            (None)

void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarThickness");

	Params::UScrollBox_SetScrollbarThickness_Params Parms{};

	Parms.NewScrollbarThickness = NewScrollbarThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollbarPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     NewScrollbarPadding                                              (None)

void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarPadding");

	Params::UScrollBox_SetScrollbarPadding_Params Parms{};

	Parms.NewScrollbarPadding = NewScrollbarPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetOrientation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOrientation            NewOrientation                                                   (None)

void UScrollBox::SetOrientation(enum class EOrientation NewOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetOrientation");

	Params::UScrollBox_SetOrientation_Params Parms{};

	Parms.NewOrientation = NewOrientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetNavigationDestination
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDescendantScrollDestinationNewNavigationDestination                                         (None)

void UScrollBox::SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetNavigationDestination");

	Params::UScrollBox_SetNavigationDestination_Params Parms{};

	Parms.NewNavigationDestination = NewNavigationDestination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetConsumeMouseWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConsumeMouseWheel      NewConsumeMouseWheel                                             (None)

void UScrollBox::SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetConsumeMouseWheel");

	Params::UScrollBox_SetConsumeMouseWheel_Params Parms{};

	Parms.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetAnimateWheelScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldAnimateWheelScrolling                                     (None)

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAnimateWheelScrolling");

	Params::UScrollBox_SetAnimateWheelScrolling_Params Parms{};

	Parms.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAlwaysShowScrollbar                                           (None)

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAlwaysShowScrollbar");

	Params::UScrollBox_SetAlwaysShowScrollbar_Params Parms{};

	Parms.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetAllowOverscroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAllowOverscroll                                               (None)

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAllowOverscroll");

	Params::UScrollBox_SetAllowOverscroll_Params Parms{};

	Parms.NewAllowOverscroll = NewAllowOverscroll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     WidgetToFind                                                     (None)
// bool                               AnimateScroll                                                    (None)
// enum class EDescendantScrollDestinationScrollDestination                                                (None)
// float                              Padding                                                          (None)

void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollWidgetIntoView");

	Params::UScrollBox_ScrollWidgetIntoView_Params Parms{};

	Parms.WidgetToFind = WidgetToFind;
	Parms.AnimateScroll = AnimateScroll;
	Parms.ScrollDestination = ScrollDestination;
	Parms.Padding = Padding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollToStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollToEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetViewOffsetFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UScrollBox::GetViewOffsetFraction(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewOffsetFraction");

	Params::UScrollBox_GetViewOffsetFraction_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetViewFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UScrollBox::GetViewFraction(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewFraction");

	Params::UScrollBox_GetViewFraction_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UScrollBox::GetScrollOffsetOfEnd(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffsetOfEnd");

	Params::UScrollBox_GetScrollOffsetOfEnd_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UScrollBox::GetScrollOffset(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffset");

	Params::UScrollBox_GetScrollOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (None)

void UScrollBox::GetScrollMax(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollMax");

	Params::UScrollBox_GetScrollMax_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollContentSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UScrollBox::GetScrollContentSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollContentSize");

	Params::UScrollBox_GetScrollContentSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetPhysicalScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (None)

void UScrollBox::GetPhysicalScrollOffset(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetPhysicalScrollOffset");

	Params::UScrollBox_GetPhysicalScrollOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.EndInertialScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::EndInertialScrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "EndInertialScrolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Border
// (None)

class UClass* UBorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border");

	return Clss;
}


// Border UMG.Default__Border
// (Public, ClassDefaultObject, ArchetypeObject)

class UBorder* UBorder::GetDefaultObj()
{
	static class UBorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder*>(UBorder::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UBorder::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetVerticalAlignment");

	Params::UBorder_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetShowEffectWhenDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShowEffectWhenDisabled                                        (None)

void UBorder::SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetShowEffectWhenDisabled");

	Params::UBorder_SetShowEffectWhenDisabled_Params Parms{};

	Parms.bInShowEffectWhenDisabled = bInShowEffectWhenDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetPadding");

	Params::UBorder_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UBorder::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetHorizontalAlignment");

	Params::UBorder_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InScale                                                          (None)

void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetDesiredSizeScale");

	Params::UBorder_SetDesiredSizeScale_Params Parms{};

	Parms.InScale = InScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InContentColorAndOpacity                                         (None)

void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetContentColorAndOpacity");

	Params::UBorder_SetContentColorAndOpacity_Params Parms{};

	Parms.InContentColorAndOpacity = InContentColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (None)

void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromTexture");

	Params::UBorder_SetBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (None)

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromMaterial");

	Params::UBorder_SetBrushFromMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (None)

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromAsset");

	Params::UBorder_SetBrushFromAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (None)

void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushColor");

	Params::UBorder_SetBrushColor_Params Parms{};

	Parms.InBrushColor = InBrushColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (None)

void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrush");

	Params::UBorder_SetBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void UBorder::GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "GetDynamicMaterial");

	Params::UBorder_GetDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.EditableText
// (None)

class UClass* UEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableText");

	return Clss;
}


// EditableText UMG.Default__EditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableText* UEditableText::GetDefaultObj()
{
	static class UEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableText*>(UEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.EditableText.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (None)

void UEditableText::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetTextOverflowPolicy");

	Params::UEditableText_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void UEditableText::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetText");

	Params::UEditableText_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetMinimumDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (None)

void UEditableText::SetMinimumDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetMinimumDesiredWidth");

	Params::UEditableText_SetMinimumDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (None)

void UEditableText::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetJustification");

	Params::UEditableText_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsReadyOnly                                                   (None)

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetIsReadOnly");

	Params::UEditableText_SetIsReadOnly_Params Parms{};

	Parms.InbIsReadyOnly = InbIsReadyOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsPassword                                                    (None)

void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetIsPassword");

	Params::UEditableText_SetIsPassword_Params Parms{};

	Parms.InbIsPassword = InbIsPassword;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (None)

void UEditableText::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetHintText");

	Params::UEditableText_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void UEditableText::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFontOutlineMaterial");

	Params::UEditableText_SetFontOutlineMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void UEditableText::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFontMaterial");

	Params::UEditableText_SetFontMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (None)

void UEditableText::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFont");

	Params::UEditableText_SetFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextCommittedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextChangedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UEditableText::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetText");

	Params::UEditableText_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (None)

void UEditableText::GetJustification(enum class ETextJustify ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetJustification");

	Params::UEditableText_GetJustification_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UEditableText::GetHintText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetHintText");

	Params::UEditableText_GetHintText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (None)

void UEditableText::GetFont(const struct FSlateFontInfo& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetFont");

	Params::UEditableText_GetFont_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.NotifyFieldValueChanged
// (None)

class UClass* INotifyFieldValueChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyFieldValueChanged");

	return Clss;
}


// NotifyFieldValueChanged UMG.Default__NotifyFieldValueChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class INotifyFieldValueChanged* INotifyFieldValueChanged::GetDefaultObj()
{
	static class INotifyFieldValueChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<INotifyFieldValueChanged*>(INotifyFieldValueChanged::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.ListViewBase
// (None)

class UClass* UListViewBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListViewBase");

	return Clss;
}


// ListViewBase UMG.Default__ListViewBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UListViewBase* UListViewBase::GetDefaultObj()
{
	static class UListViewBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UListViewBase*>(UListViewBase::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ListViewBase.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWheelScrollMultiplier                                         (None)

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetWheelScrollMultiplier");

	Params::UListViewBase_SetWheelScrollMultiplier_Params Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrollOffset                                                   (None)

void UListViewBase::SetScrollOffset(float InScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollOffset");

	Params::UListViewBase_SetScrollOffset_Params Parms{};

	Parms.InScrollOffset = InScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (None)

void UListViewBase::SetScrollBarVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollBarVisibility");

	Params::UListViewBase_SetScrollBarVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.ScrollToTop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::ScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "ScrollToTop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.ScrollToBottom
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::ScrollToBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "ScrollToBottom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.RequestRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::RequestRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "RequestRefresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.RegenerateAllEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::RegenerateAllEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "RegenerateAllEntries");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UListViewBase::GetScrollOffset(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetScrollOffset");

	Params::UListViewBase_GetScrollOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (None)

void UListViewBase::GetDisplayedEntryWidgets(const TArray<class UUserWidget*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetDisplayedEntryWidgets");

	Params::UListViewBase_GetDisplayedEntryWidgets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ListView
// (None)

class UClass* UListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListView");

	return Clss;
}


// ListView UMG.Default__ListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UListView* UListView::GetDefaultObj()
{
	static class UListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UListView*>(UListView::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ListView.SetSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESelectionMode          SelectionMode                                                    (None)

void UListView::SetSelectionMode(enum class ESelectionMode SelectionMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectionMode");

	Params::UListView_SetSelectionMode_Params Parms{};

	Parms.SelectionMode = SelectionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)

void UListView::SetSelectedIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectedIndex");

	Params::UListView_SetSelectedIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.ScrollIndexIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)

void UListView::ScrollIndexIntoView(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ScrollIndexIntoView");

	Params::UListView_ScrollIndexIntoView_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)

void UListView::RemoveItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "RemoveItem");

	Params::UListView_RemoveItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.OnListItemOuterEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      ItemOuter                                                        (None)
// enum class EEndPlayReason          EndPlayReason                                                    (None)

void UListView::OnListItemOuterEndPlayed(class AActor* ItemOuter, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemOuterEndPlayed");

	Params::UListView_OnListItemOuterEndPlayed_Params Parms{};

	Parms.ItemOuter = ItemOuter;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.OnListItemEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Item                                                             (None)
// enum class EEndPlayReason          EndPlayReason                                                    (None)

void UListView::OnListItemEndPlayed(class AActor* Item, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemEndPlayed");

	Params::UListView_OnListItemEndPlayed_Params Parms{};

	Parms.Item = Item;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.NavigateToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)

void UListView::NavigateToIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "NavigateToIndex");

	Params::UListView_NavigateToIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.IsRefreshPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UListView::IsRefreshPending(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "IsRefreshPending");

	Params::UListView_IsRefreshPending_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetNumItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UListView::GetNumItems(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetNumItems");

	Params::UListView_GetNumItems_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetListItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (None)

void UListView::GetListItems(const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetListItems");

	Params::UListView_GetListItems_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (None)
// class UObject*                     ReturnValue                                                      (None)

void UListView::GetItemAt(int32 Index, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetItemAt");

	Params::UListView_GetItemAt_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (None)
// int32                              ReturnValue                                                      (None)

void UListView::GetIndexForItem(class UObject* Item, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetIndexForItem");

	Params::UListView_GetIndexForItem_Params Parms{};

	Parms.Item = Item;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.ClearListItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListView::ClearListItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ClearListItems");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_SetSelectedItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)

void UListView::BP_SetSelectedItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetSelectedItem");

	Params::UListView_BP_SetSelectedItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_SetListItems
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             InListItems                                                      (None)

void UListView::BP_SetListItems(const TArray<class UObject*>& InListItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetListItems");

	Params::UListView_BP_SetListItems_Params Parms{};

	Parms.InListItems = InListItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_SetItemSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)
// bool                               bSelected                                                        (None)

void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetItemSelection");

	Params::UListView_BP_SetItemSelection_Params Parms{};

	Parms.Item = Item;
	Parms.bSelected = bSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_ScrollItemIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)

void UListView::BP_ScrollItemIntoView(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_ScrollItemIntoView");

	Params::UListView_BP_ScrollItemIntoView_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_NavigateToItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)

void UListView::BP_NavigateToItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_NavigateToItem");

	Params::UListView_BP_NavigateToItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_IsItemVisible
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (None)
// bool                               ReturnValue                                                      (None)

void UListView::BP_IsItemVisible(class UObject* Item, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_IsItemVisible");

	Params::UListView_BP_IsItemVisible_Params Parms{};

	Parms.Item = Item;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_GetSelectedItems
// (Final, Native, Private, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>             Items                                                            (None)
// bool                               ReturnValue                                                      (None)

void UListView::BP_GetSelectedItems(const TArray<class UObject*>& Items, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItems");

	Params::UListView_BP_GetSelectedItems_Params Parms{};

	Parms.Items = Items;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_GetSelectedItem
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (None)

void UListView::BP_GetSelectedItem(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItem");

	Params::UListView_BP_GetSelectedItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_GetNumItemsSelected
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UListView::BP_GetNumItemsSelected(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetNumItemsSelected");

	Params::UListView_BP_GetNumItemsSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_ClearSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UListView::BP_ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_CancelScrollIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UListView::BP_CancelScrollIntoView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_CancelScrollIntoView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.AddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)

void UListView::AddItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "AddItem");

	Params::UListView_AddItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ListViewDesignerPreviewItem
// (None)

class UClass* UListViewDesignerPreviewItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListViewDesignerPreviewItem");

	return Clss;
}


// ListViewDesignerPreviewItem UMG.Default__ListViewDesignerPreviewItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UListViewDesignerPreviewItem* UListViewDesignerPreviewItem::GetDefaultObj()
{
	static class UListViewDesignerPreviewItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UListViewDesignerPreviewItem*>(UListViewDesignerPreviewItem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.SlateAccessibleWidgetData
// (None)

class UClass* USlateAccessibleWidgetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateAccessibleWidgetData");

	return Clss;
}


// SlateAccessibleWidgetData UMG.Default__SlateAccessibleWidgetData
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateAccessibleWidgetData* USlateAccessibleWidgetData::GetDefaultObj()
{
	static class USlateAccessibleWidgetData* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateAccessibleWidgetData*>(USlateAccessibleWidgetData::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.UserWidgetBlueprint
// (Blueprint)

class UClass* UUserWidgetBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserWidgetBlueprint");

	return Clss;
}


// UserWidgetBlueprint UMG.Default__UserWidgetBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserWidgetBlueprint* UUserWidgetBlueprint::GetDefaultObj()
{
	static class UUserWidgetBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserWidgetBlueprint*>(UUserWidgetBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.UserWidgetExtension
// (None)

class UClass* UUserWidgetExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserWidgetExtension");

	return Clss;
}


// UserWidgetExtension UMG.Default__UserWidgetExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserWidgetExtension* UUserWidgetExtension::GetDefaultObj()
{
	static class UUserWidgetExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserWidgetExtension*>(UUserWidgetExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetBlueprintGeneratedClassExtension
// (None)

class UClass* UWidgetBlueprintGeneratedClassExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClassExtension");

	return Clss;
}


// WidgetBlueprintGeneratedClassExtension UMG.Default__WidgetBlueprintGeneratedClassExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBlueprintGeneratedClassExtension* UWidgetBlueprintGeneratedClassExtension::GetDefaultObj()
{
	static class UWidgetBlueprintGeneratedClassExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBlueprintGeneratedClassExtension*>(UWidgetBlueprintGeneratedClassExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetFieldNotificationExtension
// (None)

class UClass* UWidgetFieldNotificationExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetFieldNotificationExtension");

	return Clss;
}


// WidgetFieldNotificationExtension UMG.Default__WidgetFieldNotificationExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetFieldNotificationExtension* UWidgetFieldNotificationExtension::GetDefaultObj()
{
	static class UWidgetFieldNotificationExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetFieldNotificationExtension*>(UWidgetFieldNotificationExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetNavigation
// (None)

class UClass* UWidgetNavigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetNavigation");

	return Clss;
}


// WidgetNavigation UMG.Default__WidgetNavigation
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetNavigation* UWidgetNavigation::GetDefaultObj()
{
	static class UWidgetNavigation* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetNavigation*>(UWidgetNavigation::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieScene2DTransformPropertySystem
// (None)

class UClass* UMovieScene2DTransformPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene2DTransformPropertySystem");

	return Clss;
}


// MovieScene2DTransformPropertySystem UMG.Default__MovieScene2DTransformPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene2DTransformPropertySystem* UMovieScene2DTransformPropertySystem::GetDefaultObj()
{
	static class UMovieScene2DTransformPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene2DTransformPropertySystem*>(UMovieScene2DTransformPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieScene2DTransformSection
// (None)

class UClass* UMovieScene2DTransformSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene2DTransformSection");

	return Clss;
}


// MovieScene2DTransformSection UMG.Default__MovieScene2DTransformSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene2DTransformSection* UMovieScene2DTransformSection::GetDefaultObj()
{
	static class UMovieScene2DTransformSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene2DTransformSection*>(UMovieScene2DTransformSection::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieScene2DTransformTrack
// (None)

class UClass* UMovieScene2DTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene2DTransformTrack");

	return Clss;
}


// MovieScene2DTransformTrack UMG.Default__MovieScene2DTransformTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene2DTransformTrack* UMovieScene2DTransformTrack::GetDefaultObj()
{
	static class UMovieScene2DTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene2DTransformTrack*>(UMovieScene2DTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneMarginPropertySystem
// (None)

class UClass* UMovieSceneMarginPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMarginPropertySystem");

	return Clss;
}


// MovieSceneMarginPropertySystem UMG.Default__MovieSceneMarginPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMarginPropertySystem* UMovieSceneMarginPropertySystem::GetDefaultObj()
{
	static class UMovieSceneMarginPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMarginPropertySystem*>(UMovieSceneMarginPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneMarginSection
// (None)

class UClass* UMovieSceneMarginSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMarginSection");

	return Clss;
}


// MovieSceneMarginSection UMG.Default__MovieSceneMarginSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMarginSection* UMovieSceneMarginSection::GetDefaultObj()
{
	static class UMovieSceneMarginSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMarginSection*>(UMovieSceneMarginSection::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneMarginTrack
// (None)

class UClass* UMovieSceneMarginTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMarginTrack");

	return Clss;
}


// MovieSceneMarginTrack UMG.Default__MovieSceneMarginTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMarginTrack* UMovieSceneMarginTrack::GetDefaultObj()
{
	static class UMovieSceneMarginTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMarginTrack*>(UMovieSceneMarginTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneWidgetMaterialSystem
// (None)

class UClass* UMovieSceneWidgetMaterialSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneWidgetMaterialSystem");

	return Clss;
}


// MovieSceneWidgetMaterialSystem UMG.Default__MovieSceneWidgetMaterialSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneWidgetMaterialSystem* UMovieSceneWidgetMaterialSystem::GetDefaultObj()
{
	static class UMovieSceneWidgetMaterialSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneWidgetMaterialSystem*>(UMovieSceneWidgetMaterialSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneWidgetMaterialTrack
// (None)

class UClass* UMovieSceneWidgetMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneWidgetMaterialTrack");

	return Clss;
}


// MovieSceneWidgetMaterialTrack UMG.Default__MovieSceneWidgetMaterialTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneWidgetMaterialTrack* UMovieSceneWidgetMaterialTrack::GetDefaultObj()
{
	static class UMovieSceneWidgetMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneWidgetMaterialTrack*>(UMovieSceneWidgetMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.UMGSequencePlayer
// (None)

class UClass* UUMGSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMGSequencePlayer");

	return Clss;
}


// UMGSequencePlayer UMG.Default__UMGSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UUMGSequencePlayer* UUMGSequencePlayer::GetDefaultObj()
{
	static class UUMGSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMGSequencePlayer*>(UUMGSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UMGSequencePlayer.SetUserTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InUserTag                                                        (None)

void UUMGSequencePlayer::SetUserTag(class FName InUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "SetUserTag");

	Params::UUMGSequencePlayer_SetUserTag_Params Parms{};

	Parms.InUserTag = InUserTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UMGSequencePlayer.GetUserTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UUMGSequencePlayer::GetUserTag(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "GetUserTag");

	Params::UUMGSequencePlayer_GetUserTag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UMGSequenceTickManager
// (None)

class UClass* UUMGSequenceTickManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMGSequenceTickManager");

	return Clss;
}


// UMGSequenceTickManager UMG.Default__UMGSequenceTickManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UUMGSequenceTickManager* UUMGSequenceTickManager::GetDefaultObj()
{
	static class UUMGSequenceTickManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMGSequenceTickManager*>(UUMGSequenceTickManager::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetAnimation
// (None)

class UClass* UWidgetAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetAnimation");

	return Clss;
}


// WidgetAnimation UMG.Default__WidgetAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetAnimation* UWidgetAnimation::GetDefaultObj()
{
	static class UWidgetAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetAnimation*>(UWidgetAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationStarted");

	Params::UWidgetAnimation_UnbindFromAnimationStarted_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationFinished");

	Params::UWidgetAnimation_UnbindFromAnimationFinished_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (None)

void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationStarted");

	Params::UWidgetAnimation_UnbindAllFromAnimationStarted_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (None)

void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationFinished");

	Params::UWidgetAnimation_UnbindAllFromAnimationFinished_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidgetAnimation::GetStartTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetStartTime");

	Params::UWidgetAnimation_GetStartTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidgetAnimation::GetEndTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetEndTime");

	Params::UWidgetAnimation_GetEndTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationStarted");

	Params::UWidgetAnimation_BindToAnimationStarted_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ZeroConstructor)
// FDelegateProperty_                 Delegate                                                         (None)

void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationFinished");

	Params::UWidgetAnimation_BindToAnimationFinished_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetAnimationDelegateBinding
// (None)

class UClass* UWidgetAnimationDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetAnimationDelegateBinding");

	return Clss;
}


// WidgetAnimationDelegateBinding UMG.Default__WidgetAnimationDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetAnimationDelegateBinding* UWidgetAnimationDelegateBinding::GetDefaultObj()
{
	static class UWidgetAnimationDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetAnimationDelegateBinding*>(UWidgetAnimationDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetAnimationPlayCallbackProxy
// (None)

class UClass* UWidgetAnimationPlayCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetAnimationPlayCallbackProxy");

	return Clss;
}


// WidgetAnimationPlayCallbackProxy UMG.Default__WidgetAnimationPlayCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::GetDefaultObj()
{
	static class UWidgetAnimationPlayCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetAnimationPlayCallbackProxy*>(UWidgetAnimationPlayCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (ZeroConstructor)
// class UUserWidget*                 Widget                                                           (ZeroConstructor)
// class UWidgetAnimation*            InAnimation                                                      (ZeroConstructor)
// float                              StartAtTime                                                      (None)
// float                              EndAtTime                                                        (None)
// int32                              NumLoopsToPlay                                                   (None)
// enum class EUMGSequencePlayMode    PlayMode                                                         (None)
// float                              PlaybackSpeed                                                    (None)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (None)

void UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer* Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationTimeRangeProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params Parms{};

	Parms.Result = Result;
	Parms.Widget = Widget;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (ZeroConstructor)
// class UUserWidget*                 Widget                                                           (ZeroConstructor)
// class UWidgetAnimation*            InAnimation                                                      (ZeroConstructor)
// float                              StartAtTime                                                      (None)
// int32                              NumLoopsToPlay                                                   (None)
// enum class EUMGSequencePlayMode    PlayMode                                                         (None)
// float                              PlaybackSpeed                                                    (None)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (None)

void UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer* Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params Parms{};

	Parms.Result = Result;
	Parms.Widget = Widget;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.PropertyBinding
// (None)

class UClass* UPropertyBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyBinding");

	return Clss;
}


// PropertyBinding UMG.Default__PropertyBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyBinding* UPropertyBinding::GetDefaultObj()
{
	static class UPropertyBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyBinding*>(UPropertyBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.BoolBinding
// (None)

class UClass* UBoolBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoolBinding");

	return Clss;
}


// BoolBinding UMG.Default__BoolBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoolBinding* UBoolBinding::GetDefaultObj()
{
	static class UBoolBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoolBinding*>(UBoolBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBoolBinding::GetValue(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoolBinding", "GetValue");

	Params::UBoolBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.BrushBinding
// (None)

class UClass* UBrushBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushBinding");

	return Clss;
}


// BrushBinding UMG.Default__BrushBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushBinding* UBrushBinding::GetDefaultObj()
{
	static class UBrushBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushBinding*>(UBrushBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (None)

void UBrushBinding::GetValue(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrushBinding", "GetValue");

	Params::UBrushBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.CheckedStateBinding
// (None)

class UClass* UCheckedStateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckedStateBinding");

	return Clss;
}


// CheckedStateBinding UMG.Default__CheckedStateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckedStateBinding* UCheckedStateBinding::GetDefaultObj()
{
	static class UCheckedStateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckedStateBinding*>(UCheckedStateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (None)

void UCheckedStateBinding::GetValue(enum class ECheckBoxState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckedStateBinding", "GetValue");

	Params::UCheckedStateBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ColorBinding
// (None)

class UClass* UColorBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorBinding");

	return Clss;
}


// ColorBinding UMG.Default__ColorBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UColorBinding* UColorBinding::GetDefaultObj()
{
	static class UColorBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorBinding*>(UColorBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (None)

void UColorBinding::GetSlateValue(const struct FSlateColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetSlateValue");

	Params::UColorBinding_GetSlateValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)

void UColorBinding::GetLinearValue(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetLinearValue");

	Params::UColorBinding_GetLinearValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.FloatBinding
// (None)

class UClass* UFloatBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatBinding");

	return Clss;
}


// FloatBinding UMG.Default__FloatBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFloatBinding* UFloatBinding::GetDefaultObj()
{
	static class UFloatBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatBinding*>(UFloatBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UFloatBinding::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatBinding", "GetValue");

	Params::UFloatBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Int32Binding
// (None)

class UClass* UInt32Binding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Int32Binding");

	return Clss;
}


// Int32Binding UMG.Default__Int32Binding
// (Public, ClassDefaultObject, ArchetypeObject)

class UInt32Binding* UInt32Binding::GetDefaultObj()
{
	static class UInt32Binding* Default = nullptr;

	if (!Default)
		Default = static_cast<UInt32Binding*>(UInt32Binding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UInt32Binding::GetValue(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int32Binding", "GetValue");

	Params::UInt32Binding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.MouseCursorBinding
// (None)

class UClass* UMouseCursorBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MouseCursorBinding");

	return Clss;
}


// MouseCursorBinding UMG.Default__MouseCursorBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UMouseCursorBinding* UMouseCursorBinding::GetDefaultObj()
{
	static class UMouseCursorBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UMouseCursorBinding*>(UMouseCursorBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (None)

void UMouseCursorBinding::GetValue(enum class EMouseCursor ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MouseCursorBinding", "GetValue");

	Params::UMouseCursorBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.TextBinding
// (None)

class UClass* UTextBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextBinding");

	return Clss;
}


// TextBinding UMG.Default__TextBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextBinding* UTextBinding::GetDefaultObj()
{
	static class UTextBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextBinding*>(UTextBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UTextBinding::GetTextValue(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetTextValue");

	Params::UTextBinding_GetTextValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UTextBinding::GetStringValue(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetStringValue");

	Params::UTextBinding_GetStringValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.VisibilityBinding
// (None)

class UClass* UVisibilityBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VisibilityBinding");

	return Clss;
}


// VisibilityBinding UMG.Default__VisibilityBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UVisibilityBinding* UVisibilityBinding::GetDefaultObj()
{
	static class UVisibilityBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisibilityBinding*>(UVisibilityBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)

void UVisibilityBinding::GetValue(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisibilityBinding", "GetValue");

	Params::UVisibilityBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetBinding
// (None)

class UClass* UWidgetBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBinding");

	return Clss;
}


// WidgetBinding UMG.Default__WidgetBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBinding* UWidgetBinding::GetDefaultObj()
{
	static class UWidgetBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBinding*>(UWidgetBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UWidgetBinding::GetValue(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBinding", "GetValue");

	Params::UWidgetBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.AsyncTaskDownloadImage
// (None)

class UClass* UAsyncTaskDownloadImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskDownloadImage");

	return Clss;
}


// AsyncTaskDownloadImage UMG.Default__AsyncTaskDownloadImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::GetDefaultObj()
{
	static class UAsyncTaskDownloadImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskDownloadImage*>(UAsyncTaskDownloadImage::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (None)
// class UAsyncTaskDownloadImage*     ReturnValue                                                      (None)

void UAsyncTaskDownloadImage::DownloadImage(const class FString& URL, class UAsyncTaskDownloadImage* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskDownloadImage", "DownloadImage");

	Params::UAsyncTaskDownloadImage_DownloadImage_Params Parms{};

	Parms.URL = URL;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.GameViewportSubsystem
// (None)

class UClass* UGameViewportSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameViewportSubsystem");

	return Clss;
}


// GameViewportSubsystem UMG.Default__GameViewportSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameViewportSubsystem* UGameViewportSubsystem::GetDefaultObj()
{
	static class UGameViewportSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameViewportSubsystem*>(UGameViewportSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.GameViewportSubsystem.SetWidgetSlotPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (None)
// class UWidget*                     Widget                                                           (None)
// struct FVector2D                   Position                                                         (None)
// bool                               bRemoveDPIScale                                                  (None)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (None)

void UGameViewportSubsystem::SetWidgetSlotPosition(const struct FGameViewportWidgetSlot& Slot, class UWidget* Widget, const struct FVector2D& Position, bool bRemoveDPIScale, const struct FGameViewportWidgetSlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotPosition");

	Params::UGameViewportSubsystem_SetWidgetSlotPosition_Params Parms{};

	Parms.Slot = Slot;
	Parms.Widget = Widget;
	Parms.Position = Position;
	Parms.bRemoveDPIScale = bRemoveDPIScale;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (None)
// struct FVector2D                   Size                                                             (None)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (None)

void UGameViewportSubsystem::SetWidgetSlotDesiredSize(const struct FGameViewportWidgetSlot& Slot, const struct FVector2D& Size, const struct FGameViewportWidgetSlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotDesiredSize");

	Params::UGameViewportSubsystem_SetWidgetSlotDesiredSize_Params Parms{};

	Parms.Slot = Slot;
	Parms.Size = Size;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (None)
// struct FGameViewportWidgetSlot     Slot                                                             (None)

void UGameViewportSubsystem::SetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlot");

	Params::UGameViewportSubsystem_SetWidgetSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.RemoveWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void UGameViewportSubsystem::RemoveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "RemoveWidget");

	Params::UGameViewportSubsystem_RemoveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.IsWidgetAdded
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (None)
// bool                               ReturnValue                                                      (None)

void UGameViewportSubsystem::IsWidgetAdded(class UWidget* Widget, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "IsWidgetAdded");

	Params::UGameViewportSubsystem_IsWidgetAdded_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.GetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (None)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (None)

void UGameViewportSubsystem::GetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "GetWidgetSlot");

	Params::UGameViewportSubsystem_GetWidgetSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.AddWidgetForPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class ULocalPlayer*                Player                                                           (None)
// struct FGameViewportWidgetSlot     Slot                                                             (None)

void UGameViewportSubsystem::AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidgetForPlayer");

	Params::UGameViewportSubsystem_AddWidgetForPlayer_Params Parms{};

	Parms.Widget = Widget;
	Parms.Player = Player;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GameViewportSubsystem.AddWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (None)
// struct FGameViewportWidgetSlot     Slot                                                             (None)

void UGameViewportSubsystem::AddWidget(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidget");

	Params::UGameViewportSubsystem_AddWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UserListEntry
// (None)

class UClass* IUserListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserListEntry");

	return Clss;
}


// UserListEntry UMG.Default__UserListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class IUserListEntry* IUserListEntry::GetDefaultObj()
{
	static class IUserListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<IUserListEntry*>(IUserListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (None)

void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemSelectionChanged");

	Params::IUserListEntry_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (None)

void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemExpansionChanged");

	Params::IUserListEntry_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserListEntry.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void IUserListEntry::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Class UMG.UserListEntryLibrary
// (None)

class UClass* UUserListEntryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserListEntryLibrary");

	return Clss;
}


// UserListEntryLibrary UMG.Default__UserListEntryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserListEntryLibrary* UUserListEntryLibrary::GetDefaultObj()
{
	static class UUserListEntryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserListEntryLibrary*>(UUserListEntryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserListEntryLibrary.IsListItemSelected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (None)
// bool                               ReturnValue                                                      (None)

void UUserListEntryLibrary::IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemSelected");

	Params::UUserListEntryLibrary_IsListItemSelected_Params Parms{};

	Parms.UserListEntry = UserListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserListEntryLibrary.IsListItemExpanded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (None)
// bool                               ReturnValue                                                      (None)

void UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemExpanded");

	Params::UUserListEntryLibrary_IsListItemExpanded_Params Parms{};

	Parms.UserListEntry = UserListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserListEntryLibrary.GetOwningListView
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (ZeroConstructor)
// class UListViewBase*               ReturnValue                                                      (None)

void UUserListEntryLibrary::GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry, class UListViewBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "GetOwningListView");

	Params::UUserListEntryLibrary_GetOwningListView_Params Parms{};

	Parms.UserListEntry = UserListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UserObjectListEntry
// (None)

class UClass* IUserObjectListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserObjectListEntry");

	return Clss;
}


// UserObjectListEntry UMG.Default__UserObjectListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class IUserObjectListEntry* IUserObjectListEntry::GetDefaultObj()
{
	static class IUserObjectListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<IUserObjectListEntry*>(IUserObjectListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserObjectListEntry.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (None)

void IUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntry", "OnListItemObjectSet");

	Params::IUserObjectListEntry_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Class UMG.UserObjectListEntryLibrary
// (None)

class UClass* UUserObjectListEntryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserObjectListEntryLibrary");

	return Clss;
}


// UserObjectListEntryLibrary UMG.Default__UserObjectListEntryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserObjectListEntryLibrary* UUserObjectListEntryLibrary::GetDefaultObj()
{
	static class UUserObjectListEntryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserObjectListEntryLibrary*>(UUserObjectListEntryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserObjectListEntry>UserObjectListEntry                                              (ZeroConstructor)
// class UObject*                     ReturnValue                                                      (None)

void UUserObjectListEntryLibrary::GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntryLibrary", "GetListItemObject");

	Params::UUserObjectListEntryLibrary_GetListItemObject_Params Parms{};

	Parms.UserObjectListEntry = UserObjectListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.BackgroundBlur
// (None)

class UClass* UBackgroundBlur::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackgroundBlur");

	return Clss;
}


// BackgroundBlur UMG.Default__BackgroundBlur
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackgroundBlur* UBackgroundBlur::GetDefaultObj()
{
	static class UBackgroundBlur* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackgroundBlur*>(UBackgroundBlur::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UBackgroundBlur::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetVerticalAlignment");

	Params::UBackgroundBlur_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetPadding");

	Params::UBackgroundBlur_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (None)

void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetLowQualityFallbackBrush");

	Params::UBackgroundBlur_SetLowQualityFallbackBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UBackgroundBlur::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetHorizontalAlignment");

	Params::UBackgroundBlur_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetCornerRadius
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                    InCornerRadius                                                   (None)

void UBackgroundBlur::SetCornerRadius(const struct FVector4& InCornerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetCornerRadius");

	Params::UBackgroundBlur_SetCornerRadius_Params Parms{};

	Parms.InCornerRadius = InCornerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStrength                                                       (None)

void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurStrength");

	Params::UBackgroundBlur_SetBlurStrength_Params Parms{};

	Parms.InStrength = InStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBlurRadius                                                     (None)

void UBackgroundBlur::SetBlurRadius(int32 InBlurRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurRadius");

	Params::UBackgroundBlur_SetBlurRadius_Params Parms{};

	Parms.InBlurRadius = InBlurRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInApplyAlphaToBlur                                              (None)

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetApplyAlphaToBlur");

	Params::UBackgroundBlur_SetApplyAlphaToBlur_Params Parms{};

	Parms.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.PanelSlot
// (None)

class UClass* UPanelSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PanelSlot");

	return Clss;
}


// PanelSlot UMG.Default__PanelSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UPanelSlot* UPanelSlot::GetDefaultObj()
{
	static class UPanelSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UPanelSlot*>(UPanelSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.BackgroundBlurSlot
// (None)

class UClass* UBackgroundBlurSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackgroundBlurSlot");

	return Clss;
}


// BackgroundBlurSlot UMG.Default__BackgroundBlurSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackgroundBlurSlot* UBackgroundBlurSlot::GetDefaultObj()
{
	static class UBackgroundBlurSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackgroundBlurSlot*>(UBackgroundBlurSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UBackgroundBlurSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetVerticalAlignment");

	Params::UBackgroundBlurSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetPadding");

	Params::UBackgroundBlurSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UBackgroundBlurSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetHorizontalAlignment");

	Params::UBackgroundBlurSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.BorderSlot
// (None)

class UClass* UBorderSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BorderSlot");

	return Clss;
}


// BorderSlot UMG.Default__BorderSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UBorderSlot* UBorderSlot::GetDefaultObj()
{
	static class UBorderSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderSlot*>(UBorderSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UBorderSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetVerticalAlignment");

	Params::UBorderSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetPadding");

	Params::UBorderSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UBorderSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetHorizontalAlignment");

	Params::UBorderSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ButtonSlot
// (None)

class UClass* UButtonSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonSlot");

	return Clss;
}


// ButtonSlot UMG.Default__ButtonSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UButtonSlot* UButtonSlot::GetDefaultObj()
{
	static class UButtonSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonSlot*>(UButtonSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetVerticalAlignment");

	Params::UButtonSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetPadding");

	Params::UButtonSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetHorizontalAlignment");

	Params::UButtonSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.CanvasPanel
// (None)

class UClass* UCanvasPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanvasPanel");

	return Clss;
}


// CanvasPanel UMG.Default__CanvasPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UCanvasPanel* UCanvasPanel::GetDefaultObj()
{
	static class UCanvasPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanvasPanel*>(UCanvasPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CanvasPanel.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (None)

void UCanvasPanel::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "SetColorAndOpacity");

	Params::UCanvasPanel_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UCanvasPanelSlot*            ReturnValue                                                      (None)

void UCanvasPanel::AddChildToCanvas(class UWidget* Content, class UCanvasPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "AddChildToCanvas");

	Params::UCanvasPanel_AddChildToCanvas_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.CanvasPanelSlot
// (None)

class UClass* UCanvasPanelSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanvasPanelSlot");

	return Clss;
}


// CanvasPanelSlot UMG.Default__CanvasPanelSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UCanvasPanelSlot* UCanvasPanelSlot::GetDefaultObj()
{
	static class UCanvasPanelSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanvasPanelSlot*>(UCanvasPanelSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InZOrder                                                         (None)

void UCanvasPanelSlot::SetZOrder(int32 InZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetZOrder");

	Params::UCanvasPanelSlot_SetZOrder_Params Parms{};

	Parms.InZOrder = InZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (None)

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetSize");

	Params::UCanvasPanelSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (None)

void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetPosition");

	Params::UCanvasPanelSlot_SetPosition_Params Parms{};

	Parms.InPosition = InPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InOffset                                                         (None)

void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetOffsets");

	Params::UCanvasPanelSlot_SetOffsets_Params Parms{};

	Parms.InOffset = InOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMinimumAnchors                                                 (None)

void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMinimum");

	Params::UCanvasPanelSlot_SetMinimum_Params Parms{};

	Parms.InMinimumAnchors = InMinimumAnchors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMaximumAnchors                                                 (None)

void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMaximum");

	Params::UCanvasPanelSlot_SetMaximum_Params Parms{};

	Parms.InMaximumAnchors = InMaximumAnchors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnchorData                 InLayoutData                                                     (None)

void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetLayout");

	Params::UCanvasPanelSlot_SetLayout_Params Parms{};

	Parms.InLayoutData = InLayoutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbAutoSize                                                      (None)

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAutoSize");

	Params::UCanvasPanelSlot_SetAutoSize_Params Parms{};

	Parms.InbAutoSize = InbAutoSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    InAnchors                                                        (None)

void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAnchors");

	Params::UCanvasPanelSlot_SetAnchors_Params Parms{};

	Parms.InAnchors = InAnchors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InAlignment                                                      (None)

void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAlignment");

	Params::UCanvasPanelSlot_SetAlignment_Params Parms{};

	Parms.InAlignment = InAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UCanvasPanelSlot::GetZOrder(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetZOrder");

	Params::UCanvasPanelSlot_GetZOrder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UCanvasPanelSlot::GetSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetSize");

	Params::UCanvasPanelSlot_GetSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UCanvasPanelSlot::GetPosition(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetPosition");

	Params::UCanvasPanelSlot_GetPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     ReturnValue                                                      (None)

void UCanvasPanelSlot::GetOffsets(const struct FMargin& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetOffsets");

	Params::UCanvasPanelSlot_GetOffsets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData                 ReturnValue                                                      (None)

void UCanvasPanelSlot::GetLayout(const struct FAnchorData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetLayout");

	Params::UCanvasPanelSlot_GetLayout_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UCanvasPanelSlot::GetAutoSize(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAutoSize");

	Params::UCanvasPanelSlot_GetAutoSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (None)

void UCanvasPanelSlot::GetAnchors(const struct FAnchors& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAnchors");

	Params::UCanvasPanelSlot_GetAnchors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UCanvasPanelSlot::GetAlignment(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAlignment");

	Params::UCanvasPanelSlot_GetAlignment_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.CheckBox
// (None)

class UClass* UCheckBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckBox");

	return Clss;
}


// CheckBox UMG.Default__CheckBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckBox* UCheckBox::GetDefaultObj()
{
	static class UCheckBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckBox*>(UCheckBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CheckBox.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (None)

void UCheckBox::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetTouchMethod");

	Params::UCheckBox_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (None)

void UCheckBox::SetPressMethod(enum class EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetPressMethod");

	Params::UCheckBox_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsChecked                                                      (None)

void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetIsChecked");

	Params::UCheckBox_SetIsChecked_Params Parms{};

	Parms.InIsChecked = InIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (None)

void UCheckBox::SetClickMethod(enum class EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetClickMethod");

	Params::UCheckBox_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (None)

void UCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetCheckedState");

	Params::UCheckBox_SetCheckedState_Params Parms{};

	Parms.InCheckedState = InCheckedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UCheckBox::IsPressed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsPressed");

	Params::UCheckBox_IsPressed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UCheckBox::IsChecked(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsChecked");

	Params::UCheckBox_IsChecked_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (None)

void UCheckBox::GetCheckedState(enum class ECheckBoxState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "GetCheckedState");

	Params::UCheckBox_GetCheckedState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.CircularThrobber
// (None)

class UClass* UCircularThrobber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircularThrobber");

	return Clss;
}


// CircularThrobber UMG.Default__CircularThrobber
// (Public, ClassDefaultObject, ArchetypeObject)

class UCircularThrobber* UCircularThrobber::GetDefaultObj()
{
	static class UCircularThrobber* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircularThrobber*>(UCircularThrobber::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (None)

void UCircularThrobber::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetRadius");

	Params::UCircularThrobber_SetRadius_Params Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPeriod                                                         (None)

void UCircularThrobber::SetPeriod(float InPeriod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetPeriod");

	Params::UCircularThrobber_SetPeriod_Params Parms{};

	Parms.InPeriod = InPeriod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (None)

void UCircularThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetNumberOfPieces");

	Params::UCircularThrobber_SetNumberOfPieces_Params Parms{};

	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ComboBox
// (None)

class UClass* UComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBox");

	return Clss;
}


// ComboBox UMG.Default__ComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBox* UComboBox::GetDefaultObj()
{
	static class UComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBox*>(UComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.ComboBoxKey
// (None)

class UClass* UComboBoxKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxKey");

	return Clss;
}


// ComboBoxKey UMG.Default__ComboBoxKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBoxKey* UComboBoxKey::GetDefaultObj()
{
	static class UComboBoxKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxKey*>(UComboBoxKey::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ComboBoxKey.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (None)

void UComboBoxKey::SetSelectedOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "SetSelectedOption");

	Params::UComboBoxKey_SetSelectedOption_Params Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (None)
// bool                               ReturnValue                                                      (None)

void UComboBoxKey::RemoveOption(class FName Option, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "RemoveOption");

	Params::UComboBoxKey_RemoveOption_Params Parms{};

	Parms.Option = Option;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UComboBoxKey::OnSelectionChangedEvent__DelegateSignature(class FName SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxKey::OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.ComboBoxKey.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UComboBoxKey::IsOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "IsOpen");

	Params::UComboBoxKey_IsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UComboBoxKey::GetSelectedOption(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GetSelectedOption");

	Params::UComboBoxKey_GetSelectedOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FName                        Item                                                             (None)
// class UWidget*                     ReturnValue                                                      (None)

void UComboBoxKey::GenerateWidgetEvent__DelegateSignature(class FName Item, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GenerateWidgetEvent__DelegateSignature");

	Params::UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.ComboBoxKey.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxKey::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxKey::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "ClearOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (None)

void UComboBoxKey::AddOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "AddOption");

	Params::UComboBoxKey_AddOption_Params Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ComboBoxString
// (None)

class UClass* UComboBoxString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxString");

	return Clss;
}


// ComboBoxString UMG.Default__ComboBoxString
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBoxString* UComboBoxString::GetDefaultObj()
{
	static class UComboBoxString* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxString*>(UComboBoxString::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (None)

void UComboBoxString::SetSelectedOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedOption");

	Params::UComboBoxString_SetSelectedOption_Params Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// enum class ESelectInfo             SelectInfo                                                       (None)

void UComboBoxString::SetSelectedIndex(int32 Index, enum class ESelectInfo SelectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedIndex");

	Params::UComboBoxString_SetSelectedIndex_Params Parms{};

	Parms.Index = Index;
	Parms.SelectInfo = SelectInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (None)
// bool                               ReturnValue                                                      (None)

void UComboBoxString::RemoveOption(const class FString& Option, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RemoveOption");

	Params::UComboBoxString_RemoveOption_Params Parms{};

	Parms.Option = Option;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::RefreshOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RefreshOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UMG.ComboBoxString.OnClosingEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxString::OnClosingEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnClosingEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.ComboBoxString.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UComboBoxString::IsOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "IsOpen");

	Params::UComboBoxString_IsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UComboBoxString::GetSelectedOption(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedOption");

	Params::UComboBoxString_GetSelectedOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UComboBoxString::GetSelectedIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedIndex");

	Params::UComboBoxString_GetSelectedIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UComboBoxString::GetOptionCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionCount");

	Params::UComboBoxString_GetOptionCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (None)
// class FString                      ReturnValue                                                      (None)

void UComboBoxString::GetOptionAtIndex(int32 Index, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionAtIndex");

	Params::UComboBoxString_GetOptionAtIndex_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Option                                                           (None)
// int32                              ReturnValue                                                      (None)

void UComboBoxString::FindOptionIndex(const class FString& Option, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "FindOptionIndex");

	Params::UComboBoxString_FindOptionIndex_Params Parms{};

	Parms.Option = Option;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "ClearOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (None)

void UComboBoxString::AddOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "AddOption");

	Params::UComboBoxString_AddOption_Params Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.DynamicEntryBoxBase
// (None)

class UClass* UDynamicEntryBoxBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicEntryBoxBase");

	return Clss;
}


// DynamicEntryBoxBase UMG.Default__DynamicEntryBoxBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicEntryBoxBase* UDynamicEntryBoxBase::GetDefaultObj()
{
	static class UDynamicEntryBoxBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicEntryBoxBase*>(UDynamicEntryBoxBase::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.DynamicEntryBoxBase.SetRadialSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRadialBoxSettings          InSettings                                                       (None)

void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetRadialSettings");

	Params::UDynamicEntryBoxBase_SetRadialSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InEntrySpacing                                                   (None)

void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetEntrySpacing");

	Params::UDynamicEntryBoxBase_SetEntrySpacing_Params Parms{};

	Parms.InEntrySpacing = InEntrySpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBoxBase.GetNumEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UDynamicEntryBoxBase::GetNumEntries(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetNumEntries");

	Params::UDynamicEntryBoxBase_GetNumEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBoxBase.GetAllEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (None)

void UDynamicEntryBoxBase::GetAllEntries(const TArray<class UUserWidget*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetAllEntries");

	Params::UDynamicEntryBoxBase_GetAllEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.DynamicEntryBox
// (None)

class UClass* UDynamicEntryBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicEntryBox");

	return Clss;
}


// DynamicEntryBox UMG.Default__DynamicEntryBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicEntryBox* UDynamicEntryBox::GetDefaultObj()
{
	static class UDynamicEntryBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicEntryBox*>(UDynamicEntryBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.DynamicEntryBox.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDeleteWidgets                                                   (None)

void UDynamicEntryBox::Reset(bool bDeleteWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "Reset");

	Params::UDynamicEntryBox_Reset_Params Parms{};

	Parms.bDeleteWidgets = bDeleteWidgets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBox.RemoveEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 EntryWidget                                                      (None)

void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "RemoveEntry");

	Params::UDynamicEntryBox_RemoveEntry_Params Parms{};

	Parms.EntryWidget = EntryWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UClass*                      EntryClass                                                       (ZeroConstructor)
// class UUserWidget*                 ReturnValue                                                      (None)

void UDynamicEntryBox::BP_CreateEntryOfClass(class UClass* EntryClass, class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntryOfClass");

	Params::UDynamicEntryBox_BP_CreateEntryOfClass_Params Parms{};

	Parms.EntryClass = EntryClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBox.BP_CreateEntry
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (None)

void UDynamicEntryBox::BP_CreateEntry(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntry");

	Params::UDynamicEntryBox_BP_CreateEntry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.EditableTextBox
// (None)

class UClass* UEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableTextBox");

	return Clss;
}


// EditableTextBox UMG.Default__EditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableTextBox* UEditableTextBox::GetDefaultObj()
{
	static class UEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableTextBox*>(UEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.EditableTextBox.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (None)

void UEditableTextBox::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetTextOverflowPolicy");

	Params::UEditableTextBox_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void UEditableTextBox::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetText");

	Params::UEditableTextBox_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (None)

void UEditableTextBox::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetJustification");

	Params::UEditableTextBox_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (None)

void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsReadOnly");

	Params::UEditableTextBox_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPassword                                                      (None)

void UEditableTextBox::SetIsPassword(bool bIsPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsPassword");

	Params::UEditableTextBox_SetIsPassword_Params Parms{};

	Parms.bIsPassword = bIsPassword;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void UEditableTextBox::SetHintText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetHintText");

	Params::UEditableTextBox_SetHintText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetForegroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UEditableTextBox::SetForegroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetForegroundColor");

	Params::UEditableTextBox_SetForegroundColor_Params Parms{};

	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (None)

void UEditableTextBox::SetError(class FText InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetError");

	Params::UEditableTextBox_SetError_Params Parms{};

	Parms.InError = InError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UEditableTextBox::HasError(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "HasError");

	Params::UEditableTextBox_HasError_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UEditableTextBox::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "GetText");

	Params::UEditableTextBox_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableTextBox::ClearError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "ClearError");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ExpandableArea
// (None)

class UClass* UExpandableArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExpandableArea");

	return Clss;
}


// ExpandableArea UMG.Default__ExpandableArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UExpandableArea* UExpandableArea::GetDefaultObj()
{
	static class UExpandableArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UExpandableArea*>(UExpandableArea::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (None)

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded_Animated");

	Params::UExpandableArea_SetIsExpanded_Animated_Params Parms{};

	Parms.IsExpanded = IsExpanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (None)

void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded");

	Params::UExpandableArea_SetIsExpanded_Params Parms{};

	Parms.IsExpanded = IsExpanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UExpandableArea::GetIsExpanded(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "GetIsExpanded");

	Params::UExpandableArea_GetIsExpanded_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.GridPanel
// (None)

class UClass* UGridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridPanel");

	return Clss;
}


// GridPanel UMG.Default__GridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridPanel* UGridPanel::GetDefaultObj()
{
	static class UGridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridPanel*>(UGridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.GridPanel.SetRowFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RowIndex                                                         (None)
// float                              Coefficient                                                      (None)

void UGridPanel::SetRowFill(int32 RowIndex, float Coefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetRowFill");

	Params::UGridPanel_SetRowFill_Params Parms{};

	Parms.RowIndex = RowIndex;
	Parms.Coefficient = Coefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridPanel.SetColumnFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ColumnIndex                                                      (None)
// float                              Coefficient                                                      (None)

void UGridPanel::SetColumnFill(int32 ColumnIndex, float Coefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetColumnFill");

	Params::UGridPanel_SetColumnFill_Params Parms{};

	Parms.ColumnIndex = ColumnIndex;
	Parms.Coefficient = Coefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// int32                              InRow                                                            (None)
// int32                              InColumn                                                         (None)
// class UGridSlot*                   ReturnValue                                                      (None)

void UGridPanel::AddChildToGrid(class UWidget* Content, int32 InRow, int32 InColumn, class UGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "AddChildToGrid");

	Params::UGridPanel_AddChildToGrid_Params Parms{};

	Parms.Content = Content;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.GridSlot
// (None)

class UClass* UGridSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridSlot");

	return Clss;
}


// GridSlot UMG.Default__GridSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridSlot* UGridSlot::GetDefaultObj()
{
	static class UGridSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridSlot*>(UGridSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetVerticalAlignment");

	Params::UGridSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRowSpan                                                        (None)

void UGridSlot::SetRowSpan(int32 InRowSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRowSpan");

	Params::UGridSlot_SetRowSpan_Params Parms{};

	Parms.InRowSpan = InRowSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (None)

void UGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRow");

	Params::UGridSlot_SetRow_Params Parms{};

	Parms.InRow = InRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetPadding");

	Params::UGridSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetNudge
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InNudge                                                          (None)

void UGridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetNudge");

	Params::UGridSlot_SetNudge_Params Parms{};

	Parms.InNudge = InNudge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InLayer                                                          (None)

void UGridSlot::SetLayer(int32 InLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetLayer");

	Params::UGridSlot_SetLayer_Params Parms{};

	Parms.InLayer = InLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetHorizontalAlignment");

	Params::UGridSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumnSpan                                                     (None)

void UGridSlot::SetColumnSpan(int32 InColumnSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumnSpan");

	Params::UGridSlot_SetColumnSpan_Params Parms{};

	Parms.InColumnSpan = InColumnSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (None)

void UGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumn");

	Params::UGridSlot_SetColumn_Params Parms{};

	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.HorizontalBox
// (None)

class UClass* UHorizontalBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HorizontalBox");

	return Clss;
}


// HorizontalBox UMG.Default__HorizontalBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UHorizontalBox* UHorizontalBox::GetDefaultObj()
{
	static class UHorizontalBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UHorizontalBox*>(UHorizontalBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UHorizontalBoxSlot*          ReturnValue                                                      (None)

void UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content, class UHorizontalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBox", "AddChildToHorizontalBox");

	Params::UHorizontalBox_AddChildToHorizontalBox_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.HorizontalBoxSlot
// (None)

class UClass* UHorizontalBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HorizontalBoxSlot");

	return Clss;
}


// HorizontalBoxSlot UMG.Default__HorizontalBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UHorizontalBoxSlot* UHorizontalBoxSlot::GetDefaultObj()
{
	static class UHorizontalBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UHorizontalBoxSlot*>(UHorizontalBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UHorizontalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetVerticalAlignment");

	Params::UHorizontalBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (None)

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetSize");

	Params::UHorizontalBoxSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetPadding");

	Params::UHorizontalBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UHorizontalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetHorizontalAlignment");

	Params::UHorizontalBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.InputKeySelector
// (None)

class UClass* UInputKeySelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputKeySelector");

	return Clss;
}


// InputKeySelector UMG.Default__InputKeySelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputKeySelector* UInputKeySelector::GetDefaultObj()
{
	static class UInputKeySelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputKeySelector*>(UInputKeySelector::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.InputKeySelector.SetTextBlockVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (None)

void UInputKeySelector::SetTextBlockVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetTextBlockVisibility");

	Params::UInputKeySelector_SetTextBlockVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputChord                 InSelectedKey                                                    (None)

void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetSelectedKey");

	Params::UInputKeySelector_SetSelectedKey_Params Parms{};

	Parms.InSelectedKey = InSelectedKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InNoKeySpecifiedText                                             (None)

void UInputKeySelector::SetNoKeySpecifiedText(class FText InNoKeySpecifiedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetNoKeySpecifiedText");

	Params::UInputKeySelector_SetNoKeySpecifiedText_Params Parms{};

	Parms.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InKeySelectionText                                               (None)

void UInputKeySelector::SetKeySelectionText(class FText InKeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetKeySelectionText");

	Params::UInputKeySelector_SetKeySelectionText_Params Parms{};

	Parms.InKeySelectionText = InKeySelectionText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetEscapeKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FKey>                InKeys                                                           (None)

void UInputKeySelector::SetEscapeKeys(const TArray<struct FKey>& InKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetEscapeKeys");

	Params::UInputKeySelector_SetEscapeKeys_Params Parms{};

	Parms.InKeys = InKeys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowModifierKeys                                             (None)

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetAllowModifierKeys");

	Params::UInputKeySelector_SetAllowModifierKeys_Params Parms{};

	Parms.bInAllowModifierKeys = bInAllowModifierKeys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowGamepadKeys                                              (None)

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetAllowGamepadKeys");

	Params::UInputKeySelector_SetAllowGamepadKeys_Params Parms{};

	Parms.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (None)

void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnKeySelected__DelegateSignature");

	Params::UInputKeySelector_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UInputKeySelector::GetIsSelectingKey(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "GetIsSelectingKey");

	Params::UInputKeySelector_GetIsSelectingKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.InvalidationBox
// (None)

class UClass* UInvalidationBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvalidationBox");

	return Clss;
}


// InvalidationBox UMG.Default__InvalidationBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UInvalidationBox* UInvalidationBox::GetDefaultObj()
{
	static class UInvalidationBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UInvalidationBox*>(UInvalidationBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               CanCache                                                         (None)

void UInvalidationBox::SetCanCache(bool CanCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "SetCanCache");

	Params::UInvalidationBox_SetCanCache_Params Parms{};

	Parms.CanCache = CanCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInvalidationBox::InvalidateCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "InvalidateCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UInvalidationBox::GetCanCache(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "GetCanCache");

	Params::UInvalidationBox_GetCanCache_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.MenuAnchor
// (None)

class UClass* UMenuAnchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuAnchor");

	return Clss;
}


// MenuAnchor UMG.Default__MenuAnchor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMenuAnchor* UMenuAnchor::GetDefaultObj()
{
	static class UMenuAnchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuAnchor*>(UMenuAnchor::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusOnOpen                                                     (None)

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ToggleOpen");

	Params::UMenuAnchor_ToggleOpen_Params Parms{};

	Parms.bFocusOnOpen = bFocusOnOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMenuAnchor::ShouldOpenDueToClick(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ShouldOpenDueToClick");

	Params::UMenuAnchor_ShouldOpenDueToClick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.SetPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMenuPlacement          InPlacement                                                      (None)

void UMenuAnchor::SetPlacement(enum class EMenuPlacement InPlacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "SetPlacement");

	Params::UMenuAnchor_SetPlacement_Params Parms{};

	Parms.InPlacement = InPlacement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.SetIgnoreClicksOutside
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Ignore                                                           (None)

void UMenuAnchor::SetIgnoreClicksOutside(bool Ignore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "SetIgnoreClicksOutside");

	Params::UMenuAnchor_SetIgnoreClicksOutside_Params Parms{};

	Parms.Ignore = Ignore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusMenu                                                       (None)

void UMenuAnchor::Open(bool bFocusMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "Open");

	Params::UMenuAnchor_Open_Params Parms{};

	Parms.bFocusMenu = bFocusMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMenuAnchor::IsOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "IsOpen");

	Params::UMenuAnchor_IsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMenuAnchor::HasOpenSubMenus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "HasOpenSubMenus");

	Params::UMenuAnchor_HasOpenSubMenus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (None)

void UMenuAnchor::GetUserWidget__DelegateSignature(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetUserWidget__DelegateSignature");

	Params::UMenuAnchor_GetUserWidget__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UMenuAnchor::GetMenuPosition(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetMenuPosition");

	Params::UMenuAnchor_GetMenuPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.GetIsMenuAnchorOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMenuAnchor::GetIsMenuAnchorOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetIsMenuAnchorOpen");

	Params::UMenuAnchor_GetIsMenuAnchorOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.GetIgnoreClicksOutside
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMenuAnchor::GetIgnoreClicksOutside(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetIgnoreClicksOutside");

	Params::UMenuAnchor_GetIgnoreClicksOutside_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.FitInWindow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFit                                                             (None)

void UMenuAnchor::FitInWindow(bool bFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "FitInWindow");

	Params::UMenuAnchor_FitInWindow_Params Parms{};

	Parms.bFit = bFit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMenuAnchor::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.MultiLineEditableText
// (None)

class UClass* UMultiLineEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiLineEditableText");

	return Clss;
}


// MultiLineEditableText UMG.Default__MultiLineEditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiLineEditableText* UMultiLineEditableText::GetDefaultObj()
{
	static class UMultiLineEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiLineEditableText*>(UMultiLineEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MultiLineEditableText.SetWidgetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InWidgetStyle                                                    (None)

void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetWidgetStyle");

	Params::UMultiLineEditableText_SetWidgetStyle_Params Parms{};

	Parms.InWidgetStyle = InWidgetStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void UMultiLineEditableText::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetText");

	Params::UMultiLineEditableText_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (None)

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetIsReadOnly");

	Params::UMultiLineEditableText_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (None)

void UMultiLineEditableText::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetHintText");

	Params::UMultiLineEditableText_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void UMultiLineEditableText::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontOutlineMaterial");

	Params::UMultiLineEditableText_SetFontOutlineMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void UMultiLineEditableText::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontMaterial");

	Params::UMultiLineEditableText_SetFontMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (None)

void UMultiLineEditableText::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFont");

	Params::UMultiLineEditableText_SetFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UMultiLineEditableText::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetText");

	Params::UMultiLineEditableText_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UMultiLineEditableText::GetHintText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetHintText");

	Params::UMultiLineEditableText_GetHintText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (None)

void UMultiLineEditableText::GetFont(const struct FSlateFontInfo& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetFont");

	Params::UMultiLineEditableText_GetFont_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.MultiLineEditableTextBox
// (None)

class UClass* UMultiLineEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiLineEditableTextBox");

	return Clss;
}


// MultiLineEditableTextBox UMG.Default__MultiLineEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiLineEditableTextBox* UMultiLineEditableTextBox::GetDefaultObj()
{
	static class UMultiLineEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiLineEditableTextBox*>(UMultiLineEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MultiLineEditableTextBox.SetTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InTextStyle                                                      (None)

void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetTextStyle");

	Params::UMultiLineEditableTextBox_SetTextStyle_Params Parms{};

	Parms.InTextStyle = InTextStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void UMultiLineEditableTextBox::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetText");

	Params::UMultiLineEditableTextBox_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (None)

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetIsReadOnly");

	Params::UMultiLineEditableTextBox_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (None)

void UMultiLineEditableTextBox::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetHintText");

	Params::UMultiLineEditableTextBox_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.SetForegroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UMultiLineEditableTextBox::SetForegroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetForegroundColor");

	Params::UMultiLineEditableTextBox_SetForegroundColor_Params Parms{};

	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (None)

void UMultiLineEditableTextBox::SetError(class FText InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetError");

	Params::UMultiLineEditableTextBox_SetError_Params Parms{};

	Parms.InError = InError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (None)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UMultiLineEditableTextBox::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetText");

	Params::UMultiLineEditableTextBox_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UMultiLineEditableTextBox::GetHintText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetHintText");

	Params::UMultiLineEditableTextBox_GetHintText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.NamedSlot
// (None)

class UClass* UNamedSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedSlot");

	return Clss;
}


// NamedSlot UMG.Default__NamedSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UNamedSlot* UNamedSlot::GetDefaultObj()
{
	static class UNamedSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UNamedSlot*>(UNamedSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.NamedSlotInterface
// (None)

class UClass* INamedSlotInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedSlotInterface");

	return Clss;
}


// NamedSlotInterface UMG.Default__NamedSlotInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INamedSlotInterface* INamedSlotInterface::GetDefaultObj()
{
	static class INamedSlotInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INamedSlotInterface*>(INamedSlotInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.NativeWidgetHost
// (None)

class UClass* UNativeWidgetHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NativeWidgetHost");

	return Clss;
}


// NativeWidgetHost UMG.Default__NativeWidgetHost
// (Public, ClassDefaultObject, ArchetypeObject)

class UNativeWidgetHost* UNativeWidgetHost::GetDefaultObj()
{
	static class UNativeWidgetHost* Default = nullptr;

	if (!Default)
		Default = static_cast<UNativeWidgetHost*>(UNativeWidgetHost::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.Overlay
// (None)

class UClass* UOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Overlay");

	return Clss;
}


// Overlay UMG.Default__Overlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlay* UOverlay::GetDefaultObj()
{
	static class UOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlay*>(UOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Overlay.ReplaceOverlayChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// class UWidget*                     Content                                                          (None)
// bool                               ReturnValue                                                      (None)

void UOverlay::ReplaceOverlayChildAt(int32 Index, class UWidget* Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "ReplaceOverlayChildAt");

	Params::UOverlay_ReplaceOverlayChildAt_Params Parms{};

	Parms.Index = Index;
	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UOverlaySlot*                ReturnValue                                                      (None)

void UOverlay::AddChildToOverlay(class UWidget* Content, class UOverlaySlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "AddChildToOverlay");

	Params::UOverlay_AddChildToOverlay_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.OverlaySlot
// (None)

class UClass* UOverlaySlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverlaySlot");

	return Clss;
}


// OverlaySlot UMG.Default__OverlaySlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlaySlot* UOverlaySlot::GetDefaultObj()
{
	static class UOverlaySlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlaySlot*>(UOverlaySlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UOverlaySlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetVerticalAlignment");

	Params::UOverlaySlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetPadding");

	Params::UOverlaySlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UOverlaySlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetHorizontalAlignment");

	Params::UOverlaySlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ProgressBar
// (None)

class UClass* UProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressBar");

	return Clss;
}


// ProgressBar UMG.Default__ProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UProgressBar* UProgressBar::GetDefaultObj()
{
	static class UProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressBar*>(UProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ProgressBar.SetPercentInterpolationKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InterpKey                                                        (None)

void UProgressBar::SetPercentInterpolationKey(int32 InterpKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetPercentInterpolationKey");

	Params::UProgressBar_SetPercentInterpolationKey_Params Parms{};

	Parms.InterpKey = InterpKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (None)
// int32                              InterpKey                                                        (None)

void UProgressBar::SetPercent(float InPercent, int32 InterpKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetPercent");

	Params::UProgressBar_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;
	Parms.InterpKey = InterpKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsMarquee                                                     (None)

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetIsMarquee");

	Params::UProgressBar_SetIsMarquee_Params Parms{};

	Parms.InbIsMarquee = InbIsMarquee;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (None)

void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetFillColorAndOpacity");

	Params::UProgressBar_SetFillColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ProgressBar.SetEnginePercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (None)

void UProgressBar::SetEnginePercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetEnginePercent");

	Params::UProgressBar_SetEnginePercent_Params Parms{};

	Parms.InPercent = InPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.RetainerBox
// (None)

class UClass* URetainerBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RetainerBox");

	return Clss;
}


// RetainerBox UMG.Default__RetainerBox
// (Public, ClassDefaultObject, ArchetypeObject)

class URetainerBox* URetainerBox::GetDefaultObj()
{
	static class URetainerBox* Default = nullptr;

	if (!Default)
		Default = static_cast<URetainerBox*>(URetainerBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParameter                                                 (None)

void URetainerBox::SetTextureParameter(class FName TextureParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetTextureParameter");

	Params::URetainerBox_SetTextureParameter_Params Parms{};

	Parms.TextureParameter = TextureParameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RetainerBox.SetRetainRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRetainRendering                                               (None)

void URetainerBox::SetRetainRendering(bool bInRetainRendering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetRetainRendering");

	Params::URetainerBox_SetRetainRendering_Params Parms{};

	Parms.bInRetainRendering = bInRetainRendering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RetainerBox.SetRenderingPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RenderPhase                                                      (None)
// int32                              TotalPhases                                                      (None)

void URetainerBox::SetRenderingPhase(int32 RenderPhase, int32 TotalPhases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetRenderingPhase");

	Params::URetainerBox_SetRenderingPhase_Params Parms{};

	Parms.RenderPhase = RenderPhase;
	Parms.TotalPhases = TotalPhases;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          EffectMaterial                                                   (None)

void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetEffectMaterial");

	Params::URetainerBox_SetEffectMaterial_Params Parms{};

	Parms.EffectMaterial = EffectMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URetainerBox::RequestRender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "RequestRender");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void URetainerBox::GetEffectMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "GetEffectMaterial");

	Params::URetainerBox_GetEffectMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SafeZone
// (None)

class UClass* USafeZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZone");

	return Clss;
}


// SafeZone UMG.Default__SafeZone
// (Public, ClassDefaultObject, ArchetypeObject)

class USafeZone* USafeZone::GetDefaultObj()
{
	static class USafeZone* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeZone*>(USafeZone::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SafeZone.SetSidesToPad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InPadLeft                                                        (None)
// bool                               InPadRight                                                       (None)
// bool                               InPadTop                                                         (None)
// bool                               InPadBottom                                                      (None)

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZone", "SetSidesToPad");

	Params::USafeZone_SetSidesToPad_Params Parms{};

	Parms.InPadLeft = InPadLeft;
	Parms.InPadRight = InPadRight;
	Parms.InPadTop = InPadTop;
	Parms.InPadBottom = InPadBottom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SafeZoneSlot
// (None)

class UClass* USafeZoneSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZoneSlot");

	return Clss;
}


// SafeZoneSlot UMG.Default__SafeZoneSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class USafeZoneSlot* USafeZoneSlot::GetDefaultObj()
{
	static class USafeZoneSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeZoneSlot*>(USafeZoneSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.ScaleBox
// (None)

class UClass* UScaleBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleBox");

	return Clss;
}


// ScaleBox UMG.Default__ScaleBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleBox* UScaleBox::GetDefaultObj()
{
	static class UScaleBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleBox*>(UScaleBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InUserSpecifiedScale                                             (None)

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetUserSpecifiedScale");

	Params::UScaleBox_SetUserSpecifiedScale_Params Parms{};

	Parms.InUserSpecifiedScale = InUserSpecifiedScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretchDirection       InStretchDirection                                               (None)

void UScaleBox::SetStretchDirection(enum class EStretchDirection InStretchDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretchDirection");

	Params::UScaleBox_SetStretchDirection_Params Parms{};

	Parms.InStretchDirection = InStretchDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretch                InStretch                                                        (None)

void UScaleBox::SetStretch(enum class EStretch InStretch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretch");

	Params::UScaleBox_SetStretch_Params Parms{};

	Parms.InStretch = InStretch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIgnoreInheritedScale                                          (None)

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetIgnoreInheritedScale");

	Params::UScaleBox_SetIgnoreInheritedScale_Params Parms{};

	Parms.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ScaleBoxSlot
// (None)

class UClass* UScaleBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleBoxSlot");

	return Clss;
}


// ScaleBoxSlot UMG.Default__ScaleBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleBoxSlot* UScaleBoxSlot::GetDefaultObj()
{
	static class UScaleBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleBoxSlot*>(UScaleBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UScaleBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetVerticalAlignment");

	Params::UScaleBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetPadding");

	Params::UScaleBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UScaleBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetHorizontalAlignment");

	Params::UScaleBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ScrollBar
// (None)

class UClass* UScrollBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBar");

	return Clss;
}


// ScrollBar UMG.Default__ScrollBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBar* UScrollBar::GetDefaultObj()
{
	static class UScrollBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBar*>(UScrollBar::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOffsetFraction                                                 (None)
// float                              InThumbSizeFraction                                              (None)

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBar", "SetState");

	Params::UScrollBar_SetState_Params Parms{};

	Parms.InOffsetFraction = InOffsetFraction;
	Parms.InThumbSizeFraction = InThumbSizeFraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ScrollBoxSlot
// (None)

class UClass* UScrollBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBoxSlot");

	return Clss;
}


// ScrollBoxSlot UMG.Default__ScrollBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBoxSlot* UScrollBoxSlot::GetDefaultObj()
{
	static class UScrollBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBoxSlot*>(UScrollBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScrollBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UScrollBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetVerticalAlignment");

	Params::UScrollBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetPadding");

	Params::UScrollBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UScrollBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetHorizontalAlignment");

	Params::UScrollBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SizeBox
// (None)

class UClass* USizeBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SizeBox");

	return Clss;
}


// SizeBox UMG.Default__SizeBox
// (Public, ClassDefaultObject, ArchetypeObject)

class USizeBox* USizeBox::GetDefaultObj()
{
	static class USizeBox* Default = nullptr;

	if (!Default)
		Default = static_cast<USizeBox*>(USizeBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InWidthOverride                                                  (None)

void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetWidthOverride");

	Params::USizeBox_SetWidthOverride_Params Parms{};

	Parms.InWidthOverride = InWidthOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (None)

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredWidth");

	Params::USizeBox_SetMinDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredHeight                                               (None)

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredHeight");

	Params::USizeBox_SetMinDesiredHeight_Params Parms{};

	Parms.InMinDesiredHeight = InMinDesiredHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinAspectRatio                                                 (None)

void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinAspectRatio");

	Params::USizeBox_SetMinAspectRatio_Params Parms{};

	Parms.InMinAspectRatio = InMinAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredWidth                                                (None)

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredWidth");

	Params::USizeBox_SetMaxDesiredWidth_Params Parms{};

	Parms.InMaxDesiredWidth = InMaxDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredHeight                                               (None)

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredHeight");

	Params::USizeBox_SetMaxDesiredHeight_Params Parms{};

	Parms.InMaxDesiredHeight = InMaxDesiredHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxAspectRatio                                                 (None)

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxAspectRatio");

	Params::USizeBox_SetMaxAspectRatio_Params Parms{};

	Parms.InMaxAspectRatio = InMaxAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHeightOverride                                                 (None)

void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetHeightOverride");

	Params::USizeBox_SetHeightOverride_Params Parms{};

	Parms.InHeightOverride = InHeightOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearWidthOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearWidthOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredWidth");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredHeight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinAspectRatio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredWidth");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredHeight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxAspectRatio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearHeightOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearHeightOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SizeBoxSlot
// (None)

class UClass* USizeBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SizeBoxSlot");

	return Clss;
}


// SizeBoxSlot UMG.Default__SizeBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class USizeBoxSlot* USizeBoxSlot::GetDefaultObj()
{
	static class USizeBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<USizeBoxSlot*>(USizeBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void USizeBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetVerticalAlignment");

	Params::USizeBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetPadding");

	Params::USizeBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void USizeBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetHorizontalAlignment");

	Params::USizeBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Slider
// (None)

class UClass* USlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Slider");

	return Clss;
}


// Slider UMG.Default__Slider
// (Public, ClassDefaultObject, ArchetypeObject)

class USlider* USlider::GetDefaultObj()
{
	static class USlider* Default = nullptr;

	if (!Default)
		Default = static_cast<USlider*>(USlider::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void USlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetValue");

	Params::USlider_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void USlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetStepSize");

	Params::USlider_SetStepSize_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (None)

void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetSliderHandleColor");

	Params::USlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (None)

void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetSliderBarColor");

	Params::USlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void USlider::SetMinValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetMinValue");

	Params::USlider_SetMinValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void USlider::SetMaxValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetMaxValue");

	Params::USlider_SetMaxValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (None)

void USlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetLocked");

	Params::USlider_SetLocked_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (None)

void USlider::SetIndentHandle(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetIndentHandle");

	Params::USlider_SetIndentHandle_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USlider::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetValue");

	Params::USlider_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.GetNormalizedValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USlider::GetNormalizedValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetNormalizedValue");

	Params::USlider_GetNormalizedValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Spacer
// (None)

class UClass* USpacer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spacer");

	return Clss;
}


// Spacer UMG.Default__Spacer
// (Public, ClassDefaultObject, ArchetypeObject)

class USpacer* USpacer::GetDefaultObj()
{
	static class USpacer* Default = nullptr;

	if (!Default)
		Default = static_cast<USpacer*>(USpacer::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (None)

void USpacer::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spacer", "SetSize");

	Params::USpacer_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SpinBox
// (None)

class UClass* USpinBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpinBox");

	return Clss;
}


// SpinBox UMG.Default__SpinBox
// (Public, ClassDefaultObject, ArchetypeObject)

class USpinBox* USpinBox::GetDefaultObj()
{
	static class USpinBox* Default = nullptr;

	if (!Default)
		Default = static_cast<USpinBox*>(USpinBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (None)

void USpinBox::SetValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetValue");

	Params::USpinBox_SetValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (None)

void USpinBox::SetMinValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinValue");

	Params::USpinBox_SetMinValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (None)

void USpinBox::SetMinSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinSliderValue");

	Params::USpinBox_SetMinSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (None)

void USpinBox::SetMinFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinFractionalDigits");

	Params::USpinBox_SetMinFractionalDigits_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (None)

void USpinBox::SetMaxValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxValue");

	Params::USpinBox_SetMaxValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (None)

void USpinBox::SetMaxSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxSliderValue");

	Params::USpinBox_SetMaxSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (None)

void USpinBox::SetMaxFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxFractionalDigits");

	Params::USpinBox_SetMaxFractionalDigits_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (None)

void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetForegroundColor");

	Params::USpinBox_SetForegroundColor_Params Parms{};

	Parms.InForegroundColor = InForegroundColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (None)

void USpinBox::SetDelta(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetDelta");

	Params::USpinBox_SetDelta_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (None)

void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetAlwaysUsesDeltaSnap");

	Params::USpinBox_SetAlwaysUsesDeltaSnap_Params Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (None)

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxBeginSliderMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USpinBox::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetValue");

	Params::USpinBox_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USpinBox::GetMinValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinValue");

	Params::USpinBox_GetMinValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USpinBox::GetMinSliderValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinSliderValue");

	Params::USpinBox_GetMinSliderValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void USpinBox::GetMinFractionalDigits(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinFractionalDigits");

	Params::USpinBox_GetMinFractionalDigits_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USpinBox::GetMaxValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxValue");

	Params::USpinBox_GetMaxValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USpinBox::GetMaxSliderValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxSliderValue");

	Params::USpinBox_GetMaxSliderValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void USpinBox::GetMaxFractionalDigits(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxFractionalDigits");

	Params::USpinBox_GetMaxFractionalDigits_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void USpinBox::GetDelta(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetDelta");

	Params::USpinBox_GetDelta_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void USpinBox::GetAlwaysUsesDeltaSnap(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetAlwaysUsesDeltaSnap");

	Params::USpinBox_GetAlwaysUsesDeltaSnap_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMinValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMinSliderValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMaxValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMaxSliderValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.StackBox
// (None)

class UClass* UStackBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StackBox");

	return Clss;
}


// StackBox UMG.Default__StackBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UStackBox* UStackBox::GetDefaultObj()
{
	static class UStackBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UStackBox*>(UStackBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.StackBox.ReplaceStackBoxChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// class UWidget*                     Content                                                          (None)
// bool                               ReturnValue                                                      (None)

void UStackBox::ReplaceStackBoxChildAt(int32 Index, class UWidget* Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "ReplaceStackBoxChildAt");

	Params::UStackBox_ReplaceStackBoxChildAt_Params Parms{};

	Parms.Index = Index;
	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.StackBox.AddChildToStackBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UStackBoxSlot*               ReturnValue                                                      (None)

void UStackBox::AddChildToStackBox(class UWidget* Content, class UStackBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "AddChildToStackBox");

	Params::UStackBox_AddChildToStackBox_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.StackBoxSlot
// (None)

class UClass* UStackBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StackBoxSlot");

	return Clss;
}


// StackBoxSlot UMG.Default__StackBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UStackBoxSlot* UStackBoxSlot::GetDefaultObj()
{
	static class UStackBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UStackBoxSlot*>(UStackBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.TextBlock
// (None)

class UClass* UTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextBlock");

	return Clss;
}


// TextBlock UMG.Default__TextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextBlock* UTextBlock::GetDefaultObj()
{
	static class UTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextBlock*>(UTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TextBlock.SetTextTransformPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextTransformPolicy    InTransformPolicy                                                (None)

void UTextBlock::SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetTextTransformPolicy");

	Params::UTextBlock_SetTextTransformPolicy_Params Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (None)

void UTextBlock::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetTextOverflowPolicy");

	Params::UTextBlock_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (None)

void UTextBlock::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetText");

	Params::UTextBlock_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (None)

void UTextBlock::SetString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetString");

	Params::UTextBlock_SetString_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetStrikeBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (None)

void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetStrikeBrush");

	Params::UTextBlock_SetStrikeBrush_Params Parms{};

	Parms.InStrikeBrush = InStrikeBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (None)

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetShadowOffset");

	Params::UTextBlock_SetShadowOffset_Params Parms{};

	Parms.InShadowOffset = InShadowOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (None)

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetShadowColorAndOpacity");

	Params::UTextBlock_SetShadowColorAndOpacity_Params Parms{};

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (None)

void UTextBlock::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetOpacity");

	Params::UTextBlock_SetOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (None)

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetMinDesiredWidth");

	Params::UTextBlock_SetMinDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void UTextBlock::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFontOutlineMaterial");

	Params::UTextBlock_SetFontOutlineMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (None)

void UTextBlock::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFontMaterial");

	Params::UTextBlock_SetFontMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (None)

void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFont");

	Params::UTextBlock_SetFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (None)

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetColorAndOpacity");

	Params::UTextBlock_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (None)

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetAutoWrapText");

	Params::UTextBlock_SetAutoWrapText_Params Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UTextBlock::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetText");

	Params::UTextBlock_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void UTextBlock::GetDynamicOutlineMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicOutlineMaterial");

	Params::UTextBlock_GetDynamicOutlineMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void UTextBlock::GetDynamicFontMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicFontMaterial");

	Params::UTextBlock_GetDynamicFontMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Throbber
// (None)

class UClass* UThrobber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Throbber");

	return Clss;
}


// Throbber UMG.Default__Throbber
// (Public, ClassDefaultObject, ArchetypeObject)

class UThrobber* UThrobber::GetDefaultObj()
{
	static class UThrobber* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrobber*>(UThrobber::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (None)

void UThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetNumberOfPieces");

	Params::UThrobber_SetNumberOfPieces_Params Parms{};

	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateVertically                                             (None)

void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateVertically");

	Params::UThrobber_SetAnimateVertically_Params Parms{};

	Parms.bInAnimateVertically = bInAnimateVertically;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateOpacity                                                (None)

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateOpacity");

	Params::UThrobber_SetAnimateOpacity_Params Parms{};

	Parms.bInAnimateOpacity = bInAnimateOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateHorizontally                                           (None)

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateHorizontally");

	Params::UThrobber_SetAnimateHorizontally_Params Parms{};

	Parms.bInAnimateHorizontally = bInAnimateHorizontally;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.TileView
// (None)

class UClass* UTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TileView");

	return Clss;
}


// TileView UMG.Default__TileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTileView* UTileView::GetDefaultObj()
{
	static class UTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTileView*>(UTileView::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TileView.SetEntryWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWidth                                                         (None)

void UTileView::SetEntryWidth(float NewWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "SetEntryWidth");

	Params::UTileView_SetEntryWidth_Params Parms{};

	Parms.NewWidth = NewWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TileView.SetEntryHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewHeight                                                        (None)

void UTileView::SetEntryHeight(float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "SetEntryHeight");

	Params::UTileView_SetEntryHeight_Params Parms{};

	Parms.NewHeight = NewHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TileView.GetEntryWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UTileView::GetEntryWidth(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryWidth");

	Params::UTileView_GetEntryWidth_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TileView.GetEntryHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UTileView::GetEntryHeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryHeight");

	Params::UTileView_GetEntryHeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.TreeView
// (None)

class UClass* UTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TreeView");

	return Clss;
}


// TreeView UMG.Default__TreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTreeView* UTreeView::GetDefaultObj()
{
	static class UTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTreeView*>(UTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TreeView.SetItemExpansion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (None)
// bool                               bExpandItem                                                      (None)

void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "SetItemExpansion");

	Params::UTreeView_SetItemExpansion_Params Parms{};

	Parms.Item = Item;
	Parms.bExpandItem = bExpandItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TreeView.ExpandAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTreeView::ExpandAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "ExpandAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TreeView.CollapseAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTreeView::CollapseAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "CollapseAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UniformGridPanel
// (None)

class UClass* UUniformGridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformGridPanel");

	return Clss;
}


// UniformGridPanel UMG.Default__UniformGridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformGridPanel* UUniformGridPanel::GetDefaultObj()
{
	static class UUniformGridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformGridPanel*>(UUniformGridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InSlotPadding                                                    (None)

void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetSlotPadding");

	Params::UUniformGridPanel_SetSlotPadding_Params Parms{};

	Parms.InSlotPadding = InSlotPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotWidth                                            (None)

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotWidth");

	Params::UUniformGridPanel_SetMinDesiredSlotWidth_Params Parms{};

	Parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotHeight                                           (None)

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotHeight");

	Params::UUniformGridPanel_SetMinDesiredSlotHeight_Params Parms{};

	Parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// int32                              InRow                                                            (None)
// int32                              InColumn                                                         (None)
// class UUniformGridSlot*            ReturnValue                                                      (None)

void UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int32 InRow, int32 InColumn, class UUniformGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "AddChildToUniformGrid");

	Params::UUniformGridPanel_AddChildToUniformGrid_Params Parms{};

	Parms.Content = Content;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UniformGridSlot
// (None)

class UClass* UUniformGridSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformGridSlot");

	return Clss;
}


// UniformGridSlot UMG.Default__UniformGridSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformGridSlot* UUniformGridSlot::GetDefaultObj()
{
	static class UUniformGridSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformGridSlot*>(UUniformGridSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UUniformGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetVerticalAlignment");

	Params::UUniformGridSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (None)

void UUniformGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetRow");

	Params::UUniformGridSlot_SetRow_Params Parms{};

	Parms.InRow = InRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UUniformGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetHorizontalAlignment");

	Params::UUniformGridSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (None)

void UUniformGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetColumn");

	Params::UUniformGridSlot_SetColumn_Params Parms{};

	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.VerticalBox
// (None)

class UClass* UVerticalBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerticalBox");

	return Clss;
}


// VerticalBox UMG.Default__VerticalBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerticalBox* UVerticalBox::GetDefaultObj()
{
	static class UVerticalBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerticalBox*>(UVerticalBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UVerticalBoxSlot*            ReturnValue                                                      (None)

void UVerticalBox::AddChildToVerticalBox(class UWidget* Content, class UVerticalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBox", "AddChildToVerticalBox");

	Params::UVerticalBox_AddChildToVerticalBox_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.VerticalBoxSlot
// (None)

class UClass* UVerticalBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerticalBoxSlot");

	return Clss;
}


// VerticalBoxSlot UMG.Default__VerticalBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerticalBoxSlot* UVerticalBoxSlot::GetDefaultObj()
{
	static class UVerticalBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerticalBoxSlot*>(UVerticalBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UVerticalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetVerticalAlignment");

	Params::UVerticalBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (None)

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetSize");

	Params::UVerticalBoxSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetPadding");

	Params::UVerticalBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UVerticalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetHorizontalAlignment");

	Params::UVerticalBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Viewport
// (None)

class UClass* UViewport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Viewport");

	return Clss;
}


// Viewport UMG.Default__Viewport
// (Public, ClassDefaultObject, ArchetypeObject)

class UViewport* UViewport::GetDefaultObj()
{
	static class UViewport* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewport*>(UViewport::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ActorClass                                                       (ZeroConstructor)
// class AActor*                      ReturnValue                                                      (None)

void UViewport::Spawn(class UClass* ActorClass, class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "Spawn");

	Params::UViewport_Spawn_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (None)

void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "SetViewRotation");

	Params::UViewport_SetViewRotation_Params Parms{};

	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (None)

void UViewport::SetViewLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "SetViewLocation");

	Params::UViewport_SetViewLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (None)

void UViewport::GetViewRotation(const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewRotation");

	Params::UViewport_GetViewRotation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (None)

void UViewport::GetViewportWorld(class UWorld* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewportWorld");

	Params::UViewport_GetViewportWorld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (None)

void UViewport::GetViewLocation(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewLocation");

	Params::UViewport_GetViewLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetComponent");

	return Clss;
}


// WidgetComponent UMG.Default__WidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetComponent* UWidgetComponent::GetDefaultObj()
{
	static class UWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetComponent*>(UWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetComponent.SetWindowVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWindowVisibility       InVisibility                                                     (None)

void UWidgetComponent::SetWindowVisibility(enum class EWindowVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowVisibility");

	Params::UWidgetComponent_SetWindowVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetWindowFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInWindowFocusable                                               (None)

void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowFocusable");

	Params::UWidgetComponent_SetWindowFocusable_Params Parms{};

	Parms.bInWindowFocusable = bInWindowFocusable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetWidgetSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetSpace            NewSpace                                                         (None)

void UWidgetComponent::SetWidgetSpace(enum class EWidgetSpace NewSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWidgetSpace");

	Params::UWidgetComponent_SetWidgetSpace_Params Parms{};

	Parms.NewSpace = NewSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (None)

void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWidget");

	Params::UWidgetComponent_SetWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetTwoSided
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWantTwoSided                                                    (None)

void UWidgetComponent::SetTwoSided(bool bWantTwoSided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTwoSided");

	Params::UWidgetComponent_SetTwoSided_Params Parms{};

	Parms.bWantTwoSided = bWantTwoSided;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewTintColorAndOpacity                                           (None)

void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTintColorAndOpacity");

	Params::UWidgetComponent_SetTintColorAndOpacity_Params Parms{};

	Parms.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWantTickWhenOffscreen                                           (None)

void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickWhenOffscreen");

	Params::UWidgetComponent_SetTickWhenOffscreen_Params Parms{};

	Parms.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetTickMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETickMode               InTickMode                                                       (None)

void UWidgetComponent::SetTickMode(enum class ETickMode InTickMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickMode");

	Params::UWidgetComponent_SetTickMode_Params Parms{};

	Parms.InTickMode = InTickMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetRedrawTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRedrawTime                                                     (None)

void UWidgetComponent::SetRedrawTime(float InRedrawTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetRedrawTime");

	Params::UWidgetComponent_SetRedrawTime_Params Parms{};

	Parms.InRedrawTime = InRedrawTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetPivot
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPivot                                                          (None)

void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetPivot");

	Params::UWidgetComponent_SetPivot_Params Parms{};

	Parms.InPivot = InPivot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (None)

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetOwnerPlayer");

	Params::UWidgetComponent_SetOwnerPlayer_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetManuallyRedraw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseManualRedraw                                                 (None)

void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetManuallyRedraw");

	Params::UWidgetComponent_SetManuallyRedraw_Params Parms{};

	Parms.bUseManualRedraw = bUseManualRedraw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetGeometryMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetGeometryMode     InGeometryMode                                                   (None)

void UWidgetComponent::SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetGeometryMode");

	Params::UWidgetComponent_SetGeometryMode_Params Parms{};

	Parms.InGeometryMode = InGeometryMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (None)

void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawSize");

	Params::UWidgetComponent_SetDrawSize_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInDrawAtDesiredSize                                             (None)

void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawAtDesiredSize");

	Params::UWidgetComponent_SetDrawAtDesiredSize_Params Parms{};

	Parms.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCylinderArcAngle                                               (None)

void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetCylinderArcAngle");

	Params::UWidgetComponent_SetCylinderArcAngle_Params Parms{};

	Parms.InCylinderArcAngle = InCylinderArcAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewBackgroundColor                                               (None)

void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetBackgroundColor");

	Params::UWidgetComponent_SetBackgroundColor_Params Parms{};

	Parms.NewBackgroundColor = NewBackgroundColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.RequestRenderUpdate
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRenderUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "RequestRenderUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRedraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "RequestRedraw");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.IsWidgetVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetComponent::IsWidgetVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "IsWidgetVisible");

	Params::UWidgetComponent_IsWidgetVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWindowVisiblility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWindowVisibility       ReturnValue                                                      (None)

void UWidgetComponent::GetWindowVisiblility(enum class EWindowVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowVisiblility");

	Params::UWidgetComponent_GetWindowVisiblility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWindowFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetComponent::GetWindowFocusable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowFocusable");

	Params::UWidgetComponent_GetWindowFocusable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWidgetSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetSpace            ReturnValue                                                      (None)

void UWidgetComponent::GetWidgetSpace(enum class EWidgetSpace ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidgetSpace");

	Params::UWidgetComponent_GetWidgetSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (None)

void UWidgetComponent::GetWidget(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidget");

	Params::UWidgetComponent_GetWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (None)

void UWidgetComponent::GetUserWidgetObject(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetUserWidgetObject");

	Params::UWidgetComponent_GetUserWidgetObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetTwoSided
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetComponent::GetTwoSided(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTwoSided");

	Params::UWidgetComponent_GetTwoSided_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetComponent::GetTickWhenOffscreen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTickWhenOffscreen");

	Params::UWidgetComponent_GetTickWhenOffscreen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (None)

void UWidgetComponent::GetRenderTarget(class UTextureRenderTarget2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRenderTarget");

	Params::UWidgetComponent_GetRenderTarget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetRedrawTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidgetComponent::GetRedrawTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRedrawTime");

	Params::UWidgetComponent_GetRedrawTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetComponent::GetPivot(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetPivot");

	Params::UWidgetComponent_GetPivot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (None)

void UWidgetComponent::GetOwnerPlayer(class ULocalPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetOwnerPlayer");

	Params::UWidgetComponent_GetOwnerPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void UWidgetComponent::GetMaterialInstance(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetMaterialInstance");

	Params::UWidgetComponent_GetMaterialInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetManuallyRedraw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetComponent::GetManuallyRedraw(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetManuallyRedraw");

	Params::UWidgetComponent_GetManuallyRedraw_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetGeometryMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetGeometryMode     ReturnValue                                                      (None)

void UWidgetComponent::GetGeometryMode(enum class EWidgetGeometryMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetGeometryMode");

	Params::UWidgetComponent_GetGeometryMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetComponent::GetDrawSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawSize");

	Params::UWidgetComponent_GetDrawSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetComponent::GetDrawAtDesiredSize(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawAtDesiredSize");

	Params::UWidgetComponent_GetDrawAtDesiredSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UWidgetComponent::GetCylinderArcAngle(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCylinderArcAngle");

	Params::UWidgetComponent_GetCylinderArcAngle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetCurrentDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetComponent::GetCurrentDrawSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCurrentDrawSize");

	Params::UWidgetComponent_GetCurrentDrawSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetInteractionComponent
// (SceneComponent)

class UClass* UWidgetInteractionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetInteractionComponent");

	return Clss;
}


// WidgetInteractionComponent UMG.Default__WidgetInteractionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetInteractionComponent* UWidgetInteractionComponent::GetDefaultObj()
{
	static class UWidgetInteractionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetInteractionComponent*>(UWidgetInteractionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetInteractionComponent.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     FocusWidget                                                      (None)

void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetFocus");

	Params::UWidgetInteractionComponent_SetFocus_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  HitResult                                                        (None)

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");

	Params::UWidgetInteractionComponent_SetCustomHitResult_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Characters                                                       (None)
// bool                               bRepeat                                                          (None)
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::SendKeyChar(const class FString& Characters, bool bRepeat, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SendKeyChar");

	Params::UWidgetInteractionComponent_SendKeyChar_Params Parms{};

	Parms.Characters = Characters;
	Parms.bRepeat = bRepeat;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollDelta                                                      (None)

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ScrollWheel");

	Params::UWidgetInteractionComponent_ScrollWheel_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (None)

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");

	Params::UWidgetInteractionComponent_ReleasePointerKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (None)
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleaseKey");

	Params::UWidgetInteractionComponent_ReleaseKey_Params Parms{};

	Parms.Key = Key;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (None)

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressPointerKey");

	Params::UWidgetInteractionComponent_PressPointerKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (None)
// bool                               bRepeat                                                          (None)
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressKey");

	Params::UWidgetInteractionComponent_PressKey_Params Parms{};

	Parms.Key = Key;
	Parms.bRepeat = bRepeat;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (None)
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");

	Params::UWidgetInteractionComponent_PressAndReleaseKey_Params Parms{};

	Parms.Key = Key;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::IsOverInteractableWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");

	Params::UWidgetInteractionComponent_IsOverInteractableWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::IsOverHitTestVisibleWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");

	Params::UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetInteractionComponent::IsOverFocusableWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");

	Params::UWidgetInteractionComponent_IsOverFocusableWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  ReturnValue                                                      (None)

void UWidgetInteractionComponent::GetLastHitResult(const struct FHitResult& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetLastHitResult");

	Params::UWidgetInteractionComponent_GetLastHitResult_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (None)

void UWidgetInteractionComponent::GetHoveredWidgetComponent(class UWidgetComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");

	Params::UWidgetInteractionComponent_GetHoveredWidgetComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetInteractionComponent::Get2DHitLocation(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");

	Params::UWidgetInteractionComponent_Get2DHitLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetSwitcher
// (None)

class UClass* UWidgetSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetSwitcher");

	return Clss;
}


// WidgetSwitcher UMG.Default__WidgetSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetSwitcher* UWidgetSwitcher::GetDefaultObj()
{
	static class UWidgetSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetSwitcher*>(UWidgetSwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)

void UWidgetSwitcher::SetActiveWidgetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");

	Params::UWidgetSwitcher_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidget");

	Params::UWidgetSwitcher_SetActiveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (None)
// class UWidget*                     ReturnValue                                                      (None)

void UWidgetSwitcher::GetWidgetAtIndex(int32 Index, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");

	Params::UWidgetSwitcher_GetWidgetAtIndex_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UWidgetSwitcher::GetNumWidgets(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetNumWidgets");

	Params::UWidgetSwitcher_GetNumWidgets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UWidgetSwitcher::GetActiveWidgetIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");

	Params::UWidgetSwitcher_GetActiveWidgetIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UWidgetSwitcher::GetActiveWidget(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidget");

	Params::UWidgetSwitcher_GetActiveWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetSwitcherSlot
// (None)

class UClass* UWidgetSwitcherSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetSwitcherSlot");

	return Clss;
}


// WidgetSwitcherSlot UMG.Default__WidgetSwitcherSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetSwitcherSlot* UWidgetSwitcherSlot::GetDefaultObj()
{
	static class UWidgetSwitcherSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetSwitcherSlot*>(UWidgetSwitcherSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UWidgetSwitcherSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetVerticalAlignment");

	Params::UWidgetSwitcherSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetPadding");

	Params::UWidgetSwitcherSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UWidgetSwitcherSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetHorizontalAlignment");

	Params::UWidgetSwitcherSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WindowTitleBarArea
// (None)

class UClass* UWindowTitleBarArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindowTitleBarArea");

	return Clss;
}


// WindowTitleBarArea UMG.Default__WindowTitleBarArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindowTitleBarArea* UWindowTitleBarArea::GetDefaultObj()
{
	static class UWindowTitleBarArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindowTitleBarArea*>(UWindowTitleBarArea::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UWindowTitleBarArea::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetVerticalAlignment");

	Params::UWindowTitleBarArea_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetPadding");

	Params::UWindowTitleBarArea_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UWindowTitleBarArea::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetHorizontalAlignment");

	Params::UWindowTitleBarArea_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WindowTitleBarAreaSlot
// (None)

class UClass* UWindowTitleBarAreaSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindowTitleBarAreaSlot");

	return Clss;
}


// WindowTitleBarAreaSlot UMG.Default__WindowTitleBarAreaSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindowTitleBarAreaSlot* UWindowTitleBarAreaSlot::GetDefaultObj()
{
	static class UWindowTitleBarAreaSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindowTitleBarAreaSlot*>(UWindowTitleBarAreaSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UWindowTitleBarAreaSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetVerticalAlignment");

	Params::UWindowTitleBarAreaSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetPadding");

	Params::UWindowTitleBarAreaSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetHorizontalAlignment");

	Params::UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WrapBox
// (None)

class UClass* UWrapBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WrapBox");

	return Clss;
}


// WrapBox UMG.Default__WrapBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UWrapBox* UWrapBox::GetDefaultObj()
{
	static class UWrapBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UWrapBox*>(UWrapBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPadding                                                        (None)

void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "SetInnerSlotPadding");

	Params::UWrapBox_SetInnerSlotPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBox.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UWrapBox::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "SetHorizontalAlignment");

	Params::UWrapBox_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBox.AddChildToWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (ZeroConstructor)
// class UWrapBoxSlot*                ReturnValue                                                      (None)

void UWrapBox::AddChildToWrapBox(class UWidget* Content, class UWrapBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "AddChildToWrapBox");

	Params::UWrapBox_AddChildToWrapBox_Params Parms{};

	Parms.Content = Content;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WrapBoxSlot
// (None)

class UClass* UWrapBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WrapBoxSlot");

	return Clss;
}


// WrapBoxSlot UMG.Default__WrapBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWrapBoxSlot* UWrapBoxSlot::GetDefaultObj()
{
	static class UWrapBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWrapBoxSlot*>(UWrapBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (None)

void UWrapBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetVerticalAlignment");

	Params::UWrapBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (None)

void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetPadding");

	Params::UWrapBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBoxSlot.SetNewLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InForceNewLine                                                   (None)

void UWrapBoxSlot::SetNewLine(bool InForceNewLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetNewLine");

	Params::UWrapBoxSlot_SetNewLine_Params Parms{};

	Parms.InForceNewLine = InForceNewLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (None)

void UWrapBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetHorizontalAlignment");

	Params::UWrapBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFillSpanWhenLessThan                                           (None)

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillSpanWhenLessThan");

	Params::UWrapBoxSlot_SetFillSpanWhenLessThan_Params Parms{};

	Parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbFillEmptySpace                                                (None)

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillEmptySpace");

	Params::UWrapBoxSlot_SetFillEmptySpace_Params Parms{};

	Parms.InbFillEmptySpace = InbFillEmptySpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.DragDropOperation
// (None)

class UClass* UDragDropOperation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragDropOperation");

	return Clss;
}


// DragDropOperation UMG.Default__DragDropOperation
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragDropOperation* UDragDropOperation::GetDefaultObj()
{
	static class UDragDropOperation* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragDropOperation*>(UDragDropOperation::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (None)

void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Drop");

	Params::UDragDropOperation_Drop_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (None)

void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Dragged");

	Params::UDragDropOperation_Dragged_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (None)

void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "DragCancelled");

	Params::UDragDropOperation_DragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SlateBlueprintLibrary
// (None)

class UClass* USlateBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateBlueprintLibrary");

	return Clss;
}


// SlateBlueprintLibrary UMG.Default__SlateBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateBlueprintLibrary* USlateBlueprintLibrary::GetDefaultObj()
{
	static class USlateBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateBlueprintLibrary*>(USlateBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   LocalVector                                                      (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.LocalVector = LocalVector;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   AbsoluteVector                                                   (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteVector = AbsoluteVector;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// float                              LocalScalar                                                      (None)
// float                              ReturnValue                                                      (None)

void USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.LocalScalar = LocalScalar;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// float                              AbsoluteScalar                                                   (None)
// float                              ReturnValue                                                      (None)

void USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteScalar = AbsoluteScalar;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   ScreenPosition                                                   (None)
// struct FVector2D                   LocalCoordinate                                                  (None)
// bool                               bIncludeWindowPosition                                           (None)

void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, const struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");

	Params::USlateBlueprintLibrary_ScreenToWidgetLocal_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.ScreenPosition = ScreenPosition;
	Parms.LocalCoordinate = LocalCoordinate;
	Parms.bIncludeWindowPosition = bIncludeWindowPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector2D                   ScreenPosition                                                   (None)
// struct FVector2D                   AbsoluteCoordinate                                               (None)
// bool                               bIncludeWindowPosition                                           (None)

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, const struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetAbsolute");

	Params::USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;
	Parms.bIncludeWindowPosition = bIncludeWindowPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector2D                   ScreenPosition                                                   (None)
// struct FVector2D                   ViewportPosition                                                 (None)

void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, const struct FVector2D& ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToViewport");

	Params::USlateBlueprintLibrary_ScreenToViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;
	Parms.ViewportPosition = ViewportPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   LocalCoordinate                                                  (None)
// struct FVector2D                   PixelPosition                                                    (None)
// struct FVector2D                   ViewportPosition                                                 (None)

void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, const struct FVector2D& PixelPosition, const struct FVector2D& ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToViewport");

	Params::USlateBlueprintLibrary_LocalToViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;
	Parms.PixelPosition = PixelPosition;
	Parms.ViewportPosition = ViewportPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   LocalCoordinate                                                  (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");

	Params::USlateBlueprintLibrary_LocalToAbsolute_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   AbsoluteCoordinate                                               (None)
// bool                               ReturnValue                                                      (None)

void USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");

	Params::USlateBlueprintLibrary_IsUnderLocation_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalTopLeft");

	Params::USlateBlueprintLibrary_GetLocalTopLeft_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalSize");

	Params::USlateBlueprintLibrary_GetLocalSize_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetAbsoluteSize");

	Params::USlateBlueprintLibrary_GetAbsoluteSize_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 A                                                                (ZeroConstructor)
// struct FSlateBrush                 B                                                                (None)
// bool                               ReturnValue                                                      (None)

void USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");

	Params::USlateBlueprintLibrary_EqualEqual_SlateBrush_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector2D                   AbsoluteDesktopCoordinate                                        (None)
// struct FVector2D                   PixelPosition                                                    (None)
// struct FVector2D                   ViewportPosition                                                 (None)

void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, const struct FVector2D& PixelPosition, const struct FVector2D& ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToViewport");

	Params::USlateBlueprintLibrary_AbsoluteToViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
	Parms.PixelPosition = PixelPosition;
	Parms.ViewportPosition = ViewportPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (None)
// struct FVector2D                   AbsoluteCoordinate                                               (None)
// struct FVector2D                   ReturnValue                                                      (None)

void USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");

	Params::USlateBlueprintLibrary_AbsoluteToLocal_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SlateVectorArtData
// (None)

class UClass* USlateVectorArtData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateVectorArtData");

	return Clss;
}


// SlateVectorArtData UMG.Default__SlateVectorArtData
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateVectorArtData* USlateVectorArtData::GetDefaultObj()
{
	static class USlateVectorArtData* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateVectorArtData*>(USlateVectorArtData::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UWidgetBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClass");

	return Clss;
}


// WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBlueprintGeneratedClass* UWidgetBlueprintGeneratedClass::GetDefaultObj()
{
	static class UWidgetBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBlueprintGeneratedClass*>(UWidgetBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetBlueprintLibrary
// (None)

class UClass* UWidgetBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBlueprintLibrary");

	return Clss;
}


// WidgetBlueprintLibrary UMG.Default__WidgetBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBlueprintLibrary* UWidgetBlueprintLibrary::GetDefaultObj()
{
	static class UWidgetBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBlueprintLibrary*>(UWidgetBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::UnlockMouse(const struct FEventReply& Reply, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");

	Params::UWidgetBlueprintLibrary_UnlockMouse_Params Parms{};

	Parms.Reply = Reply;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::Unhandled(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Unhandled");

	Params::UWidgetBlueprintLibrary_Unhandled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     TitleBarContent                                                  (None)
// enum class EWindowTitleBarMode     Mode                                                             (None)
// bool                               bTitleBarDragEnabled                                             (None)
// bool                               bWindowButtonsVisible                                            (None)
// bool                               bTitleBarVisible                                                 (None)

void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarState");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarState_Params Parms{};

	Parms.TitleBarContent = TitleBarContent;
	Parms.Mode = Mode;
	Parms.bTitleBarDragEnabled = bTitleBarDragEnabled;
	Parms.bWindowButtonsVisible = bWindowButtonsVisible;
	Parms.bTitleBarVisible = bTitleBarVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (None)

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarOnCloseClickedDelegate");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (None)

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarCloseButtonActive");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// class UWidget*                     FocusWidget                                                      (None)
// bool                               bInAllUsers                                                      (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::SetUserFocus(const struct FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");

	Params::UWidgetBlueprintLibrary_SetUserFocus_Params Parms{};

	Parms.Reply = Reply;
	Parms.FocusWidget = FocusWidget;
	Parms.bInAllUsers = bInAllUsers;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// struct FVector2D                   NewMousePosition                                                 (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::SetMousePosition(const struct FEventReply& Reply, const struct FVector2D& NewMousePosition, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");

	Params::UWidgetBlueprintLibrary_SetMousePosition_Params Parms{};

	Parms.Reply = Reply;
	Parms.NewMousePosition = NewMousePosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UWidget*                     InWidgetToFocus                                                  (None)
// enum class EMouseLockMode          InMouseLockMode                                                  (None)
// bool                               bFlushInput                                                      (None)

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bFlushInput = bFlushInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// bool                               bFlushInput                                                      (None)

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameOnly");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bFlushInput = bFlushInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UWidget*                     InWidgetToFocus                                                  (None)
// enum class EMouseLockMode          InMouseLockMode                                                  (None)
// bool                               bHideCursorDuringCapture                                         (None)
// bool                               bFlushInput                                                      (None)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;
	Parms.bFlushInput = bFlushInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// enum class EMouseCursor            CursorShape                                                      (None)
// class FName                        CursorName                                                       (None)
// struct FVector2D                   HotSpot                                                          (None)
// bool                               ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, enum class EMouseCursor CursorShape, class FName CursorName, const struct FVector2D& HotSpot, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetHardwareCursor");

	Params::UWidgetBlueprintLibrary_SetHardwareCursor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CursorShape = CursorShape;
	Parms.CursorName = CursorName;
	Parms.HotSpot = HotSpot;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetFocusToGameViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EColorVisionDeficiency  Type                                                             (None)
// float                              Severity                                                         (None)
// bool                               CorrectDeficiency                                                (None)
// bool                               ShowCorrectionWithDeficiency                                     (None)

void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetColorVisionDeficiencyType");

	Params::UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params Parms{};

	Parms.Type = Type;
	Parms.Severity = Severity;
	Parms.CorrectDeficiency = CorrectDeficiency;
	Parms.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ZeroConstructor)
// class UTexture2D*                  Texture                                                          (None)

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(const struct FSlateBrush& Brush, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms{};

	Parms.Brush = Brush;
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ZeroConstructor)
// class UMaterialInterface*          Material                                                         (None)

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(const struct FSlateBrush& Brush, class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms{};

	Parms.Brush = Brush;
	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "RestorePreviousWindowTitleBarState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::ReleaseMouseCapture(const struct FEventReply& Reply, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");

	Params::UWidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms{};

	Parms.Reply = Reply;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// bool                               bInAllJoysticks                                                  (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::ReleaseJoystickCapture(const struct FEventReply& Reply, bool bInAllJoysticks, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");

	Params::UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms{};

	Parms.Reply = Reply;
	Parms.bInAllJoysticks = bInAllJoysticks;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:

void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "OnGameWindowCloseButtonClickedDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::NoResourceBrush(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");

	Params::UWidgetBlueprintLibrary_NoResourceBrush_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (ZeroConstructor)
// int32                              Width                                                            (None)
// int32                              Height                                                           (None)
// struct FSlateBrush                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height, const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");

	Params::UWidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Material                                                         (ZeroConstructor)
// int32                              Width                                                            (None)
// int32                              Height                                                           (None)
// struct FSlateBrush                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height, const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");

	Params::UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms{};

	Parms.Material = Material;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset*            BrushAsset                                                       (ZeroConstructor)
// struct FSlateBrush                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset, const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");

	Params::UWidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms{};

	Parms.BrushAsset = BrushAsset;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// class UWidget*                     CapturingWidget                                                  (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::LockMouse(const struct FEventReply& Reply, class UWidget* CapturingWidget, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "LockMouse");

	Params::UWidgetBlueprintLibrary_LockMouse_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::IsDragDropping(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");

	Params::UWidgetBlueprintLibrary_IsDragDropping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::Handled(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Handled");

	Params::UWidgetBlueprintLibrary_Handled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector4                    SafePadding                                                      (None)
// struct FVector2D                   SafePaddingScale                                                 (None)
// struct FVector4                    SpillOverPadding                                                 (None)

void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, const struct FVector4& SafePadding, const struct FVector2D& SafePaddingScale, const struct FVector4& SpillOverPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");

	Params::UWidgetBlueprintLibrary_GetSafeZonePadding_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SafePadding = SafePadding;
	Parms.SafePaddingScale = SafePaddingScale;
	Parms.SpillOverPadding = SpillOverPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnalogInputEvent           Event                                                            (None)
// struct FKeyEvent                   ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event, const struct FKeyEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");

	Params::UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               Event                                                            (None)
// struct FInputEvent                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent            Event                                                            (None)
// struct FInputEvent                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   Event                                                            (None)
// struct FInputEvent                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent             Event                                                            (None)
// struct FInputEvent                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ZeroConstructor)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetDynamicMaterial(const struct FSlateBrush& Brush, class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");

	Params::UWidgetBlueprintLibrary_GetDynamicMaterial_Params Parms{};

	Parms.Brush = Brush;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetDragDroppingContent(class UDragDropOperation* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");

	Params::UWidgetBlueprintLibrary_GetDragDroppingContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ZeroConstructor)
// class UTexture2D*                  ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush, class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms{};

	Parms.Brush = Brush;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ZeroConstructor)
// class UMaterialInterface*          ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush, class UMaterialInterface* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms{};

	Parms.Brush = Brush;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ZeroConstructor)
// class UObject*                     ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");

	Params::UWidgetBlueprintLibrary_GetBrushResource_Params Parms{};

	Parms.Brush = Brush;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// TArray<class UUserWidget*>         FoundWidgets                                                     (ZeroConstructor)
// class UClass*                      Interface                                                        (ZeroConstructor)
// class UClass*                      OutWidgetClass                                                   (None)
// bool                               TopLevelOnly                                                     (None)

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, const TArray<class UUserWidget*>& FoundWidgets, class UClass* Interface, class UClass* OutWidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FoundWidgets = FoundWidgets;
	Parms.Interface = Interface;
	Parms.OutWidgetClass = OutWidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// TArray<class UUserWidget*>         FoundWidgets                                                     (ZeroConstructor)
// class UClass*                      WidgetClass                                                      (None)
// bool                               TopLevelOnly                                                     (None)

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, const TArray<class UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FoundWidgets = FoundWidgets;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::EndDragDrop(const struct FEventReply& Reply, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");

	Params::UWidgetBlueprintLibrary_EndDragDrop_Params Parms{};

	Parms.Reply = Reply;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// class FText                        Text                                                             (None)
// struct FVector2D                   Position                                                         (None)
// class UFont*                       Font                                                             (None)
// int32                              FontSize                                                         (None)
// class FName                        FontTypeFace                                                     (None)
// struct FLinearColor                Tint                                                             (None)

void UWidgetBlueprintLibrary::DrawTextFormatted(const struct FPaintContext& Context, class FText Text, const struct FVector2D& Position, class UFont* Font, int32 FontSize, class FName FontTypeFace, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");

	Params::UWidgetBlueprintLibrary_DrawTextFormatted_Params Parms{};

	Parms.Context = Context;
	Parms.Text = Text;
	Parms.Position = Position;
	Parms.Font = Font;
	Parms.FontSize = FontSize;
	Parms.FontTypeFace = FontTypeFace;
	Parms.Tint = Tint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// class FString                      InString                                                         (None)
// struct FVector2D                   Position                                                         (None)
// struct FLinearColor                Tint                                                             (None)

void UWidgetBlueprintLibrary::DrawText(const struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawText");

	Params::UWidgetBlueprintLibrary_DrawText_Params Parms{};

	Parms.Context = Context;
	Parms.InString = InString;
	Parms.Position = Position;
	Parms.Tint = Tint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DrawSpline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// struct FVector2D                   Start                                                            (None)
// struct FVector2D                   StartDir                                                         (None)
// struct FVector2D                   End                                                              (None)
// struct FVector2D                   EndDir                                                           (None)
// struct FLinearColor                Tint                                                             (None)
// float                              Thickness                                                        (None)

void UWidgetBlueprintLibrary::DrawSpline(const struct FPaintContext& Context, const struct FVector2D& Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir, const struct FLinearColor& Tint, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawSpline");

	Params::UWidgetBlueprintLibrary_DrawSpline_Params Parms{};

	Parms.Context = Context;
	Parms.Start = Start;
	Parms.StartDir = StartDir;
	Parms.End = End;
	Parms.EndDir = EndDir;
	Parms.Tint = Tint;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// TArray<struct FVector2D>           Points                                                           (None)
// struct FLinearColor                Tint                                                             (None)
// bool                               bAntiAlias                                                       (None)
// float                              Thickness                                                        (None)

void UWidgetBlueprintLibrary::DrawLines(const struct FPaintContext& Context, const TArray<struct FVector2D>& Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLines");

	Params::UWidgetBlueprintLibrary_DrawLines_Params Parms{};

	Parms.Context = Context;
	Parms.Points = Points;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// struct FVector2D                   PositionA                                                        (None)
// struct FVector2D                   PositionB                                                        (None)
// struct FLinearColor                Tint                                                             (None)
// bool                               bAntiAlias                                                       (None)
// float                              Thickness                                                        (None)

void UWidgetBlueprintLibrary::DrawLine(const struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLine");

	Params::UWidgetBlueprintLibrary_DrawLine_Params Parms{};

	Parms.Context = Context;
	Parms.PositionA = PositionA;
	Parms.PositionB = PositionB;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// struct FVector2D                   Position                                                         (None)
// struct FVector2D                   Size                                                             (None)
// class USlateBrushAsset*            Brush                                                            (None)
// struct FLinearColor                Tint                                                             (None)

void UWidgetBlueprintLibrary::DrawBox(const struct FPaintContext& Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawBox");

	Params::UWidgetBlueprintLibrary_DrawBox_Params Parms{};

	Parms.Context = Context;
	Parms.Position = Position;
	Parms.Size = Size;
	Parms.Brush = Brush;
	Parms.Tint = Tint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DismissAllMenus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (None)
// class UWidget*                     WidgetDetectingDrag                                              (None)
// struct FKey                        DragKey                                                          (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");

	Params::UWidgetBlueprintLibrary_DetectDragIfPressed_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// class UWidget*                     WidgetDetectingDrag                                              (None)
// struct FKey                        DragKey                                                          (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::DetectDrag(const struct FEventReply& Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDrag");

	Params::UWidgetBlueprintLibrary_DetectDrag_Params Parms{};

	Parms.Reply = Reply;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      OperationClass                                                   (ZeroConstructor)
// class UDragDropOperation*          ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass, class UDragDropOperation* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");

	Params::UWidgetBlueprintLibrary_CreateDragDropOperation_Params Parms{};

	Parms.OperationClass = OperationClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UClass*                      WidgetType                                                       (ZeroConstructor)
// class APlayerController*           OwningPlayer                                                     (ZeroConstructor)
// class UUserWidget*                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer, class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Create");

	Params::UWidgetBlueprintLibrary_Create_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetType = WidgetType;
	Parms.OwningPlayer = OwningPlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// bool                               bInAllUsers                                                      (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::ClearUserFocus(const struct FEventReply& Reply, bool bInAllUsers, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");

	Params::UWidgetBlueprintLibrary_ClearUserFocus_Params Parms{};

	Parms.Reply = Reply;
	Parms.bInAllUsers = bInAllUsers;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// class UWidget*                     CapturingWidget                                                  (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::CaptureMouse(const struct FEventReply& Reply, class UWidget* CapturingWidget, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");

	Params::UWidgetBlueprintLibrary_CaptureMouse_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (None)
// class UWidget*                     CapturingWidget                                                  (None)
// bool                               bInAllJoysticks                                                  (None)
// struct FEventReply                 ReturnValue                                                      (None)

void UWidgetBlueprintLibrary::CaptureJoystick(const struct FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");

	Params::UWidgetBlueprintLibrary_CaptureJoystick_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;
	Parms.bInAllJoysticks = bInAllJoysticks;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CancelDragDrop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetLayoutLibrary
// (None)

class UClass* UWidgetLayoutLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetLayoutLibrary");

	return Clss;
}


// WidgetLayoutLibrary UMG.Default__WidgetLayoutLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetLayoutLibrary* UWidgetLayoutLibrary::GetDefaultObj()
{
	static class UWidgetLayoutLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetLayoutLibrary*>(UWidgetLayoutLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UWrapBoxSlot*                ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget, class UWrapBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWrapBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UWidgetSwitcherSlot*         ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget, class UWidgetSwitcherSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWidgetSwitcherSlot");

	Params::UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UVerticalBoxSlot*            ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget, class UVerticalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UUniformGridSlot*            ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget, class UUniformGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class USizeBoxSlot*                ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget, class USizeBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSizeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UScrollBoxSlot*              ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget, class UScrollBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScrollBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UScaleBoxSlot*               ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget, class UScaleBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScaleBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class USafeZoneSlot*               ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget, class USafeZoneSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSafeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UOverlaySlot*                ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget, class UOverlaySlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");

	Params::UWidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UHorizontalBoxSlot*          ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget, class UHorizontalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UGridSlot*                   ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget, class UGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsGridSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UCanvasPanelSlot*            ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget, class UCanvasPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");

	Params::UWidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ZeroConstructor)
// class UBorderSlot*                 ReturnValue                                                      (None)

void UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget, class UBorderSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");

	Params::UWidgetLayoutLibrary_SlotAsBorderSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)

void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "RemoveAllWidgets");

	Params::UWidgetLayoutLibrary_RemoveAllWidgets_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// struct FVector                     WorldLocation                                                    (None)
// struct FVector2D                   ScreenPosition                                                   (None)
// bool                               bPlayerViewportRelative                                          (None)
// bool                               ReturnValue                                                      (None)

void UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, const struct FVector2D& ScreenPosition, bool bPlayerViewportRelative, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");

	Params::UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.WorldLocation = WorldLocation;
	Parms.ScreenPosition = ScreenPosition;
	Parms.bPlayerViewportRelative = bPlayerViewportRelative;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FGeometry                   ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject, const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportSize");

	Params::UWidgetLayoutLibrary_GetViewportSize_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// float                              ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportScale");

	Params::UWidgetLayoutLibrary_GetViewportScale_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// struct FGeometry                   ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController, const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetPlayerScreenWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Player                                                           (None)
// float                              LocationX                                                        (None)
// float                              LocationY                                                        (None)
// bool                               ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float LocationX, float LocationY, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");

	Params::UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms{};

	Parms.Player = Player;
	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnViewport");

	Params::UWidgetLayoutLibrary_GetMousePositionOnViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UWidgetLayoutLibrary::GetMousePositionOnPlatform(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnPlatform");

	Params::UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetTree
// (None)

class UClass* UWidgetTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetTree");

	return Clss;
}


// WidgetTree UMG.Default__WidgetTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetTree* UWidgetTree::GetDefaultObj()
{
	static class UWidgetTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetTree*>(UWidgetTree::StaticClass()->DefaultObject);

	return Default;
}

}


