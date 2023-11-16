#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C
// (None)

class UClass* UAnimNotify_PlayPlayerFoley_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayPlayerFoley_C");

	return Clss;
}


// AnimNotify_PlayPlayerFoley_C AnimNotify_PlayPlayerFoley.Default__AnimNotify_PlayPlayerFoley_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_PlayPlayerFoley_C* UAnimNotify_PlayPlayerFoley_C::GetDefaultObj()
{
	static class UAnimNotify_PlayPlayerFoley_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayPlayerFoley_C*>(UAnimNotify_PlayPlayerFoley_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.SelectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPDA_FoleyCollection_C*      FolleyColletion                                                  (ZeroConstructor)
// class USoundBase*                  FoleySoundReferance                                              (ZeroConstructor)
// enum class Enum_FoleyCollection    Temp_byte_Variable                                               (None)
// class USoundBase*                  K2Node_Select_Default                                            (None)

void UAnimNotify_PlayPlayerFoley_C::SelectSound(class UPDA_FoleyCollection_C* FolleyColletion, class USoundBase* FoleySoundReferance, enum class Enum_FoleyCollection Temp_byte_Variable, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "SelectSound");

	Params::UAnimNotify_PlayPlayerFoley_C_SelectSound_Params Parms{};

	Parms.FolleyColletion = FolleyColletion;
	Parms.FoleySoundReferance = FoleySoundReferance;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UAnimNotify_PlayPlayerFoley_C::GetNotifyName(const class FString& ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "GetNotifyName");

	Params::UAnimNotify_PlayPlayerFoley_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (ZeroConstructor)
// struct FAnimNotifyEventReference   EventReference                                                   (ZeroConstructor)
// bool                               ReturnValue                                                      (None)
// class USoundBase*                  FoleySound                                                       (ZeroConstructor)
// class UPDA_FoleyCollection_C*      Default_Collection                                               (ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance                         (ZeroConstructor)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalInventoryComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ZeroConstructor)
// class UPrimalItemArmorGeneric_C*   K2Node_DynamicCast_AsPrimal_Item_Armor_Generic                   (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance_1                       (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (None)

void UAnimNotify_PlayPlayerFoley_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, class USoundBase* FoleySound, class UPDA_FoleyCollection_C* Default_Collection, class AActor* CallFunc_GetOwner_ReturnValue, class USoundBase* CallFunc_SelectSound_FoleySoundReferance, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess, class UPrimalInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmorGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Generic, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USoundBase* CallFunc_SelectSound_FoleySoundReferance_1, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerFoley_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;
	Parms.FoleySound = FoleySound;
	Parms.Default_Collection = Default_Collection;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SelectSound_FoleySoundReferance = CallFunc_SelectSound_FoleySoundReferance;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue = CallFunc_GetEquippedItemOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Generic = K2Node_DynamicCast_AsPrimal_Item_Armor_Generic;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SelectSound_FoleySoundReferance_1 = CallFunc_SelectSound_FoleySoundReferance_1;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


