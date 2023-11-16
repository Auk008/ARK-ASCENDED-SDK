#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaAssets.MediaSource
// (None)

class UClass* UMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaSource");

	return Clss;
}


// MediaSource MediaAssets.Default__MediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaSource* UMediaSource::GetDefaultObj()
{
	static class UMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaSource*>(UMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaSource.Validate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaSource::Validate(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSource", "Validate");

	Params::UMediaSource_Validate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSource.SetMediaOptionString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (None)
// class FString                      Value                                                            (None)

void UMediaSource::SetMediaOptionString(class FName Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionString");

	Params::UMediaSource_SetMediaOptionString_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSource.SetMediaOptionInt64
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (None)
// int64                              Value                                                            (None)

void UMediaSource::SetMediaOptionInt64(class FName Key, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionInt64");

	Params::UMediaSource_SetMediaOptionInt64_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSource.SetMediaOptionFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (None)
// float                              Value                                                            (None)

void UMediaSource::SetMediaOptionFloat(class FName Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionFloat");

	Params::UMediaSource_SetMediaOptionFloat_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSource.SetMediaOptionBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (None)
// bool                               Value                                                            (None)

void UMediaSource::SetMediaOptionBool(class FName Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionBool");

	Params::UMediaSource_SetMediaOptionBool_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSource.GetUrl
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UMediaSource::GetUrl(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSource", "GetUrl");

	Params::UMediaSource_GetUrl_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.BaseMediaSource
// (None)

class UClass* UBaseMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMediaSource");

	return Clss;
}


// BaseMediaSource MediaAssets.Default__BaseMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseMediaSource* UBaseMediaSource::GetDefaultObj()
{
	static class UBaseMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMediaSource*>(UBaseMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.MediaSourceRendererInterface
// (None)

class UClass* IMediaSourceRendererInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaSourceRendererInterface");

	return Clss;
}


// MediaSourceRendererInterface MediaAssets.Default__MediaSourceRendererInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMediaSourceRendererInterface* IMediaSourceRendererInterface::GetDefaultObj()
{
	static class IMediaSourceRendererInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMediaSourceRendererInterface*>(IMediaSourceRendererInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.MediaTexture
// (None)

class UClass* UMediaTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaTexture");

	return Clss;
}


// MediaTexture MediaAssets.Default__MediaTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaTexture* UMediaTexture::GetDefaultObj()
{
	static class UMediaTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaTexture*>(UMediaTexture::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaTexture.UpdateResource
// (Native, Public, BlueprintCallable)
// Parameters:

void UMediaTexture::UpdateResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "UpdateResource");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                NewMediaPlayer                                                   (None)

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "SetMediaPlayer");

	Params::UMediaTexture_SetMediaPlayer_Params Parms{};

	Parms.NewMediaPlayer = NewMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaTexture.GetWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMediaTexture::GetWidth(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "GetWidth");

	Params::UMediaTexture_GetWidth_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaTexture.GetTextureNumMips
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMediaTexture::GetTextureNumMips(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "GetTextureNumMips");

	Params::UMediaTexture_GetTextureNumMips_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaTexture.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (None)

void UMediaTexture::GetMediaPlayer(class UMediaPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "GetMediaPlayer");

	Params::UMediaTexture_GetMediaPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaTexture.GetHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMediaTexture::GetHeight(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "GetHeight");

	Params::UMediaTexture_GetHeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaTexture.GetAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UMediaTexture::GetAspectRatio(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaTexture", "GetAspectRatio");

	Params::UMediaTexture_GetAspectRatio_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.FileMediaSource
// (None)

class UClass* UFileMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FileMediaSource");

	return Clss;
}


// FileMediaSource MediaAssets.Default__FileMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UFileMediaSource* UFileMediaSource::GetDefaultObj()
{
	static class UFileMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UFileMediaSource*>(UFileMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (None)

void UFileMediaSource::SetFilePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FileMediaSource", "SetFilePath");

	Params::UFileMediaSource_SetFilePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.MediaComponent
// (None)

class UClass* UMediaComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaComponent");

	return Clss;
}


// MediaComponent MediaAssets.Default__MediaComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaComponent* UMediaComponent::GetDefaultObj()
{
	static class UMediaComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaComponent*>(UMediaComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaComponent.GetMediaTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaTexture*               ReturnValue                                                      (None)

void UMediaComponent::GetMediaTexture(class UMediaTexture* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaComponent", "GetMediaTexture");

	Params::UMediaComponent_GetMediaTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (None)

void UMediaComponent::GetMediaPlayer(class UMediaPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaComponent", "GetMediaPlayer");

	Params::UMediaComponent_GetMediaPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.MediaTimeStampInfo
// (None)

class UClass* UMediaTimeStampInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaTimeStampInfo");

	return Clss;
}


// MediaTimeStampInfo MediaAssets.Default__MediaTimeStampInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaTimeStampInfo* UMediaTimeStampInfo::GetDefaultObj()
{
	static class UMediaTimeStampInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaTimeStampInfo*>(UMediaTimeStampInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.MediaPlayer
// (None)

class UClass* UMediaPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlayer");

	return Clss;
}


// MediaPlayer MediaAssets.Default__MediaPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlayer* UMediaPlayer::GetDefaultObj()
{
	static class UMediaPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlayer*>(UMediaPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SupportsSeeking(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SupportsSeeking");

	Params::UMediaPlayer_SupportsSeeking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SupportsScrubbing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SupportsScrubbing");

	Params::UMediaPlayer_SupportsScrubbing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Rate                                                             (None)
// bool                               Unthinned                                                        (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SupportsRate(float Rate, bool Unthinned, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SupportsRate");

	Params::UMediaPlayer_SupportsRate_Params Parms{};

	Parms.Rate = Rate;
	Parms.Unthinned = Unthinned;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetViewRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (None)
// bool                               Absolute                                                         (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetViewRotation");

	Params::UMediaPlayer_SetViewRotation_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.Absolute = Absolute;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetViewField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Horizontal                                                       (None)
// float                              Vertical                                                         (None)
// bool                               Absolute                                                         (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetViewField");

	Params::UMediaPlayer_SetViewField_Params Parms{};

	Parms.Horizontal = Horizontal;
	Parms.Vertical = Vertical;
	Parms.Absolute = Absolute;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// float                              FrameRate                                                        (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetVideoTrackFrameRate");

	Params::UMediaPlayer_SetVideoTrackFrameRate_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.FrameRate = FrameRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetTrackFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetTrackFormat");

	Params::UMediaPlayer_SetTrackFormat_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetTimeDelay
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   TimeDelay                                                        (None)

void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetTimeDelay");

	Params::UMediaPlayer_SetTimeDelay_Params Parms{};

	Parms.TimeDelay = TimeDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetRate(float Rate, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetRate");

	Params::UMediaPlayer_SetRate_Params Parms{};

	Parms.Rate = Rate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetNativeVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetNativeVolume(float Volume, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetNativeVolume");

	Params::UMediaPlayer_SetNativeVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetMediaOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                Options                                                          (None)

void UMediaPlayer::SetMediaOptions(class UMediaSource* Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetMediaOptions");

	Params::UMediaPlayer_SetMediaOptions_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Looping                                                          (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SetLooping(bool Looping, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetLooping");

	Params::UMediaPlayer_SetLooping_Params Parms{};

	Parms.Looping = Looping;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PlayerName                                                       (None)

void UMediaPlayer::SetDesiredPlayerName(class FName PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetDesiredPlayerName");

	Params::UMediaPlayer_SetDesiredPlayerName_Params Parms{};

	Parms.PlayerName = PlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SetBlockOnTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (None)

void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SetBlockOnTime");

	Params::UMediaPlayer_SetBlockOnTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.SelectTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              TrackIndex                                                       (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "SelectTrack");

	Params::UMediaPlayer_SelectTrack_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Seek
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Seek(const struct FTimespan& Time, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Seek");

	Params::UMediaPlayer_Seek_Params Parms{};

	Parms.Time = Time;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Rewind(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Rewind");

	Params::UMediaPlayer_Rewind_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Reopen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Reopen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Reopen");

	Params::UMediaPlayer_Reopen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Previous(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Previous");

	Params::UMediaPlayer_Previous_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.PlayAndSeek
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlayer::PlayAndSeek()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "PlayAndSeek");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Play(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Play");

	Params::UMediaPlayer_Play_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Pause(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Pause");

	Params::UMediaPlayer_Pause_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::OpenUrl(const class FString& URL, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenUrl");

	Params::UMediaPlayer_OpenUrl_Params Parms{};

	Parms.URL = URL;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (None)
// struct FMediaPlayerOptions         Options                                                          (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenSourceWithOptions");

	Params::UMediaPlayer_OpenSourceWithOptions_Params Parms{};

	Parms.MediaSource = MediaSource;
	Parms.Options = Options;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenSourceLatent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (ZeroConstructor)
// class UMediaSource*                MediaSource                                                      (None)
// struct FMediaPlayerOptions         Options                                                          (None)
// bool                               bSuccess                                                         (None)

void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenSourceLatent");

	Params::UMediaPlayer_OpenSourceLatent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.MediaSource = MediaSource;
	Parms.Options = Options;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::OpenSource(class UMediaSource* MediaSource, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenSource");

	Params::UMediaPlayer_OpenSource_Params Parms{};

	Parms.MediaSource = MediaSource;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlaylist*              InPlaylist                                                       (None)
// int32                              Index                                                            (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenPlaylistIndex");

	Params::UMediaPlayer_OpenPlaylistIndex_Params Parms{};

	Parms.InPlaylist = InPlaylist;
	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlaylist*              InPlaylist                                                       (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenPlaylist");

	Params::UMediaPlayer_OpenPlaylist_Params Parms{};

	Parms.InPlaylist = InPlaylist;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.OpenFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::OpenFile(const class FString& FilePath, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "OpenFile");

	Params::UMediaPlayer_OpenFile_Params Parms{};

	Parms.FilePath = FilePath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::Next(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Next");

	Params::UMediaPlayer_Next_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsReady(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsReady");

	Params::UMediaPlayer_IsReady_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsPreparing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsPreparing");

	Params::UMediaPlayer_IsPreparing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsPlaying");

	Params::UMediaPlayer_IsPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsPaused(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsPaused");

	Params::UMediaPlayer_IsPaused_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsLooping(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsLooping");

	Params::UMediaPlayer_IsLooping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsConnecting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsConnecting(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsConnecting");

	Params::UMediaPlayer_IsConnecting_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsClosed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsClosed");

	Params::UMediaPlayer_IsClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.IsBuffering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::IsBuffering(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "IsBuffering");

	Params::UMediaPlayer_IsBuffering_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::HasError(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "HasError");

	Params::UMediaPlayer_HasError_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (None)

void UMediaPlayer::GetViewRotation(const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetViewRotation");

	Params::UMediaPlayer_GetViewRotation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetVideoTrackType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// class FString                      ReturnValue                                                      (None)

void UMediaPlayer::GetVideoTrackType(int32 TrackIndex, int32 FormatIndex, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackType");

	Params::UMediaPlayer_GetVideoTrackType_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// struct FFloatRange                 ReturnValue                                                      (None)

void UMediaPlayer::GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex, const struct FFloatRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackFrameRates");

	Params::UMediaPlayer_GetVideoTrackFrameRates_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// float                              ReturnValue                                                      (None)

void UMediaPlayer::GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackFrameRate");

	Params::UMediaPlayer_GetVideoTrackFrameRate_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// struct FIntPoint                   ReturnValue                                                      (None)

void UMediaPlayer::GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex, const struct FIntPoint& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackDimensions");

	Params::UMediaPlayer_GetVideoTrackDimensions_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// float                              ReturnValue                                                      (None)

void UMediaPlayer::GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackAspectRatio");

	Params::UMediaPlayer_GetVideoTrackAspectRatio_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UMediaPlayer::GetVerticalFieldOfView(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetVerticalFieldOfView");

	Params::UMediaPlayer_GetVerticalFieldOfView_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UMediaPlayer::GetUrl(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetUrl");

	Params::UMediaPlayer_GetUrl_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              TrackIndex                                                       (None)
// class FString                      ReturnValue                                                      (None)

void UMediaPlayer::GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetTrackLanguage");

	Params::UMediaPlayer_GetTrackLanguage_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetTrackFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              TrackIndex                                                       (None)
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetTrackFormat");

	Params::UMediaPlayer_GetTrackFormat_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              TrackIndex                                                       (None)
// class FText                        ReturnValue                                                      (None)

void UMediaPlayer::GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetTrackDisplayName");

	Params::UMediaPlayer_GetTrackDisplayName_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetTimeStamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaTimeStampInfo*         ReturnValue                                                      (None)

void UMediaPlayer::GetTimeStamp(class UMediaTimeStampInfo* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetTimeStamp");

	Params::UMediaPlayer_GetTimeStamp_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetTimeDelay
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (None)

void UMediaPlayer::GetTimeDelay(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetTimeDelay");

	Params::UMediaPlayer_GetTimeDelay_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (None)

void UMediaPlayer::GetTime(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetTime");

	Params::UMediaPlayer_GetTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetSupportedRates
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFloatRange>         OutRates                                                         (None)
// bool                               Unthinned                                                        (None)

void UMediaPlayer::GetSupportedRates(const TArray<struct FFloatRange>& OutRates, bool Unthinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetSupportedRates");

	Params::UMediaPlayer_GetSupportedRates_Params Parms{};

	Parms.OutRates = OutRates;
	Parms.Unthinned = Unthinned;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetSelectedTrack(enum class EMediaPlayerTrack TrackType, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetSelectedTrack");

	Params::UMediaPlayer_GetSelectedTrack_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UMediaPlayer::GetRate(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetRate");

	Params::UMediaPlayer_GetRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetPlaylistIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetPlaylistIndex");

	Params::UMediaPlayer_GetPlaylistIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetPlaylist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlaylist*              ReturnValue                                                      (None)

void UMediaPlayer::GetPlaylist(class UMediaPlaylist* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetPlaylist");

	Params::UMediaPlayer_GetPlaylist_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UMediaPlayer::GetPlayerName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetPlayerName");

	Params::UMediaPlayer_GetPlayerName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetNumTracks(enum class EMediaPlayerTrack TrackType, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetNumTracks");

	Params::UMediaPlayer_GetNumTracks_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (None)
// int32                              TrackIndex                                                       (None)
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetNumTrackFormats");

	Params::UMediaPlayer_GetNumTrackFormats_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetMediaName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UMediaPlayer::GetMediaName(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetMediaName");

	Params::UMediaPlayer_GetMediaName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UMediaPlayer::GetHorizontalFieldOfView(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetHorizontalFieldOfView");

	Params::UMediaPlayer_GetHorizontalFieldOfView_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (None)

void UMediaPlayer::GetDuration(const struct FTimespan& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetDuration");

	Params::UMediaPlayer_GetDuration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UMediaPlayer::GetDesiredPlayerName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetDesiredPlayerName");

	Params::UMediaPlayer_GetDesiredPlayerName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetAudioTrackType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// class FString                      ReturnValue                                                      (None)

void UMediaPlayer::GetAudioTrackType(int32 TrackIndex, int32 FormatIndex, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetAudioTrackType");

	Params::UMediaPlayer_GetAudioTrackType_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetAudioTrackSampleRate");

	Params::UMediaPlayer_GetAudioTrackSampleRate_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TrackIndex                                                       (None)
// int32                              FormatIndex                                                      (None)
// int32                              ReturnValue                                                      (None)

void UMediaPlayer::GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "GetAudioTrackChannels");

	Params::UMediaPlayer_GetAudioTrackChannels_Params Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlayer::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::CanPlayUrl(const class FString& URL, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "CanPlayUrl");

	Params::UMediaPlayer_CanPlayUrl_Params Parms{};

	Parms.URL = URL;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "CanPlaySource");

	Params::UMediaPlayer_CanPlaySource_Params Parms{};

	Parms.MediaSource = MediaSource;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMediaPlayer::CanPause(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlayer", "CanPause");

	Params::UMediaPlayer_CanPause_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.MediaPlayerProxyInterface
// (None)

class UClass* IMediaPlayerProxyInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlayerProxyInterface");

	return Clss;
}


// MediaPlayerProxyInterface MediaAssets.Default__MediaPlayerProxyInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMediaPlayerProxyInterface* IMediaPlayerProxyInterface::GetDefaultObj()
{
	static class IMediaPlayerProxyInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMediaPlayerProxyInterface*>(IMediaPlayerProxyInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.MediaPlaylist
// (None)

class UClass* UMediaPlaylist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlaylist");

	return Clss;
}


// MediaPlaylist MediaAssets.Default__MediaPlaylist
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlaylist* UMediaPlaylist::GetDefaultObj()
{
	static class UMediaPlaylist* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlaylist*>(UMediaPlaylist::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaPlaylist.Replace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// class UMediaSource*                Replacement                                                      (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlaylist::Replace(int32 Index, class UMediaSource* Replacement, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "Replace");

	Params::UMediaPlaylist_Replace_Params Parms{};

	Parms.Index = Index;
	Parms.Replacement = Replacement;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlaylist::RemoveAt(int32 Index, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "RemoveAt");

	Params::UMediaPlaylist_RemoveAt_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlaylist::Remove(class UMediaSource* MediaSource, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "Remove");

	Params::UMediaPlaylist_Remove_Params Parms{};

	Parms.MediaSource = MediaSource;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMediaPlaylist::Num(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "Num");

	Params::UMediaPlaylist_Num_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (None)
// int32                              Index                                                            (None)

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "Insert");

	Params::UMediaPlaylist_Insert_Params Parms{};

	Parms.MediaSource = MediaSource;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.GetRandom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OutIndex                                                         (None)
// class UMediaSource*                ReturnValue                                                      (None)

void UMediaPlaylist::GetRandom(int32 OutIndex, class UMediaSource* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "GetRandom");

	Params::UMediaPlaylist_GetRandom_Params Parms{};

	Parms.OutIndex = OutIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (None)
// class UMediaSource*                ReturnValue                                                      (None)

void UMediaPlaylist::GetPrevious(int32 InOutIndex, class UMediaSource* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "GetPrevious");

	Params::UMediaPlaylist_GetPrevious_Params Parms{};

	Parms.InOutIndex = InOutIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.GetNext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (None)
// class UMediaSource*                ReturnValue                                                      (None)

void UMediaPlaylist::GetNext(int32 InOutIndex, class UMediaSource* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "GetNext");

	Params::UMediaPlaylist_GetNext_Params Parms{};

	Parms.InOutIndex = InOutIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// class UMediaSource*                ReturnValue                                                      (None)

void UMediaPlaylist::Get(int32 Index, class UMediaSource* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "Get");

	Params::UMediaPlaylist_Get_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.AddUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlaylist::AddUrl(const class FString& URL, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "AddUrl");

	Params::UMediaPlaylist_AddUrl_Params Parms{};

	Parms.URL = URL;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.AddFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlaylist::AddFile(const class FString& FilePath, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "AddFile");

	Params::UMediaPlaylist_AddFile_Params Parms{};

	Parms.FilePath = FilePath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (None)
// bool                               ReturnValue                                                      (None)

void UMediaPlaylist::Add(class UMediaSource* MediaSource, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaPlaylist", "Add");

	Params::UMediaPlaylist_Add_Params Parms{};

	Parms.MediaSource = MediaSource;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.MediaSoundComponent
// (SceneComponent)

class UClass* UMediaSoundComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaSoundComponent");

	return Clss;
}


// MediaSoundComponent MediaAssets.Default__MediaSoundComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaSoundComponent* UMediaSoundComponent::GetDefaultObj()
{
	static class UMediaSoundComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaSoundComponent*>(UMediaSoundComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      InFrequenciesToAnalyze                                           (None)
// enum class EMediaSoundComponentFFTSizeInFFTSize                                                        (None)

void UMediaSoundComponent::SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "SetSpectralAnalysisSettings");

	Params::UMediaSoundComponent_SetSpectralAnalysisSettings_Params Parms{};

	Parms.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	Parms.InFFTSize = InFFTSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                NewMediaPlayer                                                   (None)

void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "SetMediaPlayer");

	Params::UMediaSoundComponent_SetMediaPlayer_Params Parms{};

	Parms.NewMediaPlayer = NewMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AttackTimeMsec                                                   (None)
// int32                              ReleaseTimeMsec                                                  (None)

void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "SetEnvelopeFollowingsettings");

	Params::UMediaSoundComponent_SetEnvelopeFollowingsettings_Params Parms{};

	Parms.AttackTimeMsec = AttackTimeMsec;
	Parms.ReleaseTimeMsec = ReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSpectralAnalysisEnabled                                       (None)

void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "SetEnableSpectralAnalysis");

	Params::UMediaSoundComponent_SetEnableSpectralAnalysis_Params Parms{};

	Parms.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnvelopeFollowing                                             (None)

void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "SetEnableEnvelopeFollowing");

	Params::UMediaSoundComponent_SetEnableEnvelopeFollowing_Params Parms{};

	Parms.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.GetSpectralData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMediaSoundComponentSpectralData>ReturnValue                                                      (None)

void UMediaSoundComponent::GetSpectralData(const TArray<struct FMediaSoundComponentSpectralData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "GetSpectralData");

	Params::UMediaSoundComponent_GetSpectralData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMediaSoundComponentSpectralData>ReturnValue                                                      (None)

void UMediaSoundComponent::GetNormalizedSpectralData(const TArray<struct FMediaSoundComponentSpectralData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "GetNormalizedSpectralData");

	Params::UMediaSoundComponent_GetNormalizedSpectralData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (None)

void UMediaSoundComponent::GetMediaPlayer(class UMediaPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "GetMediaPlayer");

	Params::UMediaSoundComponent_GetMediaPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UMediaSoundComponent::GetEnvelopeValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "GetEnvelopeValue");

	Params::UMediaSoundComponent_GetEnvelopeValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings   OutAttenuationSettings                                           (None)
// bool                               ReturnValue                                                      (None)

void UMediaSoundComponent::BP_GetAttenuationSettingsToApply(const struct FSoundAttenuationSettings& OutAttenuationSettings, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaSoundComponent", "BP_GetAttenuationSettingsToApply");

	Params::UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Params Parms{};

	Parms.OutAttenuationSettings = OutAttenuationSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MediaAssets.PlatformMediaSource
// (None)

class UClass* UPlatformMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformMediaSource");

	return Clss;
}


// PlatformMediaSource MediaAssets.Default__PlatformMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformMediaSource* UPlatformMediaSource::GetDefaultObj()
{
	static class UPlatformMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformMediaSource*>(UPlatformMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.StreamMediaSource
// (None)

class UClass* UStreamMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamMediaSource");

	return Clss;
}


// StreamMediaSource MediaAssets.Default__StreamMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamMediaSource* UStreamMediaSource::GetDefaultObj()
{
	static class UStreamMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamMediaSource*>(UStreamMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.TimeSynchronizableMediaSource
// (None)

class UClass* UTimeSynchronizableMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynchronizableMediaSource");

	return Clss;
}


// TimeSynchronizableMediaSource MediaAssets.Default__TimeSynchronizableMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynchronizableMediaSource* UTimeSynchronizableMediaSource::GetDefaultObj()
{
	static class UTimeSynchronizableMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynchronizableMediaSource*>(UTimeSynchronizableMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaAssets.MediaBlueprintFunctionLibrary
// (None)

class UClass* UMediaBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaBlueprintFunctionLibrary");

	return Clss;
}


// MediaBlueprintFunctionLibrary MediaAssets.Default__MediaBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaBlueprintFunctionLibrary* UMediaBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UMediaBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaBlueprintFunctionLibrary*>(UMediaBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                                                       (None)
// int32                              Filter                                                           (None)

void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(const TArray<struct FMediaCaptureDevice>& OutDevices, int32 Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateWebcamCaptureDevices");

	Params::UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params Parms{};

	Parms.OutDevices = OutDevices;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                                                       (None)
// int32                              Filter                                                           (None)

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(const TArray<struct FMediaCaptureDevice>& OutDevices, int32 Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateVideoCaptureDevices");

	Params::UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params Parms{};

	Parms.OutDevices = OutDevices;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                                                       (None)
// int32                              Filter                                                           (None)

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(const TArray<struct FMediaCaptureDevice>& OutDevices, int32 Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateAudioCaptureDevices");

	Params::UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params Parms{};

	Parms.OutDevices = OutDevices;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


