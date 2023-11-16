#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// Function GLTFExporter.GLTFExporter.ExportToGLTF
struct UGLTFExporter_ExportToGLTF_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor)
	class FString                                FilePath;                                          // 0x8(0x10)(None)
	class UGLTFExportOptions*                    Options;                                           // 0x18(0x8)(ZeroConstructor)
	TSet<class AActor*>                          SelectedActors;                                    // 0x20(0x50)(None)
	struct FGLTFExportMessages                   OutMessages;                                       // 0x70(0x30)(None)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(None)
	uint8                                        Pad_2291[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


