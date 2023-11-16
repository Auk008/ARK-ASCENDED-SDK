#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3A0 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Sidebar.UI_Button_Sidebar_C
class UUI_Button_Sidebar_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      OnSelected;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border_UnderlineSelection;                         // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_BrowseMods;                                 // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_AddonsIcon;                                    // 0x350(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x358(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            Button_Image;                                      // 0x360(0x8)(Edit, ZeroConstructor)
	class FText                                  Button_Text;                                       // 0x368(0x18)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            Dispatcher_OnClick;                                // 0x380(0x10)(Edit, ZeroConstructor)
	bool                                         Selected;                                          // 0x390(0x1)(None)
	enum class ENUM_SideTabs                     Enum_BarOption;                                    // 0x391(0x1)(None)
	uint8                                        Pad_3278[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StoreMenu_C*                       OwnerStoreMenu;                                    // 0x398(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Button_Sidebar_C* GetDefaultObj();

	void UpdateThemeData(bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ButtonSelected();
	void ButtonDeselected();
	void UpdateSlelectionTo(bool Condition);
	void InitSideButton();
	void Construct();
	void ExecuteUbergraph_UI_Button_Sidebar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Condition, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Dispatcher_OnClick__DelegateSignature();
};

}


