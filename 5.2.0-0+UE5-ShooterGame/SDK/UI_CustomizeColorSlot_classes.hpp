#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomizeColorSlot.UI_CustomizeColorSlot_C
class UUI_CustomizeColorSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UBorder*                               BOARDER_Color;                                     // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Slot;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x348(0x8)(Edit, ZeroConstructor)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x350(0x8)(Edit, ZeroConstructor)
	class FText                                  Slot_Name;                                         // 0x358(0x18)(None)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x370(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_CustomizeColorSlot_C* GetDefaultObj();

	void GetCurrentTheme(const struct FCFCoreThemeRowData& CurrentTheme, bool CallFunc_IsValid_ReturnValue);
	void GetColor(const struct FLinearColor& Color);
	void SetColor(const struct FLinearColor& Color, bool CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_0();
	void ExecuteUbergraph_UI_CustomizeColorSlot(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const TArray<class UUI_ThemeCustomizer_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_ThemeCustomizer_C* CallFunc_Array_Get_Item, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_GetColor_Color, const struct FLinearColor& CallFunc_GetColor_Color_1);
};

}


