#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xCC8 - 0xCB8)
// WidgetBlueprintGeneratedClass UI_Category.UI_Category_C
class UUI_Category_C : public UUI_CustomComboBoxOption_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB8(0x8)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll_0;                             // 0xCC0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Category_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Category(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


