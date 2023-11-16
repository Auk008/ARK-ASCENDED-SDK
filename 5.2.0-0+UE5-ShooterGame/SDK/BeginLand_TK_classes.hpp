#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C
class UBeginLand_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                OnLandKey;                                         // 0xB0(0x28)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                NavigationPointKey;                                // 0xD8(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBeginLand_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BeginLand_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLandingLocation_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
};

}


