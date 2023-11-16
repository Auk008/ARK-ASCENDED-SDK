#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReHostSession_ASA.ReHostSession_ASA_C
// (None)

class UClass* UReHostSession_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReHostSession_ASA_C");

	return Clss;
}


// ReHostSession_ASA_C ReHostSession_ASA.Default__ReHostSession_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReHostSession_ASA_C* UReHostSession_ASA_C::GetDefaultObj()
{
	static class UReHostSession_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReHostSession_ASA_C*>(UReHostSession_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (None)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void UReHostSession_ASA_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnEventBroadcasted");

	Params::UReHostSession_ASA_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnRecievedInstalledModsInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> InstalledMods                                                    (None)

void UReHostSession_ASA_C::OnRecievedInstalledModsInfo(const TArray<struct FInstallProgressMod>& InstalledMods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnRecievedInstalledModsInfo");

	Params::UReHostSession_ASA_C_OnRecievedInstalledModsInfo_Params Parms{};

	Parms.InstalledMods = InstalledMods;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.HasUGCPrivileges
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasPrivilege                                                     (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (Edit, ZeroConstructor)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_CanUseUserGeneratedContent_ReturnValue                  (None)

void UReHostSession_ASA_C::HasUGCPrivileges(bool HasPrivilege, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseUserGeneratedContent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "HasUGCPrivileges");

	Params::UReHostSession_ASA_C_HasUGCPrivileges_Params Parms{};

	Parms.HasPrivilege = HasPrivilege;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Instance = K2Node_DynamicCast_AsShooter_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanUseUserGeneratedContent_ReturnValue = CallFunc_CanUseUserGeneratedContent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Assert Selected Item for Preview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ForScrollbox                                                     (Edit, ZeroConstructor)
// int32                              FoundSelectedIndex                                               (None)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UDataListEntryButton_HostSession*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session         (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class UCustomButtonWidget*         CallFunc_BPGetButton_ReturnValue                                 (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (Edit, ZeroConstructor)
// class UDataListEntryButton_HostSession*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_BPIsSelected_ReturnValue                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void UReHostSession_ASA_C::Assert_Selected_Item_for_Preview(class UScrollBox* ForScrollbox, int32 FoundSelectedIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UDataListEntryButton_HostSession* K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UCustomButtonWidget* CallFunc_BPGetButton_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UDataListEntryButton_HostSession* K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BPIsSelected_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Assert Selected Item for Preview");

	Params::UReHostSession_ASA_C_Assert_Selected_Item_for_Preview_Params Parms{};

	Parms.ForScrollbox = ForScrollbox;
	Parms.FoundSelectedIndex = FoundSelectedIndex;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session = K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BPGetButton_ReturnValue = CallFunc_BPGetButton_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1 = K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BPIsSelected_ReturnValue = CallFunc_BPIsSelected_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.IsPresetDifficultyUIOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void UReHostSession_ASA_C::IsPresetDifficultyUIOpen(bool NewParam, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "IsPresetDifficultyUIOpen");

	Params::UReHostSession_ASA_C_IsPresetDifficultyUIOpen_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BPIsPresetDifficultyUIOpen
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsPresetDifficultyUIOpen_NewParam                       (None)

void UReHostSession_ASA_C::BPIsPresetDifficultyUIOpen(bool ReturnValue, bool CallFunc_IsPresetDifficultyUIOpen_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BPIsPresetDifficultyUIOpen");

	Params::UReHostSession_ASA_C_BPIsPresetDifficultyUIOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsPresetDifficultyUIOpen_NewParam = CallFunc_IsPresetDifficultyUIOpen_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_ModImage_Border_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (Edit, ZeroConstructor)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (Edit, ZeroConstructor)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UReHostSession_ASA_C::Get_ModImage_Border_Background(const struct FSlateBrush& ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Get_ModImage_Border_Background");

	Params::UReHostSession_ASA_C_Get_ModImage_Border_Background_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyboardEvent                                                  (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*LocalSubMenu                                                     (Edit, ZeroConstructor)
// struct FKey                        LocalKey                                                         (AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsPresetDifficultyUIOpen_NewParam                       (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ContainsInstancedReference, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (None)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, ZeroConstructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (None)
// class UWidget*                     CallFunc_SwitchButton_Widget_2                                   (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (None)
// int32                              Temp_int_Variable                                                (None)
// class UWidget*                     CallFunc_SwitchButton_Widget_3                                   (Edit, ZeroConstructor)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*K2Node_Select_Default                                            (None)

void UReHostSession_ASA_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu, const struct FKey& LocalKey, bool CallFunc_IsPresetDifficultyUIOpen_NewParam, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, class UWidget* CallFunc_SwitchButton_Widget_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, int32 Temp_int_Variable, class UWidget* CallFunc_SwitchButton_Widget_3, class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnKeyDownEvent");

	Params::UReHostSession_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.LocalSubMenu = LocalSubMenu;
	Parms.LocalKey = LocalKey;
	Parms.CallFunc_IsPresetDifficultyUIOpen_NewParam = CallFunc_IsPresetDifficultyUIOpen_NewParam;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_OnKeyDownEvent_ReturnValue = CallFunc_OnKeyDownEvent_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_SwitchButton_Widget_2 = CallFunc_SwitchButton_Widget_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_SwitchButton_Widget_3 = CallFunc_SwitchButton_Widget_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_MapImage_Border_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (Edit, ZeroConstructor)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UReHostSession_ASA_C::Get_MapImage_Border_Background(const struct FSlateBrush& ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Get_MapImage_Border_Background");

	Params::UReHostSession_ASA_C_Get_MapImage_Border_Background_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UReHostSession_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Tick");

	Params::UReHostSession_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature");

	Params::UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature");

	Params::UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnModInfoRequested
// (Event, Public, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (None)

void UReHostSession_ASA_C::OnModInfoRequested(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnModInfoRequested");

	Params::UReHostSession_ASA_C_OnModInfoRequested_Params Parms{};

	Parms.ModId = ModId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnCFCoreUIControllerInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::OnCFCoreUIControllerInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnCFCoreUIControllerInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnCFCoreUIRegister
// (Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::OnCFCoreUIRegister()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnCFCoreUIRegister");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.ExecuteUbergraph_ReHostSession_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalUI*                   CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (Edit, ZeroConstructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (Edit, ZeroConstructor)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu_1                         (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (None)
// int32                              K2Node_ComponentBoundEvent_Index                                 (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// bool                               CallFunc_HasUGCPrivileges_HasPrivilege                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int64                              K2Node_Event_ModID                                               (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ZeroConstructor)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue_1                                    (None)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)

void UReHostSession_ASA_C::ExecuteUbergraph_ReHostSession_ASA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, class UPrimalUI* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasUGCPrivileges_HasPrivilege, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int64 K2Node_Event_ModID, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_RegisterModelClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "ExecuteUbergraph_ReHostSession_ASA");

	Params::UReHostSession_ASA_C_ExecuteUbergraph_ReHostSession_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsShooter_Game_Menu = K2Node_DynamicCast_AsShooter_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Game_Menu_1 = K2Node_DynamicCast_AsShooter_Game_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_HasUGCPrivileges_HasPrivilege = CallFunc_HasUGCPrivileges_HasPrivilege;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_ModID = K2Node_Event_ModID;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RegisterModelClass_ReturnValue = CallFunc_RegisterModelClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


