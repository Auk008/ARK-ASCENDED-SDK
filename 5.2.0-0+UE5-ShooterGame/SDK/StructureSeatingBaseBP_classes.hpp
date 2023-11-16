#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x1589 - 0x1578)
// BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C
class AStructureSeatingBaseBP_C : public APrimalStructureSeating
{
public:
	class UChildActorComponent*                  TargetingEmitter;                                  // 0x1578(0x8)(Edit, ZeroConstructor)
	class USphereComponent*                      StasisComponent;                                   // 0x1580(0x8)(ZeroConstructor)
	bool                                         bAllowFishing;                                     // 0x1588(0x1)(None)

	static class UClass* StaticClass();
	static class AStructureSeatingBaseBP_C* GetDefaultObj();

};

}


