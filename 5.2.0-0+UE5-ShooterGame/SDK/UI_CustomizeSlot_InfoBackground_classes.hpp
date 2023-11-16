#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x378 - 0x378)
// WidgetBlueprintGeneratedClass UI_CustomizeSlot_InfoBackground.UI_CustomizeSlot_InfoBackground_C
class UUI_CustomizeSlot_InfoBackground_C : public UUI_CustomizeColorSlot_C
{
public:

	static class UClass* StaticClass();
	static class UUI_CustomizeSlot_InfoBackground_C* GetDefaultObj();

	void SetColor(const struct FLinearColor& Color, bool CallFunc_IsValid_ReturnValue);
	void GetColor(const struct FLinearColor& Color, const struct FCFCoreThemeRowData& CallFunc_GetCurrentTheme_CurrentTheme);
};

}


