#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x518 - 0x4B8)
// BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C
class ATekArmor_EffectActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(None)
	class UAudioComponent*                       TekSound;                                          // 0x4C0(0x8)(ZeroConstructor)
	class UParticleSystemComponent*              TekParticle;                                       // 0x4C8(0x8)(ZeroConstructor)
	class USceneComponent*                       Root;                                              // 0x4D0(0x8)(ZeroConstructor)
	class APrimalCharacter*                      Ref_Player;                                        // 0x4D8(0x8)(ZeroConstructor)
	class ATekArmor_EffectActor_C*               SelfAsObj;                                         // 0x4E0(0x8)(ZeroConstructor)
	class UParticleSystem*                       TekParticleRef;                                    // 0x4E8(0x8)(ZeroConstructor)
	class USoundBase*                            TekSoundRef;                                       // 0x4F0(0x8)(ZeroConstructor)
	bool                                         bSoundOn;                                          // 0x4F8(0x1)(None)
	bool                                         bParticlesOn;                                      // 0x4F9(0x1)(None)
	uint8                                        Pad_3254[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ParticleScale;                                     // 0x500(0x18)(None)

	static class UClass* StaticClass();
	static class ATekArmor_EffectActor_C* GetDefaultObj();

	void OnRep_ParticleScale(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_bParticlesOn(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_bSoundOn(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_TekSoundRef(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_TekParticleTemplate(bool CallFunc_IsDedicatedServer_ReturnValue);
	void SetSoundActive(bool Active, double StartTime, float CallFunc_Play_StartTime_ImplicitCast);
	void Set_ParticleActive(bool Active);
	void InitTekEffect(class UParticleSystem* Particle, const struct FVector& ParticleScale, class USoundBase* Sound, class APrimalCharacter* Player);
	void PlayerDied(class APrimalCharacter* DiedCharacter);
	void SetTekFX(class UParticleSystem* Particle, const struct FVector& ParticleScale, class USoundBase* Sound);
	void Replicate_SetSoundState(bool Active);
	void Replicate_SetParticleState(bool Active);
	void ExecuteUbergraph_TekArmor_EffectActor(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class UParticleSystem* K2Node_CustomEvent_particle_1, const struct FVector& K2Node_CustomEvent_particleScale_1, class USoundBase* K2Node_CustomEvent_Sound_1, class APrimalCharacter* K2Node_CustomEvent_player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APrimalCharacter* K2Node_CustomEvent_DiedCharacter, class UParticleSystem* K2Node_CustomEvent_particle, const struct FVector& K2Node_CustomEvent_particleScale, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_active_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_active);
};

}


