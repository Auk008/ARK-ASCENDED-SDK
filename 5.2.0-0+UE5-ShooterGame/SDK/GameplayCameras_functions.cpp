#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayCameras.MatineeCameraShake
// (None)

class UClass* UMatineeCameraShake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeCameraShake");

	return Clss;
}


// MatineeCameraShake GameplayCameras.Default__MatineeCameraShake
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeCameraShake* UMatineeCameraShake::GetDefaultObj()
{
	static class UMatineeCameraShake* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeCameraShake*>(UMatineeCameraShake::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (ZeroConstructor)
// class UClass*                      ShakeClass                                                       (ZeroConstructor)
// class UCameraShakeSourceComponent* SourceComponent                                                  (ZeroConstructor)
// float                              Scale                                                            (None)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (None)
// struct FRotator                    UserPlaySpaceRot                                                 (None)
// class UMatineeCameraShake*         ReturnValue                                                      (None)

void UMatineeCameraShake::StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot, class UMatineeCameraShake* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShakeFromSource");

	Params::UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.SourceComponent = SourceComponent;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (ZeroConstructor)
// class UClass*                      ShakeClass                                                       (ZeroConstructor)
// float                              Scale                                                            (None)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (None)
// struct FRotator                    UserPlaySpaceRot                                                 (None)
// class UMatineeCameraShake*         ReturnValue                                                      (None)

void UMatineeCameraShake::StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot, class UMatineeCameraShake* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShake");

	Params::UMatineeCameraShake_StartMatineeCameraShake_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bImmediately                                                     (None)

void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveStopShake");

	Params::UMatineeCameraShake_ReceiveStopShake_Params Parms{};

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (None)

void UMatineeCameraShake::ReceivePlayShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceivePlayShake");

	Params::UMatineeCameraShake_ReceivePlayShake_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMatineeCameraShake::ReceiveIsFinished(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveIsFinished");

	Params::UMatineeCameraShake_ReceiveIsFinished_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)
// float                              Alpha                                                            (None)
// struct FMinimalViewInfo            POV                                                              (ZeroConstructor)
// struct FMinimalViewInfo            ModifiedPOV                                                      (None)

void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, const struct FMinimalViewInfo& ModifiedPOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "BlueprintUpdateCameraShake");

	Params::UMatineeCameraShake_BlueprintUpdateCameraShake_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Alpha = Alpha;
	Parms.POV = POV;
	Parms.ModifiedPOV = ModifiedPOV;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameplayCameras.MatineeCameraShakePattern
// (None)

class UClass* UMatineeCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeCameraShakePattern");

	return Clss;
}


// MatineeCameraShakePattern GameplayCameras.Default__MatineeCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeCameraShakePattern* UMatineeCameraShakePattern::GetDefaultObj()
{
	static class UMatineeCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeCameraShakePattern*>(UMatineeCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// (None)

class UClass* UMovieSceneMatineeCameraShakeEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMatineeCameraShakeEvaluator");

	return Clss;
}


// MovieSceneMatineeCameraShakeEvaluator GameplayCameras.Default__MovieSceneMatineeCameraShakeEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMatineeCameraShakeEvaluator* UMovieSceneMatineeCameraShakeEvaluator::GetDefaultObj()
{
	static class UMovieSceneMatineeCameraShakeEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMatineeCameraShakeEvaluator*>(UMovieSceneMatineeCameraShakeEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// (None)

class UClass* UMatineeCameraShakeFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeCameraShakeFunctionLibrary");

	return Clss;
}


// MatineeCameraShakeFunctionLibrary GameplayCameras.Default__MatineeCameraShakeFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeCameraShakeFunctionLibrary* UMatineeCameraShakeFunctionLibrary::GetDefaultObj()
{
	static class UMatineeCameraShakeFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeCameraShakeFunctionLibrary*>(UMatineeCameraShakeFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*            CameraShake                                                      (ZeroConstructor)
// class UMatineeCameraShake*         ReturnValue                                                      (None)

void UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake, class UMatineeCameraShake* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShakeFunctionLibrary", "Conv_MatineeCameraShake");

	Params::UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params Parms{};

	Parms.CameraShake = CameraShake;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayCameras.CameraAnimationCameraModifier
// (None)

class UClass* UCameraAnimationCameraModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraAnimationCameraModifier");

	return Clss;
}


// CameraAnimationCameraModifier GameplayCameras.Default__CameraAnimationCameraModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetDefaultObj()
{
	static class UCameraAnimationCameraModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraAnimationCameraModifier*>(UCameraAnimationCameraModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (None)
// bool                               bImmediate                                                       (None)

void UCameraAnimationCameraModifier::StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopCameraAnimation");

	Params::UCameraAnimationCameraModifier_StopCameraAnimation_Params Parms{};

	Parms.Handle = Handle;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (None)
// bool                               bImmediate                                                       (None)

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimationsOf");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (None)

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimations");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimations_Params Parms{};

	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (None)
// struct FCameraAnimationParams      Params                                                           (None)
// struct FCameraAnimationHandle      ReturnValue                                                      (None)

void UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params, const struct FCameraAnimationHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::UCameraAnimationCameraModifier_PlayCameraAnimation_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.Params = Params;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (None)
// bool                               ReturnValue                                                      (None)

void UCameraAnimationCameraModifier::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "IsCameraAnimationActive");

	Params::UCameraAnimationCameraModifier_IsCameraAnimationActive_Params Parms{};

	Parms.Handle = Handle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (None)

void UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController, class UCameraAnimationCameraModifier* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// int32                              ControllerId                                                     (None)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (None)

void UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32 ControllerId, class UCameraAnimationCameraModifier* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ControllerId = ControllerId;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// int32                              PlayerIndex                                                      (None)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (None)

void UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32 PlayerIndex, class UCameraAnimationCameraModifier* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerIndex = PlayerIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayCameras.CompositeCameraShakePattern
// (None)

class UClass* UCompositeCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositeCameraShakePattern");

	return Clss;
}


// CompositeCameraShakePattern GameplayCameras.Default__CompositeCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositeCameraShakePattern* UCompositeCameraShakePattern::GetDefaultObj()
{
	static class UCompositeCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositeCameraShakePattern*>(UCompositeCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.DefaultCameraShakeBase
// (None)

class UClass* UDefaultCameraShakeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultCameraShakeBase");

	return Clss;
}


// DefaultCameraShakeBase GameplayCameras.Default__DefaultCameraShakeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultCameraShakeBase* UDefaultCameraShakeBase::GetDefaultObj()
{
	static class UDefaultCameraShakeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultCameraShakeBase*>(UDefaultCameraShakeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.GameplayCamerasSubsystem
// (None)

class UClass* UGameplayCamerasSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCamerasSubsystem");

	return Clss;
}


// GameplayCamerasSubsystem GameplayCameras.Default__GameplayCamerasSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCamerasSubsystem* UGameplayCamerasSubsystem::GetDefaultObj()
{
	static class UGameplayCamerasSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCamerasSubsystem*>(UGameplayCamerasSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// struct FCameraAnimationHandle      Handle                                                           (None)
// bool                               bImmediate                                                       (None)

void UGameplayCamerasSubsystem::StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopCameraAnimation");

	Params::UGameplayCamerasSubsystem_StopCameraAnimation_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Handle = Handle;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UCameraAnimationSequence*    Sequence                                                         (None)
// bool                               bImmediate                                                       (None)

void UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimationsOf");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// bool                               bImmediate                                                       (None)

void UGameplayCamerasSubsystem::StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimations");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimations_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UCameraAnimationSequence*    Sequence                                                         (None)
// struct FCameraAnimationParams      Params                                                           (None)
// struct FCameraAnimationHandle      ReturnValue                                                      (None)

void UGameplayCamerasSubsystem::PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params, const struct FCameraAnimationHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "PlayCameraAnimation");

	Params::UGameplayCamerasSubsystem_PlayCameraAnimation_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.Params = Params;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// struct FCameraAnimationHandle      Handle                                                           (None)
// bool                               ReturnValue                                                      (None)

void UGameplayCamerasSubsystem::IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "IsCameraAnimationActive");

	Params::UGameplayCamerasSubsystem_IsCameraAnimationActive_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Handle = Handle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayCameras.SimpleCameraShakePattern
// (None)

class UClass* USimpleCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleCameraShakePattern");

	return Clss;
}


// SimpleCameraShakePattern GameplayCameras.Default__SimpleCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleCameraShakePattern* USimpleCameraShakePattern::GetDefaultObj()
{
	static class USimpleCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleCameraShakePattern*>(USimpleCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.PerlinNoiseCameraShakePattern
// (None)

class UClass* UPerlinNoiseCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerlinNoiseCameraShakePattern");

	return Clss;
}


// PerlinNoiseCameraShakePattern GameplayCameras.Default__PerlinNoiseCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerlinNoiseCameraShakePattern* UPerlinNoiseCameraShakePattern::GetDefaultObj()
{
	static class UPerlinNoiseCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerlinNoiseCameraShakePattern*>(UPerlinNoiseCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.TestCameraShake
// (None)

class UClass* UTestCameraShake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestCameraShake");

	return Clss;
}


// TestCameraShake GameplayCameras.Default__TestCameraShake
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestCameraShake* UTestCameraShake::GetDefaultObj()
{
	static class UTestCameraShake* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestCameraShake*>(UTestCameraShake::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.ConstantCameraShakePattern
// (None)

class UClass* UConstantCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstantCameraShakePattern");

	return Clss;
}


// ConstantCameraShakePattern GameplayCameras.Default__ConstantCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstantCameraShakePattern* UConstantCameraShakePattern::GetDefaultObj()
{
	static class UConstantCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstantCameraShakePattern*>(UConstantCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.WaveOscillatorCameraShakePattern
// (None)

class UClass* UWaveOscillatorCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveOscillatorCameraShakePattern");

	return Clss;
}


// WaveOscillatorCameraShakePattern GameplayCameras.Default__WaveOscillatorCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveOscillatorCameraShakePattern* UWaveOscillatorCameraShakePattern::GetDefaultObj()
{
	static class UWaveOscillatorCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveOscillatorCameraShakePattern*>(UWaveOscillatorCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}

}


