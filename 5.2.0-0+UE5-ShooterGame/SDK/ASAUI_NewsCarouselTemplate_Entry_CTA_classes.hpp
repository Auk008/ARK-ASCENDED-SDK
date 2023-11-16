#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x370 - 0x340)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C
class UASAUI_NewsCarouselTemplate_Entry_CTA_C : public UUI_MenuCarouselEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(None)
	class UImage*                                MainImage;                                         // 0x348(0x8)(ZeroConstructor)
	double                                       AutoScrollWaitAtStart;                             // 0x350(0x8)(None)
	double                                       DefaultAutoScrollSpeed;                            // 0x358(0x8)(None)
	double                                       AutoScrollTracker;                                 // 0x360(0x8)(None)
	double                                       AutoScrollWaitAtEnd;                               // 0x368(0x8)(None)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_CTA_C* GetDefaultObj();

	void BlueprintInit(const class FString& RawExtraData);
	void EntryFocusStart(bool bInstigatedByAutoRollover);
	void EntryFocusEnd(bool bInstigatedByAutoRollover);
	void EntryFocusTick(float DeltaTime);
	void ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA(int32 EntryPoint, const class FString& K2Node_Event_RawExtraData, bool K2Node_Event_bInstigatedByAutoRollover_1, bool K2Node_Event_bInstigatedByAutoRollover, float K2Node_Event_DeltaTime);
};

}


