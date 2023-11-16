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

// 0x1 (0x1 - 0x0)
// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm
struct IScorchedEarthDayCycle_Interface_C_GetIsElectricalStorm_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
struct IScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params
{
public:
	TArray<class AActor*>                        LocationRegions;                                   // 0x0(0x10)(None)
	int32                                        CurrentRegion;                                     // 0x10(0x4)(None)
	uint8                                        Pad_116C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Radius;                                            // 0x18(0x8)(None)
};

}
}


