#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CustomComboBoxInterface.BPI_CustomComboBoxInterface_C
class IBPI_CustomComboBoxInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CustomComboBoxInterface_C* GetDefaultObj();

	void OnOptionSelectedInterface(const class FString& Option, int64 ID, class UUI_CustomComboBoxOption_C* OptionWidget);
};

}


