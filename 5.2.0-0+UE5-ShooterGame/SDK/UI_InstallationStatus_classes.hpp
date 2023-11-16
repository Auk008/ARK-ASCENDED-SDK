#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x36B - 0x330)
// WidgetBlueprintGeneratedClass UI_InstallationStatus.UI_InstallationStatus_C
class UUI_InstallationStatus_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x338(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeOutAnim;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Boarder_FullWindow;                                // 0x348(0x8)(Edit, ZeroConstructor)
	class UProgressBar*                          ProgressBar_InstallProgress;                       // 0x350(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Status;                                       // 0x358(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x360(0x8)(ZeroConstructor)
	enum class EInstallStatus                    Installation_Status;                               // 0x368(0x1)(None)
	bool                                         Initialized;                                       // 0x369(0x1)(None)
	enum class EInstallStatus                    PreNotifState;                                     // 0x36A(0x1)(None)

	static class UClass* StaticClass();
	static class UUI_InstallationStatus_C* GetDefaultObj();

	void SetTextBasedOnState(enum class EInstallStatus Index, enum class EInstallStatus Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue);
	void GetTrueProgress(int32 Amount, enum class ELibraryProgressState InstalationState, double ReturnValue, bool MaintainPreviousValue, int32 NewLocalVar, double Temp_real_Variable, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Conv_IntToDouble_ReturnValue, double Temp_real_Variable_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState Temp_byte_Variable, double K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void UpdateColor(enum class EInstallStatus Install_Status, enum class EInstallStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void UpdateModProgress(int32 Progress, enum class EInstallStatus NewInstallationStatus, enum class ELibraryProgressState InstallationPhase, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, double CallFunc_GetTrueProgress_ReturnValue, bool CallFunc_GetTrueProgress_MaintainPreviousValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C* GameSlot);
	void PlayNotificationUpdate(double Duration, class FText Message);
	void ExecuteUbergraph_UI_InstallationStatus(int32 EntryPoint, class UUI_GameSlot_C* K2Node_CustomEvent_GameSlot, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_CustomEvent_Duration, class FText K2Node_CustomEvent_Message, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


