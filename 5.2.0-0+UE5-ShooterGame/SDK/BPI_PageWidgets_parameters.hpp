#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function BPI_PageWidgets.BPI_PageWidgets_C.UpdateSearch
struct IBPI_PageWidgets_C_UpdateSearch_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function BPI_PageWidgets.BPI_PageWidgets_C.GetClose_B
struct IBPI_PageWidgets_C_GetClose_B_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function BPI_PageWidgets.BPI_PageWidgets_C.OnSearch
struct IBPI_PageWidgets_C_OnSearch_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(None)
};

}
}


