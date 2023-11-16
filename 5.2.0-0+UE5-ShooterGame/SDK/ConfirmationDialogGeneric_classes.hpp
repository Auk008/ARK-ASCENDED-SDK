#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x810 - 0x7D0)
// WidgetBlueprintGeneratedClass ConfirmationDialogGeneric.ConfirmationDialogGeneric_C
class UConfirmationDialogGeneric_C : public UUI_GenericConfirmationDialog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(None)
	class UImage*                                AcceptImage;                                       // 0x7D8(0x8)(ZeroConstructor)
	class UBorder*                               BackgroundBorder;                                  // 0x7E0(0x8)(ZeroConstructor)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x7E8(0x8)(ZeroConstructor)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x7F0(0x8)(ZeroConstructor)
	class UImage*                                DenyImage;                                         // 0x7F8(0x8)(ZeroConstructor)
	class UTextBlock*                            DenyImageF;                                        // 0x800(0x8)(ZeroConstructor)
	class UTextBlock*                            Refresh;                                           // 0x808(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UConfirmationDialogGeneric_C* GetDefaultObj();

	void Construct();
	void OverrideCancelButtonText(class FText CancelText);
	void OverrideAcceptButtonText(class FText AcceptText);
	void ExecuteUbergraph_ConfirmationDialogGeneric(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class FText K2Node_Event_CancelText, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FText K2Node_Event_AcceptText, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNumLocalPlayerControllers_ReturnValue, int32 CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue_1, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3);
};

}


