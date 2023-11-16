#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x880 (0x2148 - 0x18C8)
// WidgetBlueprintGeneratedClass ReHostSession_ASA.ReHostSession_ASA_C
class UReHostSession_ASA_C : public UUI_HostSession
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x18C8(0x8)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient)
	class UWidgetAnimation*                      Close;                                             // 0x18D0(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x18D8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   AcceptPassword;                                    // 0x18E0(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      ActiveEventTextBlock;                              // 0x18E8(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            ActiveModsScrollBox;                               // 0x18F0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AdminLogging;                                      // 0x18F8(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      AdminTextField;                                    // 0x1900(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          AdvancedBox;                                       // 0x1908(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       AdvancedWidgetSiwtcher;                            // 0x1910(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowAnyoneBabyImprintCuddle;                      // 0x1918(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowCaveBuildingPvE;                              // 0x1920(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowCustomRecipes;                                // 0x1928(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowFlyerCarryPvE;                                // 0x1930(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowFlyerSpeedLevelingCheckbox;                   // 0x1938(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowMultiplePlatformFloorsCheckBox;               // 0x1940(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowRaidDinoFeeding;                              // 0x1948(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowSpeedLevelingCheckbox;                        // 0x1950(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AllowUnlimitedRespecsCheckBox;                     // 0x1958(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  AlphaKillXPMultiplierSlider;                       // 0x1960(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ARKModsButton;                                     // 0x1968(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  AutoPvEStartTimeSecondsSlider;                     // 0x1970(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  AutoPvEStopTimeSecondsSlider;                      // 0x1978(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AutoPvETimer;                                      // 0x1980(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* AutoPvEUseSystemTime;                              // 0x1988(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BabyCuddleGracePeriodMultiplierSlider;             // 0x1990(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BabyCuddleIntervalMultiplierSlider;                // 0x1998(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BabyCuddleLoseImprintQualitySpeedMultiplierSlider; // 0x19A0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BabyFoodConsumptionSpeedSlider;                    // 0x19A8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BabyImprintingStatScaleMultiplierSlider;           // 0x19B0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BabyMatureSpeedSlider;                             // 0x19B8(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1A_C*         BackButton;                                        // 0x19C0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* bDisablePhotoMode;                                 // 0x19C8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  BossKillXPMultiplierSlider;                        // 0x19D0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Bracket_SmallText;                                 // 0x19D8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Bracket_SmallText_1;                               // 0x19E0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Bracket_SmallText_2;                               // 0x19E8(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       ButtonsWidgetSwitcher;                             // 0x19F0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x19F8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelPassword;                                    // 0x1A00(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CaveKillXPMultiplierSlider;                        // 0x1A08(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ChooseDifficulty;                                  // 0x1A10(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ClearDediData;                                     // 0x1A18(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CloseHubButton;                                    // 0x1A20(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CorpseDecompositionTimeSlider;                     // 0x1A28(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CraftingSkillBonusSlider;                          // 0x1A30(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CraftXPMultiplierSlider;                           // 0x1A38(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CropDecaySpeedSlider;                              // 0x1A40(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CropGrowthSpeedSlider;                             // 0x1A48(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CustomRecipeEffectivenessSlider;                   // 0x1A50(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  CustomRecipeSkillSlider;                           // 0x1A58(0x8)(Edit, ZeroConstructor)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x1A60(0x8)(Edit, ZeroConstructor)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x1A68(0x8)(Edit, ZeroConstructor)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_14;                      // 0x1A70(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DayCycleSpeedSlider;                               // 0x1A78(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DayTimeSpeedSlider;                                // 0x1A80(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   DeleteSingleplayerData;                            // 0x1A88(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             DestroyOldBiomeStructuresAndDinos;                 // 0x1A90(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          DifficultyCanvas;                                  // 0x1A98(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DifficultySlider;                                  // 0x1AA0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoCharacterFoodDrainSlider;                      // 0x1AA8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoCharacterHealthRecoverySlider;                 // 0x1AB0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoCharacterStaminaDrainSlider;                   // 0x1AB8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoCountSlider;                                   // 0x1AC0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoDamageSlider;                                  // 0x1AC8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoHarvestingDamageSlider;                        // 0x1AD0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoResistanceSlider;                              // 0x1AD8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  DinoTurretDamageSlider;                            // 0x1AE0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableDinoDecayPvE;                               // 0x1AE8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableDinoRidingCheckbox;                         // 0x1AF0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableDinoTameCheckbox;                           // 0x1AF8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableFriendlyFire;                               // 0x1B00(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableImprintDinoBuff;                            // 0x1B08(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableLootCrates;                                 // 0x1B10(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisablePvEGamma;                                   // 0x1B18(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableStructureDecayPvE;                          // 0x1B20(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* DisableStructurePlacementCollisionCheckbox;        // 0x1B28(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   EasyPreset;                                        // 0x1B30(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  EggHatchSpeedSlider;                               // 0x1B38(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableExtraStructurePreventionVolumes;             // 0x1B40(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnablePvPGamma;                                    // 0x1B48(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  ExplorerNoteXPMultiplierSlider;                    // 0x1B50(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  FishingLootQualitySlider;                          // 0x1B58(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* FlyerPlatformAllowUnalignedDinoBasing;             // 0x1B60(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ForceAllowCaveFlyers;                              // 0x1B68(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  FuelConsumptionIntervalMultiplierSlider;           // 0x1B70(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  GenericXPMultiplierSlider;                         // 0x1B78(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   GetModsButton;                                     // 0x1B80(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   GetModsButton_1;                                   // 0x1B88(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* GlobalVoiceChatCheckbox;                           // 0x1B90(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HardPreset;                                        // 0x1B98(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HarvestAmountSlider;                               // 0x1BA0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HarvestHealthSlider;                               // 0x1BA8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HarvestXPMultiplierSlider;                         // 0x1BB0(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Main_Style1_C* Header_GridPanel;                                  // 0x1BB8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HostDedicatedButton;                               // 0x1BC0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HostListenServerButton;                            // 0x1BC8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HostSessionButton;                                 // 0x1BD0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_186;                                         // 0x1BD8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* IncreasePvPRespawnInterval;                        // 0x1BE0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  IncreasePvPRespawnIntervalBaseAmountSlider;        // 0x1BE8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  IncreasePvPRespawnIntervalCheckPeriodSlider;       // 0x1BF0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  IncreasePvPRespawnIntervalSlider;                  // 0x1BF8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  ItemDecompositionTimeSlider;                       // 0x1C00(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  KillXPMultiplierSlider;                            // 0x1C08(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  LayEggIntervalSlider;                              // 0x1C10(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      ListenServerTetherDistanceMultiplier;              // 0x1C18(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  ListenServerTetherDistanceMultiplierSlider;        // 0x1C20(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            MapDescriptionLabel;                               // 0x1C28(0x8)(Edit, ZeroConstructor)
	class UImage*                                MapImage;                                          // 0x1C30(0x8)(Edit, ZeroConstructor)
	class UBorder*                               MapImage_Border;                                   // 0x1C38(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  MatingIntervalSlider;                              // 0x1C40(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* MaxDifficultyCheckbox;                             // 0x1C48(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      MaxExperienceDinoEditBox;                          // 0x1C50(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      MaxExperiencePlayerEditBox;                        // 0x1C58(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      MaxNumberOfPlayersInTribeEditBox;                  // 0x1C60(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  MaxStructuresInRange;                              // 0x1C68(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   MediumPreset;                                      // 0x1C70(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            ModDescriptionLabel;                               // 0x1C78(0x8)(Edit, ZeroConstructor)
	class UImage*                                ModImage;                                          // 0x1C80(0x8)(Edit, ZeroConstructor)
	class UBorder*                               ModImage_Border;                                   // 0x1C88(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ModInfoBtn_Active;                                 // 0x1C90(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ModInfoBtn_List;                                   // 0x1C98(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ModInfoBtn_Map;                                    // 0x1CA0(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            ModsScrollBox;                                     // 0x1CA8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  NightTimeSpeedSlider;                              // 0x1CB0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* NonPermanentDiseases;                              // 0x1CB8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* NotifyPlayerJoinedCheckbox;                        // 0x1CC0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* NotifyPlayerLeftCheckbox;                          // 0x1CC8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* NoTributesDownloadsCheckbox;                       // 0x1CD0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* OnlyAllowSpecifiedEngrams;                         // 0x1CD8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* OverideStructurePlatformPrevention;                // 0x1CE0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* OverrideStartTimeCheckbox;                         // 0x1CE8(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             OverwriteMapWithBackupChkBox;                      // 0x1CF0(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       PanelSwitcher;                                     // 0x1CF8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PassiveDefensesDamageRiderlessDinos;               // 0x1D00(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      PasswordField;                                     // 0x1D08(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Damage_Slider;              // 0x1D10(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Food_Slider;                // 0x1D18(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Health_Slider;              // 0x1D20(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Oxygen_Slider;              // 0x1D28(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Speed_Slider;               // 0x1D30(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Stamina_Slider;             // 0x1D38(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Temperature_Slider;         // 0x1D40(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_TemperatureFortitude_Slider; // 0x1D48(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Torpidity_Slider;           // 0x1D50(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Water_Slider;               // 0x1D58(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamed_Weight_Slider;              // 0x1D60(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Damage_Slider;           // 0x1D68(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Food_Slider;             // 0x1D70(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Health_Slider;           // 0x1D78(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Oxygen_Slider;           // 0x1D80(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Speed_Slider;            // 0x1D88(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Stamina_Slider;          // 0x1D90(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Temperature_Slider;      // 0x1D98(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_TemperatureFortitude_Slider; // 0x1DA0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Torpidity_Slider;        // 0x1DA8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Water_Slider;            // 0x1DB0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAdd_Weight_Slider;           // 0x1DB8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Damage_Slider;           // 0x1DC0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Food_Slider;             // 0x1DC8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Health_Slider;           // 0x1DD0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Oxygen_Slider;           // 0x1DD8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Speed_Slider;            // 0x1DE0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Stamina_Slider;          // 0x1DE8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Temperature_Slider;      // 0x1DF0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_TemperatureFortitude_Slider; // 0x1DF8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Torpidity_Slider;        // 0x1E00(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Water_Slider;            // 0x1E08(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoTamedAff_Weight_Slider;           // 0x1E10(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Damage_Slider;               // 0x1E18(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Food_Slider;                 // 0x1E20(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Health_Slider;               // 0x1E28(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Oxygen_Slider;               // 0x1E30(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Speed_Slider;                // 0x1E38(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Stamina_Slider;              // 0x1E40(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Temperature_Slider;          // 0x1E48(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_TemperatureFortitude_Slider; // 0x1E50(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Torpidity_Slider;            // 0x1E58(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Water_Slider;                // 0x1E60(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsDinoWild_Weight_Slider;               // 0x1E68(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Damage_Slider;                 // 0x1E70(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Food_Slider;                   // 0x1E78(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Health_Slider;                 // 0x1E80(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Oxygen_Slider;                 // 0x1E88(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Speed_Slider;                  // 0x1E90(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Stamina_Slider;                // 0x1E98(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Temperature_Slider;            // 0x1EA0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_TemperatureFortitude_Slider;   // 0x1EA8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Torpidity_Slider;              // 0x1EB0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Water_Slider;                  // 0x1EB8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerLevelStatsPlayer_Weight_Slider;                 // 0x1EC0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PerPlatformMaxStructuresMultiplier_Slider;         // 0x1EC8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PhotoModeRangeLimit;                               // 0x1ED0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerCharacterFoodDrainSlider;                    // 0x1ED8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerCharacterHealthRecoverySlider;               // 0x1EE0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerCharacterStaminaDrainSlider;                 // 0x1EE8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerCharacterWaterDrainSlider;                   // 0x1EF0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerDamageSlider;                                // 0x1EF8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerHarvestingDamageSlider;                      // 0x1F00(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PlayerResistanceSlider;                            // 0x1F08(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PoopIntervalSlider;                                // 0x1F10(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   PopModBtn;                                         // 0x1F18(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PreventDiseases;                                   // 0x1F20(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PreventDownloadDinos;                              // 0x1F28(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PreventDownloadItems;                              // 0x1F30(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PreventDownloadSurvivors;                          // 0x1F38(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PreventOfflinePvP;                                 // 0x1F40(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      PreventOfflinePvPIntervalEditBox;                  // 0x1F48(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PreventOfflinePvPIntervalSlider;                   // 0x1F50(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PreventTribeAlliances;                             // 0x1F58(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             PrivateMatchCB;                                    // 0x1F60(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ProximityChatCheckbox;                             // 0x1F68(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   PushModBtn;                                        // 0x1F70(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PvEAllowTribeWar;                                  // 0x1F78(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PvEAllowTribeWarCancel;                            // 0x1F80(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PvEDinoDecayPeriodSlider;                          // 0x1F88(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PvEStructureDecayPeriodSlider;                     // 0x1F90(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* PvPDinoDecay;                                      // 0x1F98(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  PvPZoneStructureDamageSlider;                      // 0x1FA0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  RaidDinoCharacterFoodDrainMultiplierSlider;        // 0x1FA8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ResetSettings;                                     // 0x1FB0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  ResourceNoReplenishRadiusPlayersSlider;            // 0x1FB8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  ResourceNoReplenishRadiusStructuresSlider;         // 0x1FC0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  ResourcesRespawnPeriodSlider;                      // 0x1FC8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   SaveSettings;                                      // 0x1FD0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ServerCrosshairCheckbox;                           // 0x1FD8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ServerForceNoHUDCheckbox;                          // 0x1FE0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ServerHardcoreCheckbox;                            // 0x1FE8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ServerPvECheckbox;                                 // 0x1FF0(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      SessionNameField;                                  // 0x1FF8(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0x2000(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ShowCreativeModeCheckbox;                          // 0x2008(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ShowFloatingDamageText;                            // 0x2010(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  SpecialXPMultiplierSlider;                         // 0x2018(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  SpoilingTimeSlider;                                // 0x2020(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  StartTimeHourSlider;                               // 0x2028(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  StructureDamageRepairCooldownSlider;               // 0x2030(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  StructureDamageSlider;                             // 0x2038(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  StructurePreventResourceRadiusMultiplierSlider;    // 0x2040(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  StructureResistanceSlider;                         // 0x2048(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* Submenu_Arks;                                      // 0x2050(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* Submenu_GameRules;                                 // 0x2058(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       Submenu_GridPanel;                                 // 0x2060(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* Submenu_Mods;                                      // 0x2068(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* SubmenuAdvanced;                                   // 0x2070(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* SubmenuEngrams;                                    // 0x2078(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  SupplyCrateLootQualitySlider;                      // 0x2080(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  TamedKillXPMultiplierSlider;                       // 0x2088(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  TamingSpeedSlider;                                 // 0x2090(0x8)(Edit, ZeroConstructor)
	class UBorder*                               TextEntryBorder;                                   // 0x2098(0x8)(Edit, ZeroConstructor)
	class UBorder*                               TextEntryBorder_1;                                 // 0x20A0(0x8)(Edit, ZeroConstructor)
	class UBorder*                               TextEntryBorder_2;                                 // 0x20A8(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            TheScrollBox;                                      // 0x20B0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* ThirdPersonCheckbox;                               // 0x20B8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  UnclaimedKillXPMultiplierSlider;                   // 0x20C0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UpdateModsButton;                                  // 0x20C8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   UpdateModsButton_1;                                // 0x20D0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* UseSingleplayerSettingsCheckbox;                   // 0x20D8(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcherARKS;                                // 0x20E0(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcherGameRules;                           // 0x20E8(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcherMods;                                // 0x20F0(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  WildKillXPMultiplierSlider;                        // 0x20F8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  XPSlider;                                          // 0x2100(0x8)(Edit, ZeroConstructor)
	class UMaterial*                             MapImage_BaseMaterial;                             // 0x2108(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              MapMaterial;                                       // 0x2110(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            PreviewImageDefaultTexture;                        // 0x2118(0x8)(Edit, ZeroConstructor)
	int64                                        RequestedID;                                       // 0x2120(0x8)(None)
	TArray<struct FInstallProgressMod>           InstalledMods;                                     // 0x2128(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x2138(0x10)(None)

	static class UClass* StaticClass();
	static class UReHostSession_ASA_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRecievedInstalledModsInfo(const TArray<struct FInstallProgressMod>& InstalledMods);
	void HasUGCPrivileges(bool HasPrivilege, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseUserGeneratedContent_ReturnValue);
	void Assert_Selected_Item_for_Preview(class UScrollBox* ForScrollbox, int32 FoundSelectedIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UDataListEntryButton_HostSession* K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UCustomButtonWidget* CallFunc_BPGetButton_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UDataListEntryButton_HostSession* K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BPIsSelected_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IsPresetDifficultyUIOpen(bool NewParam, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BPIsPresetDifficultyUIOpen(bool ReturnValue, bool CallFunc_IsPresetDifficultyUIOpen_NewParam);
	void Get_ModImage_Border_Background(const struct FSlateBrush& ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu, const struct FKey& LocalKey, bool CallFunc_IsPresetDifficultyUIOpen_NewParam, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, class UWidget* CallFunc_SwitchButton_Widget_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, int32 Temp_int_Variable, class UWidget* CallFunc_SwitchButton_Widget_3, class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* K2Node_Select_Default);
	void Get_MapImage_Border_Background(const struct FSlateBrush& ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature();
	void Construct();
	void BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature();
	void BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature();
	void BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature(int32 Index);
	void BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature(int32 Index);
	void BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature();
	void BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
	void OnModInfoRequested(int64 ModId);
	void OnCFCoreUIControllerInit();
	void Destruct();
	void OnCFCoreUIRegister();
	void ExecuteUbergraph_ReHostSession_ASA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, class UPrimalUI* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasUGCPrivileges_HasPrivilege, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int64 K2Node_Event_ModID, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_RegisterModelClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue);
};

}


