#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xD9 - 0xA8)
// BlueprintGeneratedClass SetBBBool_TK.SetBBBool_TK_C
class USetBBBool_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0xB0(0x28)(ZeroConstructor)
	bool                                         Value;                                             // 0xD8(0x1)(None)

	static class UClass* StaticClass();
	static class USetBBBool_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_SetBBBool_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


