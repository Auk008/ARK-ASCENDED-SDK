#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x3D8 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Install.UI_Button_Install_C
class UUI_Button_Install_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                               Button_Install;                                    // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Update;                                     // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image;                                             // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x350(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2;                                           // 0x358(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_3;                                           // 0x360(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_4;                                           // 0x368(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_5;                                           // 0x370(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_6;                                           // 0x378(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_152;                                         // 0x380(0x8)(Edit, ZeroConstructor)
	class UProgressBar*                          Instaling_ProgressBar;                             // 0x388(0x8)(Edit, ZeroConstructor)
	class UProgressBar*                          Instaling_ProgressBar_1;                           // 0x390(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_InstallStatus;                                // 0x398(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_State;                              // 0x3A0(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnClickInstall_B;                                  // 0x3A8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_GameSlot_C*                        GameSlotRef;                                       // 0x3B8(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnClickUpdate_B;                                   // 0x3C0(0x10)(Edit, ZeroConstructor)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x3D0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Button_Install_C* GetDefaultObj();

	void UpdateButtonSwitcherStatus(enum class EInstallStatus Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateButtonCollor(enum class ENUM_Install ButtonStatus);
	void Update_All_Theme_Settings();
	void BndEvt__InstallButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__InstallButton_Update_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetProgress(int32 Amount, enum class ELibraryProgressState InstalationState);
	void ExecuteUbergraph_UI_Button_Install(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_CustomEvent_Amount, enum class ELibraryProgressState K2Node_CustomEvent_InstalationState, double CallFunc_GetProcessedBarProgress_ReturnValue, bool CallFunc_GetProcessedBarProgress_MaintainPreviousValue, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
	void OnClickUpdate_B__DelegateSignature();
	void OnClickInstall_B__DelegateSignature();
};

}


