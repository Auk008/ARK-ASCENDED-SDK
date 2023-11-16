#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EggIncubatorInterface.EggIncubatorInterface_C
class IEggIncubatorInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEggIncubatorInterface_C* GetDefaultObj();

	void IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* EggItem, bool IsAllowed);
	void GetItemDisplaySlot(class UPrimalItem* ForItem, int32 InSlot, bool SlotFound);
};

}


