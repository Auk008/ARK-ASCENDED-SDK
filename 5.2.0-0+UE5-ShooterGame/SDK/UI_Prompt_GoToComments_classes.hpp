#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x790 - 0x758)
// WidgetBlueprintGeneratedClass UI_Prompt_GoToComments.UI_Prompt_GoToComments_C
class UUI_Prompt_GoToComments_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_Button_Ark_Blue_C*                 UI_Button_Ark_Cancel;                              // 0x760(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Blue_C*                 UI_Button_Ark_Continue;                            // 0x768(0x8)(Edit, ZeroConstructor)
	class FText                                  ModName;                                           // 0x770(0x18)(None)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x788(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Prompt_GoToComments_C* GetDefaultObj();

	void BPEscapeClosed(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void BPGamepadReleased(const struct FKey& TheKey, bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void UpdateThemeSettings();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Prompt_GoToComments(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


