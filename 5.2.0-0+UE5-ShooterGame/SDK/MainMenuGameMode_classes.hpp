#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x658 - 0x648)
// BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
class AMainMenuGameMode_C : public AShooterGame_Menu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x648(0x8)(None)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x650(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AMainMenuGameMode_C* GetDefaultObj();

	void ExecuteUbergraph_MainMenuGameMode(int32 EntryPoint);
};

}


