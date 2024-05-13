
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: HarmonixMidi

/// Class /Script/FMCoreRuntime.FMCoreDeveloperSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UFMCoreDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMCoreMusicFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.SnapToScale
	// FMidiNote SnapToScale(FMidiNote Note, EMusicKey Key, EMusicKeyMode KeyMode);                                             // [0xb6674b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetMidiNoteFromScale
	// FMidiNote GetMidiNoteFromScale(EMusicKey Key, int32_t Octave, EMusicInterval Interval);                                  // [0xb666ab0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetIntervalStepInScale
	// int32_t GetIntervalStepInScale(EMusicInterval Interval, EMusicKeyMode KeyMode);                                          // [0xb6669f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetIntervalForNote
	// EMusicInterval GetIntervalForNote(FMidiNote Note, EMusicKey Key);                                                        // [0xb666918] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetIntervalAtStepInScale
	// EMusicInterval GetIntervalAtStepInScale(int32_t ScaleStep, EMusicKeyMode KeyMode);                                       // [0xb666858] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetDegreeShiftFromProgression
	// int32_t GetDegreeShiftFromProgression(EHarmonicProgression Progression);                                                 // [0xb6667d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMCoreRuntime.FMCoreMusicManagerComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UFMCoreMusicManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMulticastInlineDelegate)                  OnTempoChangedDelegate                                      OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpeedChangedDelegate                                      OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKeyChangedDelegate                                        OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModeChangedDelegate                                       OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimeSignatureChanged                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(EMusicKey)                                 StartingKey                                                 OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(EMusicKeyMode)                             StartingMode                                                OFFSET(get<T>, {0xF1, 1, 0, 0})
	DMember(int32_t)                                   StartingTempo                                               OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(float)                                     StartingSpeed                                               OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   StartingTimeSignatureNumerator                              OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   StartingTimeSignatureDenominator                            OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	CMember(EMusicKey)                                 CurrentKey                                                  OFFSET(get<T>, {0x104, 1, 0, 0})
	CMember(EMusicKeyMode)                             CurrentMode                                                 OFFSET(get<T>, {0x105, 1, 0, 0})
	DMember(int32_t)                                   CurrentTempo                                                OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(float)                                     CurrentSpeed                                                OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FFMCoreTimeSignature)                      CurrentTimeSignature                                        OFFSET(getStruct<T>, {0x110, 8, 0, 0})
	CMember(EMusicKey)                                 ServerKey                                                   OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EMusicKeyMode)                             ServerMode                                                  OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(int32_t)                                   ServerTempo                                                 OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(float)                                     ServerSpeed                                                 OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FFMCoreTimeSignature)                      ServerTimeSignature                                         OFFSET(getStruct<T>, {0x124, 8, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerTimeSignatureChange
	// void TriggerTimeSignatureChange(int32_t Numerator, int32_t Denominator);                                                 // [0xb667840] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerTempoChange
	// void TriggerTempoChange(int32_t BPM, bool bLocalChangeOnly);                                                             // [0xb66777c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerSpeedChange
	// void TriggerSpeedChange(float Speed, bool bLocalChangeOnly);                                                             // [0xb6676b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerModeChange
	// void TriggerModeChange(EMusicKeyMode InMode);                                                                            // [0xb667634] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerKeyChange
	// void TriggerKeyChange(EMusicKey InKey);                                                                                  // [0xb6675b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnTimeSignatureChanged__DelegateSignature
	// void OnTimeSignatureChanged__DelegateSignature(FFMCoreTimeSignature TimeSignature);                                      // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnTempoChanged__DelegateSignature
	// void OnTempoChanged__DelegateSignature(int32_t CurrentTempo);                                                            // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnSpeedChanged__DelegateSignature
	// void OnSpeedChanged__DelegateSignature(float CurrentSpeed);                                                              // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerTimeSignatureChanged
	// void OnRep_ServerTimeSignatureChanged();                                                                                 // [0xb667480] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerTempoChanged
	// void OnRep_ServerTempoChanged();                                                                                         // [0xb66744c] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerSpeedChanged
	// void OnRep_ServerSpeedChanged();                                                                                         // [0xb667414] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerModeChanged
	// void OnRep_ServerModeChanged();                                                                                          // [0xb6673e0] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerKeyChanged
	// void OnRep_ServerKeyChanged();                                                                                           // [0xb6673ac] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnModeChanged__DelegateSignature
	// void OnModeChanged__DelegateSignature(EMusicKeyMode CurrentMode);                                                        // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnKeyChanged__DelegateSignature
	// void OnKeyChanged__DelegateSignature(EMusicKey CurrentKey);                                                              // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentTimeSignature
	// FFMCoreTimeSignature GetCurrentTimeSignature();                                                                          // [0xb6667c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xb519d78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentSpeed
	// float GetCurrentSpeed();                                                                                                 // [0xb6667a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentKeyMode
	// EMusicKeyMode GetCurrentKeyMode();                                                                                       // [0xb666790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0xb666778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentAudioState
	// void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo);                              // [0xb6665bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFMPlayspaceScopedSystemComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnAddedToPlayspaceSystemManager                             OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent.OnAddedToPlayspaceSystemManager__DelegateSignature
	// void OnAddedToPlayspaceSystemManager__DelegateSignature(bool Success);                                                   // [0x20c3f9c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UFMPlayspaceScopedSystemManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TMap<UClass*, UClass*>)                    VKClassRedirects                                            OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           VKClassDenyList                                             OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           UEFNNotableActors                                           OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TMap<AActor*, FFMPlayspaceSystemInfo>)     PlayspacesSystemInfo                                        OFFSET(get<T>, {0x110, 80, 0, 0})


	/// Functions
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.MulticastNewSystemCreated
	// void MulticastNewSystemCreated(class AActor* PlayspaceActor, class UClass* SystemClass, class AActor* CreatedActor);     // [0xb667288] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.GetSystemForActorIfExistsBP
	// void GetSystemForActorIfExistsBP(class UClass* SystemClass, class AActor* Requester, class AActor*& OutActor, ESystemGetResult& OutWasValid); // [0xb666d5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.GetOrCreateSystemForActorBP
	// void GetOrCreateSystemForActorBP(class UClass* SystemClass, class AActor* Requester, class AActor*& OutActor, ESystemGetResult& OutWasValid); // [0xb666ba8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FMCoreRuntime.FMCoreTimeSignature
/// Size: 0x0008 (0x000000 - 0x000008)
class FFMCoreTimeSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Numerator                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Denominator                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FMCoreRuntime.FMPlayspaceSystemInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FFMPlayspaceSystemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Enum /Script/FMCoreRuntime.EMusicKeyMode
/// Size: 0x03
enum class EMusicKeyMode : uint8_t
{
	EMusicKeyMode__Major                                                             = 0,
	EMusicKeyMode__Minor                                                             = 1,
	EMusicKeyMode__Num                                                               = 2
};

/// Enum /Script/FMCoreRuntime.EMusicKey
/// Size: 0x13
enum class EMusicKey : uint8_t
{
	EMusicKey__C                                                                     = 0,
	EMusicKey__Db                                                                    = 1,
	EMusicKey__D                                                                     = 2,
	EMusicKey__Eb                                                                    = 3,
	EMusicKey__E                                                                     = 4,
	EMusicKey__F                                                                     = 5,
	EMusicKey__Gb                                                                    = 6,
	EMusicKey__G                                                                     = 7,
	EMusicKey__Ab                                                                    = 8,
	EMusicKey__A                                                                     = 9,
	EMusicKey__Bb                                                                    = 10,
	EMusicKey__B                                                                     = 11,
	EMusicKey__Num                                                                   = 12
};

/// Enum /Script/FMCoreRuntime.ESystemGetResult
/// Size: 0x02
enum class ESystemGetResult : uint8_t
{
	ESystemGetResult__Valid                                                          = 0,
	ESystemGetResult__Invalid                                                        = 1
};

/// Enum /Script/FMCoreRuntime.EMusicInterval
/// Size: 0x13
enum class EMusicInterval : uint8_t
{
	EMusicInterval__P1                                                               = 0,
	EMusicInterval__Min2                                                             = 1,
	EMusicInterval__Maj2                                                             = 2,
	EMusicInterval__Min3                                                             = 3,
	EMusicInterval__Maj3                                                             = 4,
	EMusicInterval__P4                                                               = 5,
	EMusicInterval__TT                                                               = 6,
	EMusicInterval__P5                                                               = 7,
	EMusicInterval__Min6                                                             = 8,
	EMusicInterval__Maj6                                                             = 9,
	EMusicInterval__Min7                                                             = 10,
	EMusicInterval__Maj7                                                             = 11,
	EMusicInterval__Num                                                              = 12
};

/// Enum /Script/FMCoreRuntime.EHarmonicProgression
/// Size: 0x16
enum class EHarmonicProgression : uint8_t
{
	EHarmonicProgression__NegI                                                       = 0,
	EHarmonicProgression__NegII                                                      = 1,
	EHarmonicProgression__NegIII                                                     = 2,
	EHarmonicProgression__NegIV                                                      = 3,
	EHarmonicProgression__NegV                                                       = 4,
	EHarmonicProgression__NegVI                                                      = 5,
	EHarmonicProgression__NegVII                                                     = 6,
	EHarmonicProgression__I                                                          = 7,
	EHarmonicProgression__II                                                         = 8,
	EHarmonicProgression__III                                                        = 9,
	EHarmonicProgression__IV                                                         = 10,
	EHarmonicProgression__V                                                          = 11,
	EHarmonicProgression__VI                                                         = 12,
	EHarmonicProgression__VII                                                        = 13,
	EHarmonicProgression__PlusI                                                      = 14,
	EHarmonicProgression__Num                                                        = 15
};

