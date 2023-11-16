#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x6B0 - 0x5E8)
// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C
class UToolTipWidgetPrimalDino_C : public UPrimalDinoToolTipWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(None)
	class UBorder*                               BorderDIno;                                        // 0x5F0(0x8)(ZeroConstructor)
	class UProgressBar*                          CraftingBar;                                       // 0x5F8(0x8)(ZeroConstructor)
	class UImage*                                DinoFoodTypeImage;                                 // 0x600(0x8)(ZeroConstructor)
	class UImage*                                DinoIcon;                                          // 0x608(0x8)(ZeroConstructor)
	class UImage*                                DinoIconBG;                                        // 0x610(0x8)(ZeroConstructor)
	class USizeBox*                              ExtraInfoBox;                                      // 0x618(0x8)(ZeroConstructor)
	class UProgressBarWidget*                    FoodBar;                                           // 0x620(0x8)(ZeroConstructor)
	class UWidgetSwitcher*                       GenderSwitcher;                                    // 0x628(0x8)(ZeroConstructor)
	class UProgressBarWidget*                    HealthBar;                                         // 0x630(0x8)(ZeroConstructor)
	class UImage*                                Image;                                             // 0x638(0x8)(ZeroConstructor)
	class UImage*                                Image_10;                                          // 0x640(0x8)(ZeroConstructor)
	class UImage*                                Image_21;                                          // 0x648(0x8)(ZeroConstructor)
	class UImage*                                Image_44;                                          // 0x650(0x8)(ZeroConstructor)
	class UVerticalBox*                          InfoPanel;                                         // 0x658(0x8)(ZeroConstructor)
	class UImage*                                MainBG;                                            // 0x660(0x8)(ZeroConstructor)
	class UImage*                                MaxInventoryImage;                                 // 0x668(0x8)(ZeroConstructor)
	class UMinimalSwitchUI_Widget_C*             MinimalSwitchUI_Widget;                            // 0x670(0x8)(ZeroConstructor)
	class UMultiUseActionWidget_UI_C*            MultiUseActionWidget_UI;                           // 0x678(0x8)(ZeroConstructor)
	class UImage*                                MutagenIcon;                                       // 0x680(0x8)(ZeroConstructor)
	class UProgressBarWidget*                    StaminaBar;                                        // 0x688(0x8)(ZeroConstructor)
	class UProgressBar*                          TamingProgressBar;                                 // 0x690(0x8)(ZeroConstructor)
	class UProgressBar*                          TorpidityProgressBar;                              // 0x698(0x8)(ZeroConstructor)
	class UProgressBarWidget*                    WeightBar;                                         // 0x6A0(0x8)(ZeroConstructor)
	class UProgressBarWidget*                    XPBar;                                             // 0x6A8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UToolTipWidgetPrimalDino_C* GetDefaultObj();

	void ExecuteUbergraph_ToolTipWidgetPrimalDino(int32 EntryPoint);
};

}


