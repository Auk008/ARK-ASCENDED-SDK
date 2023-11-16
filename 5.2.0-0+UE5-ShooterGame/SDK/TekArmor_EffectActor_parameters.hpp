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

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
struct ATekArmor_EffectActor_C_OnRep_ParticleScale_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
struct ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
struct ATekArmor_EffectActor_C_OnRep_bSoundOn_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
struct ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
struct ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(None)
};

// 0x14 (0x14 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
struct ATekArmor_EffectActor_C_SetSoundActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(None)
	uint8                                        Pad_3248[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StartTime;                                         // 0x8(0x8)(None)
	float                                        CallFunc_Play_StartTime_ImplicitCast;              // 0x10(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
struct ATekArmor_EffectActor_C_Set_ParticleActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
struct ATekArmor_EffectActor_C_InitTekEffect_Params
{
public:
	class UParticleSystem*                       Particle;                                          // 0x0(0x8)(ZeroConstructor)
	struct FVector                               ParticleScale;                                     // 0x8(0x18)(None)
	class USoundBase*                            Sound;                                             // 0x20(0x8)(ZeroConstructor)
	class APrimalCharacter*                      Player;                                            // 0x28(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
struct ATekArmor_EffectActor_C_PlayerDied_Params
{
public:
	class APrimalCharacter*                      DiedCharacter;                                     // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
struct ATekArmor_EffectActor_C_SetTekFX_Params
{
public:
	class UParticleSystem*                       Particle;                                          // 0x0(0x8)(ZeroConstructor)
	struct FVector                               ParticleScale;                                     // 0x8(0x18)(None)
	class USoundBase*                            Sound;                                             // 0x20(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
struct ATekArmor_EffectActor_C_Replicate_SetSoundState_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
struct ATekArmor_EffectActor_C_Replicate_SetParticleState_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(None)
};

// 0x9D (0x9D - 0x0)
// Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
struct ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3250[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x8(0x18)(None)
	class UParticleSystem*                       K2Node_CustomEvent_particle_1;                     // 0x20(0x8)(ZeroConstructor)
	struct FVector                               K2Node_CustomEvent_particleScale_1;                // 0x28(0x18)(None)
	class USoundBase*                            K2Node_CustomEvent_Sound_1;                        // 0x40(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_CustomEvent_player;                         // 0x48(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51(0x1)(None)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x52(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x53(0x1)(None)
	uint8                                        Pad_3251[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_CustomEvent_DiedCharacter;                  // 0x58(0x8)(ZeroConstructor)
	class UParticleSystem*                       K2Node_CustomEvent_particle;                       // 0x60(0x8)(ZeroConstructor)
	struct FVector                               K2Node_CustomEvent_particleScale;                  // 0x68(0x18)(None)
	class USoundBase*                            K2Node_CustomEvent_Sound;                          // 0x80(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x88(0x1)(None)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue_1;      // 0x89(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8A(0x1)(None)
	bool                                         K2Node_CustomEvent_active_1;                       // 0x8B(0x1)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8C(0x10)(None)
	bool                                         K2Node_CustomEvent_active;                         // 0x9C(0x1)(None)
};

}
}


