#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
// (None)

class UClass* UPrimalItem_StartingNote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_StartingNote_C");

	return Clss;
}


// PrimalItem_StartingNote_C PrimalItem_StartingNote.Default__PrimalItem_StartingNote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_StartingNote_C* UPrimalItem_StartingNote_C::GetDefaultObj()
{
	static class UPrimalItem_StartingNote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_StartingNote_C*>(UPrimalItem_StartingNote_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_BPCanUse_ReturnValue                                    (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)
// float                              CallFunc_TimeSince_ReturnValue                                   (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_BPCanImplantSuicide_ReturnValue                         (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (None)

void UPrimalItem_StartingNote_C::BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool CallFunc_BPCanUse_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_TimeSince_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BPCanImplantSuicide_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPCanUse");

	Params::UPrimalItem_StartingNote_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_BPCanUse_ReturnValue = CallFunc_BPCanUse_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_TimeSince_ReturnValue = CallFunc_TimeSince_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPCanImplantSuicide_ReturnValue = CallFunc_BPCanImplantSuicide_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                     ItemCanvas                                                       (ZeroConstructor)
// struct FVector2D                   ItemCanvasSize                                                   (None)
// struct FVector2D                   ItemCanvasScale                                                  (None)
// bool                               bItemEnabled                                                     (None)
// struct FLinearColor                TheTintColor                                                     (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_BreakVector2D_X_2                                       (None)
// double                             CallFunc_BreakVector2D_Y_2                                       (None)
// double                             CallFunc_BreakVector2D_X_3                                       (None)
// double                             CallFunc_BreakVector2D_Y_3                                       (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (None)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_2                    (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// double                             CallFunc_BreakVector2D_X_4                                       (None)
// double                             CallFunc_BreakVector2D_Y_4                                       (None)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_3                    (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class UTexture2D*                  K2Node_Select_Default                                            (None)

void UPrimalItem_StartingNote_C::BPDrawItemIcon(class UCanvas* ItemCanvas, const struct FVector2D& ItemCanvasSize, const struct FVector2D& ItemCanvasScale, bool bItemEnabled, const struct FLinearColor& TheTintColor, bool Temp_bool_Variable, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPDrawItemIcon");

	Params::UPrimalItem_StartingNote_C_BPDrawItemIcon_Params Parms{};

	Parms.ItemCanvas = ItemCanvas;
	Parms.ItemCanvasSize = ItemCanvasSize;
	Parms.ItemCanvasScale = ItemCanvasScale;
	Parms.bItemEnabled = bItemEnabled;
	Parms.TheTintColor = TheTintColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_2 = CallFunc_Multiply_Vector2DFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_3 = CallFunc_Multiply_Vector2DFloat_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (ZeroConstructor)
// class UTexture2D*                  ReturnValue                                                      (ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class UTexture2D*                  K2Node_Select_Default                                            (None)

void UPrimalItem_StartingNote_C::BPGetItemIcon(class AShooterPlayerController* ForPC, class UTexture2D* ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemIcon");

	Params::UPrimalItem_StartingNote_C_BPGetItemIcon_Params Parms{};

	Parms.ForPC = ForPC;
	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (ZeroConstructor)
// bool                               IsLocal                                                          (None)
// bool                               bRetVal                                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// class FString                      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)

void UPrimalItem_StartingNote_C::IsLocalImplant(class AShooterPlayerController* ForPC, bool IsLocal, bool bRetVal, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_LinkedPlayerIDString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "IsLocalImplant");

	Params::UPrimalItem_StartingNote_C_IsLocalImplant_Params Parms{};

	Parms.ForPC = ForPC;
	Parms.IsLocal = IsLocal;
	Parms.bRetVal = bRetVal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LinkedPlayerIDString_ReturnValue = CallFunc_LinkedPlayerIDString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemNameIn                                                       (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class AShooterPlayerController*    ForPC                                                            (None)
// class FString                      ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsLocalImplant_IsLocal                                  (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      K2Node_Select_Default                                            (None)

void UPrimalItem_StartingNote_C::BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC, const class FString& ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsLocalImplant_IsLocal, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemName");

	Params::UPrimalItem_StartingNote_C_BPGetItemName_Params Parms{};

	Parms.ItemNameIn = ItemNameIn;
	Parms.ForPC = ForPC;
	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsLocalImplant_IsLocal = CallFunc_IsLocalImplant_IsLocal;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<double>                     SurvData                                                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      OutString                                                        (AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      RetVal                                                           (ContainsInstancedReference, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// double                             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FArrayOfStrings             CallFunc_Array_Get_Item_1                                        (Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Array_Get_Item_2                                        (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Len_ReturnValue                                         (None)
// class FString                      CallFunc_Array_Get_Item_3                                        (SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)
// class FString                      CallFunc_Array_Get_Item_4                                        (AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Array_Get_Item_5                                        (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (None)
// int32                              CallFunc_Len_ReturnValue_1                                       (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UPrimalItem_StartingNote_C::Get_Survival_Quotient_String(const TArray<double>& SurvData, const class FString& OutString, const class FString& RetVal, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FArrayOfStrings& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Array_Get_Item_3, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "Get Survival Quotient String");

	Params::UPrimalItem_StartingNote_C_Get_Survival_Quotient_String_Params Parms{};

	Parms.SurvData = SurvData;
	Parms.OutString = OutString;
	Parms.RetVal = RetVal;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InDescription                                                    (AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// bool                               bGetLongDescription                                              (None)
// class AShooterPlayerController*    ForPC                                                            (ZeroConstructor)
// class FString                      ReturnValue                                                      (Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// double                             FloatCastVar                                                     (None)
// class FString                      SecondaryString                                                  (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// double                             CallFunc_GetPersistentTimeInSeconds_ReturnValue                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor)
// bool                               CallFunc_BPCanImplantSuicide_ReturnValue                         (None)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)
// int32                              CallFunc_Max_ReturnValue                                         (None)
// float                              CallFunc_TimeSince_ReturnValue                                   (None)
// class FString                      CallFunc_BPFormatAsTime_ReturnValue                              (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (AutoWeak, ContainsInstancedReference, SimpleDisplay, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// class FText                        CallFunc_Format_ReturnValue                                      (AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Round_ReturnValue                                       (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (AutoWeak, SimpleDisplay, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (None)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (ContainsInstancedReference, AssetRegistrySearchable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (AssetRegistrySearchable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue_2                                    (AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue_3                                    (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)

void UPrimalItem_StartingNote_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC, const class FString& ReturnValue, double FloatCastVar, const class FString& SecondaryString, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_GetPersistentTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_BPCanImplantSuicide_ReturnValue, class AShooterGameState* K2Node_DynamicCast_AsShooter_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Subtract_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_TimeSince_ReturnValue, const class FString& CallFunc_BPFormatAsTime_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, class FText CallFunc_Format_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleFloat_A_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemDescription");

	Params::UPrimalItem_StartingNote_C_BPGetItemDescription_Params Parms{};

	Parms.InDescription = InDescription;
	Parms.bGetLongDescription = bGetLongDescription;
	Parms.ForPC = ForPC;
	Parms.ReturnValue = ReturnValue;
	Parms.FloatCastVar = FloatCastVar;
	Parms.SecondaryString = SecondaryString;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPersistentTimeInSeconds_ReturnValue = CallFunc_GetPersistentTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_BPCanImplantSuicide_ReturnValue = CallFunc_BPCanImplantSuicide_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_State = K2Node_DynamicCast_AsShooter_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_TimeSince_ReturnValue = CallFunc_TimeSince_ReturnValue;
	Parms.CallFunc_BPFormatAsTime_ReturnValue = CallFunc_BPFormatAsTime_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast = CallFunc_Add_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast = CallFunc_Subtract_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      OptionalInitWorld                                                (ZeroConstructor)
// class FString                      Temp_string_Variable                                             (ContainsInstancedReference, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class FString                      Temp_string_Variable_1                                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable                                                (None)
// class FString                      Temp_string_Variable_2                                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_3                                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_4                                           (SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_5                                           (ContainsInstancedReference, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               Temp_bool_Variable                                               (None)
// int32                              Temp_int_Variable_1                                              (None)
// class FText                        Temp_text_Variable                                               (AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_1                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_2                                             (AssetRegistrySearchable, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_3                                             (ContainsInstancedReference, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        Temp_text_Variable_4                                             (ContainsInstancedReference, AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               Temp_bool_Variable_1                                             (None)
// class FString                      Temp_string_Variable_6                                           (AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_7                                           (Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable_2                                              (None)
// class FString                      Temp_string_Variable_8                                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_9                                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_10                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_11                                          (ContainsInstancedReference, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class FString                      Temp_string_Variable_12                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// class FString                      Temp_string_Variable_13                                          (ContainsInstancedReference, SimpleDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable_3                                              (None)
// class FString                      K2Node_Select_Default                                            (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsOfficialServer_ReturnValue                            (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class FName>                K2Node_MakeArray_Array                                           (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<class UClass*>              K2Node_MakeArray_Array_1                                         (ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_HasCustomItemData_ReturnValue                           (None)
// TArray<class UObject*>             K2Node_MakeArray_Array_2                                         (ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ZeroConstructor, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// class UPrimalInventoryComponent*   CallFunc_GetInitializeItemOwnerInventory_ReturnValue             (ZeroConstructor)
// float                              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor)
// class UPrimalItem*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class UObject*                     K2Node_Select_Default_1                                          (ZeroConstructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// float                              CallFunc_Array_Get_Item_3                                        (None)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (None)
// class AShooterPlayerController*    CallFunc_GetSpawnedForController_ReturnValue                     (ZeroConstructor)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (ZeroConstructor)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// float                              CallFunc_Array_Get_Item_5                                        (None)
// class FString                      K2Node_Select_Default_2                                          (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// TArray<class FString>              K2Node_MakeArray_Array_3                                         (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_SelectString_ReturnValue                                (AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// float                              CallFunc_Array_Get_Item_6                                        (None)
// float                              CallFunc_Array_Get_Item_7                                        (None)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (None)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (None)
// class UTexture2D*                  CallFunc_Array_Get_Item_8                                        (ZeroConstructor)
// class FString                      K2Node_Select_Default_3                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_SelectInt_ReturnValue                                   (None)
// class UTexture2D*                  CallFunc_Array_Get_Item_9                                        (ZeroConstructor)
// class FString                      K2Node_Select_Default_4                                          (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UTexture2D*                  CallFunc_Array_Get_Item_10                                       (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        K2Node_Select_Default_5                                          (ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Get_Survival_Quotient_String_OutString                  (AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Array_Get_Item_11                                       (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Array_Get_Item_12                                       (SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Array_Get_Item_13                                       (ContainsInstancedReference, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<double>                     CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast      (ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (None)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (None)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (None)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (None)
// double                             CallFunc_FFloor_A_ImplicitCast_3                                 (None)

void UPrimalItem_StartingNote_C::BPPreInitializeItem(class UWorld* OptionalInitWorld, const class FString& Temp_string_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& Temp_string_Variable_1, int32 Temp_int_Variable, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, bool Temp_bool_Variable, int32 Temp_int_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, int32 Temp_int_Variable_2, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable_12, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& Temp_string_Variable_13, int32 Temp_int_Variable_3, const class FString& K2Node_Select_Default, bool CallFunc_IsOfficialServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class FName>& K2Node_MakeArray_Array, const TArray<class UClass*>& K2Node_MakeArray_Array_1, bool CallFunc_HasCustomItemData_ReturnValue, const TArray<class UObject*>& K2Node_MakeArray_Array_2, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UPrimalInventoryComponent* CallFunc_GetInitializeItemOwnerInventory_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_1, class UPrimalItem* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Select_Default_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Array_Get_Item_3, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FFloor_ReturnValue_1, class AShooterPlayerController* CallFunc_GetSpawnedForController_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_4, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_LinkedPlayerIDString_ReturnValue, class UPrimalPlayerDataBP_Base_C* K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Array_Get_Item_5, const class FString& K2Node_Select_Default_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, const TArray<class FString>& K2Node_MakeArray_Array_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, const class FString& CallFunc_SelectString_ReturnValue, float CallFunc_Array_Get_Item_6, float CallFunc_Array_Get_Item_7, int32 CallFunc_FFloor_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, class UTexture2D* CallFunc_Array_Get_Item_8, const class FString& K2Node_Select_Default_3, int32 CallFunc_SelectInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_9, const class FString& K2Node_Select_Default_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText K2Node_Select_Default_5, const class FString& CallFunc_Get_Survival_Quotient_String_OutString, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Array_Get_Item_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_13, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const TArray<double>& CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, const TArray<float>& K2Node_MakeStruct_CustomDataFloats_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2, double CallFunc_FFloor_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPPreInitializeItem");

	Params::UPrimalItem_StartingNote_C_BPPreInitializeItem_Params Parms{};

	Parms.OptionalInitWorld = OptionalInitWorld;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_string_Variable_12 = Temp_string_Variable_12;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_string_Variable_13 = Temp_string_Variable_13;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsOfficialServer_ReturnValue = CallFunc_IsOfficialServer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_HasCustomItemData_ReturnValue = CallFunc_HasCustomItemData_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_GetInitializeItemOwnerInventory_ReturnValue = CallFunc_GetInitializeItemOwnerInventory_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_GetSpawnedForController_ReturnValue = CallFunc_GetSpawnedForController_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LinkedPlayerIDString_ReturnValue = CallFunc_LinkedPlayerIDString_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base = K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_MakeStruct_CustomItemData = K2Node_MakeStruct_CustomItemData;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Get_Survival_Quotient_String_OutString = CallFunc_Get_Survival_Quotient_String_OutString;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast = CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast_1 = CallFunc_FFloor_A_ImplicitCast_1;
	Parms.K2Node_MakeStruct_CustomDataFloats_ImplicitCast = K2Node_MakeStruct_CustomDataFloats_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_FFloor_A_ImplicitCast_2 = CallFunc_FFloor_A_ImplicitCast_2;
	Parms.CallFunc_FFloor_A_ImplicitCast_3 = CallFunc_FFloor_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BlueprintUsed
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_StartingNote_C::BlueprintUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BlueprintUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPOnUpdatedItemContextMenu
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_StartingNote_C::BPOnUpdatedItemContextMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPOnUpdatedItemContextMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// bool                               CallFunc_CanUse_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)

void UPrimalItem_StartingNote_C::ExecuteUbergraph_PrimalItem_StartingNote(int32 EntryPoint, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_CanUse_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "ExecuteUbergraph_PrimalItem_StartingNote");

	Params::UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_CanUse_ReturnValue = CallFunc_CanUse_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


