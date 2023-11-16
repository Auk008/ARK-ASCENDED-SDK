#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C
// (None)

class UClass* UAnimNotify_PlayPlayerVO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayPlayerVO_C");

	return Clss;
}


// AnimNotify_PlayPlayerVO_C AnimNotify_PlayPlayerVO.Default__AnimNotify_PlayPlayerVO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_PlayPlayerVO_C* UAnimNotify_PlayPlayerVO_C::GetDefaultObj()
{
	static class UAnimNotify_PlayPlayerVO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayPlayerVO_C*>(UAnimNotify_PlayPlayerVO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UAnimNotify_PlayPlayerVO_C::GetNotifyName(const class FString& ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerVO_C", "GetNotifyName");

	Params::UAnimNotify_PlayPlayerVO_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (ZeroConstructor)
// struct FAnimNotifyEventReference   EventReference                                                   (ZeroConstructor)
// bool                               ReturnValue                                                      (None)
// class UPDA_VoiceCollection_C*      VoiceCollection                                                  (ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// enum class Enum_VoiceCollectionLineTemp_byte_Variable                                               (None)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (None)

void UAnimNotify_PlayPlayerVO_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, class UPDA_VoiceCollection_C* VoiceCollection, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess, class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_VoiceCollectionLine Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerVO_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerVO_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;
	Parms.VoiceCollection = VoiceCollection;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPDA_Voice_Collection = K2Node_DynamicCast_AsPDA_Voice_Collection;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


