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

// 0x10 (0x10 - 0x0)
// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
struct UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Params
{
public:
	class UMeshComponent*                        MeshComp;                                          // 0x0(0x8)(ZeroConstructor)
	class UFXSystemComponent*                    ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
struct UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Params
{
public:
	class UMeshComponent*                        MeshComp;                                          // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_2BD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
struct UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params
{
public:
	class UFXSystemComponent*                    ReturnValue;                                       // 0x0(0x8)(None)
};

}
}


