#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AugmentedReality.ARActor
// (Actor)

class UClass* AARActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARActor");

	return Clss;
}


// ARActor AugmentedReality.Default__ARActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AARActor* AARActor::GetDefaultObj()
{
	static class AARActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AARActor*>(AARActor::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARActor.AddARComponent
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                      InComponentClass                                                 (ZeroConstructor)
// struct FGuid                       NativeID                                                         (None)
// class UARComponent*                ReturnValue                                                      (None)

void AARActor::AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID, class UARComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARActor", "AddARComponent");

	Params::AARActor_AddARComponent_Params Parms{};

	Parms.InComponentClass = InComponentClass;
	Parms.NativeID = NativeID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARBlueprintLibrary
// (None)

class UClass* UARBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARBlueprintLibrary");

	return Clss;
}


// ARBlueprintLibrary AugmentedReality.Default__ARBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UARBlueprintLibrary* UARBlueprintLibrary::GetDefaultObj()
{
	static class UARBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UARBlueprintLibrary*>(UARBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToUnpin                                                 (None)

void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "UnpinComponent");

	Params::UARBlueprintLibrary_UnpinComponent_Params Parms{};

	Parms.ComponentToUnpin = ComponentToUnpin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bOnOff                                                           (None)
// enum class EARCaptureType          CaptureType                                                      (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "ToggleARCapture");

	Params::UARBlueprintLibrary_ToggleARCapture_Params Parms{};

	Parms.bOnOff = bOnOff;
	Parms.CaptureType = CaptureType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARBlueprintLibrary::StopARSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "StopARSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*            SessionConfig                                                    (None)

void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "StartARSession");

	Params::UARBlueprintLibrary_StartARSession_Params Parms{};

	Parms.SessionConfig = SessionConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bOnOff                                                           (None)

void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetEnabledXRCamera");

	Params::UARBlueprintLibrary_SetEnabledXRCamera_Params Parms{};

	Parms.bOnOff = bOnOff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InWorldScale                                                     (None)

void UARBlueprintLibrary::SetARWorldScale(float InWorldScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetARWorldScale");

	Params::UARBlueprintLibrary_SetARWorldScale_Params Parms{};

	Parms.InWorldScale = InWorldScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     OriginLocation                                                   (None)
// struct FRotator                    OriginRotation                                                   (None)
// bool                               bIsTransformInWorldSpace                                         (None)
// bool                               bMaintainUpDirection                                             (None)

void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetARWorldOriginLocationAndRotation");

	Params::UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params Parms{};

	Parms.OriginLocation = OriginLocation;
	Parms.OriginRotation = OriginRotation;
	Parms.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
	Parms.bMaintainUpDirection = bMaintainUpDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InAlignmentTransform                                             (None)

void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetAlignmentTransform");

	Params::UARBlueprintLibrary_SetAlignmentTransform_Params Parms{};

	Parms.InAlignmentTransform = InAlignmentTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        InSaveName                                                       (None)
// class UARPin*                      InPin                                                            (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::SaveARPinToLocalStore(class FName InSaveName, class UARPin* InPin, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SaveARPinToLocalStore");

	Params::UARBlueprintLibrary_SaveARPinToLocalStore_Params Parms{};

	Parms.InSaveName = InSaveName;
	Parms.InPin = InPin;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint                   InSize                                                           (None)
// struct FIntPoint                   ReturnValue                                                      (None)

void UARBlueprintLibrary::ResizeXRCamera(const struct FIntPoint& InSize, const struct FIntPoint& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "ResizeXRCamera");

	Params::UARBlueprintLibrary_ResizeXRCamera_Params Parms{};

	Parms.InSize = InSize;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARPin*                      PinToRemove                                                      (None)

void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "RemovePin");

	Params::UARBlueprintLibrary_RemovePin_Params Parms{};

	Parms.PinToRemove = PinToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        InSaveName                                                       (None)

void UARBlueprintLibrary::RemoveARPinFromLocalStore(class FName InSaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "RemoveARPinFromLocalStore");

	Params::UARBlueprintLibrary_RemoveARPinFromLocalStore_Params Parms{};

	Parms.InSaveName = InSaveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "RemoveAllARPinsFromLocalStore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (ZeroConstructor)
// struct FARTraceResult              TraceResult                                                      (ZeroConstructor)
// class FName                        DebugName                                                        (None)
// class UARPin*                      ReturnValue                                                      (None)

void UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, class FName DebugName, class UARPin* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PinComponentToTraceResult");

	Params::UARBlueprintLibrary_PinComponentToTraceResult_Params Parms{};

	Parms.ComponentToPin = ComponentToPin;
	Parms.TraceResult = TraceResult;
	Parms.DebugName = DebugName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (ZeroConstructor)
// class UARPin*                      Pin                                                              (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PinComponentToARPin");

	Params::UARBlueprintLibrary_PinComponentToARPin_Params Parms{};

	Parms.ComponentToPin = ComponentToPin;
	Parms.Pin = Pin;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (ZeroConstructor)
// struct FTransform                  PinToWorldTransform                                              (None)
// class UARTrackedGeometry*          TrackedGeometry                                                  (ZeroConstructor)
// class FName                        DebugName                                                        (None)
// class UARPin*                      ReturnValue                                                      (None)

void UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, class FName DebugName, class UARPin* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PinComponent");

	Params::UARBlueprintLibrary_PinComponent_Params Parms{};

	Parms.ComponentToPin = ComponentToPin;
	Parms.PinToWorldTransform = PinToWorldTransform;
	Parms.TrackedGeometry = TrackedGeometry;
	Parms.DebugName = DebugName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARBlueprintLibrary::PauseARSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PauseARSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TMap<class FName, class UARPin*>   ReturnValue                                                      (None)

void UARBlueprintLibrary::LoadARPinsFromLocalStore(TMap<class FName, class UARPin*> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "LoadARPinsFromLocalStore");

	Params::UARBlueprintLibrary_LoadARPinsFromLocalStore_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (None)
// struct FVector                     End                                                              (None)
// bool                               bTestFeaturePoints                                               (None)
// bool                               bTestGroundPlane                                                 (None)
// bool                               bTestPlaneExtents                                                (None)
// bool                               bTestPlaneBoundaryPolygon                                        (None)
// TArray<struct FARTraceResult>      ReturnValue                                                      (None)

void UARBlueprintLibrary::LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon, const TArray<struct FARTraceResult>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects3D");

	Params::UARBlueprintLibrary_LineTraceTrackedObjects3D_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.bTestFeaturePoints = bTestFeaturePoints;
	Parms.bTestGroundPlane = bTestGroundPlane;
	Parms.bTestPlaneExtents = bTestPlaneExtents;
	Parms.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ScreenCoord                                                      (None)
// bool                               bTestFeaturePoints                                               (None)
// bool                               bTestGroundPlane                                                 (None)
// bool                               bTestPlaneExtents                                                (None)
// bool                               bTestPlaneBoundaryPolygon                                        (None)
// TArray<struct FARTraceResult>      ReturnValue                                                      (None)

void UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon, const TArray<struct FARTraceResult>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects");

	Params::UARBlueprintLibrary_LineTraceTrackedObjects_Params Parms{};

	Parms.ScreenCoord = ScreenCoord;
	Parms.bTestFeaturePoints = bTestFeaturePoints;
	Parms.bTestGroundPlane = bTestGroundPlane;
	Parms.bTestPlaneExtents = bTestPlaneExtents;
	Parms.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARSessionType          SessionType                                                      (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::IsSessionTypeSupported(enum class EARSessionType SessionType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsSessionTypeSupported");

	Params::UARBlueprintLibrary_IsSessionTypeSupported_Params Parms{};

	Parms.SessionType = SessionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARSessionType          SessionType                                                      (None)
// enum class EARSessionTrackingFeatureSessionTrackingFeature                                           (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsSessionTrackingFeatureSupported");

	Params::UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params Parms{};

	Parms.SessionType = SessionType;
	Parms.SessionTrackingFeature = SessionTrackingFeature;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARSessionType          SessionType                                                      (None)
// enum class EARSceneReconstruction  SceneReconstructionMethod                                        (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsSceneReconstructionSupported");

	Params::UARBlueprintLibrary_IsSceneReconstructionSupported_Params Parms{};

	Parms.SessionType = SessionType;
	Parms.SceneReconstructionMethod = SceneReconstructionMethod;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::IsARSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsARSupported");

	Params::UARBlueprintLibrary_IsARSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::IsARPinLocalStoreSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreSupported");

	Params::UARBlueprintLibrary_IsARPinLocalStoreSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::IsARPinLocalStoreReady(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreReady");

	Params::UARBlueprintLibrary_IsARPinLocalStoreReady_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARWorldMappingState    ReturnValue                                                      (None)

void UARBlueprintLibrary::GetWorldMappingStatus(enum class EARWorldMappingState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetWorldMappingStatus");

	Params::UARBlueprintLibrary_GetWorldMappingStatus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARTrackingQualityReasonReturnValue                                                      (None)

void UARBlueprintLibrary::GetTrackingQualityReason(enum class EARTrackingQualityReason ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetTrackingQualityReason");

	Params::UARBlueprintLibrary_GetTrackingQualityReason_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARTrackingQuality      ReturnValue                                                      (None)

void UARBlueprintLibrary::GetTrackingQuality(enum class EARTrackingQuality ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetTrackingQuality");

	Params::UARBlueprintLibrary_GetTrackingQuality_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EARSessionType          SessionType                                                      (None)
// TArray<struct FARVideoFormat>      ReturnValue                                                      (None)

void UARBlueprintLibrary::GetSupportedVideoFormats(enum class EARSessionType SessionType, const TArray<struct FARVideoFormat>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetSupportedVideoFormats");

	Params::UARBlueprintLibrary_GetSupportedVideoFormats_Params Parms{};

	Parms.SessionType = SessionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARSessionConfig*            ReturnValue                                                      (None)

void UARBlueprintLibrary::GetSessionConfig(class UARSessionConfig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetSessionConfig");

	Params::UARBlueprintLibrary_GetSessionConfig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (None)

void UARBlueprintLibrary::GetPointCloud(const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetPointCloud");

	Params::UARBlueprintLibrary_GetPointCloud_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTexture*                  ReturnValue                                                      (None)

void UARBlueprintLibrary::GetPersonSegmentationImage(class UARTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationImage");

	Params::UARBlueprintLibrary_GetPersonSegmentationImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTexture*                  ReturnValue                                                      (None)

void UARBlueprintLibrary::GetPersonSegmentationDepthImage(class UARTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationDepthImage");

	Params::UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InWorldLocation                                                  (None)
// enum class EARObjectClassification OutClassification                                                (None)
// struct FVector                     OutClassificationLocation                                        (None)
// float                              MaxLocationDiff                                                  (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, enum class EARObjectClassification OutClassification, const struct FVector& OutClassificationLocation, float MaxLocationDiff, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetObjectClassificationAtLocation");

	Params::UARBlueprintLibrary_GetObjectClassificationAtLocation_Params Parms{};

	Parms.InWorldLocation = InWorldLocation;
	Parms.OutClassification = OutClassification;
	Parms.OutClassificationLocation = OutClassificationLocation;
	Parms.MaxLocationDiff = MaxLocationDiff;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UARBlueprintLibrary::GetNumberOfTrackedFacesSupported(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetNumberOfTrackedFacesSupported");

	Params::UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARLightEstimate*            ReturnValue                                                      (None)

void UARBlueprintLibrary::GetCurrentLightEstimate(class UARLightEstimate* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCurrentLightEstimate");

	Params::UARBlueprintLibrary_GetCurrentLightEstimate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FARCameraIntrinsics         OutCameraIntrinsics                                              (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::GetCameraIntrinsics(const struct FARCameraIntrinsics& OutCameraIntrinsics, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCameraIntrinsics");

	Params::UARBlueprintLibrary_GetCameraIntrinsics_Params Parms{};

	Parms.OutCameraIntrinsics = OutCameraIntrinsics;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*       ReturnValue                                                      (None)

void UARBlueprintLibrary::GetCameraImage(class UARTextureCameraImage* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCameraImage");

	Params::UARBlueprintLibrary_GetCameraImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraDepth*       ReturnValue                                                      (None)

void UARBlueprintLibrary::GetCameraDepth(class UARTextureCameraDepth* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCameraDepth");

	Params::UARBlueprintLibrary_GetCameraDepth_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARBlueprintLibrary::GetARWorldScale(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetARWorldScale");

	Params::UARBlueprintLibrary_GetARWorldScale_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetARTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EARTextureType          TextureType                                                      (None)
// class UARTexture*                  ReturnValue                                                      (None)

void UARBlueprintLibrary::GetARTexture(enum class EARTextureType TextureType, class UARTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetARTexture");

	Params::UARBlueprintLibrary_GetARTexture_Params Parms{};

	Parms.TextureType = TextureType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARSessionStatus            ReturnValue                                                      (None)

void UARBlueprintLibrary::GetARSessionStatus(const struct FARSessionStatus& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetARSessionStatus");

	Params::UARBlueprintLibrary_GetARSessionStatus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPose*>      ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllTrackedPoses(const TArray<class UARTrackedPose*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoses");

	Params::UARBlueprintLibrary_GetAllTrackedPoses_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPoint*>     ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllTrackedPoints(const TArray<class UARTrackedPoint*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoints");

	Params::UARBlueprintLibrary_GetAllTrackedPoints_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPlaneGeometry*>    ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllTrackedPlanes(const TArray<class UARPlaneGeometry*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedPlanes");

	Params::UARBlueprintLibrary_GetAllTrackedPlanes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedImage*>     ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllTrackedImages(const TArray<class UARTrackedImage*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedImages");

	Params::UARBlueprintLibrary_GetAllTrackedImages_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAREnvironmentCaptureProbe*>ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes(const TArray<class UAREnvironmentCaptureProbe*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedEnvironmentCaptureProbes");

	Params::UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FARPose2D>           ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllTracked2DPoses(const TArray<struct FARPose2D>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTracked2DPoses");

	Params::UARBlueprintLibrary_GetAllTracked2DPoses_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPin*>              ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllPins(const TArray<class UARPin*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllPins");

	Params::UARBlueprintLibrary_GetAllPins_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      GeometryClass                                                    (ZeroConstructor)
// TArray<class UARTrackedGeometry*>  ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllGeometriesByClass(class UClass* GeometryClass, const TArray<class UARTrackedGeometry*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllGeometriesByClass");

	Params::UARBlueprintLibrary_GetAllGeometriesByClass_Params Parms{};

	Parms.GeometryClass = GeometryClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedGeometry*>  ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAllGeometries(const TArray<class UARTrackedGeometry*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllGeometries");

	Params::UARBlueprintLibrary_GetAllGeometries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (None)

void UARBlueprintLibrary::GetAlignmentTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAlignmentTransform");

	Params::UARBlueprintLibrary_GetAlignmentTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PointName                                                        (None)
// TArray<class UARTrackedPoint*>     ReturnValue                                                      (None)

void UARBlueprintLibrary::FindTrackedPointsByName(const class FString& PointName, const TArray<class UARTrackedPoint*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "FindTrackedPointsByName");

	Params::UARBlueprintLibrary_FindTrackedPointsByName_Params Parms{};

	Parms.PointName = PointName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARTrackedGeometry*          TrackedGeometry                                                  (ZeroConstructor)
// class UObject*                     WorldContextObject                                               (None)
// struct FLinearColor                Color                                                            (None)
// float                              OutlineThickness                                                 (None)
// float                              PersistForSeconds                                                (None)

void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "DebugDrawTrackedGeometry");

	Params::UARBlueprintLibrary_DebugDrawTrackedGeometry_Params Parms{};

	Parms.TrackedGeometry = TrackedGeometry;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Color = Color;
	Parms.OutlineThickness = OutlineThickness;
	Parms.PersistForSeconds = PersistForSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARPin*                      ARPin                                                            (ZeroConstructor)
// class UObject*                     WorldContextObject                                               (None)
// struct FLinearColor                Color                                                            (None)
// float                              Scale                                                            (None)
// float                              PersistForSeconds                                                (None)

void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "DebugDrawPin");

	Params::UARBlueprintLibrary_DebugDrawPin_Params Parms{};

	Parms.ARPin = ARPin;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Color = Color;
	Parms.Scale = Scale;
	Parms.PersistForSeconds = PersistForSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             StartPoints                                                      (None)
// TArray<struct FVector>             EndPoints                                                        (None)
// struct FVector                     ClosestIntersection                                              (None)

void UARBlueprintLibrary::CalculateClosestIntersection(const TArray<struct FVector>& StartPoints, const TArray<struct FVector>& EndPoints, const struct FVector& ClosestIntersection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "CalculateClosestIntersection");

	Params::UARBlueprintLibrary_CalculateClosestIntersection_Params Parms{};

	Parms.StartPoints = StartPoints;
	Parms.EndPoints = EndPoints;
	Parms.ClosestIntersection = ClosestIntersection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  TransformInFirstCoordinateSystem                                 (None)
// struct FTransform                  TransformInSecondCoordinateSystem                                (None)
// struct FTransform                  AlignmentTransform                                               (None)

void UARBlueprintLibrary::CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, const struct FTransform& AlignmentTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "CalculateAlignmentTransform");

	Params::UARBlueprintLibrary_CalculateAlignmentTransform_Params Parms{};

	Parms.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
	Parms.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;
	Parms.AlignmentTransform = AlignmentTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  WorldTransform                                                   (None)
// class FString                      PointName                                                        (None)
// bool                               bDeletePointsWithSameName                                        (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "AddTrackedPointWithName");

	Params::UARBlueprintLibrary_AddTrackedPointWithName_Params Parms{};

	Parms.WorldTransform = WorldTransform;
	Parms.PointName = PointName;
	Parms.bDeletePointsWithSameName = bDeletePointsWithSameName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*            SessionConfig                                                    (ZeroConstructor)
// class UTexture2D*                  CandidateTexture                                                 (ZeroConstructor)
// class FString                      FriendlyName                                                     (None)
// float                              PhysicalWidth                                                    (None)
// class UARCandidateImage*           ReturnValue                                                      (None)

void UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, class UARCandidateImage* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "AddRuntimeCandidateImage");

	Params::UARBlueprintLibrary_AddRuntimeCandidateImage_Params Parms{};

	Parms.SessionConfig = SessionConfig;
	Parms.CandidateTexture = CandidateTexture;
	Parms.FriendlyName = FriendlyName;
	Parms.PhysicalWidth = PhysicalWidth;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (None)
// struct FVector                     Extent                                                           (None)
// bool                               ReturnValue                                                      (None)

void UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "AddManualEnvironmentCaptureProbe");

	Params::UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params Parms{};

	Parms.Location = Location;
	Parms.Extent = Extent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTraceResultLibrary
// (None)

class UClass* UARTraceResultLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTraceResultLibrary");

	return Clss;
}


// ARTraceResultLibrary AugmentedReality.Default__ARTraceResultLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTraceResultLibrary* UARTraceResultLibrary::GetDefaultObj()
{
	static class UARTraceResultLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTraceResultLibrary*>(UARTraceResultLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ZeroConstructor)
// class UARTrackedGeometry*          ReturnValue                                                      (None)

void UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult, class UARTrackedGeometry* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetTrackedGeometry");

	Params::UARTraceResultLibrary_GetTrackedGeometry_Params Parms{};

	Parms.TraceResult = TraceResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (None)
// enum class EARLineTraceChannels    ReturnValue                                                      (None)

void UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult, enum class EARLineTraceChannels ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetTraceChannel");

	Params::UARTraceResultLibrary_GetTraceChannel_Params Parms{};

	Parms.TraceResult = TraceResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (None)
// struct FTransform                  ReturnValue                                                      (None)

void UARTraceResultLibrary::GetLocalTransform(const struct FARTraceResult& TraceResult, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetLocalTransform");

	Params::UARTraceResultLibrary_GetLocalTransform_Params Parms{};

	Parms.TraceResult = TraceResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (None)
// struct FTransform                  ReturnValue                                                      (None)

void UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetLocalToWorldTransform");

	Params::UARTraceResultLibrary_GetLocalToWorldTransform_Params Parms{};

	Parms.TraceResult = TraceResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (None)
// struct FTransform                  ReturnValue                                                      (None)

void UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetLocalToTrackingTransform");

	Params::UARTraceResultLibrary_GetLocalToTrackingTransform_Params Parms{};

	Parms.TraceResult = TraceResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (None)
// float                              ReturnValue                                                      (None)

void UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetDistanceFromCamera");

	Params::UARTraceResultLibrary_GetDistanceFromCamera_Params Parms{};

	Parms.TraceResult = TraceResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// (None)

class UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARBaseAsyncTaskBlueprintProxy");

	return Clss;
}


// ARBaseAsyncTaskBlueprintProxy AugmentedReality.Default__ARBaseAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARBaseAsyncTaskBlueprintProxy* UARBaseAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UARBaseAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARBaseAsyncTaskBlueprintProxy*>(UARBaseAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// (None)

class UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSaveWorldAsyncTaskBlueprintProxy");

	return Clss;
}


// ARSaveWorldAsyncTaskBlueprintProxy AugmentedReality.Default__ARSaveWorldAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UARSaveWorldAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARSaveWorldAsyncTaskBlueprintProxy*>(UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UARSaveWorldAsyncTaskBlueprintProxy*ReturnValue                                                      (None)

void UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject, class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSaveWorldAsyncTaskBlueprintProxy", "ARSaveWorld");

	Params::UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// (None)

class UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGetCandidateObjectAsyncTaskBlueprintProxy");

	return Clss;
}


// ARGetCandidateObjectAsyncTaskBlueprintProxy AugmentedReality.Default__ARGetCandidateObjectAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGetCandidateObjectAsyncTaskBlueprintProxy*>(UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FVector                     Location                                                         (None)
// struct FVector                     Extent                                                           (None)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy*ReturnValue                                                      (None)

void UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGetCandidateObjectAsyncTaskBlueprintProxy", "ARGetCandidateObject");

	Params::UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.Extent = Extent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARComponent
// (SceneComponent)

class UClass* UARComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARComponent");

	return Clss;
}


// ARComponent AugmentedReality.Default__ARComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARComponent* UARComponent::GetDefaultObj()
{
	static class UARComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARComponent*>(UARComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARComponent.UpdateVisualization
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UARComponent::UpdateVisualization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "UpdateVisualization");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARComponent.SetNativeID
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       NativeID                                                         (None)

void UARComponent::SetNativeID(const struct FGuid& NativeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "SetNativeID");

	Params::UARComponent_SetNativeID_Params Parms{};

	Parms.NativeID = NativeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARComponent.ReceiveRemove
// (Event, Public, BlueprintEvent)
// Parameters:

void UARComponent::ReceiveRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "ReceiveRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AugmentedReality.ARComponent.OnRep_Payload
// (Native, Protected)
// Parameters:

void UARComponent::OnRep_Payload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "OnRep_Payload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARComponent.GetMRMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMeshComponent*            ReturnValue                                                      (None)

void UARComponent::GetMRMesh(class UMRMeshComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "GetMRMesh");

	Params::UARComponent_GetMRMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARPlaneComponent
// (SceneComponent)

class UClass* UARPlaneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPlaneComponent");

	return Clss;
}


// ARPlaneComponent AugmentedReality.Default__ARPlaneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPlaneComponent* UARPlaneComponent::GetDefaultObj()
{
	static class UARPlaneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPlaneComponent*>(UARPlaneComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPlaneComponentDebugModeNewDebugMode                                                     (None)

void UARPlaneComponent::SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "SetPlaneComponentDebugMode");

	Params::UARPlaneComponent_SetPlaneComponentDebugMode_Params Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<enum class EARObjectClassification, struct FLinearColor>InColors                                                         (None)

void UARPlaneComponent::SetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor> InColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "SetObjectClassificationDebugColors");

	Params::UARPlaneComponent_SetObjectClassificationDebugColors_Params Parms{};

	Parms.InColors = InColors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPlaneUpdatePayload       NewPayload                                                       (None)

void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "ServerUpdatePayload");

	Params::UARPlaneComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPlaneUpdatePayload       Payload                                                          (None)

void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "ReceiveUpdate");

	Params::UARPlaneComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARPlaneComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPlaneUpdatePayload       Payload                                                          (None)

void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "ReceiveAdd");

	Params::UARPlaneComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<enum class EARObjectClassification, struct FLinearColor>ReturnValue                                                      (None)

void UARPlaneComponent::GetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "GetObjectClassificationDebugColors");

	Params::UARPlaneComponent_GetObjectClassificationDebugColors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARPointComponent
// (SceneComponent)

class UClass* UARPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPointComponent");

	return Clss;
}


// ARPointComponent AugmentedReality.Default__ARPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPointComponent* UARPointComponent::GetDefaultObj()
{
	static class UARPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPointComponent*>(UARPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPointComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPointUpdatePayload       NewPayload                                                       (None)

void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPointComponent", "ServerUpdatePayload");

	Params::UARPointComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPointComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPointUpdatePayload       Payload                                                          (None)

void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPointComponent", "ReceiveUpdate");

	Params::UARPointComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARPointComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPointUpdatePayload       Payload                                                          (None)

void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPointComponent", "ReceiveAdd");

	Params::UARPointComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARFaceComponent
// (SceneComponent)

class UClass* UARFaceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFaceComponent");

	return Clss;
}


// ARFaceComponent AugmentedReality.Default__ARFaceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFaceComponent* UARFaceComponent::GetDefaultObj()
{
	static class UARFaceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFaceComponent*>(UARFaceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EFaceComponentDebugMode NewDebugMode                                                     (None)

void UARFaceComponent::SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "SetFaceComponentDebugMode");

	Params::UARFaceComponent_SetFaceComponentDebugMode_Params Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARFaceUpdatePayload        NewPayload                                                       (None)

void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "ServerUpdatePayload");

	Params::UARFaceComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARFaceComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARFaceUpdatePayload        Payload                                                          (None)

void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "ReceiveUpdate");

	Params::UARFaceComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARFaceComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARFaceUpdatePayload        Payload                                                          (None)

void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "ReceiveAdd");

	Params::UARFaceComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARImageComponent
// (SceneComponent)

class UClass* UARImageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARImageComponent");

	return Clss;
}


// ARImageComponent AugmentedReality.Default__ARImageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARImageComponent* UARImageComponent::GetDefaultObj()
{
	static class UARImageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARImageComponent*>(UARImageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EImageComponentDebugModeNewDebugMode                                                     (None)

void UARImageComponent::SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "SetImageComponentDebugMode");

	Params::UARImageComponent_SetImageComponentDebugMode_Params Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARImageComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARImageUpdatePayload       NewPayload                                                       (None)

void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "ServerUpdatePayload");

	Params::UARImageComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARImageComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARImageUpdatePayload       Payload                                                          (None)

void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "ReceiveUpdate");

	Params::UARImageComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARImageComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARImageUpdatePayload       Payload                                                          (None)

void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "ReceiveAdd");

	Params::UARImageComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARQRCodeComponent
// (SceneComponent)

class UClass* UARQRCodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARQRCodeComponent");

	return Clss;
}


// ARQRCodeComponent AugmentedReality.Default__ARQRCodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARQRCodeComponent* UARQRCodeComponent::GetDefaultObj()
{
	static class UARQRCodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARQRCodeComponent*>(UARQRCodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EQRCodeComponentDebugModeNewDebugMode                                                     (None)

void UARQRCodeComponent::SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "SetQRCodeComponentDebugMode");

	Params::UARQRCodeComponent_SetQRCodeComponentDebugMode_Params Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARQRCodeUpdatePayload      NewPayload                                                       (None)

void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "ServerUpdatePayload");

	Params::UARQRCodeComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARQRCodeUpdatePayload      Payload                                                          (None)

void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "ReceiveUpdate");

	Params::UARQRCodeComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARQRCodeUpdatePayload      Payload                                                          (None)

void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "ReceiveAdd");

	Params::UARQRCodeComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARPoseComponent
// (SceneComponent)

class UClass* UARPoseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPoseComponent");

	return Clss;
}


// ARPoseComponent AugmentedReality.Default__ARPoseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPoseComponent* UARPoseComponent::GetDefaultObj()
{
	static class UARPoseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPoseComponent*>(UARPoseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPoseComponentDebugMode NewDebugMode                                                     (None)

void UARPoseComponent::SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "SetPoseComponentDebugMode");

	Params::UARPoseComponent_SetPoseComponentDebugMode_Params Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPoseUpdatePayload        NewPayload                                                       (None)

void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "ServerUpdatePayload");

	Params::UARPoseComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPoseComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPoseUpdatePayload        Payload                                                          (None)

void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "ReceiveUpdate");

	Params::UARPoseComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARPoseComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPoseUpdatePayload        Payload                                                          (None)

void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "ReceiveAdd");

	Params::UARPoseComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.AREnvironmentProbeComponent
// (SceneComponent)

class UClass* UAREnvironmentProbeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREnvironmentProbeComponent");

	return Clss;
}


// AREnvironmentProbeComponent AugmentedReality.Default__AREnvironmentProbeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAREnvironmentProbeComponent* UAREnvironmentProbeComponent::GetDefaultObj()
{
	static class UAREnvironmentProbeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREnvironmentProbeComponent*>(UAREnvironmentProbeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FAREnvironmentProbeUpdatePayloadNewPayload                                                       (None)

void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ServerUpdatePayload");

	Params::UAREnvironmentProbeComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAREnvironmentProbeUpdatePayloadPayload                                                          (None)

void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ReceiveUpdate");

	Params::UAREnvironmentProbeComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAREnvironmentProbeUpdatePayloadPayload                                                          (None)

void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ReceiveAdd");

	Params::UAREnvironmentProbeComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARObjectComponent
// (SceneComponent)

class UClass* UARObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARObjectComponent");

	return Clss;
}


// ARObjectComponent AugmentedReality.Default__ARObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARObjectComponent* UARObjectComponent::GetDefaultObj()
{
	static class UARObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARObjectComponent*>(UARObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARObjectUpdatePayload      NewPayload                                                       (None)

void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARObjectComponent", "ServerUpdatePayload");

	Params::UARObjectComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARObjectComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARObjectUpdatePayload      Payload                                                          (None)

void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARObjectComponent", "ReceiveUpdate");

	Params::UARObjectComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARObjectComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARObjectUpdatePayload      Payload                                                          (None)

void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARObjectComponent", "ReceiveAdd");

	Params::UARObjectComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARMeshComponent
// (SceneComponent)

class UClass* UARMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARMeshComponent");

	return Clss;
}


// ARMeshComponent AugmentedReality.Default__ARMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARMeshComponent* UARMeshComponent::GetDefaultObj()
{
	static class UARMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARMeshComponent*>(UARMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARMeshUpdatePayload        NewPayload                                                       (None)

void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshComponent", "ServerUpdatePayload");

	Params::UARMeshComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARMeshComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARMeshUpdatePayload        Payload                                                          (None)

void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshComponent", "ReceiveUpdate");

	Params::UARMeshComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARMeshComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARMeshUpdatePayload        Payload                                                          (None)

void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshComponent", "ReceiveAdd");

	Params::UARMeshComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARGeoAnchorComponent
// (SceneComponent)

class UClass* UARGeoAnchorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGeoAnchorComponent");

	return Clss;
}


// ARGeoAnchorComponent AugmentedReality.Default__ARGeoAnchorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGeoAnchorComponent* UARGeoAnchorComponent::GetDefaultObj()
{
	static class UARGeoAnchorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGeoAnchorComponent*>(UARGeoAnchorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGeoAnchorComponentDebugModeNewDebugMode                                                     (None)

void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "SetGeoAnchorComponentDebugMode");

	Params::UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARGeoAnchorUpdatePayload   NewPayload                                                       (None)

void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ServerUpdatePayload");

	Params::UARGeoAnchorComponent_ServerUpdatePayload_Params Parms{};

	Parms.NewPayload = NewPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARGeoAnchorUpdatePayload   Payload                                                          (None)

void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ReceiveUpdate");

	Params::UARGeoAnchorComponent_ReceiveUpdate_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARGeoAnchorUpdatePayload   Payload                                                          (None)

void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ReceiveAdd");

	Params::UARGeoAnchorComponent_ReceiveAdd_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARDependencyHandler
// (None)

class UClass* UARDependencyHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARDependencyHandler");

	return Clss;
}


// ARDependencyHandler AugmentedReality.Default__ARDependencyHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UARDependencyHandler* UARDependencyHandler::GetDefaultObj()
{
	static class UARDependencyHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UARDependencyHandler*>(UARDependencyHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UARSessionConfig*            SessionConfig                                                    (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (None)

void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "StartARSessionLatent");

	Params::UARDependencyHandler_StartARSessionLatent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SessionConfig = SessionConfig;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UARSessionConfig*            SessionConfig                                                    (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (None)
// enum class EARServicePermissionRequestResultOutPermissionResult                                              (None)

void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, enum class EARServicePermissionRequestResult OutPermissionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "RequestARSessionPermission");

	Params::UARDependencyHandler_RequestARSessionPermission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SessionConfig = SessionConfig;
	Parms.LatentInfo = LatentInfo;
	Parms.OutPermissionResult = OutPermissionResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARDependencyHandler.InstallARService
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (None)
// enum class EARServiceInstallRequestResultOutInstallResult                                                 (None)

void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EARServiceInstallRequestResult OutInstallResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "InstallARService");

	Params::UARDependencyHandler_InstallARService_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.OutInstallResult = OutInstallResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARDependencyHandler*        ReturnValue                                                      (None)

void UARDependencyHandler::GetARDependencyHandler(class UARDependencyHandler* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "GetARDependencyHandler");

	Params::UARDependencyHandler_GetARDependencyHandler_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (None)
// enum class EARServiceAvailability  OutAvailability                                                  (None)

void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EARServiceAvailability OutAvailability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "CheckARServiceAvailability");

	Params::UARDependencyHandler_CheckARServiceAvailability_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.OutAvailability = OutAvailability;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARGeoTrackingSupport
// (None)

class UClass* UARGeoTrackingSupport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGeoTrackingSupport");

	return Clss;
}


// ARGeoTrackingSupport AugmentedReality.Default__ARGeoTrackingSupport
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGeoTrackingSupport* UARGeoTrackingSupport::GetDefaultObj()
{
	static class UARGeoTrackingSupport* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGeoTrackingSupport*>(UARGeoTrackingSupport::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARGeoTrackingSupport*       ReturnValue                                                      (None)

void UARGeoTrackingSupport::GetGeoTrackingSupport(class UARGeoTrackingSupport* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingSupport");

	Params::UARGeoTrackingSupport_GetGeoTrackingSupport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARGeoTrackingStateReasonReturnValue                                                      (None)

void UARGeoTrackingSupport::GetGeoTrackingStateReason(enum class EARGeoTrackingStateReason ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingStateReason");

	Params::UARGeoTrackingSupport_GetGeoTrackingStateReason_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARGeoTrackingState     ReturnValue                                                      (None)

void UARGeoTrackingSupport::GetGeoTrackingState(enum class EARGeoTrackingState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingState");

	Params::UARGeoTrackingSupport_GetGeoTrackingState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARGeoTrackingAccuracy  ReturnValue                                                      (None)

void UARGeoTrackingSupport::GetGeoTrackingAccuracy(enum class EARGeoTrackingAccuracy ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingAccuracy");

	Params::UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Longitude                                                        (None)
// float                              Latitude                                                         (None)
// float                              AltitudeMeters                                                   (None)
// class FString                      OptionalAnchorName                                               (None)
// bool                               ReturnValue                                                      (None)

void UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocationWithAltitude");

	Params::UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params Parms{};

	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;
	Parms.AltitudeMeters = AltitudeMeters;
	Parms.OptionalAnchorName = OptionalAnchorName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Longitude                                                        (None)
// float                              Latitude                                                         (None)
// class FString                      OptionalAnchorName                                               (None)
// bool                               ReturnValue                                                      (None)

void UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocation");

	Params::UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params Parms{};

	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;
	Parms.OptionalAnchorName = OptionalAnchorName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// (None)

class UClass* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy");

	return Clss;
}


// CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy AugmentedReality.Default__CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*>(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsAvailable                                                     (None)
// class FString                      Error                                                            (None)

void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "GeoTrackingAvailabilityDelegate__DelegateSignature");

	Params::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params Parms{};

	Parms.bIsAvailable = bIsAvailable;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// float                              Longitude                                                        (None)
// float                              Latitude                                                         (None)
// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*ReturnValue                                                      (None)

void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude, class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailabilityAtLocation");

	Params::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*ReturnValue                                                      (None)

void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(class UObject* WorldContextObject, class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailability");

	Params::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// (None)

class UClass* UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetGeoLocationAsyncTaskBlueprintProxy");

	return Clss;
}


// GetGeoLocationAsyncTaskBlueprintProxy AugmentedReality.Default__GetGeoLocationAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UGetGeoLocationAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetGeoLocationAsyncTaskBlueprintProxy*>(UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              Longitude                                                        (None)
// float                              Latitude                                                         (None)
// float                              Altitude                                                         (None)
// class FString                      Error                                                            (None)

void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationDelegate__DelegateSignature");

	Params::UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params Parms{};

	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;
	Parms.Altitude = Altitude;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FVector                     WorldPosition                                                    (None)
// class UGetGeoLocationAsyncTaskBlueprintProxy*ReturnValue                                                      (None)

void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition, class UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationAtWorldPosition");

	Params::UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorldPosition = WorldPosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARLifeCycleComponent
// (SceneComponent)

class UClass* UARLifeCycleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARLifeCycleComponent");

	return Clss;
}


// ARLifeCycleComponent AugmentedReality.Default__ARLifeCycleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARLifeCycleComponent* UARLifeCycleComponent::GetDefaultObj()
{
	static class UARLifeCycleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARLifeCycleComponent*>(UARLifeCycleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UClass*                      ComponentClass                                                   (None)
// struct FGuid                       NativeID                                                         (None)

void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "ServerSpawnARActor");

	Params::UARLifeCycleComponent_ServerSpawnARActor_Params Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.NativeID = NativeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class AARActor*                    Actor                                                            (None)

void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "ServerDestroyARActor");

	Params::UARLifeCycleComponent_ServerDestroyARActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AARActor*                    Actor                                                            (None)

void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "InstanceARActorToBeDestroyedDelegate__DelegateSignature");

	Params::UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasDefaults)
// Parameters:
// class UClass*                      ComponentClass                                                   (ZeroConstructor)
// struct FGuid                       NativeID                                                         (None)
// class AARActor*                    SpawnedActor                                                     (None)

void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "InstanceARActorSpawnedDelegate__DelegateSignature");

	Params::UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.NativeID = NativeID;
	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARLightEstimate
// (None)

class UClass* UARLightEstimate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARLightEstimate");

	return Clss;
}


// ARLightEstimate AugmentedReality.Default__ARLightEstimate
// (Public, ClassDefaultObject, ArchetypeObject)

class UARLightEstimate* UARLightEstimate::GetDefaultObj()
{
	static class UARLightEstimate* Default = nullptr;

	if (!Default)
		Default = static_cast<UARLightEstimate*>(UARLightEstimate::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARBasicLightEstimate
// (None)

class UClass* UARBasicLightEstimate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARBasicLightEstimate");

	return Clss;
}


// ARBasicLightEstimate AugmentedReality.Default__ARBasicLightEstimate
// (Public, ClassDefaultObject, ArchetypeObject)

class UARBasicLightEstimate* UARBasicLightEstimate::GetDefaultObj()
{
	static class UARBasicLightEstimate* Default = nullptr;

	if (!Default)
		Default = static_cast<UARBasicLightEstimate*>(UARBasicLightEstimate::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARBasicLightEstimate::GetAmbientIntensityLumens(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientIntensityLumens");

	Params::UARBasicLightEstimate_GetAmbientIntensityLumens_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARBasicLightEstimate::GetAmbientColorTemperatureKelvin(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientColorTemperatureKelvin");

	Params::UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)

void UARBasicLightEstimate::GetAmbientColor(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientColor");

	Params::UARBasicLightEstimate_GetAmbientColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.AROriginActor
// (Actor)

class UClass* AAROriginActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AROriginActor");

	return Clss;
}


// AROriginActor AugmentedReality.Default__AROriginActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AAROriginActor* AAROriginActor::GetDefaultObj()
{
	static class AAROriginActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AAROriginActor*>(AAROriginActor::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARPin
// (None)

class UClass* UARPin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPin");

	return Clss;
}


// ARPin AugmentedReality.Default__ARPin
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPin* UARPin::GetDefaultObj()
{
	static class UARPin* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPin*>(UARPin::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARTrackingState        ReturnValue                                                      (None)

void UARPin::GetTrackingState(enum class EARTrackingState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetTrackingState");

	Params::UARPin_GetTrackingState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARTrackedGeometry*          ReturnValue                                                      (None)

void UARPin::GetTrackedGeometry(class UARTrackedGeometry* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetTrackedGeometry");

	Params::UARPin_GetTrackedGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (None)

void UARPin::GetPinnedComponent(class USceneComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetPinnedComponent");

	Params::UARPin_GetPinnedComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (None)

void UARPin::GetLocalToWorldTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetLocalToWorldTransform");

	Params::UARPin_GetLocalToWorldTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (None)

void UARPin::GetLocalToTrackingTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetLocalToTrackingTransform");

	Params::UARPin_GetLocalToTrackingTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPin.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UARPin::GetDebugName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetDebugName");

	Params::UARPin_GetDebugName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPin.DebugDraw
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// class UWorld*                      World                                                            (None)
// struct FLinearColor                Color                                                            (None)
// float                              Scale                                                            (None)
// float                              PersistForSeconds                                                (None)

void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "DebugDraw");

	Params::UARPin_DebugDraw_Params Parms{};

	Parms.World = World;
	Parms.Color = Color;
	Parms.Scale = Scale;
	Parms.PersistForSeconds = PersistForSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARSessionConfig
// (None)

class UClass* UARSessionConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSessionConfig");

	return Clss;
}


// ARSessionConfig AugmentedReality.Default__ARSessionConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UARSessionConfig* UARSessionConfig::GetDefaultObj()
{
	static class UARSessionConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UARSessionConfig*>(UARSessionConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARSessionConfig::ShouldResetTrackedObjects(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldResetTrackedObjects");

	Params::UARSessionConfig_ShouldResetTrackedObjects_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARSessionConfig::ShouldResetCameraTracking(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldResetCameraTracking");

	Params::UARSessionConfig_ShouldResetCameraTracking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARSessionConfig::ShouldRenderCameraOverlay(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldRenderCameraOverlay");

	Params::UARSessionConfig_ShouldRenderCameraOverlay_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARSessionConfig::ShouldEnableCameraTracking(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldEnableCameraTracking");

	Params::UARSessionConfig_ShouldEnableCameraTracking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARSessionConfig::ShouldEnableAutoFocus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldEnableAutoFocus");

	Params::UARSessionConfig_ShouldEnableAutoFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      WorldMapData                                                     (None)

void UARSessionConfig::SetWorldMapData(const TArray<uint8>& WorldMapData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetWorldMapData");

	Params::UARSessionConfig_SetWorldMapData_Params Parms{};

	Parms.WorldMapData = WorldMapData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARSessionTrackingFeatureInSessionTrackingFeature                                         (None)

void UARSessionConfig::SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetSessionTrackingFeatureToEnable");

	Params::UARSessionConfig_SetSessionTrackingFeatureToEnable_Params Parms{};

	Parms.InSessionTrackingFeature = InSessionTrackingFeature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARSceneReconstruction  InSceneReconstructionMethod                                      (None)

void UARSessionConfig::SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetSceneReconstructionMethod");

	Params::UARSessionConfig_SetSceneReconstructionMethod_Params Parms{};

	Parms.InSceneReconstructionMethod = InSceneReconstructionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (None)

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetResetTrackedObjects");

	Params::UARSessionConfig_SetResetTrackedObjects_Params Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (None)

void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetResetCameraTracking");

	Params::UARSessionConfig_SetResetCameraTracking_Params Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARFaceTrackingUpdate   InUpdate                                                         (None)

void UARSessionConfig::SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetFaceTrackingUpdate");

	Params::UARSessionConfig_SetFaceTrackingUpdate_Params Parms{};

	Parms.InUpdate = InUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARFaceTrackingDirectionInDirection                                                      (None)

void UARSessionConfig::SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetFaceTrackingDirection");

	Params::UARSessionConfig_SetFaceTrackingDirection_Params Parms{};

	Parms.InDirection = InDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (None)

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetEnableAutoFocus");

	Params::UARSessionConfig_SetEnableAutoFocus_Params Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FARVideoFormat              NewFormat                                                        (None)

void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetDesiredVideoFormat");

	Params::UARSessionConfig_SetDesiredVideoFormat_Params Parms{};

	Parms.NewFormat = NewFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UARCandidateObject*>  InCandidateObjects                                               (None)

void UARSessionConfig::SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetCandidateObjectList");

	Params::UARSessionConfig_SetCandidateObjectList_Params Parms{};

	Parms.InCandidateObjects = InCandidateObjects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (None)

void UARSessionConfig::GetWorldMapData(const TArray<uint8>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetWorldMapData");

	Params::UARSessionConfig_GetWorldMapData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARWorldAlignment       ReturnValue                                                      (None)

void UARSessionConfig::GetWorldAlignment(enum class EARWorldAlignment ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetWorldAlignment");

	Params::UARSessionConfig_GetWorldAlignment_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSessionType          ReturnValue                                                      (None)

void UARSessionConfig::GetSessionType(enum class EARSessionType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetSessionType");

	Params::UARSessionConfig_GetSessionType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSceneReconstruction  ReturnValue                                                      (None)

void UARSessionConfig::GetSceneReconstructionMethod(enum class EARSceneReconstruction ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetSceneReconstructionMethod");

	Params::UARSessionConfig_GetSceneReconstructionMethod_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARPlaneDetectionMode   ReturnValue                                                      (None)

void UARSessionConfig::GetPlaneDetectionMode(enum class EARPlaneDetectionMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetPlaneDetectionMode");

	Params::UARSessionConfig_GetPlaneDetectionMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UARSessionConfig::GetMaxNumSimultaneousImagesTracked(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetMaxNumSimultaneousImagesTracked");

	Params::UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARLightEstimationMode  ReturnValue                                                      (None)

void UARSessionConfig::GetLightEstimationMode(enum class EARLightEstimationMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetLightEstimationMode");

	Params::UARSessionConfig_GetLightEstimationMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFrameSyncMode        ReturnValue                                                      (None)

void UARSessionConfig::GetFrameSyncMode(enum class EARFrameSyncMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetFrameSyncMode");

	Params::UARSessionConfig_GetFrameSyncMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFaceTrackingUpdate   ReturnValue                                                      (None)

void UARSessionConfig::GetFaceTrackingUpdate(enum class EARFaceTrackingUpdate ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetFaceTrackingUpdate");

	Params::UARSessionConfig_GetFaceTrackingUpdate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFaceTrackingDirectionReturnValue                                                      (None)

void UARSessionConfig::GetFaceTrackingDirection(enum class EARFaceTrackingDirection ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetFaceTrackingDirection");

	Params::UARSessionConfig_GetFaceTrackingDirection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAREnvironmentCaptureProbeTypeReturnValue                                                      (None)

void UARSessionConfig::GetEnvironmentCaptureProbeType(enum class EAREnvironmentCaptureProbeType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetEnvironmentCaptureProbeType");

	Params::UARSessionConfig_GetEnvironmentCaptureProbeType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSessionTrackingFeatureReturnValue                                                      (None)

void UARSessionConfig::GetEnabledSessionTrackingFeature(enum class EARSessionTrackingFeature ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetEnabledSessionTrackingFeature");

	Params::UARSessionConfig_GetEnabledSessionTrackingFeature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARVideoFormat              ReturnValue                                                      (None)

void UARSessionConfig::GetDesiredVideoFormat(const struct FARVideoFormat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetDesiredVideoFormat");

	Params::UARSessionConfig_GetDesiredVideoFormat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateObject*>  ReturnValue                                                      (None)

void UARSessionConfig::GetCandidateObjectList(const TArray<class UARCandidateObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetCandidateObjectList");

	Params::UARSessionConfig_GetCandidateObjectList_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateImage*>   ReturnValue                                                      (None)

void UARSessionConfig::GetCandidateImageList(const TArray<class UARCandidateImage*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetCandidateImageList");

	Params::UARSessionConfig_GetCandidateImageList_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateObject*          CandidateObject                                                  (None)

void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "AddCandidateObject");

	Params::UARSessionConfig_AddCandidateObject_Params Parms{};

	Parms.CandidateObject = CandidateObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateImage*           NewCandidateImage                                                (None)

void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "AddCandidateImage");

	Params::UARSessionConfig_AddCandidateImage_Params Parms{};

	Parms.NewCandidateImage = NewCandidateImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARSharedWorldGameMode
// (Actor)

class UClass* AARSharedWorldGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSharedWorldGameMode");

	return Clss;
}


// ARSharedWorldGameMode AugmentedReality.Default__ARSharedWorldGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSharedWorldGameMode* AARSharedWorldGameMode::GetDefaultObj()
{
	static class AARSharedWorldGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSharedWorldGameMode*>(AARSharedWorldGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ImageData                                                        (None)

void AARSharedWorldGameMode::SetPreviewImageData(const TArray<uint8>& ImageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetPreviewImageData");

	Params::AARSharedWorldGameMode_SetPreviewImageData_Params Parms{};

	Parms.ImageData = ImageData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetARWorldSharingIsReady");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ARWorldData                                                      (None)

void AARSharedWorldGameMode::SetARSharedWorldData(const TArray<uint8>& ARWorldData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetARSharedWorldData");

	Params::AARSharedWorldGameMode_SetARSharedWorldData_Params Parms{};

	Parms.ARWorldData = ARWorldData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AARSharedWorldGameState*     ReturnValue                                                      (None)

void AARSharedWorldGameMode::GetARSharedWorldGameState(class AARSharedWorldGameState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "GetARSharedWorldGameState");

	Params::AARSharedWorldGameMode_GetARSharedWorldGameState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARSharedWorldGameState
// (Actor)

class UClass* AARSharedWorldGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSharedWorldGameState");

	return Clss;
}


// ARSharedWorldGameState AugmentedReality.Default__ARSharedWorldGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSharedWorldGameState* AARSharedWorldGameState::GetDefaultObj()
{
	static class AARSharedWorldGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSharedWorldGameState*>(AARSharedWorldGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (Event, Public, BlueprintEvent)
// Parameters:

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameState", "K2_OnARWorldMapIsReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Class AugmentedReality.ARSharedWorldPlayerController
// (Actor, PlayerController)

class UClass* AARSharedWorldPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSharedWorldPlayerController");

	return Clss;
}


// ARSharedWorldPlayerController AugmentedReality.Default__ARSharedWorldPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSharedWorldPlayerController* AARSharedWorldPlayerController::GetDefaultObj()
{
	static class AARSharedWorldPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSharedWorldPlayerController*>(AARSharedWorldPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ServerMarkReadyForReceiving");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int32                              Offset                                                           (None)
// TArray<uint8>                      Buffer                                                           (None)

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientUpdatePreviewImageData");

	Params::AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params Parms{};

	Parms.Offset = Offset;
	Parms.Buffer = Buffer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int32                              Offset                                                           (None)
// TArray<uint8>                      Buffer                                                           (None)

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientUpdateARWorldData");

	Params::AARSharedWorldPlayerController_ClientUpdateARWorldData_Params Parms{};

	Parms.Offset = Offset;
	Parms.Buffer = Buffer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int32                              PreviewImageSize                                                 (None)
// int32                              ARWorldDataSize                                                  (None)

void AARSharedWorldPlayerController::ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientInitSharedWorld");

	Params::AARSharedWorldPlayerController_ClientInitSharedWorld_Params Parms{};

	Parms.PreviewImageSize = PreviewImageSize;
	Parms.ARWorldDataSize = ARWorldDataSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARSkyLight
// (Actor)

class UClass* AARSkyLight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSkyLight");

	return Clss;
}


// ARSkyLight AugmentedReality.Default__ARSkyLight
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSkyLight* AARSkyLight::GetDefaultObj()
{
	static class AARSkyLight* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSkyLight*>(AARSkyLight::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAREnvironmentCaptureProbe*  InCaptureProbe                                                   (None)

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSkyLight", "SetEnvironmentCaptureProbe");

	Params::AARSkyLight_SetEnvironmentCaptureProbe_Params Parms{};

	Parms.InCaptureProbe = InCaptureProbe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTexture
// (None)

class UClass* UARTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTexture");

	return Clss;
}


// ARTexture AugmentedReality.Default__ARTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTexture* UARTexture::GetDefaultObj()
{
	static class UARTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTexture*>(UARTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTextureCameraImage
// (None)

class UClass* UARTextureCameraImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTextureCameraImage");

	return Clss;
}


// ARTextureCameraImage AugmentedReality.Default__ARTextureCameraImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTextureCameraImage* UARTextureCameraImage::GetDefaultObj()
{
	static class UARTextureCameraImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTextureCameraImage*>(UARTextureCameraImage::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTextureCameraDepth
// (None)

class UClass* UARTextureCameraDepth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTextureCameraDepth");

	return Clss;
}


// ARTextureCameraDepth AugmentedReality.Default__ARTextureCameraDepth
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTextureCameraDepth* UARTextureCameraDepth::GetDefaultObj()
{
	static class UARTextureCameraDepth* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTextureCameraDepth*>(UARTextureCameraDepth::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// (None)

class UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREnvironmentCaptureProbeTexture");

	return Clss;
}


// AREnvironmentCaptureProbeTexture AugmentedReality.Default__AREnvironmentCaptureProbeTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbeTexture::GetDefaultObj()
{
	static class UAREnvironmentCaptureProbeTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREnvironmentCaptureProbeTexture*>(UAREnvironmentCaptureProbeTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTraceResultDummy
// (None)

class UClass* UARTraceResultDummy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTraceResultDummy");

	return Clss;
}


// ARTraceResultDummy AugmentedReality.Default__ARTraceResultDummy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTraceResultDummy* UARTraceResultDummy::GetDefaultObj()
{
	static class UARTraceResultDummy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTraceResultDummy*>(UARTraceResultDummy::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTrackedGeometry
// (None)

class UClass* UARTrackedGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedGeometry");

	return Clss;
}


// ARTrackedGeometry AugmentedReality.Default__ARTrackedGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedGeometry* UARTrackedGeometry::GetDefaultObj()
{
	static class UARTrackedGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedGeometry*>(UARTrackedGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UARTrackedGeometry::IsTracked(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "IsTracked");

	Params::UARTrackedGeometry_IsTracked_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSpatialMeshUsageFlagsInFlag                                                           (None)
// bool                               ReturnValue                                                      (None)

void UARTrackedGeometry::HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "HasSpatialMeshUsageFlag");

	Params::UARTrackedGeometry_HasSpatialMeshUsageFlag_Params Parms{};

	Parms.InFlag = InFlag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMeshComponent*            ReturnValue                                                      (None)

void UARTrackedGeometry::GetUnderlyingMesh(class UMRMeshComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetUnderlyingMesh");

	Params::UARTrackedGeometry_GetUnderlyingMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARTrackingState        ReturnValue                                                      (None)

void UARTrackedGeometry::GetTrackingState(enum class EARTrackingState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetTrackingState");

	Params::UARTrackedGeometry_GetTrackingState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARObjectClassification ReturnValue                                                      (None)

void UARTrackedGeometry::GetObjectClassification(enum class EARObjectClassification ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetObjectClassification");

	Params::UARTrackedGeometry_GetObjectClassification_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UARTrackedGeometry::GetName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetName");

	Params::UARTrackedGeometry_GetName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (None)

void UARTrackedGeometry::GetLocalToWorldTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLocalToWorldTransform");

	Params::UARTrackedGeometry_GetLocalToWorldTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (None)

void UARTrackedGeometry::GetLocalToTrackingTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLocalToTrackingTransform");

	Params::UARTrackedGeometry_GetLocalToTrackingTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARTrackedGeometry::GetLastUpdateTimestamp(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLastUpdateTimestamp");

	Params::UARTrackedGeometry_GetLastUpdateTimestamp_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UARTrackedGeometry::GetLastUpdateFrameNumber(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLastUpdateFrameNumber");

	Params::UARTrackedGeometry_GetLastUpdateFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UARTrackedGeometry::GetDebugName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetDebugName");

	Params::UARTrackedGeometry_GetDebugName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARPlaneGeometry
// (None)

class UClass* UARPlaneGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPlaneGeometry");

	return Clss;
}


// ARPlaneGeometry AugmentedReality.Default__ARPlaneGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPlaneGeometry* UARPlaneGeometry::GetDefaultObj()
{
	static class UARPlaneGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPlaneGeometry*>(UARPlaneGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARPlaneGeometry*            ReturnValue                                                      (None)

void UARPlaneGeometry::GetSubsumedBy(class UARPlaneGeometry* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetSubsumedBy");

	Params::UARPlaneGeometry_GetSubsumedBy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneGeometry.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARPlaneOrientation     ReturnValue                                                      (None)

void UARPlaneGeometry::GetOrientation(enum class EARPlaneOrientation ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetOrientation");

	Params::UARPlaneGeometry_GetOrientation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (None)

void UARPlaneGeometry::GetExtent(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetExtent");

	Params::UARPlaneGeometry_GetExtent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (None)

void UARPlaneGeometry::GetCenter(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetCenter");

	Params::UARPlaneGeometry_GetCenter_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (None)

void UARPlaneGeometry::GetBoundaryPolygonInLocalSpace(const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetBoundaryPolygonInLocalSpace");

	Params::UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTrackedPoint
// (None)

class UClass* UARTrackedPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedPoint");

	return Clss;
}


// ARTrackedPoint AugmentedReality.Default__ARTrackedPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedPoint* UARTrackedPoint::GetDefaultObj()
{
	static class UARTrackedPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedPoint*>(UARTrackedPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTrackedImage
// (None)

class UClass* UARTrackedImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedImage");

	return Clss;
}


// ARTrackedImage AugmentedReality.Default__ARTrackedImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedImage* UARTrackedImage::GetDefaultObj()
{
	static class UARTrackedImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedImage*>(UARTrackedImage::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UARTrackedImage::GetEstimateSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedImage", "GetEstimateSize");

	Params::UARTrackedImage_GetEstimateSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateImage*           ReturnValue                                                      (None)

void UARTrackedImage::GetDetectedImage(class UARCandidateImage* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedImage", "GetDetectedImage");

	Params::UARTrackedImage_GetDetectedImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTrackedQRCode
// (None)

class UClass* UARTrackedQRCode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedQRCode");

	return Clss;
}


// ARTrackedQRCode AugmentedReality.Default__ARTrackedQRCode
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedQRCode* UARTrackedQRCode::GetDefaultObj()
{
	static class UARTrackedQRCode* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedQRCode*>(UARTrackedQRCode::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARFaceGeometry
// (None)

class UClass* UARFaceGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFaceGeometry");

	return Clss;
}


// ARFaceGeometry AugmentedReality.Default__ARFaceGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFaceGeometry* UARFaceGeometry::GetDefaultObj()
{
	static class UARFaceGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFaceGeometry*>(UARFaceGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAREye                  Eye                                                              (None)
// struct FTransform                  ReturnValue                                                      (None)

void UARFaceGeometry::GetWorldSpaceEyeTransform(enum class EAREye Eye, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetWorldSpaceEyeTransform");

	Params::UARFaceGeometry_GetWorldSpaceEyeTransform_Params Parms{};

	Parms.Eye = Eye;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAREye                  Eye                                                              (None)
// struct FTransform                  ReturnValue                                                      (None)

void UARFaceGeometry::GetLocalSpaceEyeTransform(enum class EAREye Eye, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetLocalSpaceEyeTransform");

	Params::UARFaceGeometry_GetLocalSpaceEyeTransform_Params Parms{};

	Parms.Eye = Eye;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFaceBlendShape       BlendShape                                                       (None)
// float                              ReturnValue                                                      (None)

void UARFaceGeometry::GetBlendShapeValue(enum class EARFaceBlendShape BlendShape, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetBlendShapeValue");

	Params::UARFaceGeometry_GetBlendShapeValue_Params Parms{};

	Parms.BlendShape = BlendShape;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<enum class EARFaceBlendShape, float>ReturnValue                                                      (None)

void UARFaceGeometry::GetBlendShapes(TMap<enum class EARFaceBlendShape, float> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetBlendShapes");

	Params::UARFaceGeometry_GetBlendShapes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.AREnvironmentCaptureProbe
// (None)

class UClass* UAREnvironmentCaptureProbe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREnvironmentCaptureProbe");

	return Clss;
}


// AREnvironmentCaptureProbe AugmentedReality.Default__AREnvironmentCaptureProbe
// (Public, ClassDefaultObject, ArchetypeObject)

class UAREnvironmentCaptureProbe* UAREnvironmentCaptureProbe::GetDefaultObj()
{
	static class UAREnvironmentCaptureProbe* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREnvironmentCaptureProbe*>(UAREnvironmentCaptureProbe::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (None)

void UAREnvironmentCaptureProbe::GetExtent(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentCaptureProbe", "GetExtent");

	Params::UAREnvironmentCaptureProbe_GetExtent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAREnvironmentCaptureProbeTexture*ReturnValue                                                      (None)

void UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture(class UAREnvironmentCaptureProbeTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentCaptureProbe", "GetEnvironmentCaptureTexture");

	Params::UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTrackedObject
// (None)

class UClass* UARTrackedObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedObject");

	return Clss;
}


// ARTrackedObject AugmentedReality.Default__ARTrackedObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedObject* UARTrackedObject::GetDefaultObj()
{
	static class UARTrackedObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedObject*>(UARTrackedObject::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateObject*          ReturnValue                                                      (None)

void UARTrackedObject::GetDetectedObject(class UARCandidateObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedObject", "GetDetectedObject");

	Params::UARTrackedObject_GetDetectedObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTrackedPose
// (None)

class UClass* UARTrackedPose::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedPose");

	return Clss;
}


// ARTrackedPose AugmentedReality.Default__ARTrackedPose
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedPose* UARTrackedPose::GetDefaultObj()
{
	static class UARTrackedPose* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedPose*>(UARTrackedPose::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARPose3D                   ReturnValue                                                      (None)

void UARTrackedPose::GetTrackedPoseData(const struct FARPose3D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedPose", "GetTrackedPoseData");

	Params::UARTrackedPose_GetTrackedPoseData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARMeshGeometry
// (None)

class UClass* UARMeshGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARMeshGeometry");

	return Clss;
}


// ARMeshGeometry AugmentedReality.Default__ARMeshGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARMeshGeometry* UARMeshGeometry::GetDefaultObj()
{
	static class UARMeshGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARMeshGeometry*>(UARMeshGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InWorldLocation                                                  (None)
// enum class EARObjectClassification OutClassification                                                (None)
// struct FVector                     OutClassificationLocation                                        (None)
// float                              MaxLocationDiff                                                  (None)
// bool                               ReturnValue                                                      (None)

void UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, enum class EARObjectClassification OutClassification, const struct FVector& OutClassificationLocation, float MaxLocationDiff, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshGeometry", "GetObjectClassificationAtLocation");

	Params::UARMeshGeometry_GetObjectClassificationAtLocation_Params Parms{};

	Parms.InWorldLocation = InWorldLocation;
	Parms.OutClassification = OutClassification;
	Parms.OutClassificationLocation = OutClassificationLocation;
	Parms.MaxLocationDiff = MaxLocationDiff;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARGeoAnchor
// (None)

class UClass* UARGeoAnchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGeoAnchor");

	return Clss;
}


// ARGeoAnchor AugmentedReality.Default__ARGeoAnchor
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGeoAnchor* UARGeoAnchor::GetDefaultObj()
{
	static class UARGeoAnchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGeoAnchor*>(UARGeoAnchor::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGeoAnchor.GetLongitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARGeoAnchor::GetLongitude(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetLongitude");

	Params::UARGeoAnchor_GetLongitude_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoAnchor.GetLatitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARGeoAnchor::GetLatitude(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetLatitude");

	Params::UARGeoAnchor_GetLatitude_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARAltitudeSource       ReturnValue                                                      (None)

void UARGeoAnchor::GetAltitudeSource(enum class EARAltitudeSource ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetAltitudeSource");

	Params::UARGeoAnchor_GetAltitudeSource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARGeoAnchor::GetAltitudeMeters(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetAltitudeMeters");

	Params::UARGeoAnchor_GetAltitudeMeters_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTrackableNotifyComponent
// (None)

class UClass* UARTrackableNotifyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackableNotifyComponent");

	return Clss;
}


// ARTrackableNotifyComponent AugmentedReality.Default__ARTrackableNotifyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackableNotifyComponent* UARTrackableNotifyComponent::GetDefaultObj()
{
	static class UARTrackableNotifyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackableNotifyComponent*>(UARTrackableNotifyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTypesDummyClass
// (None)

class UClass* UARTypesDummyClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTypesDummyClass");

	return Clss;
}


// ARTypesDummyClass AugmentedReality.Default__ARTypesDummyClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTypesDummyClass* UARTypesDummyClass::GetDefaultObj()
{
	static class UARTypesDummyClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTypesDummyClass*>(UARTypesDummyClass::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARCandidateImage
// (None)

class UClass* UARCandidateImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARCandidateImage");

	return Clss;
}


// ARCandidateImage AugmentedReality.Default__ARCandidateImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UARCandidateImage* UARCandidateImage::GetDefaultObj()
{
	static class UARCandidateImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UARCandidateImage*>(UARCandidateImage::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARCandidateImage::GetPhysicalWidth(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetPhysicalWidth");

	Params::UARCandidateImage_GetPhysicalWidth_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UARCandidateImage::GetPhysicalHeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetPhysicalHeight");

	Params::UARCandidateImage_GetPhysicalHeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARCandidateImageOrientationReturnValue                                                      (None)

void UARCandidateImage::GetOrientation(enum class EARCandidateImageOrientation ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetOrientation");

	Params::UARCandidateImage_GetOrientation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UARCandidateImage::GetFriendlyName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetFriendlyName");

	Params::UARCandidateImage_GetFriendlyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (None)

void UARCandidateImage::GetCandidateTexture(class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetCandidateTexture");

	Params::UARCandidateImage_GetCandidateTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARCandidateObject
// (None)

class UClass* UARCandidateObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARCandidateObject");

	return Clss;
}


// ARCandidateObject AugmentedReality.Default__ARCandidateObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UARCandidateObject* UARCandidateObject::GetDefaultObj()
{
	static class UARCandidateObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UARCandidateObject*>(UARCandidateObject::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewName                                                          (None)

void UARCandidateObject::SetFriendlyName(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "SetFriendlyName");

	Params::UARCandidateObject_SetFriendlyName_Params Parms{};

	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      InCandidateObject                                                (None)

void UARCandidateObject::SetCandidateObjectData(const TArray<uint8>& InCandidateObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "SetCandidateObjectData");

	Params::UARCandidateObject_SetCandidateObjectData_Params Parms{};

	Parms.InCandidateObject = InCandidateObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        InBoundingBox                                                    (None)

void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "SetBoundingBox");

	Params::UARCandidateObject_SetBoundingBox_Params Parms{};

	Parms.InBoundingBox = InBoundingBox;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UARCandidateObject::GetFriendlyName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "GetFriendlyName");

	Params::UARCandidateObject_GetFriendlyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (None)

void UARCandidateObject::GetCandidateObjectData(const TArray<uint8>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "GetCandidateObjectData");

	Params::UARCandidateObject_GetCandidateObjectData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (None)

void UARCandidateObject::GetBoundingBox(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "GetBoundingBox");

	Params::UARCandidateObject_GetBoundingBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


