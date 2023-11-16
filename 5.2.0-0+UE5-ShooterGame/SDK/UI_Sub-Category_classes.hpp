#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x388 - 0x330)
// WidgetBlueprintGeneratedClass UI_Sub-Category.UI_Sub-Category_C
class UUI_SubMinusCategory_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	class UButton*                               Button_Category;                                   // 0x338(0x8)(ZeroConstructor)
	class UImage*                                IMG_Fire;                                          // 0x340(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_Category;                                     // 0x348(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSubCategoryClicked;                              // 0x350(0x10)(ZeroConstructor, SimpleDisplay, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSTRUCT_SubOptions                    CategoryInfo;                                      // 0x360(0x28)(None)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategory_C* GetDefaultObj();

	void OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic* Texture);
	void OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic* Texture);
	void BndEvt__SubMinusCategory1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Set_Button_Style(const struct FButtonStyle& InStyle);
	void Construct();
	void ExecuteUbergraph_UI_SubMinusCategory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, const struct FButtonStyle& K2Node_CustomEvent_InStyle);
	void OnSubCategoryClicked__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID);
};

}


