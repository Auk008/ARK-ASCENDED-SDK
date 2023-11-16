#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x368 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuItemAllButton.CheatMenuItemAllButton_C
class UCheatMenuItemAllButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(ZeroConstructor)
	TArray<TSoftClassPtr<class UPrimalItem>>     ItemList;                                          // 0x358(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCheatMenuItemAllButton_C* GetDefaultObj();

	void BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMenuItemAllButton(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


