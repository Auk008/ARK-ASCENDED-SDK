#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x3C8 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuEggButton.CheatMenuEggButton_C
class UCheatMenuEggButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class UImage*                                ButtonImage;                                       // 0x338(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            ButtonText;                                        // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(ZeroConstructor)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(SimpleDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UPrimalItem>             BlueprintID;                                       // 0x368(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UPrimalItem>             FertBlueprintID;                                   // 0x398(0x30)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCheatMenuEggButton_C* GetDefaultObj();

	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMenuEggButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsChecked_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, TSoftClassPtr<class UPrimalItem> K2Node_Select_Default, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem> K2Node_Select_Default_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1);
};

}


