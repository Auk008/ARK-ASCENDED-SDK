#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AdvancedWidgets.RadialSlider
// (None)

class UClass* URadialSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialSlider");

	return Clss;
}


// RadialSlider AdvancedWidgets.Default__RadialSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialSlider* URadialSlider::GetDefaultObj()
{
	static class URadialSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialSlider*>(URadialSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedWidgets.RadialSlider.SetValueTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      InValueTags                                                      (None)

void URadialSlider::SetValueTags(const TArray<float>& InValueTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetValueTags");

	Params::URadialSlider_SetValueTags_Params Parms{};

	Parms.InValueTags = InValueTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void URadialSlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetValue");

	Params::URadialSlider_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUseVerticalDrag                                                (None)

void URadialSlider::SetUseVerticalDrag(bool InUseVerticalDrag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetUseVerticalDrag");

	Params::URadialSlider_SetUseVerticalDrag_Params Parms{};

	Parms.InUseVerticalDrag = InUseVerticalDrag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void URadialSlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetStepSize");

	Params::URadialSlider_SetStepSize_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetSliderRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeFloatCurve          InSliderRange                                                    (None)

void URadialSlider::SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderRange");

	Params::URadialSlider_SetSliderRange_Params Parms{};

	Parms.InSliderRange = InSliderRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (None)

void URadialSlider::SetSliderProgressColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderProgressColor");

	Params::URadialSlider_SetSliderProgressColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void URadialSlider::SetSliderHandleStartAngle(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderHandleStartAngle");

	Params::URadialSlider_SetSliderHandleStartAngle_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void URadialSlider::SetSliderHandleEndAngle(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderHandleEndAngle");

	Params::URadialSlider_SetSliderHandleEndAngle_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (None)

void URadialSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderHandleColor");

	Params::URadialSlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (None)

void URadialSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderBarColor");

	Params::URadialSlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InShowSliderHandle                                               (None)

void URadialSlider::SetShowSliderHandle(bool InShowSliderHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetShowSliderHandle");

	Params::URadialSlider_SetShowSliderHandle_Params Parms{};

	Parms.InShowSliderHandle = InShowSliderHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetShowSliderHand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InShowSliderHand                                                 (None)

void URadialSlider::SetShowSliderHand(bool InShowSliderHand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetShowSliderHand");

	Params::URadialSlider_SetShowSliderHand_Params Parms{};

	Parms.InShowSliderHand = InShowSliderHand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (None)

void URadialSlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetLocked");

	Params::URadialSlider_SetLocked_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (None)

void URadialSlider::SetHandStartEndRatio(const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetHandStartEndRatio");

	Params::URadialSlider_SetHandStartEndRatio_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void URadialSlider::SetCustomDefaultValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetCustomDefaultValue");

	Params::URadialSlider_SetCustomDefaultValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (None)

void URadialSlider::SetCenterBackgroundColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetCenterBackgroundColor");

	Params::URadialSlider_SetCenterBackgroundColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.SetAngularOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)

void URadialSlider::SetAngularOffset(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetAngularOffset");

	Params::URadialSlider_SetAngularOffset_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void URadialSlider::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "GetValue");

	Params::URadialSlider_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void URadialSlider::GetNormalizedSliderHandlePosition(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "GetNormalizedSliderHandlePosition");

	Params::URadialSlider_GetNormalizedSliderHandlePosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void URadialSlider::GetCustomDefaultValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "GetCustomDefaultValue");

	Params::URadialSlider_GetCustomDefaultValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


