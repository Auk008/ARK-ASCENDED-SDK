#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x39C - 0x330)
// WidgetBlueprintGeneratedClass UI_ReportToast.UI_ReportToast_C
class UUI_ReportToast_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      PopOut;                                            // 0x338(0x8)(ZeroConstructor)
	class UWidgetAnimation*                      PopIn;                                             // 0x340(0x8)(ZeroConstructor)
	class UBorder*                               Border_Background;                                 // 0x348(0x8)(ZeroConstructor)
	class UButton*                               Button;                                            // 0x350(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_Message;                                      // 0x358(0x8)(ZeroConstructor)
	class FText                                  MessageText;                                       // 0x360(0x18)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x378(0x10)(None)
	struct FSlateColor                           MessageColor;                                      // 0x388(0x14)(None)

	static class UClass* StaticClass();
	static class UUI_ReportToast_C* GetDefaultObj();

	void OnClicked(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnPopOutEnded();
	void BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Event_Pop_In_Animation();
	void ExecuteUbergraph_UI_ReportToast(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


