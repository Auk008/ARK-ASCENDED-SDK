#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x374 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuFolderButton.CheatMenuFolderButton_C
class UCheatMenuFolderButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ZeroConstructor)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(ZeroConstructor)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(None)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(ZeroConstructor)
	int32                                        MyScreen;                                          // 0x370(0x4)(None)

	static class UClass* StaticClass();
	static class UCheatMenuFolderButton_C* GetDefaultObj();

	void SetFolder(class FText FolderName, int32 ScreenNumber, class UTexture2D* Image, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CheatMenuFolderButton(int32 EntryPoint);
};

}


