#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x370 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C
class UUI_CustomizeBoolSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UCheckBox*                             CheckBox_285;                                      // 0x338(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x340(0x8)(Edit, ZeroConstructor)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x348(0x8)(Edit, ZeroConstructor)
	class FText                                  Slot_Name;                                         // 0x350(0x18)(None)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x368(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_CustomizeBoolSlot_C* GetDefaultObj();

	void GetCurrentTheme(const struct FCFCoreThemeRowData& CurrentTheme, bool CallFunc_IsValid_ReturnValue);
	void GetColor(const struct FLinearColor& Color);
	void SetColor(const struct FLinearColor& Color);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_UI_CustomizeBoolSlot(int32 EntryPoint, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState K2Node_Select_Default, const TArray<class UUI_ThemeCustomizer_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool K2Node_Event_IsDesignTime, class UUI_ThemeCustomizer_C* CallFunc_Array_Get_Item, bool K2Node_ComponentBoundEvent_bIsChecked, bool CallFunc_IsValid_ReturnValue);
};

}


