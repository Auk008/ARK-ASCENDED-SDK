#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_CFCoreUIModel.BP_CFCoreUIModel_C
class UBP_CFCoreUIModel_C : public UCFCoreUIModel
{
public:

	static class UClass* StaticClass();
	static class UBP_CFCoreUIModel_C* GetDefaultObj();

	void OnEventReceived(enum class EGameModsEvent Evt, const TArray<struct FCFCoreMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_OutModsList, bool CallFunc_OnEventReceived_ReturnValue);
	void OnEventReceived_LibraryProgress(enum class EGameModsEvent Evt, const struct FLibraryProgress& Progress, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_LibraryProgress_OutModsList, bool CallFunc_OnEventReceived_LibraryProgress_ReturnValue);
};

}


