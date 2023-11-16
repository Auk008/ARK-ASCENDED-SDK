#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7B0 - 0x768)
// WidgetBlueprintGeneratedClass UpdatingModsToast.UpdatingModsToast_C
class UUpdatingModsToast_C : public UPrimalUI_Toast
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ZeroConstructor)
	class URichTextBlock*                        MainText;                                          // 0x780(0x8)(Edit, ZeroConstructor)
	class UImage*                                ProgressImage;                                     // 0x788(0x8)(Edit, ZeroConstructor)
	class FText                                  OverrideText;                                      // 0x790(0x18)(None)
	class UMaterialInstanceDynamic*              ProgressBarMat;                                    // 0x7A8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUpdatingModsToast_C* GetDefaultObj();

	void UpdateProgressBar(double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Divide_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void UpdateMainText(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitCounter(int32 NewCounterMax, bool bInWillSetCounter);
	void IncrementCounter();
	void OverrideTextValueWithString(const class FString& NewText, bool HideProgressBar);
	void OverrideTextValue(class FText NewText, bool HideProgressBar);
	void Construct();
	void SetCounter(int32 NewCounter);
	void ExecuteUbergraph_UpdatingModsToast(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_Event_NewCounterMax, bool K2Node_Event_bInWillSetCounter, const class FString& K2Node_Event_NewText_1, bool K2Node_Event_HideProgressBar_1, class FText K2Node_Event_NewText, bool K2Node_Event_HideProgressBar, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, int32 K2Node_Event_NewCounter, enum class ESlateVisibility K2Node_Select_Default_1);
};

}


