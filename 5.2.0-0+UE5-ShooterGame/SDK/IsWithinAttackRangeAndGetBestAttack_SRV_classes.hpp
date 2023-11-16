#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x168 - 0x98)
// BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
class UIsWithinAttackRangeAndGetBestAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                IsWithinAttackRangeKey;                            // 0xA0(0x28)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                Last_Check_Attack_Range_Closest_Point_Key;         // 0xC8(0x28)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                Use_Altenate_Move_Point;                           // 0xF0(0x28)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                BestAttackIndexKey;                                // 0x118(0x28)(ZeroConstructor, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                AttackIntervalKey;                                 // 0x140(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* GetDefaultObj();

	void UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, float CallFunc_GetAttackInterval_ReturnValue);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttackInterval_ReturnValue, bool CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8 CallFunc_GetCurrentAttackIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
};

}


