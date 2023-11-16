#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x788 - 0x770)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C
class UASAUI_NewsCarouselTemplate_Pip_News_Default_C : public UUI_MenuCarouselPipWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(None)
	class UWidgetAnimation*                      Brighten;                                          // 0x778(0x8)(ZeroConstructor)
	class UCustomButtonWidget*                   NavButton;                                         // 0x780(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Pip_News_Default_C* GetDefaultObj();

	void EntryFocusStart(bool bInstigatedByAutoRollover);
	void EntryFocusEnd(bool bInstigatedByAutoRollover);
	void ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default(int32 EntryPoint, bool K2Node_Event_bInstigatedByAutoRollover_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_bInstigatedByAutoRollover, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


