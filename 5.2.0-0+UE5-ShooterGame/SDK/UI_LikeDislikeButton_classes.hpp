#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x370 - 0x330)
// WidgetBlueprintGeneratedClass UI_LikeDislikeButton.UI_LikeDislikeButton_C
class UUI_LikeDislikeButton_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               Base_Button;                                       // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_79;                                          // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_ButtonIcon;                                    // 0x348(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Count;                                        // 0x350(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            Action;                                            // 0x358(0x10)(Edit, ZeroConstructor)
	class UTexture2D*                            Icon;                                              // 0x368(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_LikeDislikeButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_LikeDislikeButton_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_LikeDislikeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void Action__DelegateSignature();
};

}


