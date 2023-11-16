#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x7F0 - 0x758)
// WidgetBlueprintGeneratedClass MapSelect_Session.MapSelect_Session_C
class UMapSelect_Session_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(None)
	class UWidgetAnimation*                      Close;                                             // 0x760(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x768(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x770(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            MapScrollBox;                                      // 0x778(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Aberration;                        // 0x780(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_CrystalIsles;                      // 0x788(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Extinction;                        // 0x790(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Fjordur;                           // 0x798(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Genesis1;                          // 0x7A0(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Genesis2;                          // 0x7A8(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Island;                            // 0x7B0(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_LostIsland;                        // 0x7B8(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Ragnarok;                          // 0x7C0(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Scorched;                          // 0x7C8(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_TheCenter;                         // 0x7D0(0x8)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    MapSelect_Entry_Valguero;                          // 0x7D8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   SelectMapButton;                                   // 0x7E0(0x8)(Edit, ZeroConstructor)
	class UHostSession_Switch_C*                 ParentHostSession;                                 // 0x7E8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMapSelect_Session_C* GetDefaultObj();

	void SearchAndCreateModMaps(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UDataListEntryButton_HostSession*>& CallFunc_GetModMaps_ReturnValue, class UMapSelect_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Select_Map_Button_Clicked(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUI_GenericConfirmationDialog* CallFunc_ShowDLCConfirmationDialog_ReturnValue, bool CallFunc_DoesOwnSelectedDLC_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsSelected_Selected);
	void MapButtonSelected();
	void GetSelectedMapIndex(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, int32 CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSelected_Selected);
	void SetSelectedMapIndex(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, int32 CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ScrollToHoveredItem(class UMapSelect_Entry_C* EntryHovered);
	void OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_GetScrollOffset_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_PointerEvent_IsTouchEvent_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_FMin_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_FMin_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Set_Selected_Map_Entry(class UMapSelect_Entry_C* Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetMapSelectEntries(const TArray<class UMapSelect_Entry_C*>& MapSelectEntries, const TArray<class UMapSelect_Entry_C*>& TempMapSelectEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMapSelect_Entry_C* K2Node_DynamicCast_AsMap_Select_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_MapSelect_Session(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess);
};

}


