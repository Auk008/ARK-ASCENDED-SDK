#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaPlate.MediaPlate
// (Actor)

class UClass* AMediaPlate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlate");

	return Clss;
}


// MediaPlate MediaPlate.Default__MediaPlate
// (Public, ClassDefaultObject, ArchetypeObject)

class AMediaPlate* AMediaPlate::GetDefaultObj()
{
	static class AMediaPlate* Default = nullptr;

	if (!Default)
		Default = static_cast<AMediaPlate*>(AMediaPlate::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaPlate.MediaPlateAssetUserData
// (None)

class UClass* UMediaPlateAssetUserData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlateAssetUserData");

	return Clss;
}


// MediaPlateAssetUserData MediaPlate.Default__MediaPlateAssetUserData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlateAssetUserData* UMediaPlateAssetUserData::GetDefaultObj()
{
	static class UMediaPlateAssetUserData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlateAssetUserData*>(UMediaPlateAssetUserData::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaPlate.MediaPlateComponent
// (None)

class UClass* UMediaPlateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlateComponent");

	return Clss;
}


// MediaPlateComponent MediaPlate.Default__MediaPlateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlateComponent* UMediaPlateComponent::GetDefaultObj()
{
	static class UMediaPlateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlateComponent*>(UMediaPlateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInPlayOnlyWhenVisible                                           (None)

void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetPlayOnlyWhenVisible");

	Params::UMediaPlateComponent_SetPlayOnlyWhenVisible_Params Parms{};

	Parms.bInPlayOnlyWhenVisible = bInPlayOnlyWhenVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.SetMeshRange
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InMeshRange                                                      (None)

void UMediaPlateComponent::SetMeshRange(const struct FVector2D& InMeshRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetMeshRange");

	Params::UMediaPlateComponent_SetMeshRange_Params Parms{};

	Parms.InMeshRange = InMeshRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.SetLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLoop                                                          (None)

void UMediaPlateComponent::SetLoop(bool bInLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetLoop");

	Params::UMediaPlateComponent_SetLoop_Params Parms{};

	Parms.bInLoop = bInLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AspectRatio                                                      (None)

void UMediaPlateComponent::SetLetterboxAspectRatio(float AspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetLetterboxAspectRatio");

	Params::UMediaPlateComponent_SetLetterboxAspectRatio_Params Parms{};

	Parms.AspectRatio = AspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsAspectRatioAuto                                             (None)

void UMediaPlateComponent::SetIsAspectRatioAuto(bool bInIsAspectRatioAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "SetIsAspectRatioAuto");

	Params::UMediaPlateComponent_SetIsAspectRatioAuto_Params Parms{};

	Parms.bInIsAspectRatioAuto = bInIsAspectRatioAuto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Seek
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlateComponent::Seek(const struct FTimespan& Time, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Seek");

	Params::UMediaPlateComponent_Seek_Params Parms{};

	Parms.Time = Time;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlateComponent::Rewind(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Rewind");

	Params::UMediaPlateComponent_Rewind_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Open");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.OnMediaOpened
// (Final, Native, Private)
// Parameters:
// class FString                      DeviceUrl                                                        (None)

void UMediaPlateComponent::OnMediaOpened(const class FString& DeviceUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "OnMediaOpened");

	Params::UMediaPlateComponent_OnMediaOpened_Params Parms{};

	Parms.DeviceUrl = DeviceUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.OnMediaEnd
// (Final, Native, Private)
// Parameters:

void UMediaPlateComponent::OnMediaEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "OnMediaEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlateComponent::IsMediaPlatePlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "IsMediaPlatePlaying");

	Params::UMediaPlateComponent_IsMediaPlatePlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.GetMeshRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (None)

void UMediaPlateComponent::GetMeshRange(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetMeshRange");

	Params::UMediaPlateComponent_GetMeshRange_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.GetMediaTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// class UMediaTexture*               ReturnValue                                                      (None)

void UMediaPlateComponent::GetMediaTexture(int32 Index, class UMediaTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetMediaTexture");

	Params::UMediaPlateComponent_GetMediaTexture_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (None)

void UMediaPlateComponent::GetMediaPlayer(class UMediaPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetMediaPlayer");

	Params::UMediaPlateComponent_GetMediaPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.GetLoop
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlateComponent::GetLoop(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetLoop");

	Params::UMediaPlateComponent_GetLoop_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (None)

void UMediaPlateComponent::GetLetterboxAspectRatio(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetLetterboxAspectRatio");

	Params::UMediaPlateComponent_GetLetterboxAspectRatio_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlateComponent::GetIsAspectRatioAuto(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "GetIsAspectRatioAuto");

	Params::UMediaPlateComponent_GetIsAspectRatioAuto_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaPlate.MediaPlateComponent.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlateComponent::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlateComponent", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


