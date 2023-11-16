#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xAD0 - 0xA40)
// WidgetBlueprintGeneratedClass DataListButton_ListSession.DataListButton_ListSession_C
class UDataListButton_ListSession_C : public UDataListEntryButton_ListSession
{
public:
	class UTextBlock*                            BuildLabel;                                        // 0xA40(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            BuildLabel_1;                                      // 0xA48(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   Button;                                            // 0xA50(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            DayLabel;                                          // 0xA58(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            GameModeLabel;                                     // 0xA60(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_129;                                         // 0xA68(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_137;                                         // 0xA70(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1457;                                        // 0xA78(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            MapNameLabel;                                      // 0xA80(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            PingLabel;                                         // 0xA88(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            PlayerNumLabel;                                    // 0xA90(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            SessionNameLabel;                                  // 0xA98(0x8)(ZeroConstructor)
	struct FLinearColor                          SelectedColorBG;                                   // 0xAA0(0x10)(None)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0xAB0(0x10)(None)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0xAC0(0x10)(None)

	static class UClass* StaticClass();
	static class UDataListButton_ListSession_C* GetDefaultObj();

	void OnPaint(const struct FPaintContext& Context, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_GetToggledState_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


