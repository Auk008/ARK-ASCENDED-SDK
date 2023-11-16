#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x150 - 0xA0)
// BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C
class UNotWithinDistance_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                Range;                                             // 0xA8(0x28)(ZeroConstructor, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	double                                       RangeOffsetValue;                                  // 0xD0(0x8)(None)
	struct FBlackboardKeySelector                ShouldFlyKey;                                      // 0xD8(0x28)(ZeroConstructor, ContainsInstancedReference, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                TargetBlackboardKey;                               // 0x100(0x28)(ZeroConstructor, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                FollowStoppingDistanceKey;                         // 0x128(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UNotWithinDistance_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor* OwnerActor);
	void ExecuteUbergraph_NotWithinDistance(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_CanFly_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2);
};

}


