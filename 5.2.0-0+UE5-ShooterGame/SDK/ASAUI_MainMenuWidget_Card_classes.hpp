#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A (0x3CA - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C
class UASAUI_MainMenuWidget_Card_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      HighlightAlpha;                                    // 0x338(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      CardScale;                                         // 0x340(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   Button;                                            // 0x348(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          CanvasPanel_343;                                   // 0x350(0x8)(Edit, ZeroConstructor)
	class UImage*                                CardImage_Image;                                   // 0x358(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            CardImage_Text;                                    // 0x360(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_58;                                          // 0x368(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CardImage;                                         // 0x370(0x8)(Edit, ZeroConstructor)
	class FText                                  CardText;                                          // 0x378(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPrimalUserWidget*                     ParentWidget;                                      // 0x390(0x8)(Edit, ZeroConstructor)
	int32                                        Row;                                               // 0x398(0x4)(None)
	int32                                        Column;                                            // 0x39C(0x4)(None)
	FMulticastInlineDelegateProperty_            OnCardClicked;                                     // 0x3A0(0x10)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CustomTooltipText;                                 // 0x3B0(0x18)(None)
	bool                                         Disabled;                                          // 0x3C8(0x1)(None)
	bool                                         Highlighted;                                       // 0x3C9(0x1)(None)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_Card_C* GetDefaultObj();

	void OnMouseEnterFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void StopAnims();
	void OnMouseLeaveFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUI_MainMenuWidget_Card_Button_99_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Refresh();
	void ExecuteUbergraph_ASAUI_MainMenuWidget_Card(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime);
	void OnCardClicked__DelegateSignature();
};

}


