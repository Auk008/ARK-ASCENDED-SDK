#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x378 - 0x340)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly.ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C
class UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C : public UUI_MenuCarouselEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(None)
	class UScrollBox*                            TextBody_Scrollbox;                                // 0x348(0x8)(ZeroConstructor)
	double                                       AutoScrollWaitAtStart;                             // 0x350(0x8)(None)
	double                                       DefaultAutoScrollSpeed;                            // 0x358(0x8)(None)
	double                                       AutoScrollTracker;                                 // 0x360(0x8)(None)
	double                                       AutoScrollWaitAtEnd;                               // 0x368(0x8)(None)
	class UClass*                                SubEntryWidgetTemplate;                            // 0x370(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_NewsTextOnly_C* GetDefaultObj();

	void BlueprintInit(const class FString& RawExtraData);
	void EntryFocusStart(bool bInstigatedByAutoRollover);
	void EntryFocusEnd(bool bInstigatedByAutoRollover);
	void EntryFocusTick(float DeltaTime);
	void ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_NewsTextOnly(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const class FString& K2Node_Event_RawExtraData, bool K2Node_Event_bInstigatedByAutoRollover_1, const TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool K2Node_Event_bInstigatedByAutoRollover, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, float K2Node_Event_DeltaTime, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Add_DoubleFloat_ReturnValue_1, class UCarousel_NewsList_entry_C* CallFunc_Create_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
};

}


