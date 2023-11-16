#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x5E0 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C
class UASAUIWidget_Button_Style4_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                               Button;                                            // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x340(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            Button_Text_Left;                                  // 0x348(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            Button_Text_Right;                                 // 0x350(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x358(0x8)(Edit, ZeroConstructor)
	class UImage*                                SelectedLine;                                      // 0x360(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              SizeBox;                                           // 0x368(0x8)(Edit, ZeroConstructor)
	class FText                                  ButtonLabel_Left;                                  // 0x370(0x18)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x388(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture*                              ButtonLabel_Icon;                                  // 0x398(0x8)(Edit, ZeroConstructor)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A0(0x10)(None)
	class FText                                  ButtonLabel_Right;                                 // 0x3B0(0x18)(TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3C8(0x58)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       HeightOverride;                                    // 0x420(0x8)(None)
	double                                       WidthOverride;                                     // 0x428(0x8)(None)
	struct FSlateBrush                           NormalStyle_Active;                                // 0x430(0xD0)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           NormalStyle_Inactive;                              // 0x500(0xD0)(ZeroConstructor)
	struct FMargin                               ButtonTextPadding;                                 // 0x5D0(0x10)(None)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_Style4_C* GetDefaultObj();

	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	void SetActive(bool NewActive);
	void ExecuteUbergraph_ASAUIWidget_Button_Style4(int32 EntryPoint, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_TextIsEmpty_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_newActive, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void OnButtonClicked__DelegateSignature();
};

}


