#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x4E0 - 0x330)
// WidgetBlueprintGeneratedClass BP_ServerModsLoading.BP_ServerModsLoading_C
class UBP_ServerModsLoading_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AutoWeak, ContainsInstancedReference, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                            DOUNLOADING_PROGGRESS;                             // 0x338(0x8)(ZeroConstructor)
	class UTextBlock*                            DOWNLOAD_MODS_COUNT;                               // 0x340(0x8)(ZeroConstructor)
	class UImage*                                Image_92;                                          // 0x348(0x8)(ZeroConstructor)
	class UImage*                                Image_177;                                         // 0x350(0x8)(ZeroConstructor)
	class UProgressBar*                          ProgressBar_102;                                   // 0x358(0x8)(ZeroConstructor)
	class UTextBlock*                            SERVER_NAME;                                       // 0x360(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_MODS_DOWNLOAD_COUNT;                          // 0x368(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_PERCENT;                                      // 0x370(0x8)(ZeroConstructor)
	class UUI_Button_Ark_Back_C*                 UI_Button_Ark_Back;                                // 0x378(0x8)(ZeroConstructor)
	TArray<struct FCFCoreMod>                    Mods_to_Download;                                  // 0x380(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic)
	int32                                        ModIndex;                                          // 0x390(0x4)(None)
	uint8                                        Pad_4A93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x398(0x10)(ZeroConstructor, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ComplitedEvent;                                    // 0x3A8(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ErrorEvent;                                        // 0x3B8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<int64, struct FCFCoreMod>               ModsById;                                          // 0x3C8(0x50)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<int64, struct FFile>                    FileById;                                          // 0x418(0x50)(AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                InstallingDots;                                    // 0x468(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	int64                                        TotalModsSize;                                     // 0x478(0x8)(None)
	TMap<int64, int64>                           TempCurrentModsSize;                               // 0x480(0x50)(None)
	int64                                        CurrentModsSize;                                   // 0x4D0(0x8)(None)
	int32                                        Errors;                                            // 0x4D8(0x4)(None)
	int32                                        Success;                                           // 0x4DC(0x4)(None)

	static class UClass* StaticClass();
	static class UBP_ServerModsLoading_C* GetDefaultObj();

	void Update_Downloading_Proggress_Text_New(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, int32 Progress, int64 TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default);
	void UpdateTexts(int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void CalculateTatalModsSize(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FCFCoreMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateProgressBar(int64 CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void GetDelegate(FDelegateProperty_ BackDelegate, FDelegateProperty_ CompletedDelegate, FDelegateProperty_ ErrorDelegate);
	void CheckIfAllDownloaded(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void ParsingModsFile(const struct FCFCoreMod& Mod, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ParsingMods(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCFCoreMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Update_Downloading_Proggress_Text(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, int32 Progress, int64 TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFile& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FCFCoreMod& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default);
	void SetDounloadingCountText(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ModInstallingError(const struct FCFCoreError& Error, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ModInstallingSuccess(const struct FInstalledMod& InstalledMod, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ModInstallingProgress(const struct FLibraryProgress& Progress, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<int64>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue);
	void Downloading(int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCFCoreMod& CallFunc_Array_Get_Item, const struct FCFCoreMod& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void StartDownload(class FText ServerName, const TArray<struct FCFCoreMod>& ModsToDownload);
	void Construct();
	void BndEvt__BP_ServerModsLoading_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void OnSuccess();
	void OnError(const struct FCFCoreError& Error);
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DelayComplitedEvent();
	void ExecuteUbergraph_BP_ServerModsLoading(int32 EntryPoint, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FCFCoreError& K2Node_CustomEvent_error, const struct FCFCoreMod& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void ErrorEvent__DelegateSignature();
	void ComplitedEvent__DelegateSignature();
	void BackEvent__DelegateSignature();
};

}


