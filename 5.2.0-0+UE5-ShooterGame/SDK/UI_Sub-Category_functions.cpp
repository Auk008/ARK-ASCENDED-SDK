#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Sub-Category.UI_Sub-Category_C
// (None)

class UClass* UUI_SubMinusCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Sub-Category_C");

	return Clss;
}


// UI_Sub-Category_C UI_Sub-Category.Default__UI_Sub-Category_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SubMinusCategory_C* UUI_SubMinusCategory_C::GetDefaultObj()
{
	static class UUI_SubMinusCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SubMinusCategory_C*>(UUI_SubMinusCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Sub-Category.UI_Sub-Category_C.OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_SubMinusCategory_C::OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8");

	Params::UUI_SubMinusCategory_C_OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_SubMinusCategory_C::OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8");

	Params::UUI_SubMinusCategory_C_OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Category.UI_Sub-Category_C.BndEvt__Sub-Category1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SubMinusCategory_C::BndEvt__SubMinusCategory1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "BndEvt__Sub-Category1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Category.UI_Sub-Category_C.Event Set Button Style
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FButtonStyle                InStyle                                                          (None)

void UUI_SubMinusCategory_C::Event_Set_Button_Style(const struct FButtonStyle& InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "Event Set Button Style");

	Params::UUI_SubMinusCategory_C_Event_Set_Button_Style_Params Parms{};

	Parms.InStyle = InStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Category.UI_Sub-Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Category.UI_Sub-Category_C.ExecuteUbergraph_UI_Sub-Category
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ZeroConstructor)
// struct FButtonStyle                K2Node_CustomEvent_InStyle                                       (None)

void UUI_SubMinusCategory_C::ExecuteUbergraph_UI_SubMinusCategory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, const struct FButtonStyle& K2Node_CustomEvent_InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "ExecuteUbergraph_UI_Sub-Category");

	Params::UUI_SubMinusCategory_C_ExecuteUbergraph_UI_SubMinusCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_InStyle = K2Node_CustomEvent_InStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSubCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (None)
// int64                              SubCategoryID                                                    (None)

void UUI_SubMinusCategory_C::OnSubCategoryClicked__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnSubCategoryClicked__DelegateSignature");

	Params::UUI_SubMinusCategory_C_OnSubCategoryClicked__DelegateSignature_Params Parms{};

	Parms.SubCategory = SubCategory;
	Parms.SubCategoryID = SubCategoryID;

	UObject::ProcessEvent(Func, &Parms);

}

}


