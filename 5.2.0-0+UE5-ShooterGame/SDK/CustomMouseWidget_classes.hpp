#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3A8 - 0x330)
// WidgetBlueprintGeneratedClass CustomMouseWidget.CustomMouseWidget_C
class UCustomMouseWidget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UImage*                                CircleArrowDown;                                   // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                CircleArrowLeft;                                   // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                CircleArrowRight;                                  // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                CircleArrowUp;                                     // 0x350(0x8)(Edit, ZeroConstructor)
	class UImage*                                CircleImage;                                       // 0x358(0x8)(Edit, ZeroConstructor)
	class UImage*                                CircleReticule;                                    // 0x360(0x8)(Edit, ZeroConstructor)
	class UImage*                                InnerRing0;                                        // 0x368(0x8)(Edit, ZeroConstructor)
	class UImage*                                InnerRing1;                                        // 0x370(0x8)(Edit, ZeroConstructor)
	class UImage*                                InnerRing2;                                        // 0x378(0x8)(Edit, ZeroConstructor)
	class UImage*                                PointerArrowDown;                                  // 0x380(0x8)(Edit, ZeroConstructor)
	class UImage*                                PointerArrowLeft;                                  // 0x388(0x8)(Edit, ZeroConstructor)
	class UImage*                                PointerArrowRight;                                 // 0x390(0x8)(Edit, ZeroConstructor)
	class UImage*                                PointerArrowUp;                                    // 0x398(0x8)(Edit, ZeroConstructor)
	class UImage*                                PointerImage;                                      // 0x3A0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCustomMouseWidget_C* GetDefaultObj();

	void SetInnerRingScales(double Scale0, double Scale1, double Scale2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2);
	void SetPointerColorAdd(double Add, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void ShowReticule(bool Show);
	void SetPointerScale(double NewParam, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetArrowAlpha(double LeftRightAlpha, double UpDownAlpha, bool UseArrow, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7);
	void UseCircle();
	void UseArrow();
	void Construct();
	void ExecuteUbergraph_CustomMouseWidget(int32 EntryPoint);
};

}


