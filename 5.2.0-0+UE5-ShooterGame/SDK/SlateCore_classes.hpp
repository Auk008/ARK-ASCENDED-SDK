#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleAsset
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*        CustomStyle;                                       // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class USlateWidgetStyleAsset* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class SlateCore.FontBulkData
class UFontBulkData : public UObject
{
public:
	uint8                                        Pad_27A0[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFontBulkData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontFaceInterface
class IFontFaceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFontFaceInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontProviderInterface
class IFontProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFontProviderInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateTypes
class USlateTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class USlateTypes* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerBase
class USlateWidgetStyleContainerBase : public UObject
{
public:
	uint8                                        Pad_27AA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateWidgetStyleContainerBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerInterface
class ISlateWidgetStyleContainerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISlateWidgetStyleContainerInterface* GetDefaultObj();

};

// 0x998 (0x9C0 - 0x28)
// Class SlateCore.SlateThemeManager
class USlateThemeManager : public UObject
{
public:
	struct FGuid                                 CurrentThemeId;                                    // 0x28(0x10)(None)
	struct FStyleColorList                       ActiveColors;                                      // 0x38(0x988)(None)

	static class UClass* StaticClass();
	static class USlateThemeManager* GetDefaultObj();

};

}


