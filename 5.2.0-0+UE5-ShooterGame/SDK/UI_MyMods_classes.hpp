#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA28 - 0xA10)
// WidgetBlueprintGeneratedClass UI_MyMods.UI_MyMods_C
class UUI_MyMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(SimpleDisplay, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                SortOption;                                        // 0xA18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUI_MyMods_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void UpdatePagination(bool Temp_bool_Variable, int32 CallFunc_CalculateModsPerPage_Mods, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void GetMods();
	void Event_On_Mod_Installed(const struct FInstallProgressMod& Mod);
	void Destruct();
	void Construct();
	void ExecuteUbergraph_UI_MyMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FInstallProgressMod& K2Node_CustomEvent_mod, bool CallFunc_SubscribeViewToEvents_ReturnValue, const TArray<class UWidget*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


