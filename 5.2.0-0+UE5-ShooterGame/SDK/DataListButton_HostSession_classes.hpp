#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x8E8 - 0x850)
// WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C
class UDataListButton_HostSession_C : public UDataListEntryButton_HostSession
{
public:
	class UImage*                                ActiveIconImage;                                   // 0x850(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ActiveModMoveDownButton;                           // 0x858(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ActiveModMoveUpButton;                             // 0x860(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        ActiveModOrderButtons;                             // 0x868(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   Button;                                            // 0x870(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       ButtonIconSwitcher;                                // 0x878(0x8)(Edit, ZeroConstructor)
	class UMenuAnchor*                           CtxMenu;                                           // 0x880(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   DeleteDedicatedServerSaveData;                     // 0x888(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   DeleteSinglePlayerSaveData;                        // 0x890(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            EntryNameLabel;                                    // 0x898(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        MapIcons;                                          // 0x8A0(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        ModIcons;                                          // 0x8A8(0x8)(Edit, ZeroConstructor)
	class UBorder*                               TextBorder;                                        // 0x8B0(0x8)(ZeroConstructor)
	struct FLinearColor                          SelectedColorBG;                                   // 0x8B8(0x10)(None)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x8C8(0x10)(None)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x8D8(0x10)(None)

	static class UClass* StaticClass();
	static class UDataListButton_HostSession_C* GetDefaultObj();

	void OnPaint(const struct FPaintContext& Context, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_GetToggledState_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


