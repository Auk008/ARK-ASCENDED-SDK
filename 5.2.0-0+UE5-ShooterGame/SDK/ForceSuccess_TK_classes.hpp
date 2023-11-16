#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass ForceSuccess_TK.ForceSuccess_TK_C
class UForceSuccess_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(None)

	static class UClass* StaticClass();
	static class UForceSuccess_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_ForceSuccess_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


