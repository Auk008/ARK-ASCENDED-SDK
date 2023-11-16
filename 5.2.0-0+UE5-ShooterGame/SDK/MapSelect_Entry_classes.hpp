#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x3E8 - 0x330)
// WidgetBlueprintGeneratedClass MapSelect_Entry.MapSelect_Entry_C
class UMapSelect_Entry_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UWidgetAnimation*                      Close;                                             // 0x338(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x340(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          ComboBoxes;                                        // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                DarkBackground;                                    // 0x350(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        DeleteSaveContainer;                               // 0x358(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   DeleteSingleplayerData;                            // 0x360(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_320;                                         // 0x368(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_519;                                         // 0x370(0x8)(Edit, ZeroConstructor)
	class UImage*                                LockedImage;                                       // 0x378(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            LockedText;                                        // 0x380(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            MapDescriptionLabel;                               // 0x388(0x8)(Edit, ZeroConstructor)
	class UImage*                                MapImage;                                          // 0x390(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       MapModeComboBox;                                   // 0x398(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       MapNameComboBox;                                   // 0x3A0(0x8)(Edit, ZeroConstructor)
	class UButton*                               ScrollViewSelectionButton;                         // 0x3A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                SelectedImage;                                     // 0x3B0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            SelectedMapLabel;                                  // 0x3B8(0x8)(Edit, ZeroConstructor)
	int32                                        SetupAsMapIndex;                                   // 0x3C0(0x4)(None)
	uint8                                        Pad_4BBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapSelect_Session_C*                  ParentMapSelectSession;                            // 0x3C8(0x8)(Edit, ZeroConstructor)
	class UHostSession_Switch_C*                 ParentHostSession;                                 // 0x3D0(0x8)(ZeroConstructor)
	int32                                        CurrentMapIndex;                                   // 0x3D8(0x4)(None)
	bool                                         IsChangingSelectEntry;                             // 0x3DC(0x1)(None)
	enum class EDLCSelector                      DLCType;                                           // 0x3DD(0x1)(None)
	uint8                                        Pad_4BBD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TotalTime;                                         // 0x3E0(0x8)(None)

	static class UClass* StaticClass();
	static class UMapSelect_Entry_C* GetDefaultObj();

	void FixupComboBox(int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateDeleteSaveButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasSaveForMapIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void IsSelected(bool Selected, bool CallFunc_IsVisible_ReturnValue);
	void Set_To_Map_Select_View(bool IsMapSelectView, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	void Show_Hide_Locked_Images(bool IsLocked, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetupUsingHostSession(class UUI_HostSession* HostSession, class UMapSelect_Session_C* MapSelectSession, int32 WithIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class FText CallFunc_GetMapInfo_OutMapName, const struct FMapDescription& CallFunc_GetMapInfo_OutDescription, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetSelected(bool IsSelected);
	void BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_MapSelect_Entry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Sin_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_IsSelected, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, int32 CallFunc_GetSelectedIndex_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


