#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7A0 - 0x758)
// WidgetBlueprintGeneratedClass UI_Prompt_Uninstall.UI_Prompt_Uninstall_C
class UUI_Prompt_Uninstall_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                            TEXT_ModName;                                      // 0x760(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ModName2;                                     // 0x768(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Blue_C*                 UI_Button_Ark_Cancel;                              // 0x770(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Blue_C*                 UI_Button_Ark_Continue;                            // 0x778(0x8)(Edit, ZeroConstructor)
	class FText                                  ModName;                                           // 0x780(0x18)(None)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x798(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Prompt_Uninstall_C* GetDefaultObj();

	void BPHighlightWidgetOnStart(bool ReturnValue);
	void UpdateThemeSettings();
	void InitializeUninstallIUI();
	void BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Blue_42_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void Cancel_Uninstall();
	void BPReleasedVirtualAccept();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Prompt_Uninstall(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


