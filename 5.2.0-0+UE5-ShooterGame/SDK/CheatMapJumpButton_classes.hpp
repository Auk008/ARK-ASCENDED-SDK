#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass CheatMapJumpButton.CheatMapJumpButton_C
class UCheatMapJumpButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(ZeroConstructor)
	struct FVector                               Lat_Long__Z;                                       // 0x350(0x18)(None)
	class FString                                Time_Of_Day;                                       // 0x368(0x10)(None)
	double                                       Yaw;                                               // 0x378(0x8)(None)

	static class UClass* StaticClass();
	static class UCheatMapJumpButton_C* GetDefaultObj();

	void SetMapJumpInfo(const struct FCheatMapJumpInfo& Info, double K2Node_VariableSet_Yaw_ImplicitCast);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMapJumpButton(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
};

}


