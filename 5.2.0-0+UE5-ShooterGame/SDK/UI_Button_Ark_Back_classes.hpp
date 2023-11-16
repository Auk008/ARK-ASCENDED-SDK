#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3A0 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Ark_Back.UI_Button_Ark_Back_C
class UUI_Button_Ark_Back_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UButton*                               Button_Main;                                       // 0x338(0x8)(ZeroConstructor)
	class UImage*                                Image_194;                                         // 0x340(0x8)(ZeroConstructor)
	class UImage*                                IMG_ButtonIcon;                                    // 0x348(0x8)(ZeroConstructor)
	class UImage*                                Spacer_2;                                          // 0x350(0x8)(ZeroConstructor)
	class UTextBlock*                            Text_ButtonMessage;                                // 0x358(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x360(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x370(0x8)(ZeroConstructor)
	class FText                                  Text;                                              // 0x378(0x18)(None)
	class UTexture2D*                            Gamepad_icon_PS5;                                  // 0x390(0x8)(ZeroConstructor)
	class UTexture2D*                            Gamepad_icon_XSX;                                  // 0x398(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Back_C* GetDefaultObj();

	void BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UI_Button_Ark_Back(int32 EntryPoint, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void OnClick__DelegateSignature();
};

}


