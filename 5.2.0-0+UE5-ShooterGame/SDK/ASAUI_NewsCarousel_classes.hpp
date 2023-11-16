#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x638 - 0x5D0)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel.ASAUI_NewsCarousel_C
class UASAUI_NewsCarousel_C : public UUI_MenuCarousel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UASAUI_NewsCarousel_Nav_Select_C*      Button_Nav_Select;                                 // 0x5D8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            CarouselTitle_Text;                                // 0x5E0(0x8)(Edit, ZeroConstructor)
	class UImage*                                CircleBar;                                         // 0x5E8(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            EntryContainer;                                    // 0x5F0(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        PipContainer_HorizBox;                             // 0x5F8(0x8)(Edit, ZeroConstructor)
	class UASAUI_NewsCarousel_Nav_Left_C*        PipNav_Left_Button;                                // 0x600(0x8)(Edit, ZeroConstructor)
	class UASAUI_NewsCarousel_Nav_Right_C*       PipNav_Right_Button;                               // 0x608(0x8)(Edit, ZeroConstructor)
	class UProgressBar*                          Rollover_ProgressBar;                              // 0x610(0x8)(Edit, ZeroConstructor)
	class FText                                  CarouselTitle;                                     // 0x618(0x18)(None)
	class UMaterialInstanceDynamic*              DynamicCircleMat;                                  // 0x630(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarousel_C* GetDefaultObj();

	void GetColorAndOpacity(const struct FLinearColor& ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ASAUI_NewsCarousel(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


