#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass UI_NoModsFound.UI_NoModsFound_C
class UUI_NoModsFound_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UImage*                                IMG_NoModsBackground;                              // 0x338(0x8)(ZeroConstructor)
	class UVerticalBox*                          VerBox_NoInstalledMods;                            // 0x340(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_NoModsFound_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_NoModsFound(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


