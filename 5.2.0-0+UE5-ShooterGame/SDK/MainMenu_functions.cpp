#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenu.MainMenu_C
// (Actor)

class UClass* AMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_C");

	return Clss;
}


// MainMenu_C MainMenu.Default__MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenu_C* AMainMenu_C::GetDefaultObj()
{
	static class AMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenu_C*>(AMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenu.MainMenu_C.K2Node_MatineeController_1_MatineeEvent
// (BlueprintEvent)
// Parameters:

void AMainMenu_C::K2Node_MatineeController_1_MatineeEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "K2Node_MatineeController_1_MatineeEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.K2Node_MatineeController_1_Finished
// (BlueprintEvent)
// Parameters:

void AMainMenu_C::K2Node_MatineeController_1_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "K2Node_MatineeController_1_Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ShowVisualSettingsPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::ShowVisualSettingsPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ShowVisualSettingsPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.HideVisualSettingsPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::HideVisualSettingsPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "HideVisualSettingsPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (Edit, ZeroConstructor)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UReMainMenuUI_ASA_C*         CallFunc_Create_ReturnValue                                      (None)

void AMainMenu_C::ExecuteUbergraph_MainMenu(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UReMainMenuUI_ASA_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ExecuteUbergraph_MainMenu");

	Params::AMainMenu_C_ExecuteUbergraph_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Instance = K2Node_DynamicCast_AsShooter_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


