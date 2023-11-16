#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x519 (0x849 - 0x330)
// WidgetBlueprintGeneratedClass UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C
class UUI_ModSuccessfullyInsalled_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      PopIn;                                             // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_ModInstalled;                               // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_47;                                          // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x350(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Message;                                      // 0x358(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Name;                                         // 0x360(0x8)(Edit, ZeroConstructor)
	struct FInstallProgressMod                   ModInfo;                                           // 0x368(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  MessageText;                                       // 0x7F0(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                          BackgroundColor;                                   // 0x808(0x10)(None)
	struct FSlateColor                           NameColor;                                         // 0x818(0x14)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           MessageColor;                                      // 0x82C(0x14)(None)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x840(0x8)(ZeroConstructor)
	bool                                         AnimationFinished;                                 // 0x848(0x1)(None)

	static class UClass* StaticClass();
	static class UUI_ModSuccessfullyInsalled_C* GetDefaultObj();

	void OnClicked();
	void OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic* Texture);
	void OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic* Texture);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Pop_In_Animation(const struct FInstallProgressMod& Mod_Info);
	void Event_Init();
	void ExitAnimation();
	void EnterAnimation();
	void ResetClick();
	void RequestExit();
	void ExecuteUbergraph_UI_ModSuccessfullyInsalled(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_2, const struct FInstallProgressMod& K2Node_CustomEvent_Mod_Info, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
};

}


