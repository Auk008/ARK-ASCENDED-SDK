#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE4 (0x414 - 0x330)
// WidgetBlueprintGeneratedClass UI_ThemeCustomizer.UI_ThemeCustomizer_C
class UUI_ThemeCustomizer_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UButton*                               Button_Reset;                                      // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Revert;                                     // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Save;                                       // 0x348(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_BUTTON_Update_C*     ThemeCustomization;                                // 0x350(0x8)(Edit, ZeroConstructor)
	class UUI_CustomColorPicker_C*               UI_CustomColorPicker;                              // 0x358(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeBoolSlot_C*               UI_CustomizeBoolSlot_253;                          // 0x360(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_BUTTON_Install_C*    UI_CustomizeSlot_BUTTON_Install;                   // 0x368(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_BUTTON_SideMenu_C*   UI_CustomizeSlot_BUTTON_SideMenu;                  // 0x370(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_BUTTON_SignIn_C*     UI_CustomizeSlot_BUTTON_SignIn;                    // 0x378(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_BUTTON_Uninstall_C*  UI_CustomizeSlot_BUTTON_Uninstall;                 // 0x380(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_ExamineBackground_C* UI_CustomizeSlot_ExamineBackground;                // 0x388(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_InfoBackground_C*    UI_CustomizeSlot_InfoBackground;                   // 0x390(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_MainBackground_C*    UI_CustomizeSlot_MainBackground;                   // 0x398(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_MainFont_C*          UI_CustomizeSlot_MainFont;                         // 0x3A0(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_ModWindow_C*         UI_CustomizeSlot_ModWindow;                        // 0x3A8(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_NotifBackground_C*   UI_CustomizeSlot_NotifBackground;                  // 0x3B0(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_Search_SideMenu_C*   UI_CustomizeSlot_Search_SideMenu;                  // 0x3B8(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_SecondaryFont_C*     UI_CustomizeSlot_SecondaryFont;                    // 0x3C0(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeSlot_SideBar_C*           UI_CustomizeSlot_SideBar;                          // 0x3C8(0x8)(Edit, ZeroConstructor)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x3D0(0x8)(Edit, ZeroConstructor)
	class UUI_CustomizeColorSlot_C*              CurrentOptionSelected;                             // 0x3D8(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnChangedOption;                                   // 0x3E0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            UpdateAllWidgets;                                  // 0x3F0(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCFCoreThemeRowData>           ThemeChangesHistory;                               // 0x400(0x10)(None)
	int32                                        CurrentHistoryIndex;                               // 0x410(0x4)(None)

	static class UClass* StaticClass();
	static class UUI_ThemeCustomizer_C* GetDefaultObj();

	void UpdateColorPickerEnabled(bool CallFunc_IsValid_ReturnValue);
	void RestoreToDefaults(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCFCoreThemeRowData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void SaveToHistory(bool CallFunc_IsValid_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item);
	void ForwardHistoryAStep(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void RevertBackAStepInHistory(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsLeftControlDown_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ResetHistory(bool CallFunc_IsValid_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item);
	void AddToHistory(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void CheckIfHistoryDirty(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void UpdateSliderActivated(bool CallFunc_IsValid_ReturnValue);
	void GetThemeSaveDirectory(const class FString& ReturnValue, const class FString& CallFunc_GetProjectDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnCurrentOptionChanged();
	void OnColorChangedByColorPicker(const struct FLinearColor& Color);
	void SaveStep();
	void OnInitialized();
	void BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_ThemeCustomizer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& CallFunc_GetColor_Color, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FLinearColor& K2Node_CustomEvent_Color);
	void UpdateAllWidgets__DelegateSignature();
	void OnChangedOption__DelegateSignature();
};

}


