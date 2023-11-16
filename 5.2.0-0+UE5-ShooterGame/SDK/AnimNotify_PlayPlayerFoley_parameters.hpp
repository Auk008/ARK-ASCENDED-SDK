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

// 0x20 (0x20 - 0x0)
// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.SelectSound
struct UAnimNotify_PlayPlayerFoley_C_SelectSound_Params
{
public:
	class UPDA_FoleyCollection_C*                FolleyColletion;                                   // 0x0(0x8)(ZeroConstructor)
	class USoundBase*                            FoleySoundReferance;                               // 0x8(0x8)(ZeroConstructor)
	enum class Enum_FoleyCollection              Temp_byte_Variable;                                // 0x10(0x1)(None)
	uint8                                        Pad_4357[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.GetNotifyName
struct UAnimNotify_PlayPlayerFoley_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x10(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(None)
};

// 0xA4 (0xA4 - 0x0)
// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.Received_Notify
struct UAnimNotify_PlayPlayerFoley_C_Received_Notify_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ZeroConstructor)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x38(0x1)(None)
	uint8                                        Pad_435E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            FoleySound;                                        // 0x40(0x8)(ZeroConstructor)
	class UPDA_FoleyCollection_C*                Default_Collection;                                // 0x48(0x8)(ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(ZeroConstructor)
	class USoundBase*                            CallFunc_SelectSound_FoleySoundReferance;          // 0x58(0x8)(ZeroConstructor)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x60(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(None)
	uint8                                        Pad_435F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalInventoryComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x70(0x8)(ZeroConstructor)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x78(0x8)(ZeroConstructor)
	class UPrimalItemArmorGeneric_C*             K2Node_DynamicCast_AsPrimal_Item_Armor_Generic;    // 0x80(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(None)
	uint8                                        Pad_4360[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x90(0x8)(ZeroConstructor)
	class USoundBase*                            CallFunc_SelectSound_FoleySoundReferance_1;        // 0x98(0x8)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0xA0(0x4)(None)
};

}
}


