#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x7B1 - 0x7A0)
// WidgetBlueprintGeneratedClass CustomOverlayUI.CustomOverlayUI_C
class UCustomOverlayUI_C : public UUI_CustomOverlay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(None)
	class UCanvasPanel*                          MainCanvas;                                        // 0x7A8(0x8)(ZeroConstructor)
	bool                                         FirstTick;                                         // 0x7B0(0x1)(None)

	static class UClass* StaticClass();
	static class UCustomOverlayUI_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddChildToCanvas(class UUserWidget* Child, const struct FVector2D& Size, int32 ZOrder);
	void SetArrowAlpha(float TheLeftRightAlpha, float TheUpDownAlpha);
	void SetPointerScale(float Scale);
	void ShowReticule(bool Show);
	void SetPointerColorAdd(float Add);
	void SetInnerRingScales(float Scale0, float Scale1, float Scale2);
	void ExecuteUbergraph_CustomOverlayUI(int32 EntryPoint, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUserWidget* K2Node_Event_Child, const struct FVector2D& K2Node_Event_Size, int32 K2Node_Event_zOrder, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_1, bool K2Node_DynamicCast_bSuccess_2, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_2, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_theLeftRightAlpha, float K2Node_Event_theUpDownAlpha, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_3, bool K2Node_DynamicCast_bSuccess_4, float K2Node_Event_scale, bool K2Node_Event_show, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_4, bool K2Node_DynamicCast_bSuccess_5, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_5, bool K2Node_DynamicCast_bSuccess_6, float K2Node_Event_add, float K2Node_Event_scale0, float K2Node_Event_scale1, float K2Node_Event_scale2, class UCustomMouseWidget_C* K2Node_DynamicCast_AsCustom_Mouse_Widget_6, bool K2Node_DynamicCast_bSuccess_7, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, double CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast, double CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast, double CallFunc_SetPointerScale_NewParam_ImplicitCast, double CallFunc_SetPointerColorAdd_Add_ImplicitCast, double CallFunc_SetInnerRingScales_Scale0_ImplicitCast, double CallFunc_SetInnerRingScales_Scale1_ImplicitCast, double CallFunc_SetInnerRingScales_Scale2_ImplicitCast);
};

}


