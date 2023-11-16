#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33 (0x363 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuCheatButton.CheatMenuCheatButton_C
class UCheatMenuCheatButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(ZeroConstructor)
	class FString                                CheatString;                                       // 0x350(0x10)(None)
	bool                                         ConfirmationRequired;                              // 0x360(0x1)(None)
	bool                                         IsShowingConfirm;                                  // 0x361(0x1)(None)
	bool                                         AllowAdditionalString;                             // 0x362(0x1)(None)

	static class UClass* StaticClass();
	static class UCheatMenuCheatButton_C* GetDefaultObj();

	void CloseConfirmation(class FText CallFunc_Conv_StringToText_ReturnValue);
	void ShowConfirmation(const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMenuCheatButton(int32 EntryPoint, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default);
};

}


