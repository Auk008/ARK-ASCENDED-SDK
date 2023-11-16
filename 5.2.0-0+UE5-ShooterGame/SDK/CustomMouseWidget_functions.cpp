#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CustomMouseWidget.CustomMouseWidget_C
// (None)

class UClass* UCustomMouseWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMouseWidget_C");

	return Clss;
}


// CustomMouseWidget_C CustomMouseWidget.Default__CustomMouseWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomMouseWidget_C* UCustomMouseWidget_C::GetDefaultObj()
{
	static class UCustomMouseWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMouseWidget_C*>(UCustomMouseWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scale0                                                           (None)
// double                             Scale1                                                           (None)
// double                             Scale2                                                           (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (None)

void UCustomMouseWidget_C::SetInnerRingScales(double Scale0, double Scale1, double Scale2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetInnerRingScales");

	Params::UCustomMouseWidget_C_SetInnerRingScales_Params Parms{};

	Parms.Scale0 = Scale0;
	Parms.Scale1 = Scale1;
	Parms.Scale2 = Scale2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Add                                                              (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (None)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (None)

void UCustomMouseWidget_C::SetPointerColorAdd(double Add, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerColorAdd");

	Params::UCustomMouseWidget_C_SetPointerColorAdd_Params Parms{};

	Parms.Add = Add;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (None)

void UCustomMouseWidget_C::ShowReticule(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "ShowReticule");

	Params::UCustomMouseWidget_C_ShowReticule_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewParam                                                         (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)

void UCustomMouseWidget_C::SetPointerScale(double NewParam, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerScale");

	Params::UCustomMouseWidget_C_SetPointerScale_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LeftRightAlpha                                                   (None)
// double                             UpDownAlpha                                                      (None)
// bool                               UseArrow                                                         (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2               (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3               (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4               (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5               (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6               (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7               (None)

void UCustomMouseWidget_C::SetArrowAlpha(double LeftRightAlpha, double UpDownAlpha, bool UseArrow, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetArrowAlpha");

	Params::UCustomMouseWidget_C_SetArrowAlpha_Params Parms{};

	Parms.LeftRightAlpha = LeftRightAlpha;
	Parms.UpDownAlpha = UpDownAlpha;
	Parms.UseArrow = UseArrow;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomMouseWidget.CustomMouseWidget_C.UseCircle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCustomMouseWidget_C::UseCircle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "UseCircle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomMouseWidget.CustomMouseWidget_C.useArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCustomMouseWidget_C::UseArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "useArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomMouseWidget.CustomMouseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCustomMouseWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)

void UCustomMouseWidget_C::ExecuteUbergraph_CustomMouseWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "ExecuteUbergraph_CustomMouseWidget");

	Params::UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


