#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PageWidgets.BPI_PageWidgets_C
class IBPI_PageWidgets_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PageWidgets_C* GetDefaultObj();

	void UpdateSearch(class FText SearchInput);
	void GetClose_B(class UWidget* Widget);
	void OnSearch(class FText Search_Input);
};

}


