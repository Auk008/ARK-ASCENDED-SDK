#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DataflowEngine.DataflowBlueprintLibrary
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDataflowBlueprintLibrary* GetDefaultObj();

	void EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset);
};

// 0x28 (0xC0 - 0x98)
// Class DataflowEngine.DataflowEdNode
class UDataflowEdNode : public UEdGraphNode
{
public:
	uint8                                        Pad_2D1D[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRenderInAssetEditor;                              // 0xB8(0x1)(None)
	uint8                                        Pad_2D1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataflowEdNode* GetDefaultObj();

};

// 0x48 (0xA8 - 0x60)
// Class DataflowEngine.Dataflow
class UDataflow : public UEdGraph
{
public:
	uint8                                        Pad_2D1F[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bActive;                                           // 0x88(0x1)(None)
	uint8                                        Pad_2D20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       Targets;                                           // 0x90(0x10)(ZeroConstructor)
	class UMaterial*                             Material;                                          // 0xA0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDataflow* GetDefaultObj();

};

}


