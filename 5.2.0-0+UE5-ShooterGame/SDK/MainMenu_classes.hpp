#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4E0 - 0x4C0)
// BlueprintGeneratedClass MainMenu.MainMenu_C
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(None)
	double                                       Counter;                                           // 0x4C8(0x8)(None)
	class USphereReflectionCaptureComponent*     CaptureComp;                                       // 0x4D0(0x8)(Edit, ZeroConstructor)
	class AShooterMatineeActor*                  MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x4D8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void K2Node_MatineeController_1_MatineeEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void ShowVisualSettingsPP();
	void HideVisualSettingsPP();
	void ExecuteUbergraph_MainMenu(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UReMainMenuUI_ASA_C* CallFunc_Create_ReturnValue);
};

}


