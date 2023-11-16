#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x371 - 0x330)
// WidgetBlueprintGeneratedClass MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C
class UMinimalSwitchUI_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        GamepadButton;                                     // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                KBMShowButton;                                     // 0x340(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TextBlock;                                         // 0x348(0x8)(ZeroConstructor)
	class FString                                HideMoreInfoText;                                  // 0x350(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShowMoreInfoText;                                  // 0x360(0x10)(None)
	bool                                         CachedlMinimalUI;                                  // 0x370(0x1)(None)

	static class UClass* StaticClass();
	static class UMinimalSwitchUI_Widget_C* GetDefaultObj();

	void FixConsoleIcons(const TArray<class UWidget*>& Local_UWidgetIcons, int32 Temp_int_Array_Index_Variable, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateTooltipMoreInfo(bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FText K2Node_Select_Default);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_MinimalSwitchUI_Widget(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

}


