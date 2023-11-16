#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C
// (Actor)

class UClass* ATekArmor_EffectActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TekArmor_EffectActor_C");

	return Clss;
}


// TekArmor_EffectActor_C TekArmor_EffectActor.Default__TekArmor_EffectActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATekArmor_EffectActor_C* ATekArmor_EffectActor_C::GetDefaultObj()
{
	static class ATekArmor_EffectActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATekArmor_EffectActor_C*>(ATekArmor_EffectActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ATekArmor_EffectActor_C::OnRep_ParticleScale(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_ParticleScale");

	Params::ATekArmor_EffectActor_C_OnRep_ParticleScale_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ATekArmor_EffectActor_C::OnRep_bParticlesOn(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_bParticlesOn");

	Params::ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ATekArmor_EffectActor_C::OnRep_bSoundOn(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_bSoundOn");

	Params::ATekArmor_EffectActor_C_OnRep_bSoundOn_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ATekArmor_EffectActor_C::OnRep_TekSoundRef(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_TekSoundRef");

	Params::ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ATekArmor_EffectActor_C::OnRep_TekParticleTemplate(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "OnRep_TekParticleTemplate");

	Params::ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (None)
// double                             StartTime                                                        (None)
// float                              CallFunc_Play_StartTime_ImplicitCast                             (None)

void ATekArmor_EffectActor_C::SetSoundActive(bool Active, double StartTime, float CallFunc_Play_StartTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetSoundActive");

	Params::ATekArmor_EffectActor_C_SetSoundActive_Params Parms{};

	Parms.Active = Active;
	Parms.StartTime = StartTime;
	Parms.CallFunc_Play_StartTime_ImplicitCast = CallFunc_Play_StartTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (None)

void ATekArmor_EffectActor_C::Set_ParticleActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Set ParticleActive");

	Params::ATekArmor_EffectActor_C_Set_ParticleActive_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (ZeroConstructor)
// struct FVector                     ParticleScale                                                    (None)
// class USoundBase*                  Sound                                                            (ZeroConstructor)
// class APrimalCharacter*            Player                                                           (None)

void ATekArmor_EffectActor_C::InitTekEffect(class UParticleSystem* Particle, const struct FVector& ParticleScale, class USoundBase* Sound, class APrimalCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "InitTekEffect");

	Params::ATekArmor_EffectActor_C_InitTekEffect_Params Parms{};

	Parms.Particle = Particle;
	Parms.ParticleScale = ParticleScale;
	Parms.Sound = Sound;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            DiedCharacter                                                    (None)

void ATekArmor_EffectActor_C::PlayerDied(class APrimalCharacter* DiedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "PlayerDied");

	Params::ATekArmor_EffectActor_C_PlayerDied_Params Parms{};

	Parms.DiedCharacter = DiedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (ZeroConstructor)
// struct FVector                     ParticleScale                                                    (None)
// class USoundBase*                  Sound                                                            (None)

void ATekArmor_EffectActor_C::SetTekFX(class UParticleSystem* Particle, const struct FVector& ParticleScale, class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "SetTekFX");

	Params::ATekArmor_EffectActor_C_SetTekFX_Params Parms{};

	Parms.Particle = Particle;
	Parms.ParticleScale = ParticleScale;
	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (None)

void ATekArmor_EffectActor_C::Replicate_SetSoundState(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Replicate_SetSoundState");

	Params::ATekArmor_EffectActor_C_Replicate_SetSoundState_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (None)

void ATekArmor_EffectActor_C::Replicate_SetParticleState(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "Replicate_SetParticleState");

	Params::ATekArmor_EffectActor_C_Replicate_SetParticleState_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (None)
// class UParticleSystem*             K2Node_CustomEvent_particle_1                                    (ZeroConstructor)
// struct FVector                     K2Node_CustomEvent_particleScale_1                               (None)
// class USoundBase*                  K2Node_CustomEvent_Sound_1                                       (ZeroConstructor)
// class APrimalCharacter*            K2Node_CustomEvent_player                                        (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class APrimalCharacter*            K2Node_CustomEvent_DiedCharacter                                 (ZeroConstructor)
// class UParticleSystem*             K2Node_CustomEvent_particle                                      (ZeroConstructor)
// struct FVector                     K2Node_CustomEvent_particleScale                                 (None)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue_1                     (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               K2Node_CustomEvent_active_1                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (None)
// bool                               K2Node_CustomEvent_active                                        (None)

void ATekArmor_EffectActor_C::ExecuteUbergraph_TekArmor_EffectActor(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class UParticleSystem* K2Node_CustomEvent_particle_1, const struct FVector& K2Node_CustomEvent_particleScale_1, class USoundBase* K2Node_CustomEvent_Sound_1, class APrimalCharacter* K2Node_CustomEvent_player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APrimalCharacter* K2Node_CustomEvent_DiedCharacter, class UParticleSystem* K2Node_CustomEvent_particle, const struct FVector& K2Node_CustomEvent_particleScale, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_active_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekArmor_EffectActor_C", "ExecuteUbergraph_TekArmor_EffectActor");

	Params::ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.K2Node_CustomEvent_particle_1 = K2Node_CustomEvent_particle_1;
	Parms.K2Node_CustomEvent_particleScale_1 = K2Node_CustomEvent_particleScale_1;
	Parms.K2Node_CustomEvent_Sound_1 = K2Node_CustomEvent_Sound_1;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_DiedCharacter = K2Node_CustomEvent_DiedCharacter;
	Parms.K2Node_CustomEvent_particle = K2Node_CustomEvent_particle;
	Parms.K2Node_CustomEvent_particleScale = K2Node_CustomEvent_particleScale;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue_1 = CallFunc_NotEqual_VectorVector_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_active_1 = K2Node_CustomEvent_active_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_active = K2Node_CustomEvent_active;

	UObject::ProcessEvent(Func, &Parms);

}

}


