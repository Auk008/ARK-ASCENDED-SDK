#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1468 - 0x1460)
// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
{
public:
	class USphereComponent*                      StasisComponent;                                   // 0x1460(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AStructureItemContainerBaseBP_C* GetDefaultObj();

	void BPOnTransferAll(class UPrimalInventoryComponent* ToInventory);
};

}


