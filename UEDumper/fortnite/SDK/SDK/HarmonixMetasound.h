
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Harmonix
/// dependency: HarmonixMidi
/// dependency: MetasoundEngine

/// Enum /Script/HarmonixMetasound.EMusicClockState
/// Size: 0x04
enum class EMusicClockState : uint8_t
{
	EMusicClockState__Stopped                                                        = 0,
	EMusicClockState__Paused                                                         = 1,
	EMusicClockState__Running                                                        = 2,
	EMusicClockState__EMusicClockState_MAX                                           = 3
};

/// Enum /Script/HarmonixMetasound.EStdMidiControllerID
/// Size: 0x130
enum class EStdMidiControllerID : uint8_t
{
	EStdMidiControllerID__BankSelection                                              = 0,
	EStdMidiControllerID__ModWheel                                                   = 1,
	EStdMidiControllerID__Breath                                                     = 2,
	EStdMidiControllerID__Undefined3                                                 = 3,
	EStdMidiControllerID__FootController                                             = 4,
	EStdMidiControllerID__PortamentoTime                                             = 5,
	EStdMidiControllerID__DataCoarse                                                 = 6,
	EStdMidiControllerID__Volume                                                     = 7,
	EStdMidiControllerID__Balance                                                    = 8,
	EStdMidiControllerID__Undefined9                                                 = 9,
	EStdMidiControllerID__Pan                                                        = 10,
	EStdMidiControllerID__Expression                                                 = 11,
	EStdMidiControllerID__EffectControl1                                             = 12,
	EStdMidiControllerID__EffectControl2                                             = 13,
	EStdMidiControllerID__Undefined14                                                = 14,
	EStdMidiControllerID__Undefined15                                                = 15,
	EStdMidiControllerID__GeneralPurposeController1                                  = 16,
	EStdMidiControllerID__GeneralPurposeController2                                  = 17,
	EStdMidiControllerID__GeneralPurposeController3                                  = 18,
	EStdMidiControllerID__GeneralPurposeController4                                  = 19,
	EStdMidiControllerID__Undefined20                                                = 20,
	EStdMidiControllerID__Undefined21                                                = 21,
	EStdMidiControllerID__Undefined22                                                = 22,
	EStdMidiControllerID__Undefined23                                                = 23,
	EStdMidiControllerID__Undefined24                                                = 24,
	EStdMidiControllerID__Undefined25                                                = 25,
	EStdMidiControllerID__Undefined26                                                = 26,
	EStdMidiControllerID__Undefined27                                                = 27,
	EStdMidiControllerID__Undefined28                                                = 28,
	EStdMidiControllerID__Undefined29                                                = 29,
	EStdMidiControllerID__Undefined30                                                = 30,
	EStdMidiControllerID__Undefined31                                                = 31,
	EStdMidiControllerID__LSBControl0                                                = 32,
	EStdMidiControllerID__LSBControl1                                                = 33,
	EStdMidiControllerID__LSBControl2                                                = 34,
	EStdMidiControllerID__LSBControl3                                                = 35,
	EStdMidiControllerID__LSBControl4                                                = 36,
	EStdMidiControllerID__LSBControl5                                                = 37,
	EStdMidiControllerID__LSBControl6                                                = 38,
	EStdMidiControllerID__LSBControl7                                                = 39,
	EStdMidiControllerID__LSBControl8                                                = 40,
	EStdMidiControllerID__LSBControl9                                                = 41,
	EStdMidiControllerID__LSBControl10                                               = 42,
	EStdMidiControllerID__LSBControl11                                               = 43,
	EStdMidiControllerID__LSBControl12                                               = 44,
	EStdMidiControllerID__LSBControl13                                               = 45,
	EStdMidiControllerID__LSBControl14                                               = 46,
	EStdMidiControllerID__LSBControl15                                               = 47,
	EStdMidiControllerID__LSBControl16                                               = 48,
	EStdMidiControllerID__LSBControl17                                               = 49,
	EStdMidiControllerID__LSBControl18                                               = 50,
	EStdMidiControllerID__LSBControl19                                               = 51,
	EStdMidiControllerID__LSBControl20                                               = 52,
	EStdMidiControllerID__LSBControl21                                               = 53,
	EStdMidiControllerID__LSBControl22                                               = 54,
	EStdMidiControllerID__LSBControl23                                               = 55,
	EStdMidiControllerID__LSBControl24                                               = 56,
	EStdMidiControllerID__LSBControl25                                               = 57,
	EStdMidiControllerID__LSBControl26                                               = 58,
	EStdMidiControllerID__LSBControl27                                               = 59,
	EStdMidiControllerID__LSBControl28                                               = 60,
	EStdMidiControllerID__LSBControl29                                               = 61,
	EStdMidiControllerID__LSBControl30                                               = 62,
	EStdMidiControllerID__LSBControl31                                               = 63,
	EStdMidiControllerID__Hold                                                       = 64,
	EStdMidiControllerID__PortamentoSwitch                                           = 65,
	EStdMidiControllerID__Sustenuto                                                  = 66,
	EStdMidiControllerID__SoftPedal                                                  = 67,
	EStdMidiControllerID__Legato                                                     = 68,
	EStdMidiControllerID__Hold2                                                      = 69,
	EStdMidiControllerID__SoundController1                                           = 70,
	EStdMidiControllerID__SoundController2                                           = 71,
	EStdMidiControllerID__SoundController3                                           = 72,
	EStdMidiControllerID__SoundController4                                           = 73,
	EStdMidiControllerID__SoundController5                                           = 74,
	EStdMidiControllerID__SoundController6                                           = 75,
	EStdMidiControllerID__SoundController7                                           = 76,
	EStdMidiControllerID__SoundController8                                           = 77,
	EStdMidiControllerID__SoundController9                                           = 78,
	EStdMidiControllerID__SoundController10                                          = 79,
	EStdMidiControllerID__GeneralPurposeController5                                  = 80,
	EStdMidiControllerID__GeneralPurposeController6                                  = 81,
	EStdMidiControllerID__GeneralPurposeController7                                  = 82,
	EStdMidiControllerID__GeneralPurposeController8                                  = 83,
	EStdMidiControllerID__PortamentoControl                                          = 84,
	EStdMidiControllerID__Undefined85                                                = 85,
	EStdMidiControllerID__Undefined86                                                = 86,
	EStdMidiControllerID__Undefined87                                                = 87,
	EStdMidiControllerID__HighResolutionVelocityPrefix                               = 88,
	EStdMidiControllerID__Undefined89                                                = 89,
	EStdMidiControllerID__Undefined90                                                = 90,
	EStdMidiControllerID__Effects1Depth                                              = 91,
	EStdMidiControllerID__Effects2Depth                                              = 92,
	EStdMidiControllerID__Effects3Depth                                              = 93,
	EStdMidiControllerID__Effects4Depth                                              = 94,
	EStdMidiControllerID__Effects5Depth                                              = 95,
	EStdMidiControllerID__DataIncrement                                              = 96,
	EStdMidiControllerID__DataDecrement                                              = 97,
	EStdMidiControllerID__NRPNFine                                                   = 98,
	EStdMidiControllerID__NRPNCoarse                                                 = 99,
	EStdMidiControllerID__RPNFine                                                    = 100,
	EStdMidiControllerID__RPNCoarse                                                  = 101,
	EStdMidiControllerID__Undefined102                                               = 102,
	EStdMidiControllerID__Undefined103                                               = 103,
	EStdMidiControllerID__Undefined104                                               = 104,
	EStdMidiControllerID__Undefined105                                               = 105,
	EStdMidiControllerID__Undefined106                                               = 106,
	EStdMidiControllerID__Undefined107                                               = 107,
	EStdMidiControllerID__Undefined108                                               = 108,
	EStdMidiControllerID__Undefined109                                               = 109,
	EStdMidiControllerID__Undefined110                                               = 110,
	EStdMidiControllerID__Undefined111                                               = 111,
	EStdMidiControllerID__Undefined112                                               = 112,
	EStdMidiControllerID__Undefined113                                               = 113,
	EStdMidiControllerID__Undefined114                                               = 114,
	EStdMidiControllerID__Undefined115                                               = 115,
	EStdMidiControllerID__Undefined116                                               = 116,
	EStdMidiControllerID__Undefined117                                               = 117,
	EStdMidiControllerID__Undefined118                                               = 118,
	EStdMidiControllerID__Undefined119                                               = 119,
	EStdMidiControllerID__AllSoundOff                                                = 120,
	EStdMidiControllerID__Reset                                                      = 121,
	EStdMidiControllerID__LocalKeyboardSwitch                                        = 122,
	EStdMidiControllerID__AllNotesOff                                                = 123,
	EStdMidiControllerID__OmniModeOff                                                = 124,
	EStdMidiControllerID__OmniModeOn                                                 = 125,
	EStdMidiControllerID__MonoMode                                                   = 126,
	EStdMidiControllerID__PolyMode                                                   = 127,
	EStdMidiControllerID__NUM                                                        = 128,
	EStdMidiControllerID__EStdMidiControllerID_MAX                                   = 129
};

/// Enum /Script/HarmonixMetasound.ESeekPointType
/// Size: 0x03
enum class ESeekPointType : uint8_t
{
	ESeekPointType__BarBeat                                                          = 0,
	ESeekPointType__Millisecond                                                      = 1,
	ESeekPointType__ESeekPointType_MAX                                               = 2
};

/// Enum /Script/HarmonixMetasound.EMusicClockDriveMethod
/// Size: 0x03
enum class EMusicClockDriveMethod : uint8_t
{
	EMusicClockDriveMethod__WallClock                                                = 0,
	EMusicClockDriveMethod__MetaSound                                                = 1,
	EMusicClockDriveMethod__EMusicClockDriveMethod_MAX                               = 2
};

/// Class /Script/HarmonixMetasound.MetasoundOfflinePlayerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UMetasoundOfflinePlayerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	class UMetaSoundSource*                            MetaSoundSource;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x00B8   (0x0030)  MISSED
};

/// Class /Script/HarmonixMetasound.MidiClockUpdateSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UMidiClockUpdateSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Class /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiEventInfoBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsNoteOn
	// bool IsNoteOn(FMidiEventInfo& Event);                                                                                 // [0xa424994] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsNoteOff
	// bool IsNoteOff(FMidiEventInfo& Event);                                                                                // [0xa4248fc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsNote
	// bool IsNote(FMidiEventInfo& Event);                                                                                   // [0xa424868] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsMidiEventInfo
	// bool IsMidiEventInfo(FMetaSoundOutput& Output);                                                                       // [0xa424730] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetVelocity
	// int32_t GetVelocity(FMidiEventInfo& Event);                                                                           // [0xa424400] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetNoteNumber
	// int32_t GetNoteNumber(FMidiEventInfo& Event);                                                                         // [0xa42422c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetMidiEventInfo
	// FMidiEventInfo GetMidiEventInfo(FMetaSoundOutput& Output, bool& Success);                                             // [0xa423bf0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetChannel
	// int32_t GetChannel(FMidiEventInfo& Event);                                                                            // [0xa423b4c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/HarmonixMetasound.StepSequenceCell
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStepSequenceCell
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	bool                                               bContinuation;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/HarmonixMetasound.StepSequenceRow
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStepSequenceRow
{ 
	TArray<FStepSequenceCell>                          Cells;                                                      // 0x0000   (0x0010)  
	bool                                               bRowEnabled;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/HarmonixMetasound.StepSequencePage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStepSequencePage
{ 
	TArray<FStepSequenceRow>                           Rows;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/HarmonixMetasound.StepSequenceNote
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStepSequenceNote
{ 
	int32_t                                            NoteNumber;                                                 // 0x0000   (0x0004)  
	int32_t                                            Velocity;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixMetasound.StepSequenceTable
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStepSequenceTable
{ 
	TArray<FStepSequencePage>                          Pages;                                                      // 0x0000   (0x0010)  
	TArray<FStepSequenceNote>                          Notes;                                                      // 0x0010   (0x0010)  
	int32_t                                            StepSkipIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/HarmonixMetasound.MidiStepSequence
/// Size: 0x0050 (0x000028 - 0x000078)
class UMidiStepSequence : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	int32_t                                            Pages;                                                      // 0x0030   (0x0004)  
	int32_t                                            Rows;                                                       // 0x0034   (0x0004)  
	int32_t                                            Columns;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FStepSequenceTable                                 StepTable;                                                  // 0x0040   (0x0028)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0068   (0x0010)  MISSED


	/// Functions
	// Function /Script/HarmonixMetasound.MidiStepSequence.ToggleCellOnPage
	// FStepSequenceCell ToggleCellOnPage(int32_t Page, int32_t Row, int32_t Column);                                        // [0xa425c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.ToggleCell
	// FStepSequenceCell ToggleCell(int32_t Row, int32_t Column);                                                            // [0xa425b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetStepTable
	// void SetStepTable(FStepSequenceTable& NewStepTable);                                                                  // [0xa425ac8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetStepSkipIndex
	// bool SetStepSkipIndex(int32_t StepIndex);                                                                             // [0xa425a3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetRowVelocity
	// bool SetRowVelocity(int32_t RowIndex, int32_t MidiVelocoty);                                                          // [0xa425954] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetRowNoteNumber
	// bool SetRowNoteNumber(int32_t RowIndex, int32_t MidiNoteNumber);                                                      // [0xa425894] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumRows
	// void SetNumRows(int32_t Count);                                                                                       // [0xa425814] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumPages
	// void SetNumPages(int32_t Count);                                                                                      // [0xa425794] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumColumns
	// void SetNumColumns(int32_t Count);                                                                                    // [0xa425714] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellOnPage
	// FStepSequenceCell SetCellOnPage(int32_t Page, int32_t Row, int32_t Column, bool State);                               // [0xa424e28] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellContinuationOnPage
	// FStepSequenceCell SetCellContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                  // [0xa424ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellContinuation
	// FStepSequenceCell SetCellContinuation(int32_t Row, int32_t Column, bool bState);                                      // [0xa424bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCell
	// FStepSequenceCell SetCell(int32_t Row, int32_t Column, bool State);                                                   // [0xa424ac8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetStepTable
	// FStepSequenceTable GetStepTable();                                                                                    // [0xa4242c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetCellOnPage
	// FStepSequenceCell GetCellOnPage(int32_t Page, int32_t Row, int32_t Column);                                           // [0xa423a48] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetCell
	// FStepSequenceCell GetCell(int32_t Row, int32_t Column);                                                               // [0xa423974] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MidiStepSequence.DisableRowsAbove
	// void DisableRowsAbove(int32_t FirstDisabledRow);                                                                      // [0xa4238f4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicParameterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicParameterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.SetMusicTimestamp
	// void SetMusicTimestamp(class UMetasoundParameterPack* Target, FName ParameterName, FMusicTimestamp& Value, ESetParamResult& Result, bool OnlyIfExists); // [0xa425498] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.SetMusicSeekRequest
	// void SetMusicSeekRequest(class UMetasoundParameterPack* Target, FName ParameterName, FMusicSeekRequest& Value, ESetParamResult& Result, bool OnlyIfExists); // [0xa425204] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.SetMusicLoopConfiguration
	// void SetMusicLoopConfiguration(class UMetasoundParameterPack* Target, FName ParameterName, FMusicLoopConfiguration& Value, ESetParamResult& Result, bool OnlyIfExists); // [0xa424f70] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.HasMusicTimestamp
	// bool HasMusicTimestamp(class UMetasoundParameterPack* Target, FName Name);                                            // [0xa424658] Final|Native|Private|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.HasMusicSeekRequest
	// bool HasMusicSeekRequest(class UMetasoundParameterPack* Target, FName Name);                                          // [0xa424580] Final|Native|Private|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.HasMusicLoopConfiguration
	// bool HasMusicLoopConfiguration(class UMetasoundParameterPack* Target, FName Name);                                    // [0xa4244a8] Final|Native|Private|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.GetMusicTimestamp
	// FMusicTimestamp GetMusicTimestamp(class UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // [0xa423fc4] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.GetMusicSeekRequest
	// FMusicSeekRequest GetMusicSeekRequest(class UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // [0xa423e6c] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.GetMusicLoopConfiguration
	// FMusicLoopConfiguration GetMusicLoopConfiguration(class UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // [0xa423d14] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicTimestampBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary.IsMusicTimestamp
	// bool IsMusicTimestamp(FMetaSoundOutput& Output);                                                                      // [0xa4247cc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary.GetMusicTimestamp
	// FMusicTimestamp GetMusicTimestamp(FMetaSoundOutput& Output, bool& Success);                                           // [0xa424108] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.HarmonixPeakTamer
/// Size: 0x0020 (0x000028 - 0x000048)
class UHarmonixPeakTamer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED


	/// Functions
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.Update
	// void Update(float InputValue, float DeltaTimeSeconds);                                                                // [0xa425d44] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.GetValue
	// float GetValue();                                                                                                     // [0x3932b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.GetPeak
	// float GetPeak();                                                                                                      // [0x3888b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.CreateHarmonixPeakTamer
	// class UHarmonixPeakTamer* CreateHarmonixPeakTamer();                                                                  // [0xa4238c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.Configure
	// void Configure(FHarmonixPeakTamerSettings& Settings);                                                                 // [0xa42381c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTimeSignatureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary.IsTimeSignature
	// bool IsTimeSignature(FMetaSoundOutput& Output);                                                                       // [0xa424a2c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary.GetTimeSignature
	// FTimeSignature GetTimeSignature(FMetaSoundOutput& Output, bool& Success);                                             // [0xa4242e4] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicClockComponent
/// Size: 0x0370 (0x0000A0 - 0x000410)
class UMusicClockComponent : public UActorComponent
{ 
public:
	EMusicClockDriveMethod                             DriveMethod;                                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FName                                              MetasoundOutputName;                                        // 0x00A4   (0x0004)  
	class UAudioComponent*                             MetasoundsAudioComponent;                                   // 0x00A8   (0x0008)  
	class UMidiFile*                                   TempoMap;                                                   // 0x00B0   (0x0008)  
	float                                              Tempo;                                                      // 0x00B8   (0x0004)  
	int32_t                                            TimeSignatureNum;                                           // 0x00BC   (0x0004)  
	int32_t                                            TimeSignatureDenom;                                         // 0x00C0   (0x0004)  
	float                                              CurrentBeatDurationSec;                                     // 0x00C4   (0x0004)  
	float                                              CurrentBarDurationSec;                                      // 0x00C8   (0x0004)  
	float                                              CurrentClockAdvanceRate;                                    // 0x00CC   (0x0004)  
	bool                                               RunPastMusicEnd;                                            // 0x00D0   (0x0001)  
	ECalibratedMusicTimebase                           TimebaseForBarAndBeatEvents;                                // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	SDK_UNDEFINED(16,11894) /* FMulticastInlineDelegate */ __um(PlayStateEvent);                                   // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,11895) /* FMulticastInlineDelegate */ __um(BeatEvent);                                        // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,11896) /* FMulticastInlineDelegate */ __um(BarEvent);                                         // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,11897) /* FMulticastInlineDelegate */ __um(SectionEvent);                                     // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,11898) /* FMulticastInlineDelegate */ __um(MusicClockConnectedEvent);                         // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,11899) /* FMulticastInlineDelegate */ __um(MusicClockDisconnectedEvent);                      // 0x0128   (0x0010)  
	FMidiSongPos                                       CurrentSmoothedAudioRenderSongPos;                          // 0x0138   (0x0040)  
	FMidiSongPos                                       CurrentVideoRenderSongPos;                                  // 0x0178   (0x0040)  
	FMidiSongPos                                       CurrentPlayerExperiencedSongPos;                            // 0x01B8   (0x0040)  
	unsigned char                                      UnknownData02_6[0x218];                                     // 0x01F8   (0x0218)  MISSED


	/// Functions
	// Function /Script/HarmonixMetasound.MusicClockComponent.TickToMs
	// float TickToMs(float Tick);                                                                                           // [0xa4c8588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Stop
	// void Stop();                                                                                                          // [0xa4c8574] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Start
	// void Start();                                                                                                         // [0xa4c8560] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Pause
	// void Pause();                                                                                                         // [0xa4c8314] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.MeasureSpanProgress
	// float MeasureSpanProgress(FMusicalTimeSpan& Span, ECalibratedMusicTimebase Timebase);                                 // [0xa4c8180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetState
	// EMusicClockState GetState();                                                                                          // [0xa4c8080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongSections
	// TArray<FSongSection> GetSongSections();                                                                               // [0xa4c8054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongRemainingMs
	// float GetSongRemainingMs(ECalibratedMusicTimebase Timebase);                                                          // [0xa4c7fc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongPos
	// FMidiSongPos GetSongPos(ECalibratedMusicTimebase Timebase);                                                           // [0xa4c7ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthMs
	// float GetSongLengthMs();                                                                                              // [0xa4c7ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthBeats
	// float GetSongLengthBeats();                                                                                           // [0xa4c7e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthBars
	// int32_t GetSongLengthBars();                                                                                          // [0xa4c7e64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionStartMsAtMs
	// float GetSectionStartMsAtMs(float Ms);                                                                                // [0xa4c7dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionNameAtMs
	// FString GetSectionNameAtMs(float Ms);                                                                                 // [0xa4c7d08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionLengthMsAtMs
	// float GetSectionLengthMsAtMs(float Ms);                                                                               // [0xa4c7c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionEndMsAtMs
	// float GetSectionEndMsAtMs(float Ms);                                                                                  // [0xa4c7bd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSecondsIncludingCountIn
	// float GetSecondsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                  // [0xa4c7b0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSecondsFromBarOne
	// float GetSecondsFromBarOne(ECalibratedMusicTimebase Timebase);                                                        // [0xa4c7a44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetNumSections
	// int32_t GetNumSections();                                                                                             // [0xa4c7a1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetNumBeatsInBarAtMs
	// float GetNumBeatsInBarAtMs(float Ms);                                                                                 // [0xa4c798c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetMsPerBeatAtMs
	// float GetMsPerBeatAtMs(float Ms);                                                                                     // [0xa4c78fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetMsPerBarAtMs
	// float GetMsPerBarAtMs(float Ms);                                                                                      // [0xa4c786c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToNextBeat
	// float GetDistanceToNextBeat(ECalibratedMusicTimebase Timebase);                                                       // [0xa4c778c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToNextBar
	// float GetDistanceToNextBar(ECalibratedMusicTimebase Timebase);                                                        // [0xa4c76fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToClosestBeat
	// float GetDistanceToClosestBeat(ECalibratedMusicTimebase Timebase);                                                    // [0xa4c766c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToClosestBar
	// float GetDistanceToClosestBar(ECalibratedMusicTimebase Timebase);                                                     // [0xa4c75dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceFromCurrentBeat
	// float GetDistanceFromCurrentBeat(ECalibratedMusicTimebase Timebase);                                                  // [0xa4c754c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceFromCurrentBar
	// float GetDistanceFromCurrentBar(ECalibratedMusicTimebase Timebase);                                                   // [0xa4c74bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDeltaBeat
	// float GetDeltaBeat(ECalibratedMusicTimebase Timebase);                                                                // [0xa4c742c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDeltaBar
	// float GetDeltaBar(ECalibratedMusicTimebase Timebase);                                                                 // [0xa4c739c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentVideoRenderSongPos
	// FMidiSongPos GetCurrentVideoRenderSongPos();                                                                          // [0xa4c7360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentTimestamp
	// FMusicTimestamp GetCurrentTimestamp(ECalibratedMusicTimebase Timebase);                                               // [0xa4c72d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSmoothedAudioRenderSongPos
	// FMidiSongPos GetCurrentSmoothedAudioRenderSongPos();                                                                  // [0xa4c7290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionStartMs
	// float GetCurrentSectionStartMs(ECalibratedMusicTimebase Timebase);                                                    // [0xa4c7200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionName
	// FString GetCurrentSectionName(ECalibratedMusicTimebase Timebase);                                                     // [0xa4c7154] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionLengthMs
	// float GetCurrentSectionLengthMs(ECalibratedMusicTimebase Timebase);                                                   // [0xa4c70c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionIndex
	// int32_t GetCurrentSectionIndex(ECalibratedMusicTimebase Timebase);                                                    // [0xa4c701c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentPlayerExperiencedSongPos
	// FMidiSongPos GetCurrentPlayerExperiencedSongPos();                                                                    // [0xa4c6fd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCountInSeconds
	// float GetCountInSeconds();                                                                                            // [0xa4c6fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBeatsIncludingCountIn
	// float GetBeatsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                    // [0xa4c6e64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBeatInBarAtMs
	// float GetBeatInBarAtMs(float Ms);                                                                                     // [0xa4c6d84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBarsIncludingCountIn
	// float GetBarsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                     // [0xa4c6cbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.CreateWallClockDrivenMusicClock
	// class UMusicClockComponent* CreateWallClockDrivenMusicClock(class UObject* WorldContextObject, class UMidiFile* WithTempoMap, bool Start); // [0xa4c6b28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.CreateMetasoundDrivenMusicClock
	// class UMusicClockComponent* CreateMetasoundDrivenMusicClock(class UObject* WorldContextObject, class UAudioComponent* InAudioComponent, FName MetasoundOuputPinName, bool Start); // [0xa4c69ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Continue
	// void Continue();                                                                                                      // [0xa4c6998] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.ConnectToWallClockForMidi
	// void ConnectToWallClockForMidi(class UMidiFile* InTempoMap);                                                          // [0xa4c6918] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.ConnectToMetasoundOnAudioComponent
	// bool ConnectToMetasoundOnAudioComponent(class UAudioComponent* InAudioComponent);                                     // [0xa4c6888] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.BeatToMs
	// float BeatToMs(float Beat);                                                                                           // [0xa4c67f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.BarToMs
	// float BarToMs(float Bar);                                                                                             // [0xa4c6768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixMetasound.MusicTempometerComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UMusicTempometerComponent : public UActorComponent
{ 
public:
	FName                                              SecondsIncludingCountInParameterName;                       // 0x00A0   (0x0004)  
	FName                                              BarsIncludingCountInParameterName;                          // 0x00A4   (0x0004)  
	FName                                              BeatsIncludingCountInParameterName;                         // 0x00A8   (0x0004)  
	FName                                              SecondsFromBarOneParameterName;                             // 0x00AC   (0x0004)  
	FName                                              TimestampBarParameterName;                                  // 0x00B0   (0x0004)  
	FName                                              TimestampBeatInBarParameterName;                            // 0x00B4   (0x0004)  
	FName                                              BarProgressParameterName;                                   // 0x00B8   (0x0004)  
	FName                                              BeatProgressParameterName;                                  // 0x00BC   (0x0004)  
	FName                                              TimeSignatureNumeratorParameterName;                        // 0x00C0   (0x0004)  
	FName                                              TimeSignatureDenominatorParameterName;                      // 0x00C4   (0x0004)  
	FName                                              TempoParameterName;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FMidiSongPos                                       SongPos;                                                    // 0x00D0   (0x0040)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0110   (0x0030)  MISSED
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0140   (0x0008)  
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x0148   (0x0008)  
	class UMaterialParameterCollectionInstance*        MaterialParameterCollectionInstance;                        // 0x0150   (0x0008)  


	/// Functions
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetMaterialParameterCollection
	// void SetMaterialParameterCollection(class UMaterialParameterCollection* InMaterialParameterCollection);               // [0xa4c84bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetClockFromActor
	// void SetClockFromActor(class AActor* Actor);                                                                          // [0xa4c8410] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetClock
	// void SetClock(class UMusicClockComponent* InClockComponent);                                                          // [0xa4c8368] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeStamp
	// FMusicTimestamp GetTimeStamp();                                                                                       // [0xa4c8148] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeSignatureNumerator
	// float GetTimeSignatureNumerator();                                                                                    // [0xa4c810c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeSignatureDenominator
	// float GetTimeSignatureDenominator();                                                                                  // [0xa4c80d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTempo
	// float GetTempo();                                                                                                     // [0xa4c8098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSongPos
	// FMidiSongPos GetSongPos();                                                                                            // [0xa4c7f88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSecondsIncludingCountIn
	// float GetSecondsIncludingCountIn();                                                                                   // [0xa4c7b9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSecondsFromBarOne
	// float GetSecondsFromBarOne();                                                                                         // [0xa4c7ad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetMaterialParameterCollection
	// class UMaterialParameterCollection* GetMaterialParameterCollection();                                                 // [0xa4c781c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetClockNoMutex
	// class UMusicClockComponent* GetClockNoMutex();                                                                        // [0xa4c6f80] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetClock
	// class UMusicClockComponent* GetClock();                                                                               // [0xa4c6f2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBeatsIncludingCountIn
	// float GetBeatsIncludingCountIn();                                                                                     // [0xa4c6ef4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBeatProgress
	// float GetBeatProgress();                                                                                              // [0xa4c6e14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBarsIncludingCountIn
	// float GetBarsIncludingCountIn();                                                                                      // [0xa4c6d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBarProgress
	// float GetBarProgress();                                                                                               // [0xa4c6c6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HarmonixMetasound.MidiEventInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMidiEventInfo
{ 
	FMusicTimestamp                                    Timestamp;                                                  // 0x0000   (0x0008)  
	int32_t                                            TrackIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/HarmonixMetasound.MusicLoopConfiguration
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMusicLoopConfiguration
{ 
	bool                                               Enabled;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMusicTimestamp                                    RegionStart;                                                // 0x0004   (0x0008)  
	FMusicTimestamp                                    RegionEnd;                                                  // 0x000C   (0x0008)  
};

/// Struct /Script/HarmonixMetasound.MusicSeekTarget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMusicSeekTarget
{ 
	ESeekPointType                                     Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMusicTimestamp                                    BarBeat;                                                    // 0x0004   (0x0008)  
	float                                              Ms;                                                         // 0x000C   (0x0004)  
};

/// Struct /Script/HarmonixMetasound.MusicSeekRequest
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMusicSeekRequest
{ 
	bool                                               EmmediateIfPastFromPoint;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMusicTimestamp                                    FromPoint;                                                  // 0x0004   (0x0008)  
	FMusicTimestamp                                    ToPoint;                                                    // 0x000C   (0x0008)  
};

/// Struct /Script/HarmonixMetasound.HarmonixPeakTamerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FHarmonixPeakTamerSettings
{ 
	float                                              PeakAttackTimeSeconds;                                      // 0x0000   (0x0004)  
	float                                              PeakReleaseTimeSeconds;                                     // 0x0004   (0x0004)  
	bool                                               bEnableValueSmoothing;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ValueAttackTimeSeconds;                                     // 0x000C   (0x0004)  
	float                                              ValueReleaseTimeSeconds;                                    // 0x0010   (0x0004)  
};

