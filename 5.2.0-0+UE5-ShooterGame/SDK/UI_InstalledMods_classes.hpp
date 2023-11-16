#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA30 - 0xA10)
// WidgetBlueprintGeneratedClass UI_InstalledMods.UI_InstalledMods_C
class UUI_InstalledMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(ContainsInstancedReference, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                SortOption;                                        // 0xA18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UUI_Prompt_Uninstall_C*                UninstallAllPopup;                                 // 0xA28(0x8)(Edit, ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_InstalledMods_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const TArray<struct FInstallProgressMod>& TempMods, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void Change_Uninstall_All_Button_Visiblity();
	void Construct();
	void Event_On_Mod_Installed(const struct FInstallProgressMod& Mod);
	void Event_On_Mod_Uninstalled(const struct FInstallProgressMod& Mod);
	void Destruct();
	void ContinueUninstallAll();
	void RemovePopup();
	void ShowUninstallAllPopup();
	void GetMods();
	void PullModsFromAPI();
	void ExecuteUbergraph_UI_InstalledMods(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, int32 Temp_int_Array_Index_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, const struct FInstallProgressMod& K2Node_CustomEvent_mod_1, const struct FInstallProgressMod& K2Node_CustomEvent_mod, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_SubscribeViewToEvents_ReturnValue);
};

}


