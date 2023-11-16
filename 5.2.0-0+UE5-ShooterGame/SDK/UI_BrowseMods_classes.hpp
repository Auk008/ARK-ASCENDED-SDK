#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA28 - 0xA10)
// WidgetBlueprintGeneratedClass UI_BrowseMods.UI_BrowseMods_C
class UUI_BrowseMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                InitialClassCategoryName;                          // 0xA18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUI_BrowseMods_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void UpdatePageCount(const struct FCFCoreApiResponsePagination& CFCoreApiResponsePagination, bool Temp_bool_Variable, int32 CallFunc_CalculateModsPerPage_Mods, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void GetCurrentSearchInput(class FText CurrentSearchInput, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ResetPageNum();
	void GetMods();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_UI_BrowseMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_CalculateModsPerPage_Mods, const struct FCFCoreSearchModsFilter& CallFunc_FilterModInfo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SubscribeViewToEvents_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FCFCoreApiRequestPagination& CallFunc_MakeApiRequestPagination_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1);
};

}


