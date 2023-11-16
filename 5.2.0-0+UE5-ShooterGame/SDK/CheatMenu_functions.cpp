#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenu.CheatMenu_C
// (None)

class UClass* UCheatMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenu_C");

	return Clss;
}


// CheatMenu_C CheatMenu.Default__CheatMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenu_C* UCheatMenu_C::GetDefaultObj()
{
	static class UCheatMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenu_C*>(UCheatMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenu.CheatMenu_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (None)

void UCheatMenu_C::BPEscapeClosed(bool ReturnValue, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CloseSpawnMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BPEscapeClosed");

	Params::UCheatMenu_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_CloseSpawnMenu_ReturnValue = CallFunc_CloseSpawnMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.ClearFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRefresh                                                    (None)

void UCheatMenu_C::ClearFilter(bool ShouldRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ClearFilter");

	Params::UCheatMenu_C_ClearFilter_Params Parms{};

	Parms.ShouldRefresh = ShouldRefresh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetBossSpawnArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              BossNames                                                        (AutoWeak, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              BossCheats                                                       (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)

void UCheatMenu_C::GetBossSpawnArray(const TArray<class FString>& BossNames, const TArray<class FString>& BossCheats, class UWorld* CallFunc_GetGameWorld_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetBossSpawnArray");

	Params::UCheatMenu_C_GetBossSpawnArray_Params Parms{};

	Parms.BossNames = BossNames;
	Parms.BossCheats = BossCheats;
	Parms.CallFunc_GetGameWorld_ReturnValue = CallFunc_GetGameWorld_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (None)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (None)

void UCheatMenu_C::CloseMenu(class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_CloseSpawnMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CloseMenu");

	Params::UCheatMenu_C_CloseMenu_Params Parms{};

	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_CloseSpawnMenu_ReturnValue = CallFunc_CloseSpawnMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (None)
// TArray<class FString>              CheatStrings                                                     (None)
// bool                               Success                                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UCheatMenu_C::GetMapOpenListsForEntry(int32 ScreenTracker, const TArray<class FString>& CheatStrings, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapOpenListsForEntry");

	Params::UCheatMenu_C_GetMapOpenListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.CheatStrings = CheatStrings;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FName                        MapName                                                          (None)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UCheatMenuMapOpenButton_C*   CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateMapOpenButton(const class FString& Name, class FName MapName, class UUI_DebugSpawnMenuEntry* CreatedWidget, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuMapOpenButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenButton");

	Params::UCheatMenu_C_CreateMapOpenButton_Params Parms{};

	Parms.Name = Name;
	Parms.MapName = MapName;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              ArrayIndex                                                       (None)
// TArray<class FString>              Array                                                            (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Array_Get_Item                                          (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapOpenButton_CreatedWidget                       (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::CreateMapOpenEntry(const class FString& Name, int32 ArrayIndex, const TArray<class FString>& Array, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, class UUI_DebugSpawnMenuEntry* CallFunc_CreateMapOpenButton_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenEntry");

	Params::UCheatMenu_C_CreateMapOpenEntry_Params Parms{};

	Parms.Name = Name;
	Parms.ArrayIndex = ArrayIndex;
	Parms.Array = Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_CreateMapOpenButton_CreatedWidget = CallFunc_CreateMapOpenButton_CreatedWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetMapJumpArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EmptyStringArray                                                 (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Variable                                                (None)
// TArray<class FString>              Temp_wildcard_Variable                                           (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (None)
// class FString                      Temp_string_Variable                                             (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::GetMapJumpArray(const TArray<class FString>& EmptyStringArray, int32 Temp_int_Variable, const TArray<class FString>& Temp_wildcard_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<struct FCheatMapJumpInfo>& CallFunc_GetMapJumpListForEntry_MapJumps, bool CallFunc_GetMapJumpListForEntry_Success, const class FString& Temp_string_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpArray");

	Params::UCheatMenu_C_GetMapJumpArray_Params Parms{};

	Parms.EmptyStringArray = EmptyStringArray;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapJumpListForEntry_MapJumps = CallFunc_GetMapJumpListForEntry_MapJumps;
	Parms.CallFunc_GetMapJumpListForEntry_Success = CallFunc_GetMapJumpListForEntry_Success;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Cheat                                                            (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ZeroConstructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UCheatMapJumpButton_C*       CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateMapJumpButton(const struct FCheatMapJumpInfo& Cheat, class UUI_DebugSpawnMenuEntry* CreatedWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UCheatMapJumpButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpButton");

	Params::UCheatMenu_C_CreateMapJumpButton_Params Parms{};

	Parms.Cheat = Cheat;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArrayIndex                                                       (None)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FCheatMapJumpInfo           CallFunc_Array_Get_Item                                          (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapJumpButton_CreatedWidget                       (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::CreateMapJumpEntry(int32 ArrayIndex, const TArray<struct FCheatMapJumpInfo>& MapJumps, const struct FCheatMapJumpInfo& CallFunc_Array_Get_Item, class UUI_DebugSpawnMenuEntry* CallFunc_CreateMapJumpButton_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpEntry");

	Params::UCheatMenu_C_CreateMapJumpEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.MapJumps = MapJumps;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateMapJumpButton_CreatedWidget = CallFunc_CreateMapJumpButton_CreatedWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (None)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               Success                                                          (None)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)

void UCheatMenu_C::GetMapJumpListForEntry(int32 ScreenTracker, const TArray<struct FCheatMapJumpInfo>& MapJumps, bool Success, class UWorld* CallFunc_GetGameWorld_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpListForEntry");

	Params::UCheatMenu_C_GetMapJumpListForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.MapJumps = MapJumps;
	Parms.Success = Success;
	Parms.CallFunc_GetGameWorld_ReturnValue = CallFunc_GetGameWorld_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (ZeroConstructor)
// class UCheatMenuItemAllButton_C*   CallFunc_CreateButtonFromAllEntries_ReturnValue                  (None)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void UCheatMenu_C::AddAllEntriesButtonForItems(const TArray<TSoftClassPtr<class UPrimalItem>>& Items, class UCheatMenuItemAllButton_C* CallFunc_CreateButtonFromAllEntries_ReturnValue, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "AddAllEntriesButtonForItems");

	Params::UCheatMenu_C_AddAllEntriesButtonForItems_Params Parms{};

	Parms.Items = Items;
	Parms.CallFunc_CreateButtonFromAllEntries_ReturnValue = CallFunc_CreateButtonFromAllEntries_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (ZeroConstructor)
// class UCheatMenuItemAllButton_C*   ReturnValue                                                      (ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor)
// class UCheatMenuItemAllButton_C*   CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateButtonFromAllEntries(const TArray<TSoftClassPtr<class UPrimalItem>>& Items, class UCheatMenuItemAllButton_C* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheatMenuItemAllButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromAllEntries");

	Params::UCheatMenu_C_CreateButtonFromAllEntries_Params Parms{};

	Parms.Items = Items;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.HideAllOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCheatMenu_C::HideAllOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "HideAllOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.SetupOptionsBarForFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (None)
// bool                               Temp_bool_Variable_2                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (None)
// bool                               Temp_bool_Variable_3                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (None)
// bool                               Temp_bool_Variable_4                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (None)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (None)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (None)

void UCheatMenu_C::SetupOptionsBarForFolder(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionsBarForFolder");

	Params::UCheatMenu_C_SetupOptionsBarForFolder_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (None)
// TArray<struct FCheatMenuCharacterLevelPreset>CharacterPresetLevel                                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<struct FCheatMenuCharacterPresetItems>CharacterPresetItem                                              (None)
// bool                               Success                                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UCheatMenu_C::GetCharacterPresetsForEntry(int32 ScreenTracker, const TArray<struct FCheatMenuCharacterLevelPreset>& CharacterPresetLevel, const TArray<struct FCheatMenuCharacterPresetItems>& CharacterPresetItem, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCharacterPresetsForEntry");

	Params::UCheatMenu_C_GetCharacterPresetsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.CharacterPresetLevel = CharacterPresetLevel;
	Parms.CharacterPresetItem = CharacterPresetItem;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (None)
// TArray<class FString>              CheatStrings                                                     (AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<bool>                       RequireConfirm                                                   (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               AllowAdditionalString                                            (None)
// bool                               Success                                                          (None)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)

void UCheatMenu_C::GetCheatListsForEntry(int32 ScreenTracker, const TArray<class FString>& CheatStrings, const TArray<bool>& RequireConfirm, bool AllowAdditionalString, bool Success, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossCheats, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCheatListsForEntry");

	Params::UCheatMenu_C_GetCheatListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.CheatStrings = CheatStrings;
	Parms.RequireConfirm = RequireConfirm;
	Parms.AllowAdditionalString = AllowAdditionalString;
	Parms.Success = Success;
	Parms.CallFunc_GetBossSpawnArray_BossNames = CallFunc_GetBossSpawnArray_BossNames;
	Parms.CallFunc_GetBossSpawnArray_BossCheats = CallFunc_GetBossSpawnArray_BossCheats;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetEggListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (None)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoEggBlueprintIDs                                              (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoFertEggBlueprintIDs                                          (None)
// bool                               Success                                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)

void UCheatMenu_C::GetEggListsForEntry(int32 ScreenTracker, const TArray<TSoftClassPtr<class UPrimalItem>>& DinoEggBlueprintIDs, const TArray<TSoftClassPtr<class UPrimalItem>>& DinoFertEggBlueprintIDs, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetEggListsForEntry");

	Params::UCheatMenu_C_GetEggListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.DinoEggBlueprintIDs = DinoEggBlueprintIDs;
	Parms.DinoFertEggBlueprintIDs = DinoFertEggBlueprintIDs;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (None)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>Dinos                                                            (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Saddles                                                          (None)
// bool                               Success                                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (None)

void UCheatMenu_C::GetDinoListsForEntry(int32 ScreenTracker, const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& Dinos, const TArray<TSoftClassPtr<class UPrimalItem>>& Saddles, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetDinoListsForEntry");

	Params::UCheatMenu_C_GetDinoListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.Dinos = Dinos;
	Parms.Saddles = Saddles;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              ArrayIndex                                                       (None)
// TArray<struct FCheatMenuCharacterLevelPreset>LevelLists                                                       (AutoWeak, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<struct FCheatMenuCharacterPresetItems>ItemLists                                                        (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FCheatMenuCharacterPresetItemsCallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FCheatMenuCharacterLevelPresetCallFunc_Array_Get_Item_1                                        (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateButtonFromCharacterPresets_CreatedWidget          (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::CreateCharacterPresetEntry(const class FString& InString, int32 ArrayIndex, const TArray<struct FCheatMenuCharacterLevelPreset>& LevelLists, const TArray<struct FCheatMenuCharacterPresetItems>& ItemLists, const struct FCheatMenuCharacterPresetItems& CallFunc_Array_Get_Item, const struct FCheatMenuCharacterLevelPreset& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UUI_DebugSpawnMenuEntry* CallFunc_CreateButtonFromCharacterPresets_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCharacterPresetEntry");

	Params::UCheatMenu_C_CreateCharacterPresetEntry_Params Parms{};

	Parms.InString = InString;
	Parms.ArrayIndex = ArrayIndex;
	Parms.LevelLists = LevelLists;
	Parms.ItemLists = ItemLists;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_CreateButtonFromCharacterPresets_CreatedWidget = CallFunc_CreateButtonFromCharacterPresets_CreatedWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateCheatEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              ArrayIndex                                                       (None)
// TArray<class FString>              Array                                                            (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<bool>                       ArrayConfirm                                                     (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               AllowAdditionalString                                            (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (None)
// bool                               Temp_bool_Variable_1                                             (None)
// bool                               K2Node_Select_Default                                            (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget          (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::CreateCheatEntry(const class FString& Name, int32 ArrayIndex, const TArray<class FString>& Array, const TArray<bool>& ArrayConfirm, bool AllowAdditionalString, bool Temp_bool_Variable, bool CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_1, bool K2Node_Select_Default, class UUI_DebugSpawnMenuEntry* CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatEntry");

	Params::UCheatMenu_C_CreateCheatEntry_Params Parms{};

	Parms.Name = Name;
	Parms.ArrayIndex = ArrayIndex;
	Parms.Array = Array;
	Parms.ArrayConfirm = ArrayConfirm;
	Parms.AllowAdditionalString = AllowAdditionalString;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget = CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateEggEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (AutoWeak, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              ArrayIndex                                                       (None)
// TArray<TSoftClassPtr<class UPrimalItem>>UnFertEggs                                                       (Edit, ZeroConstructor, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>FertEggs                                                         (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      Temp_string_Variable                                             (AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      Temp_string_Variable_1                                           (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (None)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               Temp_bool_Variable                                               (None)
// class FString                      K2Node_Select_Default                                            (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget       (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::CreateEggEntry(const class FString& Name, int32 ArrayIndex, const TArray<TSoftClassPtr<class UPrimalItem>>& UnFertEggs, const TArray<TSoftClassPtr<class UPrimalItem>>& FertEggs, const class FString& Temp_string_Variable, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item_1, const class FString& Temp_string_Variable_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1, bool CallFunc_BooleanXOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UUI_DebugSpawnMenuEntry* CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggEntry");

	Params::UCheatMenu_C_CreateEggEntry_Params Parms{};

	Parms.Name = Name;
	Parms.ArrayIndex = ArrayIndex;
	Parms.UnFertEggs = UnFertEggs;
	Parms.FertEggs = FertEggs;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1 = CallFunc_IsValidSoftClassReference_ReturnValue_1;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget = CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateDinoEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              ArrayIndex                                                       (None)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>DinoBPList                                                       (Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoSaddleList                                                   (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// class UCheatMenuButton_C*          CallFunc_CreateDinoButtonAndSetText_CreatedButton                (None)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UCheatMenu_C::CreateDinoEntry(const class FString& Text, int32 ArrayIndex, const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& DinoBPList, const TArray<TSoftClassPtr<class UPrimalItem>>& DinoSaddleList, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item_1, class UCheatMenuButton_C* CallFunc_CreateDinoButtonAndSetText_CreatedButton, bool CallFunc_IsValidSoftClassReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoEntry");

	Params::UCheatMenu_C_CreateDinoEntry_Params Parms{};

	Parms.Text = Text;
	Parms.ArrayIndex = ArrayIndex;
	Parms.DinoBPList = DinoBPList;
	Parms.DinoSaddleList = DinoSaddleList;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateDinoButtonAndSetText_CreatedButton = CallFunc_CreateDinoButtonAndSetText_CreatedButton;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.SetupOptionBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_Get_Item_1                                        (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UCheatMenu_C::SetupOptionBar(int32 CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionBar");

	Params::UCheatMenu_C_SetupOptionBar_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (None)
// struct FCheatMenuCharacterPresetItemsItems                                                            (ZeroConstructor)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ZeroConstructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UCheatMenuCharacterPresetsButton_C*CallFunc_Create_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UCheatMenu_C::CreateButtonFromCharacterPresets(class FText Name, const struct FCheatMenuCharacterLevelPreset& Levels, const struct FCheatMenuCharacterPresetItems& Items, class UUI_DebugSpawnMenuEntry* CreatedWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuCharacterPresetsButton_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromCharacterPresets");

	Params::UCheatMenu_C_CreateButtonFromCharacterPresets_Params Parms{};

	Parms.Name = Name;
	Parms.Levels = Levels;
	Parms.Items = Items;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateFolderButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (None)
// int32                              ScreenNumber                                                     (None)
// class UTexture2D*                  Image                                                            (ZeroConstructor)
// class UUI_DebugSpawnMenuEntry*     OutWidget                                                        (ZeroConstructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UCheatMenuFolderButton_C*    CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateFolderButtons(class FText Name, int32 ScreenNumber, class UTexture2D* Image, class UUI_DebugSpawnMenuEntry* OutWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuFolderButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateFolderButtons");

	Params::UCheatMenu_C_CreateFolderButtons_Params Parms{};

	Parms.Name = Name;
	Parms.ScreenNumber = ScreenNumber;
	Parms.Image = Image;
	Parms.OutWidget = OutWidget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      Cheat                                                            (BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// bool                               RequireConfirm                                                   (None)
// bool                               Allow_Additional_String                                          (None)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UCheatMenuCheatButton_C*     CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateCheatButtonFromBlueprintID(const class FString& Name, const class FString& Cheat, bool RequireConfirm, bool Allow_Additional_String, class UUI_DebugSpawnMenuEntry* CreatedWidget, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuCheatButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params Parms{};

	Parms.Name = Name;
	Parms.Cheat = Cheat;
	Parms.RequireConfirm = RequireConfirm;
	Parms.Allow_Additional_String = Allow_Additional_String;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TSoftClassPtr<class UPrimalItem>   UnFertilizedEgg                                                  (ZeroConstructor, ContainsInstancedReference, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TSoftClassPtr<class UPrimalItem>   FertilizedEgg                                                    (ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ZeroConstructor)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class UCheatMenuEggButton_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UCheatMenu_C::CreateEggItemButtonFromBlueprintIDs(const class FString& Name, TSoftClassPtr<class UPrimalItem> UnFertilizedEgg, TSoftClassPtr<class UPrimalItem> FertilizedEgg, class UUI_DebugSpawnMenuEntry* CreatedWidget, bool Temp_bool_Variable, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, class UCheatMenuEggButton_C* CallFunc_Create_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggItemButtonFromBlueprintIDs");

	Params::UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params Parms{};

	Parms.Name = Name;
	Parms.UnFertilizedEgg = UnFertilizedEgg;
	Parms.FertilizedEgg = FertilizedEgg;
	Parms.CreatedWidget = CreatedWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item = K2Node_DynamicCast_AsPrimal_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UPrimalItem>   Blueprint                                                        (ZeroConstructor)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ZeroConstructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateItemButtonFromBlueprintID(TSoftClassPtr<class UPrimalItem> Blueprint, class UUI_DebugSpawnMenuEntry* CreatedWidget, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuItemButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateItemButtonFromBlueprintID_Params Parms{};

	Parms.Blueprint = Blueprint;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      ItemSpawnString                                                  (ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class UCheatMenuButton_C*          CreatedButton                                                    (ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateItemButtonAndSetText(const class FString& ItemName, const class FString& ItemSpawnString, class UCheatMenuButton_C* CreatedButton, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuItemButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonAndSetText");

	Params::UCheatMenu_C_CreateItemButtonAndSetText_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.ItemSpawnString = ItemSpawnString;
	Parms.CreatedButton = CreatedButton;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TSoftClassPtr<class APrimalDinoCharacter>DinoBP                                                           (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TSoftClassPtr<class UPrimalItem>   Saddle                                                           (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class UCheatMenuButton_C*          CreatedButton                                                    (Edit, ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ZeroConstructor)
// class UCheatMenuButton_C*          CallFunc_Create_ReturnValue                                      (None)

void UCheatMenu_C::CreateDinoButtonAndSetText(const class FString& Text, TSoftClassPtr<class APrimalDinoCharacter> DinoBP, TSoftClassPtr<class UPrimalItem> Saddle, class UCheatMenuButton_C* CreatedButton, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoButtonAndSetText");

	Params::UCheatMenu_C_CreateDinoButtonAndSetText_Params Parms{};

	Parms.Text = Text;
	Parms.DinoBP = DinoBP;
	Parms.Saddle = Saddle;
	Parms.CreatedButton = CreatedButton;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCheatMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UCheatMenu_C::BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UCheatMenu_C::BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenu_C::BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UCheatMenu_C::BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.Screen Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ToScreen                                                         (None)

void UCheatMenu_C::Screen_Changed(int32 ToScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "Screen Changed");

	Params::UCheatMenu_C_Screen_Changed_Params Parms{};

	Parms.ToScreen = ToScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.OnHome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCheatMenu_C::OnHome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "OnHome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UCheatMenu_C::BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UCheatMenu_C::BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)

void UCheatMenu_C::BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenu_C::BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.ExecuteUbergraph_CheatMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// TArray<class FString>              Temp_string_Variable                                             (AutoWeak, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_1                                           (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_2                                           (AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_3                                           (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_4                                           (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_5                                           (AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_6                                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_7                                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_8                                           (AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_9                                           (AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_10                                          (AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_11                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_12                                          (AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_13                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_14                                          (AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_15                                          (AutoWeak, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_16                                          (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Variable                                                (None)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable                                          (Edit, ZeroConstructor, AutoWeak, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_1                                        (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_2                                        (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_3                                        (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_4                                        (Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_5                                        (Edit, ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_6                                        (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_7                                        (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_8                                        (Edit, ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_9                                        (Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_10                                       (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_11                                       (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_12                                       (Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_13                                       (Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_14                                       (Edit, ZeroConstructor, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_15                                       (Edit, ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// enum class ECheckBoxState          Temp_byte_Variable                                               (None)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// TArray<class FString>              Temp_string_Variable_17                                          (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_18                                          (AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// TArray<class FString>              Temp_string_Variable_19                                          (ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (None)
// int32                              Temp_int_Array_Index_Variable_3                                  (None)
// TArray<class FString>              Temp_string_Variable_20                                          (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (None)
// TArray<class FString>              Temp_string_Variable_21                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable_4                                  (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              K2Node_CustomEvent_ToScreen                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// class FText                        CallFunc_Array_Get_Item_1                                        (AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget                           (Edit, ZeroConstructor)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// TArray<class FString>              Temp_string_Variable_22                                          (AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (None)
// enum class ECheckBoxState          K2Node_Select_Default                                            (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (None)
// TArray<class FString>              Temp_string_Variable_23                                          (AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item_3                                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>CallFunc_GetDinoListsForEntry_Dinos                              (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetDinoListsForEntry_Saddles                            (Edit, ZeroConstructor, AutoWeak, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetDinoListsForEntry_Success                            (None)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs                 (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs             (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetEggListsForEntry_Success                             (None)
// TArray<class FString>              CallFunc_GetCheatListsForEntry_CheatStrings                      (AssetRegistrySearchable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<bool>                       CallFunc_GetCheatListsForEntry_RequireConfirm                    (ContainsInstancedReference, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetCheatListsForEntry_AllowAdditionalString             (None)
// bool                               CallFunc_GetCheatListsForEntry_Success                           (None)
// TArray<struct FCheatMenuCharacterLevelPreset>CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel        (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<struct FCheatMenuCharacterPresetItems>CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem         (Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetCharacterPresetsForEntry_Success                     (None)
// TArray<class FString>              Temp_string_Variable_24                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// TArray<class FString>              CallFunc_GetMapJumpArray_EmptyStringArray                        (AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              Temp_string_Variable_25                                          (AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetMapOpenListsForEntry_CheatStrings                    (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetMapOpenListsForEntry_Success                         (None)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (Edit, ZeroConstructor)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget_1                         (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// TArray<class FString>              Temp_string_Variable_26                                          (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Array_Get_Item_5                                        (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)
// TArray<TSoftClassPtr<class UPrimalItem>>K2Node_Select_Default_2                                          (Edit, ZeroConstructor, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (AutoWeak, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_6                                        (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (None)
// int32                              Temp_int_Variable_1                                              (None)
// TArray<class FString>              K2Node_Select_Default_3                                          (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_Contains_ReturnValue                                    (None)
// class FString                      CallFunc_Array_Get_Item_7                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (None)
// int32                              CallFunc_Len_ReturnValue                                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (None)

void UCheatMenu_C::ExecuteUbergraph_CheatMenu(int32 EntryPoint, const TArray<class FString>& Temp_string_Variable, const TArray<class FString>& Temp_string_Variable_1, const TArray<class FString>& Temp_string_Variable_2, const TArray<class FString>& Temp_string_Variable_3, const TArray<class FString>& Temp_string_Variable_4, const TArray<class FString>& Temp_string_Variable_5, const TArray<class FString>& Temp_string_Variable_6, const TArray<class FString>& Temp_string_Variable_7, const TArray<class FString>& Temp_string_Variable_8, const TArray<class FString>& Temp_string_Variable_9, const TArray<class FString>& Temp_string_Variable_10, const TArray<class FString>& Temp_string_Variable_11, const TArray<class FString>& Temp_string_Variable_12, const TArray<class FString>& Temp_string_Variable_13, const TArray<class FString>& Temp_string_Variable_14, const TArray<class FString>& Temp_string_Variable_15, const TArray<class FString>& Temp_string_Variable_16, int32 Temp_int_Variable, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_1, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_2, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_3, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_4, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_5, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_6, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_7, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_8, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_9, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_10, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_11, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_12, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_13, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_14, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_15, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const TArray<class FString>& Temp_string_Variable_17, const TArray<class FString>& Temp_string_Variable_18, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const TArray<class FString>& Temp_string_Variable_19, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const TArray<class FString>& Temp_string_Variable_20, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, const TArray<class FString>& Temp_string_Variable_21, class FText K2Node_ComponentBoundEvent_Text_3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, class UUI_DebugSpawnMenuEntry* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 K2Node_CustomEvent_ToScreen, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget, class UUI_DebugSpawnMenuEntry* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, const TArray<class FString>& Temp_string_Variable_22, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const TArray<class FString>& Temp_string_Variable_23, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item_3, bool K2Node_SwitchEnum_CmpSuccess, const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& CallFunc_GetDinoListsForEntry_Dinos, const TArray<TSoftClassPtr<class UPrimalItem>>& CallFunc_GetDinoListsForEntry_Saddles, bool CallFunc_GetDinoListsForEntry_Success, const TArray<TSoftClassPtr<class UPrimalItem>>& CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs, const TArray<TSoftClassPtr<class UPrimalItem>>& CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs, bool CallFunc_GetEggListsForEntry_Success, const TArray<class FString>& CallFunc_GetCheatListsForEntry_CheatStrings, const TArray<bool>& CallFunc_GetCheatListsForEntry_RequireConfirm, bool CallFunc_GetCheatListsForEntry_AllowAdditionalString, bool CallFunc_GetCheatListsForEntry_Success, const TArray<struct FCheatMenuCharacterLevelPreset>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel, const TArray<struct FCheatMenuCharacterPresetItems>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem, bool CallFunc_GetCharacterPresetsForEntry_Success, const TArray<class FString>& Temp_string_Variable_24, const TArray<struct FCheatMapJumpInfo>& CallFunc_GetMapJumpListForEntry_MapJumps, bool CallFunc_GetMapJumpListForEntry_Success, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const TArray<class FString>& CallFunc_GetMapJumpArray_EmptyStringArray, const TArray<class FString>& Temp_string_Variable_25, const TArray<class FString>& CallFunc_GetMapOpenListsForEntry_CheatStrings, bool CallFunc_GetMapOpenListsForEntry_Success, class UTexture2D* CallFunc_Array_Get_Item_4, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget_1, int32 CallFunc_Array_Add_ReturnValue, const TArray<class FString>& Temp_string_Variable_26, const class FString& CallFunc_Array_Get_Item_5, class FText CallFunc_Conv_StringToText_ReturnValue, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossCheats, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const TArray<TSoftClassPtr<class UPrimalItem>>& K2Node_Select_Default_2, class FText K2Node_ComponentBoundEvent_Text, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class UUI_DebugSpawnMenuEntry* CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 Temp_int_Variable_1, const TArray<class FString>& K2Node_Select_Default_3, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ExecuteUbergraph_CheatMenu");

	Params::UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.Temp_string_Variable_12 = Temp_string_Variable_12;
	Parms.Temp_string_Variable_13 = Temp_string_Variable_13;
	Parms.Temp_string_Variable_14 = Temp_string_Variable_14;
	Parms.Temp_string_Variable_15 = Temp_string_Variable_15;
	Parms.Temp_string_Variable_16 = Temp_string_Variable_16;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.Temp_softclass_Variable_1 = Temp_softclass_Variable_1;
	Parms.Temp_softclass_Variable_2 = Temp_softclass_Variable_2;
	Parms.Temp_softclass_Variable_3 = Temp_softclass_Variable_3;
	Parms.Temp_softclass_Variable_4 = Temp_softclass_Variable_4;
	Parms.Temp_softclass_Variable_5 = Temp_softclass_Variable_5;
	Parms.Temp_softclass_Variable_6 = Temp_softclass_Variable_6;
	Parms.Temp_softclass_Variable_7 = Temp_softclass_Variable_7;
	Parms.Temp_softclass_Variable_8 = Temp_softclass_Variable_8;
	Parms.Temp_softclass_Variable_9 = Temp_softclass_Variable_9;
	Parms.Temp_softclass_Variable_10 = Temp_softclass_Variable_10;
	Parms.Temp_softclass_Variable_11 = Temp_softclass_Variable_11;
	Parms.Temp_softclass_Variable_12 = Temp_softclass_Variable_12;
	Parms.Temp_softclass_Variable_13 = Temp_softclass_Variable_13;
	Parms.Temp_softclass_Variable_14 = Temp_softclass_Variable_14;
	Parms.Temp_softclass_Variable_15 = Temp_softclass_Variable_15;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_string_Variable_17 = Temp_string_Variable_17;
	Parms.Temp_string_Variable_18 = Temp_string_Variable_18;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_string_Variable_19 = Temp_string_Variable_19;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_string_Variable_20 = Temp_string_Variable_20;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_string_Variable_21 = Temp_string_Variable_21;
	Parms.K2Node_ComponentBoundEvent_Text_3 = K2Node_ComponentBoundEvent_Text_3;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_ToScreen = K2Node_CustomEvent_ToScreen;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateFolderButtons_outWidget = CallFunc_CreateFolderButtons_outWidget;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_string_Variable_22 = Temp_string_Variable_22;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_string_Variable_23 = Temp_string_Variable_23;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDinoListsForEntry_Dinos = CallFunc_GetDinoListsForEntry_Dinos;
	Parms.CallFunc_GetDinoListsForEntry_Saddles = CallFunc_GetDinoListsForEntry_Saddles;
	Parms.CallFunc_GetDinoListsForEntry_Success = CallFunc_GetDinoListsForEntry_Success;
	Parms.CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs = CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs;
	Parms.CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs = CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs;
	Parms.CallFunc_GetEggListsForEntry_Success = CallFunc_GetEggListsForEntry_Success;
	Parms.CallFunc_GetCheatListsForEntry_CheatStrings = CallFunc_GetCheatListsForEntry_CheatStrings;
	Parms.CallFunc_GetCheatListsForEntry_RequireConfirm = CallFunc_GetCheatListsForEntry_RequireConfirm;
	Parms.CallFunc_GetCheatListsForEntry_AllowAdditionalString = CallFunc_GetCheatListsForEntry_AllowAdditionalString;
	Parms.CallFunc_GetCheatListsForEntry_Success = CallFunc_GetCheatListsForEntry_Success;
	Parms.CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel = CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel;
	Parms.CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem = CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem;
	Parms.CallFunc_GetCharacterPresetsForEntry_Success = CallFunc_GetCharacterPresetsForEntry_Success;
	Parms.Temp_string_Variable_24 = Temp_string_Variable_24;
	Parms.CallFunc_GetMapJumpListForEntry_MapJumps = CallFunc_GetMapJumpListForEntry_MapJumps;
	Parms.CallFunc_GetMapJumpListForEntry_Success = CallFunc_GetMapJumpListForEntry_Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMapJumpArray_EmptyStringArray = CallFunc_GetMapJumpArray_EmptyStringArray;
	Parms.Temp_string_Variable_25 = Temp_string_Variable_25;
	Parms.CallFunc_GetMapOpenListsForEntry_CheatStrings = CallFunc_GetMapOpenListsForEntry_CheatStrings;
	Parms.CallFunc_GetMapOpenListsForEntry_Success = CallFunc_GetMapOpenListsForEntry_Success;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CreateFolderButtons_outWidget_1 = CallFunc_CreateFolderButtons_outWidget_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_string_Variable_26 = Temp_string_Variable_26;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetBossSpawnArray_BossNames = CallFunc_GetBossSpawnArray_BossNames;
	Parms.CallFunc_GetBossSpawnArray_BossCheats = CallFunc_GetBossSpawnArray_BossCheats;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget = CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


