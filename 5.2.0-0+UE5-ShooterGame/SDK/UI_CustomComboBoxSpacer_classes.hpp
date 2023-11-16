#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C
class UUI_CustomComboBoxSpacer_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class USpacer*                               Spacer;                                            // 0x338(0x8)(ZeroConstructor)
	double                                       Size;                                              // 0x340(0x8)(None)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxSpacer_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_CustomComboBoxSpacer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


