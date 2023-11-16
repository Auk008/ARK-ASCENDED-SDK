#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuItemButton.CheatMenuItemButton_C
class UCheatMenuItemButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ZeroConstructor)
	class UImage*                                IconImage;                                         // 0x340(0x8)(ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(ZeroConstructor)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(None)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(ZeroConstructor)
	class UMaterialInterface*                    NewVar_0;                                          // 0x370(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCheatMenuItemButton_C* GetDefaultObj();

	void SetItem(class UClass* ItemClass, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, class UPrimalItemDyeGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Dye_Generic, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetItemShortName_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMenuItemButton(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, TSoftClassPtr<class UPrimalItem> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


