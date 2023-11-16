#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3F8 - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C
class UASAUI_MainMenu_GameModeSelect_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      OpenAnim;                                          // 0x338(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1A_C*         BackButton;                                        // 0x340(0x8)(Edit, ZeroConstructor)
	class UASAUI_MainMenuWidget_Card_C*          Card1;                                             // 0x348(0x8)(Edit, ZeroConstructor)
	class UASAUI_MainMenuWidget_Card_C*          Card2;                                             // 0x350(0x8)(Edit, ZeroConstructor)
	class UASAUI_MainMenuWidget_Card_C*          Card3;                                             // 0x358(0x8)(Edit, ZeroConstructor)
	class UASAUI_MainMenuWidget_Card_C*          Card4;                                             // 0x360(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            CardImage_Text;                                    // 0x368(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        Cards_WrapBox;                                     // 0x370(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnBackSelected;                                    // 0x378(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnMultiplayerClicked;                              // 0x388(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSOTFClicked;                                     // 0x398(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnCreateGameClicked;                               // 0x3A8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnModsClicked;                                     // 0x3B8(0x10)(ZeroConstructor, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  FalseTextSaveGame;                                 // 0x3C8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  TrueTextSaveGame;                                  // 0x3E0(0x18)(None)

	static class UClass* StaticClass();
	static class UASAUI_MainMenu_GameModeSelect_C* GetDefaultObj();

	void InitHasSave(bool Save, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void SelectionChanged(class UCustomButtonWidget* Widget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UOverlay* K2Node_DynamicCast_AsOverlay, bool K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UASAUI_MainMenuWidget_Card_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void StopAllCardAnims(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UOverlay* K2Node_DynamicCast_AsOverlay, bool K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UASAUI_MainMenuWidget_Card_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Card, bool K2Node_DynamicCast_bSuccess_1);
	void PostInitialized();
	void WidgetAddedToViewport();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card1_K2Node_ComponentBoundEvent_4_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card2_K2Node_ComponentBoundEvent_5_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card3_K2Node_ComponentBoundEvent_6_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card4_K2Node_ComponentBoundEvent_7_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_BackButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void Construct();
	void RefreshAnim();
	void ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsVirtualCursorEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnModsClicked__DelegateSignature();
	void OnCreateGameClicked__DelegateSignature();
	void OnSOTFClicked__DelegateSignature();
	void OnMultiplayerClicked__DelegateSignature();
	void OnBackSelected__DelegateSignature();
};

}


