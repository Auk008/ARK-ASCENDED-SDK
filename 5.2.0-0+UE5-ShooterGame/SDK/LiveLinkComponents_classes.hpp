#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class LiveLinkComponents.LiveLinkComponentSettings
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<class UClass*, class UClass*>           DefaultControllerForRole;                          // 0x28(0x50)(None)

	static class UClass* StaticClass();
	static class ULiveLinkComponentSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class LiveLinkComponents.LiveLinkControllerBase
class ULiveLinkControllerBase : public UObject
{
public:
	struct FComponentReference                   ComponentPicker;                                   // 0x28(0x28)(None)
	uint8                                        Pad_13A0[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkControllerBase* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class LiveLinkComponents.LiveLinkLightController
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkLightController* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class LiveLinkComponents.LiveLinkTransformController
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x68(0x6)(None)
	uint8                                        Pad_13A5[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkTransformController* GetDefaultObj();

};

// 0xA8 (0x160 - 0xB8)
// Class LiveLinkComponents.LiveLinkComponentController
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0xB8(0x10)(ZeroConstructor)
	TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap;                                     // 0xC8(0x50)(ZeroConstructor)
	bool                                         bUpdateInEditor;                                   // 0x118(0x1)(None)
	uint8                                        Pad_13AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0x120(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerMapUpdatedDelegate;                    // 0x130(0x10)(ZeroConstructor)
	bool                                         bDisableEvaluateLiveLinkWhenSpawnable;             // 0x140(0x1)(None)
	bool                                         bEvaluateLiveLink;                                 // 0x141(0x1)(None)
	bool                                         bUpdateInPreviewEditor;                            // 0x142(0x1)(None)
	uint8                                        Pad_13B1[0x1D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkComponentController* GetDefaultObj();

	void SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation);
	void GetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& ReturnValue);
};

}


