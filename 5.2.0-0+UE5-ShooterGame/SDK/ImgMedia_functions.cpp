#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImgMedia.ImgMediaSource
// (None)

class UClass* UImgMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImgMediaSource");

	return Clss;
}


// ImgMediaSource ImgMedia.Default__ImgMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UImgMediaSource* UImgMediaSource::GetDefaultObj()
{
	static class UImgMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UImgMediaSource*>(UImgMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (None)

void UImgMediaSource::SetTokenizedSequencePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetTokenizedSequencePath");

	Params::UImgMediaSource_SetTokenizedSequencePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.SetSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (None)

void UImgMediaSource::SetSequencePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetSequencePath");

	Params::UImgMediaSource_SetSequencePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Distance                                                         (None)

void UImgMediaSource::SetMipLevelDistance(float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetMipLevelDistance");

	Params::UImgMediaSource_SetMipLevelDistance_Params Parms{};

	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (None)

void UImgMediaSource::RemoveTargetObject(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveTargetObject");

	Params::UImgMediaSource_RemoveTargetObject_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (None)

void UImgMediaSource::RemoveGlobalCamera(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveGlobalCamera");

	Params::UImgMediaSource_RemoveGlobalCamera_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UImgMediaSource::GetSequencePath(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetSequencePath");

	Params::UImgMediaSource_GetSequencePath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutProxies                                                       (None)

void UImgMediaSource::GetProxies(const TArray<class FString>& OutProxies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetProxies");

	Params::UImgMediaSource_GetProxies_Params Parms{};

	Parms.OutProxies = OutProxies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.AddTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (None)

void UImgMediaSource::AddTargetObject(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddTargetObject");

	Params::UImgMediaSource_AddTargetObject_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (None)

void UImgMediaSource::AddGlobalCamera(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddGlobalCamera");

	Params::UImgMediaSource_AddGlobalCamera_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


