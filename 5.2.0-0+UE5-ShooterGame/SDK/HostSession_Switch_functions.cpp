#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HostSession_Switch.HostSession_Switch_C
// (None)

class UClass* UHostSession_Switch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HostSession_Switch_C");

	return Clss;
}


// HostSession_Switch_C HostSession_Switch.Default__HostSession_Switch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHostSession_Switch_C* UHostSession_Switch_C::GetDefaultObj()
{
	static class UHostSession_Switch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHostSession_Switch_C*>(UHostSession_Switch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HostSession_Switch.HostSession_Switch_C.BPPopulateMods
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       ReturnValue                                                      (None)

void UHostSession_Switch_C::BPPopulateMods(const TArray<struct FInstalledMod>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPPopulateMods");

	Params::UHostSession_Switch_C_BPPopulateMods_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.DoSettingsMatchAnyDefaults
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Matches                                                          (None)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (None)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (None)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (None)

void UHostSession_Switch_C::DoSettingsMatchAnyDefaults(bool Matches, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "DoSettingsMatchAnyDefaults");

	Params::UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params Parms{};

	Parms.Matches = Matches;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (None)
// int32                              CallFunc_GetSelectedMapIndex_index                               (None)

void UHostSession_Switch_C::GetSelectedMapIndex(int32 ReturnValue, int32 CallFunc_GetSelectedMapIndex_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetSelectedMapIndex");

	Params::UHostSession_Switch_C_GetSelectedMapIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetSelectedMapIndex_index = CallFunc_GetSelectedMapIndex_index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.IsInMapSelectView
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)

void UHostSession_Switch_C::IsInMapSelectView(bool ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "IsInMapSelectView");

	Params::UHostSession_Switch_C_IsInMapSelectView_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ReturnValue                                                      (None)

void UHostSession_Switch_C::GetMapSelectScrollBox(class UScrollBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetMapSelectScrollBox");

	Params::UHostSession_Switch_C_GetMapSelectScrollBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.MoveToMainScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::MoveToMainScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "MoveToMainScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.SetMainMapSelectEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MapIndex                                                         (None)
// int32                              SelectedIndex                                                    (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (None)

void UHostSession_Switch_C::SetMainMapSelectEntry(int32 MapIndex, int32 SelectedIndex, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasDLCforMapIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_GetMapInfo_OutMapName, const struct FMapDescription& CallFunc_GetMapInfo_OutDescription, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetMainMapSelectEntry");

	Params::UHostSession_Switch_C_SetMainMapSelectEntry_Params Parms{};

	Parms.MapIndex = MapIndex;
	Parms.SelectedIndex = SelectedIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasDLCforMapIndex_ReturnValue = CallFunc_HasDLCforMapIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetMapInfo_OutMapName = CallFunc_GetMapInfo_OutMapName;
	Parms.CallFunc_GetMapInfo_OutDescription = CallFunc_GetMapInfo_OutDescription;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.SetupMapSelectEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UHostSession_Switch_C::SetupMapSelectEntries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetupMapSelectEntries");

	Params::UHostSession_Switch_C_SetupMapSelectEntries_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UHostSession_Switch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "Tick");

	Params::UHostSession_Switch_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UHostSession_Switch_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "PreConstruct");

	Params::UHostSession_Switch_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.BPPostPopulateMods
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BPPostPopulateMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPPostPopulateMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BPOnUpdateSavedDataButtons
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BPOnUpdateSavedDataButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPOnUpdateSavedDataButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.SetSelectedMapIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)

void UHostSession_Switch_C::SetSelectedMapIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetSelectedMapIndex");

	Params::UHostSession_Switch_C_SetSelectedMapIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.SelectMapButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::SelectMapButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SelectMapButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BndEvt__HostSession_Switch_EasyPresetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BndEvt__HostSession_Switch_EasyPresetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BndEvt__HostSession_Switch_EasyPresetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BndEvt__HostSession_Switch_MediumPresetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BndEvt__HostSession_Switch_MediumPresetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BndEvt__HostSession_Switch_MediumPresetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BndEvt__HostSession_Switch_HardPresetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BndEvt__HostSession_Switch_HardPresetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BndEvt__HostSession_Switch_HardPresetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.ConfirmedChangeSettingsToHard
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::ConfirmedChangeSettingsToHard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ConfirmedChangeSettingsToHard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.ConfirmedChangeSettingsToMedium
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::ConfirmedChangeSettingsToMedium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ConfirmedChangeSettingsToMedium");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.ConfirmedChangeSettingsToEasy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::ConfirmedChangeSettingsToEasy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ConfirmedChangeSettingsToEasy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.MoveToMapScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::MoveToMapScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "MoveToMapScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.OnGetInstalledMods
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       Installed_mods                                                   (None)

void UHostSession_Switch_C::OnGetInstalledMods(const TArray<struct FInstalledMod>& Installed_mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "OnGetInstalledMods");

	Params::UHostSession_Switch_C_OnGetInstalledMods_Params Parms{};

	Parms.Installed_mods = Installed_mods;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.OnIsAuthenticated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_authenticated                                                 (None)

void UHostSession_Switch_C::OnIsAuthenticated(bool Is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "OnIsAuthenticated");

	Params::UHostSession_Switch_C_OnIsAuthenticated_Params Parms{};

	Parms.Is_authenticated = Is_authenticated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.ExecuteUbergraph_HostSession_Switch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// FDelegateProperty_                 Temp_delegate_Variable                                           (Edit, ZeroConstructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (None)
// int32                              K2Node_Event_index                                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches                      (None)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_1                    (None)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_2                    (None)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (None)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (None)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (None)
// TArray<struct FInstalledMod>       K2Node_CustomEvent_installed_mods                                (None)
// bool                               K2Node_CustomEvent_is_authenticated                              (None)

void UHostSession_Switch_C::ExecuteUbergraph_HostSession_Switch(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ Temp_delegate_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasDLCforMapIndex_ReturnValue, int32 K2Node_Event_index, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_DoSettingsMatchAnyDefaults_Matches, bool CallFunc_DoSettingsMatchAnyDefaults_Matches_1, bool CallFunc_DoSettingsMatchAnyDefaults_Matches_2, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<struct FInstalledMod>& K2Node_CustomEvent_installed_mods, bool K2Node_CustomEvent_is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ExecuteUbergraph_HostSession_Switch");

	Params::UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsShooter_Game_Menu = K2Node_DynamicCast_AsShooter_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasDLCforMapIndex_ReturnValue = CallFunc_HasDLCforMapIndex_ReturnValue;
	Parms.K2Node_Event_index = K2Node_Event_index;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches = CallFunc_DoSettingsMatchAnyDefaults_Matches;
	Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches_1 = CallFunc_DoSettingsMatchAnyDefaults_Matches_1;
	Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches_2 = CallFunc_DoSettingsMatchAnyDefaults_Matches_2;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_installed_mods = K2Node_CustomEvent_installed_mods;
	Parms.K2Node_CustomEvent_is_authenticated = K2Node_CustomEvent_is_authenticated;

	UObject::ProcessEvent(Func, &Parms);

}

}


