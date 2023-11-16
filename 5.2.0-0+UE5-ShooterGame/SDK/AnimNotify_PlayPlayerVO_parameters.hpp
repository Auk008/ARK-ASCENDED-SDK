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

// 0x30 (0x30 - 0x0)
// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.GetNotifyName
struct UAnimNotify_PlayPlayerVO_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x10(0x10)(AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(None)
};

// 0x80 (0x80 - 0x0)
// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.Received_Notify
struct UAnimNotify_PlayPlayerVO_C_Received_Notify_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ZeroConstructor)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x38(0x1)(None)
	uint8                                        Pad_4366[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPDA_VoiceCollection_C*                VoiceCollection;                                   // 0x40(0x8)(ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x50(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	uint8                                        Pad_4367[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPDA_VoiceCollection_C*                K2Node_DynamicCast_AsPDA_Voice_Collection;         // 0x60(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(None)
	enum class Enum_VoiceCollectionLine          Temp_byte_Variable;                                // 0x69(0x1)(None)
	uint8                                        Pad_4368[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x70(0x8)(ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x78(0x8)(None)
};

}
}


