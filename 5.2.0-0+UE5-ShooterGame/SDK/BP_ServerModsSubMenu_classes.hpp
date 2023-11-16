#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3B8 - 0x330)
// WidgetBlueprintGeneratedClass BP_ServerModsSubMenu.BP_ServerModsSubMenu_C
class UBP_ServerModsSubMenu_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                               BUTTON_FAV;                                        // 0x338(0x8)(ZeroConstructor)
	class UButton*                               BUTTON_REPORT;                                     // 0x340(0x8)(ZeroConstructor)
	class UImage*                                Image_65;                                          // 0x348(0x8)(ZeroConstructor)
	class UImage*                                IMG_Hurt;                                          // 0x350(0x8)(ZeroConstructor)
	class UImage*                                IMG_Hurt_1;                                        // 0x358(0x8)(ZeroConstructor)
	class UImage*                                IMG_LINE_1;                                        // 0x360(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            ReportEvent;                                       // 0x368(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x378(0x10)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int64                                        Server_ID;                                         // 0x388(0x8)(None)
	TArray<int64>                                Mods_Ids;                                          // 0x390(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  ServerName;                                        // 0x3A0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_ServerModsSubMenu_C* GetDefaultObj();

	void ModListToCombinedString(const TArray<int64>& Array, const class FString& ReturnValue, const TArray<class FString>& AllStrings, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int64 CallFunc_Array_Get_Item, class FText CallFunc_Conv_Int64ToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void CustomEvent_3(const class FString& Temp_user_token);
	void CustomEvent_4(const struct FCFCoreError& Error);
	void ReportServer();
	void ExecuteUbergraph_BP_ServerModsSubMenu(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& K2Node_CustomEvent_temp_user_token, const struct FCFCoreError& K2Node_CustomEvent_error, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_ModListToCombinedString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool CallFunc_CanLaunchURL_ReturnValue);
	void FavoriteEvent__DelegateSignature();
	void ReportEvent__DelegateSignature();
};

}


