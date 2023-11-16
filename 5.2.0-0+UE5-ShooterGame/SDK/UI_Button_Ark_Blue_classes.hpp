#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x390 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Ark_Blue.UI_Button_Ark_Blue_C
class UUI_Button_Ark_Blue_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               Button_Main;                                       // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_194;                                         // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_ButtonIcon;                                    // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                Spacer_2;                                          // 0x350(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            Text_ButtonMessage;                                // 0x358(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x360(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x370(0x8)(ZeroConstructor)
	class FText                                  Text;                                              // 0x378(0x18)(None)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Blue_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Button_Ark_Blue(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue);
	void OnClick__DelegateSignature();
};

}


