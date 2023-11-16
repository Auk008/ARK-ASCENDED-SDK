#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x1D0 - 0x58)
// Class GeometryCacheUSD.GeometryCacheTrackUsd
class UGeometryCacheTrackUsd : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_2F8F[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrackUsd* GetDefaultObj();

};

// 0x0 (0x750 - 0x750)
// Class GeometryCacheUSD.GeometryCacheUsdComponent
class UGeometryCacheUsdComponent : public UGeometryCacheComponent
{
public:

	static class UClass* StaticClass();
	static class UGeometryCacheUsdComponent* GetDefaultObj();

};

}


