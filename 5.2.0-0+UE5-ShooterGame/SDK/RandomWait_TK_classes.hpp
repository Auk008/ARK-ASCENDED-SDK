#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xC9 - 0xA8)
// BlueprintGeneratedClass RandomWait_TK.RandomWait_TK_C
class URandomWait_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(None)
	double                                       FixedWait;                                         // 0xB0(0x8)(None)
	double                                       RandomWait;                                        // 0xB8(0x8)(None)
	double                                       RandomPower;                                       // 0xC0(0x8)(None)
	bool                                         bDontWaitOnFlyingNPC;                              // 0xC8(0x1)(None)

	static class UClass* StaticClass();
	static class URandomWait_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_RandomWait_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}


