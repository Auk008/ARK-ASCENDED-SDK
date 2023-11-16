#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0xBE0 - 0xA18)
// WidgetBlueprintGeneratedClass DyeUI.DyeUI_C
class UDyeUI_C : public UUI_DyeItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(None)
	class UWidgetAnimation*                      Close;                                             // 0xA20(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0xA28(0x8)(Edit, ZeroConstructor)
	class UImage*                                ArkPrimeIcon;                                      // 0xA30(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CloseButton;                                       // 0xA38(0x8)(Edit, ZeroConstructor)
	class UDyeRegionButton_C*                    Color0;                                            // 0xA40(0x8)(Edit, ZeroConstructor)
	class UDyeRegionButton_C*                    Color1;                                            // 0xA48(0x8)(Edit, ZeroConstructor)
	class UDyeRegionButton_C*                    Color2;                                            // 0xA50(0x8)(Edit, ZeroConstructor)
	class UDyeRegionButton_C*                    Color3;                                            // 0xA58(0x8)(Edit, ZeroConstructor)
	class UDyeRegionButton_C*                    Color4;                                            // 0xA60(0x8)(Edit, ZeroConstructor)
	class UDyeRegionButton_C*                    Color5;                                            // 0xA68(0x8)(Edit, ZeroConstructor)
	class UImage*                                DrawCursorWidget;                                  // 0xA70(0x8)(Edit, ZeroConstructor)
	class UProgressBar*                          DurabilityBar;                                     // 0xA78(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   DyeButton;                                         // 0xA80(0x8)(Edit, ZeroConstructor)
	class UImage*                                DyeIcon;                                           // 0xA88(0x8)(Edit, ZeroConstructor)
	class UCustomButton_HUB_ASA_C*               ErasePainting;                                     // 0xA90(0x8)(Edit, ZeroConstructor)
	class UImage*                                ErasePaintingIcon;                                 // 0xA98(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_0;                           // 0xAA0(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_1;                           // 0xAA8(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        GamepadRegionQuickButtons;                         // 0xAB0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image;                                             // 0xAB8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_0;                                           // 0xAC0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2;                                           // 0xAC8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_3;                                           // 0xAD0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_4;                                           // 0xAD8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_5;                                           // 0xAE0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_6;                                           // 0xAE8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_7;                                           // 0xAF0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_8;                                           // 0xAF8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_18;                                          // 0xB00(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_19;                                          // 0xB08(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_82;                                          // 0xB10(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_94;                                          // 0xB18(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_117;                                         // 0xB20(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_120;                                         // 0xB28(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_130;                                         // 0xB30(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_151;                                         // 0xB38(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_179;                                         // 0xB40(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_216;                                         // 0xB48(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_264;                                         // 0xB50(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_292;                                         // 0xB58(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_318;                                         // 0xB60(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_337;                                         // 0xB68(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_346;                                         // 0xB70(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_367;                                         // 0xB78(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_499;                                         // 0xB80(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_955;                                         // 0xB88(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1020;                                        // 0xB90(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1066;                                        // 0xB98(0x8)(Edit, ZeroConstructor)
	class UImage*                                ItemIcon;                                          // 0xBA0(0x8)(Edit, ZeroConstructor)
	class UCustomButton_HUB_ASA_C*               LoadPaintings;                                     // 0xBA8(0x8)(Edit, ZeroConstructor)
	class UUI_PreviewWidget*                     MeshPreview;                                       // 0xBB0(0x8)(Edit, ZeroConstructor)
	class UCustomButton_HUB_ASA_C*               ResetCamera;                                       // 0xBB8(0x8)(Edit, ZeroConstructor)
	class UCustomButton_HUB_ASA_C*               SavePaintings;                                     // 0xBC0(0x8)(Edit, ZeroConstructor)
	class UImage*                                SavePaintingsIcon;                                 // 0xBC8(0x8)(Edit, ZeroConstructor)
	class UScaleBox*                             ScaleBox_1;                                        // 0xBD0(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      SearchTextBox;                                     // 0xBD8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDyeUI_C* GetDefaultObj();

	void GetVisibility_0(enum class ESlateVisibility ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue);
	void FixConsoleIcons(const TArray<class UWidget*>& Local_UWidgetIcons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AddedToViewport();
	void ExecuteUbergraph_DyeUI(int32 EntryPoint);
};

}


