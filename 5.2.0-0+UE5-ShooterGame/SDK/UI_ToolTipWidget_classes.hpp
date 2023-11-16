#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass UI_ToolTipWidget.UI_ToolTipWidget_C
class UUI_ToolTipWidget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	class UOverlay*                              BaseOverlay;                                       // 0x338(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Tooltip;                                      // 0x340(0x8)(ZeroConstructor)
	class FText                                  Text;                                              // 0x348(0x18)(None)

	static class UClass* StaticClass();
	static class UUI_ToolTipWidget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ToolTipWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue);
};

}


