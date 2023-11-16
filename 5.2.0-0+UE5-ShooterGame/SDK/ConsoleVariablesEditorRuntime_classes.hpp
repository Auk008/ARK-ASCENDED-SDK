#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
class UConsoleVariablesAsset : public UObject
{
public:
	uint8                                        Pad_197D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VariableCollectionDescription;                     // 0x30(0x10)(None)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UConsoleVariablesAsset* GetDefaultObj();

	void SetVariableCollectionDescription(const class FString& InVariableCollectionDescription);
	void ReplaceSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& Replacement);
	void RemoveConsoleVariable(const class FString& InCommandString, bool ReturnValue);
	void GetVariableCollectionDescription(const class FString& ReturnValue);
	void GetSavedCommandsCount(int32 ReturnValue);
	void GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked, const TArray<class FString>& ReturnValue);
	void GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked, const class FString& ReturnValue);
	void GetSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& ReturnValue);
	void FindSavedDataByCommandString(const class FString& InCommandString, const struct FConsoleVariablesEditorAssetSaveData& OutValue, enum class ESearchCase SearchCase, bool ReturnValue);
	void ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked);
	void CopyFrom(class UConsoleVariablesAsset* InAssetToCopy);
	void AddOrSetConsoleObjectSavedData(const struct FConsoleVariablesEditorAssetSaveData& InData);
};

}


