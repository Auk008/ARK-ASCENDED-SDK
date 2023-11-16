#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3D0 - 0x3B8)
// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_PopupTooltip.ASAUI_MainMenuWidget_PopupTooltip_C
class UASAUI_MainMenuWidget_PopupTooltip_C : public UTooltipSmartLayoutWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(None)
	class UWidgetAnimation*                      FadeIn;                                            // 0x3C0(0x8)(ZeroConstructor)
	class UTextBlock*                            Tooltip_Text;                                      // 0x3C8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_PopupTooltip_C* GetDefaultObj();

	void Show();
	void Hide();
	void ExecuteUbergraph_ASAUI_MainMenuWidget_PopupTooltip(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
};

}


