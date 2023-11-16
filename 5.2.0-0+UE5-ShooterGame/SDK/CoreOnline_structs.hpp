#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECoreOnlineDummy : uint8
{
	Dummy                          = 0,
	ECoreOnlineDummy_MAX           = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreOnline.JoinabilitySettings
struct FJoinabilitySettings
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(None)
	bool                                         bPublicSearchable;                                 // 0x8(0x1)(None)
	bool                                         bAllowInvites;                                     // 0x9(0x1)(None)
	bool                                         bJoinViaPresence;                                  // 0xA(0x1)(None)
	bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(None)
	int32                                        MaxPlayers;                                        // 0xC(0x4)(None)
	int32                                        MaxPartySize;                                      // 0x10(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreOnline.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_313A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


