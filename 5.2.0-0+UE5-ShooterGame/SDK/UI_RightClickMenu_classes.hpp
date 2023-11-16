#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x398 - 0x330)
// WidgetBlueprintGeneratedClass UI_RightClickMenu.UI_RightClickMenu_C
class UUI_RightClickMenu_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class USizeBox*                              SizeBox_Outer;                                     // 0x338(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_Cancel;                                  // 0x340(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_Install;                                 // 0x348(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_Like;                                    // 0x350(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_Report;                                  // 0x358(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_Uninstall;                               // 0x360(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_Update;                                  // 0x368(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Dropdown_C*                 UI_Button_View;                                    // 0x370(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x378(0x8)(Edit, ZeroConstructor)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x380(0x8)(ZeroConstructor)
	bool                                         ShouldViewBeVisible;                               // 0x388(0x1)(None)
	bool                                         SepareteReportWithLine;                            // 0x389(0x1)(None)
	uint8                                        Pad_117B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WidgetWidth;                                       // 0x390(0x8)(None)

	static class UClass* StaticClass();
	static class UUI_RightClickMenu_C* GetDefaultObj();

	void DecideWhichOptionsToDisplay(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, enum class ESlateVisibility Temp_byte_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_5, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue_6);
	void Construct();
	void Event_Set_To_Like();
	void Event_Set_To_Unlike();
	void BndEvt__UI_DropdownMenu_UI_Button_Install_K2Node_ComponentBoundEvent_13_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Report_K2Node_ComponentBoundEvent_14_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Uninstall_K2Node_ComponentBoundEvent_15_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_DropdownMenu_UI_Button_Like_K2Node_ComponentBoundEvent_16_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_RightClickMenu_UI_Button_Update_K2Node_ComponentBoundEvent_24_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_RightClickMenu_UI_Button_View_K2Node_ComponentBoundEvent_25_Dispatcher_OnClick__DelegateSignature();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature();
	void ExecuteUbergraph_UI_RightClickMenu(int32 EntryPoint, class UUI_Prompt_Report_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
};

}


