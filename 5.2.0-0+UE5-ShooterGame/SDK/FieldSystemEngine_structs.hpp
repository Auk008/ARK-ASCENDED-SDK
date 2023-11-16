#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct FieldSystemEngine.FieldObjectCommands
struct FFieldObjectCommands
{
public:
	TArray<class FName>                          TargetNames;                                       // 0x0(0x10)(AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper)
	TArray<class UFieldNodeBase*>                RootNodes;                                         // 0x10(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper)
	TArray<class UFieldSystemMetaData*>          MetaDatas;                                         // 0x20(0x10)(None)
};

}


