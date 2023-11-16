#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F0 (0xF30 - 0x740)
// BlueprintGeneratedClass CustomButton_HUB_ASA.CustomButton_HUB_ASA_C
class UCustomButton_HUB_ASA_C : public UCustomButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x740(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3652[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          SelectedStyle;                                     // 0x750(0x3F0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          UnSelectedStyle;                                   // 0xB40(0x3F0)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCustomButton_HUB_ASA_C* GetDefaultObj();

	void BPSetToggledState(bool IsToggled);
	void ExecuteUbergraph_CustomButton_HUB_ASA(int32 EntryPoint, bool K2Node_Event_IsToggled);
};

}


