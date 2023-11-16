#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x7F1 - 0x758)
// WidgetBlueprintGeneratedClass FinalCreditsUI.FinalCreditsUI_C
class UFinalCreditsUI_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ZeroConstructor)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(ZeroConstructor)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(ZeroConstructor)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(ZeroConstructor)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(ZeroConstructor)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(ZeroConstructor)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(ZeroConstructor)
	class UImage*                                Image_563;                                         // 0x7A8(0x8)(ZeroConstructor)
	double                                       CurrentTextPosition;                               // 0x7B0(0x8)(None)
	double                                       ScrollTextSpeed;                                   // 0x7B8(0x8)(None)
	double                                       LoopTextPosition;                                  // 0x7C0(0x8)(None)
	double                                       InitialTextPosition;                               // 0x7C8(0x8)(None)
	double                                       CurrentBkgOpacity;                                 // 0x7D0(0x8)(None)
	bool                                         bSetCredits;                                       // 0x7D8(0x1)(None)
	bool                                         bDidQuit;                                          // 0x7D9(0x1)(None)
	bool                                         bPlayingOutroMovie;                                // 0x7DA(0x1)(None)
	uint8                                        Pad_3D82[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCreditsClosed;                                   // 0x7E0(0x10)(ZeroConstructor)
	bool                                         bStartedMusic;                                     // 0x7F0(0x1)(None)

	static class UClass* StaticClass();
	static class UFinalCreditsUI_C* GetDefaultObj();

	void ConditionallySetupSkipButton();
	void Play_Credits_Music(const class FString& CallFunc_GetLastMapPlayed_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2);
	void OnMoviePlaybackFinished(const class FString& MoviePath, bool bPlaybackWasCancelled, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CloseButtonEvent();
	void RemovedFromViewport();
	void AddedToViewport();
	void BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_FinalCreditsUI(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, bool K2Node_DynamicCast_bSuccess_1, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsClient_ReturnValue, bool CallFunc_PlayMovie_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast);
	void OnCreditsClosed__DelegateSignature();
};

}


