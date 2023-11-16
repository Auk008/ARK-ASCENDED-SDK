#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4C0 - 0x4B8)
// Class DataflowEnginePlugin.DataflowActor
class ADataflowActor : public AActor
{
public:
	class UDataflowComponent*                    DataflowComponent;                                 // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ADataflowActor* GetDefaultObj();

};

// 0x140 (0x7C0 - 0x680)
// Class DataflowEnginePlugin.DataflowComponent
class UDataflowComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2405[0x140];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataflowComponent* GetDefaultObj();

};

}


