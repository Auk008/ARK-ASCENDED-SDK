#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuButton.CheatMenuButton_C
// (None)

class UClass* UCheatMenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuButton_C");

	return Clss;
}


// CheatMenuButton_C CheatMenuButton.Default__CheatMenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuButton_C* UCheatMenuButton_C::GetDefaultObj()
{
	static class UCheatMenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuButton_C*>(UCheatMenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuButton.CheatMenuButton_C.OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (None)

void UCheatMenuButton_C::OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0");

	Params::UCheatMenuButton_C_OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenuButton.CheatMenuButton_C.OnLoaded_E74A95AD4E858FEFB820B09140E2E827
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (None)

void UCheatMenuButton_C::OnLoaded_E74A95AD4E858FEFB820B09140E2E827(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "OnLoaded_E74A95AD4E858FEFB820B09140E2E827");

	Params::UCheatMenuButton_C_OnLoaded_E74A95AD4E858FEFB820B09140E2E827_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenuButton.CheatMenuButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuButton.CheatMenuButton_C.ExecuteUbergraph_CheatMenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UClass*                      K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Dino_Character                  (Edit, ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (None)
// bool                               Temp_bool_Variable                                               (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (None)
// double                             Temp_real_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (None)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (None)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (None)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (None)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (None)
// class UClass*                      K2Node_Select_Default                                            (Edit, ZeroConstructor)
// double                             K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (None)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (None)

void UCheatMenuButton_C::ExecuteUbergraph_CheatMenuButton(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, class UClass* Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, bool Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double Temp_real_Variable, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable_2, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_BooleanXOR_ReturnValue, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class UClass* K2Node_Select_Default, double K2Node_Select_Default_1, bool CallFunc_IsChecked_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FText CallFunc_GetText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "ExecuteUbergraph_CheatMenuButton");

	Params::UCheatMenuButton_C_ExecuteUbergraph_CheatMenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Dino_Character = K2Node_ClassDynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


