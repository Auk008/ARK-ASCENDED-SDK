#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C
class UIsInvalidNavigationPoint_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xB0(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UIsInvalidNavigationPoint_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_IsInvalidNavigationPoint_TK(int32 EntryPoint, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* K2Node_Event_OwnerActor, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
};

}


