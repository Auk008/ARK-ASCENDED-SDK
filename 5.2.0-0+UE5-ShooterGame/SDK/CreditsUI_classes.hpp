#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x808 - 0x758)
// WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C
class UCreditsUI_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ZeroConstructor)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(Edit, ZeroConstructor)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(Edit, ZeroConstructor)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_16;                                          // 0x7A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_17;                                          // 0x7B0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_18;                                          // 0x7B8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_19;                                          // 0x7C0(0x8)(ZeroConstructor)
	double                                       CurrentTextPosition;                               // 0x7C8(0x8)(None)
	double                                       ScrollTextSpeed;                                   // 0x7D0(0x8)(None)
	double                                       LoopTextPosition;                                  // 0x7D8(0x8)(None)
	double                                       InitialTextPosition;                               // 0x7E0(0x8)(None)
	double                                       CurrentBkgOpacity;                                 // 0x7E8(0x8)(None)
	bool                                         bSetCredits;                                       // 0x7F0(0x1)(None)
	uint8                                        Pad_4B4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameCounter;                                      // 0x7F4(0x4)(None)
	class FString                                CreditsMusic;                                      // 0x7F8(0x10)(None)

	static class UClass* StaticClass();
	static class UCreditsUI_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CloseButtonEvent();
	void RemovedFromViewport();
	void ExecuteUbergraph_CreditsUI(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, bool K2Node_DynamicCast_bSuccess, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


