#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Category.UI_Category_C
// (None)

class UClass* UUI_Category_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Category_C");

	return Clss;
}


// UI_Category_C UI_Category.Default__UI_Category_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Category_C* UUI_Category_C::GetDefaultObj()
{
	static class UUI_Category_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Category_C*>(UUI_Category_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Category.UI_Category_C.UpdateThemeSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_Category_C::UpdateThemeSettings(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "UpdateThemeSettings");

	Params::UUI_Category_C_UpdateThemeSettings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Category.UI_Category_C.OnFail_20B338B847EF646EF76186BFC4DF1AD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_Category_C::OnFail_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "OnFail_20B338B847EF646EF76186BFC4DF1AD5");

	Params::UUI_Category_C_OnFail_20B338B847EF646EF76186BFC4DF1AD5_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Category.UI_Category_C.OnSuccess_20B338B847EF646EF76186BFC4DF1AD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_Category_C::OnSuccess_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "OnSuccess_20B338B847EF646EF76186BFC4DF1AD5");

	Params::UUI_Category_C_OnSuccess_20B338B847EF646EF76186BFC4DF1AD5_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Category.UI_Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Category_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Category.UI_Category_C.ExecuteUbergraph_UI_Category
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)

void UUI_Category_C::ExecuteUbergraph_UI_Category(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2DDynamic* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "ExecuteUbergraph_UI_Category");

	Params::UUI_Category_C_ExecuteUbergraph_UI_Category_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


