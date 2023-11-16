#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0xAA0 - 0x848)
// WidgetBlueprintGeneratedClass UI_HelpPage.UI_HelpPage_C
class UUI_HelpPage_C : public UUI_HelpPage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x848(0x8)(None)
	class UWidgetAnimation*                      Close;                                             // 0x850(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x858(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x860(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingButton_Page1;                              // 0x868(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingButton_Page2;                              // 0x870(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingButton_Page3;                              // 0x878(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingButton_Page4;                              // 0x880(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingButton_Page5;                              // 0x888(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingButton_Page6;                              // 0x890(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CraftingMenuButton;                                // 0x898(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreaturesButton_Page1;                             // 0x8A0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreaturesButton_Page2;                             // 0x8A8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreaturesButton_Page3;                             // 0x8B0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreaturesMenuButton;                               // 0x8B8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ExplorationButton_Page1;                           // 0x8C0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ExplorationButton_Page2;                           // 0x8C8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ExplorationMenuButton;                             // 0x8D0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HelpMenuButton;                                    // 0x8D8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image;                                             // 0x8E0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x8E8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2;                                           // 0x8F0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_3;                                           // 0x8F8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_54;                                          // 0x900(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_55;                                          // 0x908(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_58;                                          // 0x910(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_61;                                          // 0x918(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_65;                                          // 0x920(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_92;                                          // 0x928(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_255;                                         // 0x930(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_294;                                         // 0x938(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_346;                                         // 0x940(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_451;                                         // 0x948(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_642;                                         // 0x950(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_650;                                         // 0x958(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_689;                                         // 0x960(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_763;                                         // 0x968(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_923;                                         // 0x970(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1097;                                        // 0x978(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1193;                                        // 0x980(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1292;                                        // 0x988(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1393;                                        // 0x990(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1494;                                        // 0x998(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1670;                                        // 0x9A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1704;                                        // 0x9A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1738;                                        // 0x9B0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1772;                                        // 0x9B8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1807;                                        // 0x9C0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2377;                                        // 0x9C8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2413;                                        // 0x9D0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2450;                                        // 0x9D8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2487;                                        // 0x9E0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2522;                                        // 0x9E8(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          MainCanvas;                                        // 0x9F0(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              MainSizeBox;                                       // 0x9F8(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        MenuButtonPanel;                                   // 0xA00(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   OptionsMenuButton;                                 // 0xA08(0x8)(Edit, ZeroConstructor)
	class UImage*                                SeparatorLineTop;                                  // 0xA10(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       SubMenuSwitcher;                                   // 0xA18(0x8)(Edit, ZeroConstructor)
	class USpacer*                               TopSpacer;                                         // 0xA20(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIButton_Page1;                                    // 0xA28(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIButton_Page2;                                    // 0xA30(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIButton_Page3;                                    // 0xA38(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIButton_Page4;                                    // 0xA40(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIButton_Page5;                                    // 0xA48(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIButton_Page6;                                    // 0xA50(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UIMenuButton;                                      // 0xA58(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   WelcomeButton_Page1;                               // 0xA60(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_Crafting;                           // 0xA68(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_Creatures;                          // 0xA70(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_Exploration;                        // 0xA78(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_UI;                                 // 0xA80(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_Welcome;                            // 0xA88(0x8)(ZeroConstructor)
	struct FMargin                               OriginalTopSlotPadding;                            // 0xA90(0x10)(None)

	static class UClass* StaticClass();
	static class UUI_HelpPage_C* GetDefaultObj();

	void GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue);
	void GetWidgetToScaleForHandheld(class UWidget* ReturnValue);
	void BPHandleDockedModeChange(bool bIsDocked);
	void Construct();
	void ExecuteUbergraph_UI_HelpPage(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, bool K2Node_Event_bIsDocked, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, const struct FMargin& K2Node_Select_Default);
};

}


