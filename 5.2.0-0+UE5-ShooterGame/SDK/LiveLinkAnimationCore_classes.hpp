#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x350 - 0x348)
// Class LiveLinkAnimationCore.LiveLinkInstance
class ULiveLinkInstance : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x348(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ULiveLinkInstance* GetDefaultObj();

	void SetSubject(const struct FLiveLinkSubjectName& SubjectName);
	void SetRetargetAsset(class UClass* RetargetAsset);
};

// 0x0 (0x28 - 0x28)
// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
class ULiveLinkRetargetAsset : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkRetargetAsset* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLinkAnimationCore.LiveLinkRemapAsset
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	uint8                                        Pad_2F86[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkRemapAsset* GetDefaultObj();

	void RemapCurveElements(TMap<class FName, float> CurveItems);
	void GetRemappedCurveName(class FName CurveName, class FName ReturnValue);
	void GetRemappedBoneName(class FName BoneName, class FName ReturnValue);
};

}


