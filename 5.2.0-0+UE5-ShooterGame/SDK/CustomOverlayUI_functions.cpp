#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CustomOverlayUI.CustomOverlayUI_C
// (None)

class UClass* UCustomOverlayUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomOverlayUI_C");

	return Clss;
}


// CustomOverlayUI_C CustomOverlayUI.Default__CustomOverlayUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomOverlayUI_C* UCustomOverlayUI_C::GetDefaultObj()
{
	static class UCustomOverlayUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomOverlayUI_C*>(UCustomOverlayUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomOverlayUI.CustomOverlayUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCustomOverlayUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomOverlayUI.CustomOverlayUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UCustomOverlayUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "Tick");

	Params::UCustomOverlayUI_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.AddChildToCanvas
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Child                                                            (None)
// struct FVector2D                   Size                                                             (None)
// int32                              ZOrder                                                           (None)

void UCustomOverlayUI_C::AddChildToCanvas(class UUserWidget* Child, const struct FVector2D& Size, int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "AddChildToCanvas");

	Params::UCustomOverlayUI_C_AddChildToCanvas_Params Parms{};

	Parms.Child = Child;
	Parms.Size = Size;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetArrowAlpha
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TheLeftRightAlpha                                                (None)
// float                              TheUpDownAlpha                                                   (None)

void UCustomOverlayUI_C::SetArrowAlpha(float TheLeftRightAlpha, float TheUpDownAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetArrowAlpha");

	Params::UCustomOverlayUI_C_SetArrowAlpha_Params Parms{};

	Parms.TheLeftRightAlpha = TheLeftRightAlpha;
	Parms.TheUpDownAlpha = TheUpDownAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerScale
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (None)

void UCustomOverlayUI_C::SetPointerScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetPointerScale");

	Params::UCustomOverlayUI_C_SetPointerScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.ShowReticule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (None)

void UCustomOverlayUI_C::ShowReticule(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "ShowReticule");

	Params::UCustomOverlayUI_C_ShowReticule_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerColorAdd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Add                                                              (None)

void UCustomOverlayUI_C::SetPointerColorAdd(float Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetPointerColorAdd");

	Params::UCustomOverlayUI_C_SetPointerColorAdd_Params Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.SetInnerRingScales
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale0                                                           (None)
// float                              Scale1                                                           (None)
// float                              Scale2                                                           (None)

void UCustomOverlayUI_C::SetInnerRingScales(float Scale0, float Scale1, float Scale2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "SetInnerRingScales");

	Params::UCustomOverlayUI_C_SetInnerRingScales_Params Parms{};

	Parms.Scale0 = Scale0;
	Parms.Scale1 = Scale1;
	Parms.Scale2 = Scale2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomOverlayUI.CustomOverlayUI_C.ExecuteUbergraph_CustomOverlayUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget                         (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class UUserWidget*                 K2Node_Event_Child                                               (ZeroConstructor)
// struct FVector2D                   K2Node_Event_Size                                                (None)
// int32                              K2Node_Event_zOrder                                              (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (None)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_1                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_2                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// float                              K2Node_Event_theLeftRightAlpha                                   (None)
// float                              K2Node_Event_theUpDownAlpha                                      (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_3                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// float                              K2Node_Event_scale                                               (None)
// bool                               K2Node_Event_show                                                (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_4                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_5                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (None)
// float                              K2Node_Event_add                                                 (None)
// float                              K2Node_Event_scale0                                              (None)
// float                              K2Node_Event_scale1                                              (None)
// float                              K2Node_Event_scale2                                              (None)
// class UCustomMouseWidget_C*        K2Node_DynamicCast_AsCustom_Mouse_Widget_6                       (None)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (None)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (None)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (None)
// double                             CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast               (None)
// double                             CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast                  (None)
// double                             CallFunc_SetPointerScale_NewParam_ImplicitCast                   (None)
// double                             CallFunc_SetPointerColorAdd_Add_ImplicitCast                     (None)
// double                             CallFunc_SetInnerRingScales_Scale0_ImplicitCast                  (None)
// double                             CallFunc_SetInnerRingScales_Scale1_ImplicitCast                  (None)
// double                             CallFunc_SetInnerRingScales_Scale2_ImplicitCast                  (None)

void UCustomOverlayUI_C::ExecuteUbergraph_CustomOverlayUI(int32 EntryPoint, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUserWidget* K2Node_Event_Child, const struct FVector2D& K2Node_Event_Size, int32 K2Node_Event_zOrder, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_1, bool K2Node_DynamicCast_bSuccess_2, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_2, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_theLeftRightAlpha, float K2Node_Event_theUpDownAlpha, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_3, bool K2Node_DynamicCast_bSuccess_4, float K2Node_Event_scale, bool K2Node_Event_show, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_4, bool K2Node_DynamicCast_bSuccess_5, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_5, bool K2Node_DynamicCast_bSuccess_6, float K2Node_Event_add, float K2Node_Event_scale0, float K2Node_Event_scale1, float K2Node_Event_scale2, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_6, bool K2Node_DynamicCast_bSuccess_7, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, double CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast, double CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast, double CallFunc_SetPointerScale_NewParam_ImplicitCast, double CallFunc_SetPointerColorAdd_Add_ImplicitCast, double CallFunc_SetInnerRingScales_Scale0_ImplicitCast, double CallFunc_SetInnerRingScales_Scale1_ImplicitCast, double CallFunc_SetInnerRingScales_Scale2_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomOverlayUI_C", "ExecuteUbergraph_CustomOverlayUI");

	Params::UCustomOverlayUI_C_ExecuteUbergraph_CustomOverlayUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget = K2Node_DynamicCast_AsCustom_Mouse_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_Child = K2Node_Event_Child;
	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.K2Node_Event_zOrder = K2Node_Event_zOrder;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_1 = K2Node_DynamicCast_AsCustom_Mouse_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_2 = K2Node_DynamicCast_AsCustom_Mouse_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_theLeftRightAlpha = K2Node_Event_theLeftRightAlpha;
	Parms.K2Node_Event_theUpDownAlpha = K2Node_Event_theUpDownAlpha;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_3 = K2Node_DynamicCast_AsCustom_Mouse_Widget_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_scale = K2Node_Event_scale;
	Parms.K2Node_Event_show = K2Node_Event_show;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_4 = K2Node_DynamicCast_AsCustom_Mouse_Widget_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_5 = K2Node_DynamicCast_AsCustom_Mouse_Widget_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_Event_add = K2Node_Event_add;
	Parms.K2Node_Event_scale0 = K2Node_Event_scale0;
	Parms.K2Node_Event_scale1 = K2Node_Event_scale1;
	Parms.K2Node_Event_scale2 = K2Node_Event_scale2;
	Parms.K2Node_DynamicCast_AsCustom_Mouse_Widget_6 = K2Node_DynamicCast_AsCustom_Mouse_Widget_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Bottom_ImplicitCast = K2Node_MakeStruct_Bottom_ImplicitCast;
	Parms.CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast = CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast;
	Parms.CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast = CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast;
	Parms.CallFunc_SetPointerScale_NewParam_ImplicitCast = CallFunc_SetPointerScale_NewParam_ImplicitCast;
	Parms.CallFunc_SetPointerColorAdd_Add_ImplicitCast = CallFunc_SetPointerColorAdd_Add_ImplicitCast;
	Parms.CallFunc_SetInnerRingScales_Scale0_ImplicitCast = CallFunc_SetInnerRingScales_Scale0_ImplicitCast;
	Parms.CallFunc_SetInnerRingScales_Scale1_ImplicitCast = CallFunc_SetInnerRingScales_Scale1_ImplicitCast;
	Parms.CallFunc_SetInnerRingScales_Scale2_ImplicitCast = CallFunc_SetInnerRingScales_Scale2_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


