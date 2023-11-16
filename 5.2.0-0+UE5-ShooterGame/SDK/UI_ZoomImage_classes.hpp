#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x408 (0xB60 - 0x758)
// WidgetBlueprintGeneratedClass UI_ZoomImage.UI_ZoomImage_C
class UUI_ZoomImage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UButton*                               Buttom_Next;                                       // 0x760(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Prev;                                       // 0x768(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Next;                                          // 0x770(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Prev;                                          // 0x778(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_ScreenshotImg;                                 // 0x780(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Description;                                  // 0x788(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x790(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Back_C*                 UI_Button_Ark_Back;                                // 0x798(0x8)(ZeroConstructor)
	TMap<class UTexture*, class FText>           Images;                                            // 0x7A0(0x50)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        CurrentImageIndex;                                 // 0x7F0(0x4)(None)
	uint8                                        Pad_4A85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ModPage_C*                         UI_ModPage;                                        // 0x7F8(0x8)(Edit, ZeroConstructor)
	struct FScreenshotInfo                       ScreenshotsInfo;                                   // 0x800(0x20)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CantMoveRightImage;                                // 0x820(0xD0)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CantMoveLeftImage;                                 // 0x8F0(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NextArrowImage;                                    // 0x9C0(0xD0)(Edit, ZeroConstructor, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PrevArrowImage;                                    // 0xA90(0xD0)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_ZoomImage_C* GetDefaultObj();

	void BPGamepadReleased(const struct FKey& TheKey, bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void UpdateScreenshotDescription(int32 ImageIndex, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdatePageCounter(int32 ImageIndex, int32 _numOfScreenshots, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UpdateScreenshotImage(int32 ImageIndex, class UObject* Temp_object_Variable, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTexture2DDynamic* CallFunc_Array_Get_Item, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void InitScreenshot_Info(int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateButtonsStyle(bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue_1, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	void BndEvt__ZoomImage_UI_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ZoomImage_UI_NextImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__UI_ZoomImage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void GoBack();
	void PrevImage();
	void NextImage();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_ZoomImage(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


