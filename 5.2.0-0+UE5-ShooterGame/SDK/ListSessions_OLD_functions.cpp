#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ListSessions_OLD.ListSessions_OLD_C
// (None)

class UClass* UListSessions_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListSessions_OLD_C");

	return Clss;
}


// ListSessions_OLD_C ListSessions_OLD.Default__ListSessions_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListSessions_OLD_C* UListSessions_OLD_C::GetDefaultObj()
{
	static class UListSessions_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListSessions_OLD_C*>(UListSessions_OLD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListSessions_OLD.ListSessions_OLD_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (None)

void UListSessions_OLD_C::GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "GetSizeboxForExtraHandheldScaling");

	Params::UListSessions_OLD_C_GetSizeboxForExtraHandheldScaling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UListSessions_OLD_C::GetWidgetToScaleForHandheld(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "GetWidgetToScaleForHandheld");

	Params::UListSessions_OLD_C_GetWidgetToScaleForHandheld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UListSessions_OLD_C::BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UListSessions_OLD_C_BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UListSessions_OLD_C::BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UListSessions_OLD_C_BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UListSessions_OLD_C::BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UListSessions_OLD_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListSessions_OLD.ListSessions_OLD_C.ExecuteUbergraph_ListSessions_OLD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (None)

void UListSessions_OLD_C::ExecuteUbergraph_ListSessions_OLD(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked, bool K2Node_ComponentBoundEvent_bIsChecked_2, bool K2Node_ComponentBoundEvent_bIsChecked_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListSessions_OLD_C", "ExecuteUbergraph_ListSessions_OLD");

	Params::UListSessions_OLD_C_ExecuteUbergraph_ListSessions_OLD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


