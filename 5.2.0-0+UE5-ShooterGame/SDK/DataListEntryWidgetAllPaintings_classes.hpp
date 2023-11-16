#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x438 - 0x3F8)
// WidgetBlueprintGeneratedClass DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C
class UDataListEntryWidgetAllPaintings_C : public UDataListEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(None)
	class UAllPaintingsEntryButton*              PaintingEntryButton;                               // 0x400(0x8)(ZeroConstructor)
	struct FLinearColor                          SelectedColorBG;                                   // 0x408(0x10)(None)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x418(0x10)(None)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x428(0x10)(None)

	static class UClass* StaticClass();
	static class UDataListEntryWidgetAllPaintings_C* GetDefaultObj();

	void OnPaint(const struct FPaintContext& Context, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void Construct();
	void ExecuteUbergraph_DataListEntryWidgetAllPaintings(int32 EntryPoint, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


