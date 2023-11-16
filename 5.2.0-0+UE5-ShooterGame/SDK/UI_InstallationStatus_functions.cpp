#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InstallationStatus.UI_InstallationStatus_C
// (None)

class UClass* UUI_InstallationStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InstallationStatus_C");

	return Clss;
}


// UI_InstallationStatus_C UI_InstallationStatus.Default__UI_InstallationStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InstallationStatus_C* UUI_InstallationStatus_C::GetDefaultObj()
{
	static class UUI_InstallationStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InstallationStatus_C*>(UUI_InstallationStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_InstallationStatus.UI_InstallationStatus_C.SetTextBasedOnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Index                                                            (None)
// enum class EInstallStatus          Temp_byte_Variable                                               (None)
// class FText                        Temp_text_Variable                                               (BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_1                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_2                                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_3                                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_4                                             (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_5                                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_6                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        K2Node_Select_Default                                            (AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_InstallationStatus_C::SetTextBasedOnState(enum class EInstallStatus Index, enum class EInstallStatus Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "SetTextBasedOnState");

	Params::UUI_InstallationStatus_C_SetTextBasedOnState_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.GetTrueProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Amount                                                           (None)
// enum class ELibraryProgressState   InstalationState                                                 (None)
// double                             ReturnValue                                                      (None)
// bool                               MaintainPreviousValue                                            (None)
// int32                              NewLocalVar                                                      (None)
// double                             Temp_real_Variable                                               (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             Temp_real_Variable_1                                             (None)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (None)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (None)
// double                             Temp_real_Variable_2                                             (None)
// double                             Temp_real_Variable_3                                             (None)
// double                             Temp_real_Variable_4                                             (None)
// double                             Temp_real_Variable_5                                             (None)
// double                             Temp_real_Variable_6                                             (None)
// double                             Temp_real_Variable_7                                             (None)
// double                             Temp_real_Variable_8                                             (None)
// double                             Temp_real_Variable_9                                             (None)
// double                             Temp_real_Variable_10                                            (None)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (None)
// double                             K2Node_Select_Default                                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)

void UUI_InstallationStatus_C::GetTrueProgress(int32 Amount, enum class ELibraryProgressState InstalationState, double ReturnValue, bool MaintainPreviousValue, int32 NewLocalVar, double Temp_real_Variable, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Conv_IntToDouble_ReturnValue, double Temp_real_Variable_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState Temp_byte_Variable, double K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "GetTrueProgress");

	Params::UUI_InstallationStatus_C_GetTrueProgress_Params Parms{};

	Parms.Amount = Amount;
	Parms.InstalationState = InstalationState;
	Parms.ReturnValue = ReturnValue;
	Parms.MaintainPreviousValue = MaintainPreviousValue;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Install_Status                                                   (None)
// enum class EInstallStatus          Temp_byte_Variable                                               (None)
// struct FLinearColor                Temp_struct_Variable                                             (None)
// struct FLinearColor                Temp_struct_Variable_1                                           (None)
// struct FLinearColor                Temp_struct_Variable_2                                           (None)
// struct FLinearColor                Temp_struct_Variable_3                                           (None)
// struct FLinearColor                Temp_struct_Variable_4                                           (None)
// struct FLinearColor                Temp_struct_Variable_5                                           (None)
// struct FLinearColor                Temp_struct_Variable_6                                           (None)
// struct FLinearColor                K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_InstallationStatus_C::UpdateColor(enum class EInstallStatus Install_Status, enum class EInstallStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "UpdateColor");

	Params::UUI_InstallationStatus_C_UpdateColor_Params Parms{};

	Parms.Install_Status = Install_Status;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateModProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (None)
// enum class EInstallStatus          NewInstallationStatus                                            (None)
// enum class ELibraryProgressState   InstallationPhase                                                (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (None)
// double                             CallFunc_GetTrueProgress_ReturnValue                             (None)
// bool                               CallFunc_GetTrueProgress_MaintainPreviousValue                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (None)

void UUI_InstallationStatus_C::UpdateModProgress(int32 Progress, enum class EInstallStatus NewInstallationStatus, enum class ELibraryProgressState InstallationPhase, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, double CallFunc_GetTrueProgress_ReturnValue, bool CallFunc_GetTrueProgress_MaintainPreviousValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "UpdateModProgress");

	Params::UUI_InstallationStatus_C_UpdateModProgress_Params Parms{};

	Parms.Progress = Progress;
	Parms.NewInstallationStatus = NewInstallationStatus;
	Parms.InstallationPhase = InstallationPhase;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetTrueProgress_ReturnValue = CallFunc_GetTrueProgress_ReturnValue;
	Parms.CallFunc_GetTrueProgress_MaintainPreviousValue = CallFunc_GetTrueProgress_MaintainPreviousValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.Event Set Bindings To Game Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              GameSlot                                                         (None)

void UUI_InstallationStatus_C::Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C* GameSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "Event Set Bindings To Game Slot");

	Params::UUI_InstallationStatus_C_Event_Set_Bindings_To_Game_Slot_Params Parms{};

	Parms.GameSlot = GameSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.PlayNotificationUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (None)
// class FText                        Message                                                          (None)

void UUI_InstallationStatus_C::PlayNotificationUpdate(double Duration, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "PlayNotificationUpdate");

	Params::UUI_InstallationStatus_C_PlayNotificationUpdate_Params Parms{};

	Parms.Duration = Duration;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.ExecuteUbergraph_UI_InstallationStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UUI_GameSlot_C*              K2Node_CustomEvent_GameSlot                                      (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// double                             K2Node_CustomEvent_Duration                                      (None)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (None)

void UUI_InstallationStatus_C::ExecuteUbergraph_UI_InstallationStatus(int32 EntryPoint, class UUI_GameSlot_C* K2Node_CustomEvent_GameSlot, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_CustomEvent_Duration, class FText K2Node_CustomEvent_Message, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "ExecuteUbergraph_UI_InstallationStatus");

	Params::UUI_InstallationStatus_C_ExecuteUbergraph_UI_InstallationStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GameSlot = K2Node_CustomEvent_GameSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


