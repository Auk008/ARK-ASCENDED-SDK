#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C
class UCheatMenuCharacterPresetsButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AutoWeak, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ZeroConstructor)
	TArray<int32>                                Levels;                                            // 0x350(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	bool                                         NewVar_2;                                          // 0x360(0x1)(None)
	uint8                                        Pad_41CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheatMenuCharacterPresetItems        ItemIDs;                                           // 0x368(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCheatMenuCharacterPresetsButton_C* GetDefaultObj();

	void SetValues(class FText Cheat_Name, const struct FCheatMenuCharacterLevelPreset& Levels, const struct FCheatMenuCharacterPresetItems& Items, const TArray<int32>& K2Node_MakeArray_Array);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMenuCharacterPresetsButton(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCheatMenuCheatItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


