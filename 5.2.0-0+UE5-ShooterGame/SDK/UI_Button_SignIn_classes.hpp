#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_SignIn.UI_Button_SignIn_C
class UUI_Button_SignIn_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               Button_SingIn;                                     // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_138;                                         // 0x340(0x8)(Edit, ZeroConstructor)
	bool                                         IsLogedin;                                         // 0x348(0x1)(None)
	uint8                                        Pad_381D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSignInClicked;                                   // 0x350(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Button_SignIn_C* GetDefaultObj();

	void RemoveMenu();
	void BndEvt__SignIn_Button_20_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Button_SignIn(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnSignInClicked__DelegateSignature();
};

}


