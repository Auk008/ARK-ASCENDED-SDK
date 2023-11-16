#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x10D0 - 0xFE0)
// WidgetBlueprintGeneratedClass ListSessions_OLD.ListSessions_OLD_C
class UListSessions_OLD_C : public UUI_ListSessions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFE0(0x8)(None)
	class UWidgetAnimation*                      Close;                                             // 0xFE8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0xFF0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   AcceptPassword;                                    // 0xFF8(0x8)(Edit, ZeroConstructor)
	class UImage*                                AscendingDescendingIcon;                           // 0x1000(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             AutoFavoriteCheckBox;                              // 0x1008(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BackgroundBorder;                                  // 0x1010(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x1018(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelPassword;                                    // 0x1020(0x8)(Edit, ZeroConstructor)
	class UImage*                                CreatureBottomBorder;                              // 0x1028(0x8)(Edit, ZeroConstructor)
	class UImage*                                CreatureTopBorder;                                 // 0x1030(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   FavoritesButton;                                   // 0x1038(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      FindSessionName;                                   // 0x1040(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       GameModeComboBox;                                  // 0x1048(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceLeft;                      // 0x1050(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceTop;                       // 0x1058(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_Start;                         // 0x1060(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_3194;                                        // 0x1068(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   JoinLastPlayedServer;                              // 0x1070(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   JoinSessionButton;                                 // 0x1078(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       MapComboBox;                                       // 0x1080(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      PasswordField;                                     // 0x1088(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   RefreshSessionsButton;                             // 0x1090(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   RentYourOwnServerButton;                           // 0x1098(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       ServerTypeComboBox;                                // 0x10A0(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              SessionSizeBox;                                    // 0x10A8(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             ShowNotFullServers;                                // 0x10B0(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             ShowProtectedServersCheckBox;                      // 0x10B8(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       SortComboBox;                                      // 0x10C0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   SortOrderToggleButton;                             // 0x10C8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UListSessions_OLD_C* GetDefaultObj();

	void GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue);
	void GetWidgetToScaleForHandheld(class UWidget* ReturnValue);
	void BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_ListSessions_OLD(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked, bool K2Node_ComponentBoundEvent_bIsChecked_2, bool K2Node_ComponentBoundEvent_bIsChecked_1);
};

}


