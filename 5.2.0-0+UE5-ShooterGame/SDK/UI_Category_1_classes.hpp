#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass UI_Category.UI_Category_C
class UUI_Category_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                IMG_Icon;                                          // 0x338(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Block;                                        // 0x340(0x8)(Edit, ZeroConstructor)
	class FString                                IconUrl;                                           // 0x348(0x10)(None)
	class UUI_StoreMenu_C*                       StoreMenu_Ref;                                     // 0x358(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Category_C* GetDefaultObj();

	void UpdateThemeSettings(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void OnFail_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic* Texture);
	void OnSuccess_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic* Texture);
	void Construct();
	void ExecuteUbergraph_UI_Category(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2DDynamic* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
};

}


