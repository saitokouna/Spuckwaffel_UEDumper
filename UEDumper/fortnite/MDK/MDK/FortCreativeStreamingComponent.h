
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: MediaAssets
/// dependency: SubtitlesWidgets

/// Class /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent
/// Size: 0x0220 (0x0000A0 - 0x0002C0)
class UFortCreativeStreamingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class USoundSubmix*)                       DefaultSubmix                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class USoundSubmix*)                       LicensedSubmix                                              OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class USoundSubmix*)                       AudioAnalysisSubmix                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       JukeboxMPC                                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FVideoPlayerDeviceAudioAnalysisSettings)   AudioAnalysisSettings                                       OFFSET(getStruct<T>, {0xC0, 64, 0, 0})
	CMember(class USoundConcurrency*)                  SoundConcurrency                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class USoundConcurrency*)                  MirrorSoundConcurrency                                      OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class USoundClass*)                        AudioSoundClass                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMaterial*)                          VideoMaterial                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(int32_t)                                   MaterialSlot                                                OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	CMember(class UFortDownloadLocalizedOverlays*)     LocalizedOverlays                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UFortMediaSubtitlesPlayer*)          SubtitlesPlayer                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayCompleted                                             OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CMSMetadataEvent                                            OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	CMember(class UFortBaseStreamingVideo*)            BaseStreamingVideoPlayer                                    OFFSET(get<T>, {0x190, 8, 0, 0})
	SMember(FVideoPlayerDeviceComponents)              DeviceComponents                                            OFFSET(getStruct<T>, {0x198, 48, 0, 0})
	SMember(FVideoPlayerDeviceMediaMetadata)           CurrentlyPlayingData                                        OFFSET(getStruct<T>, {0x1C8, 72, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   MirroredDevice                                              OFFSET(get<T>, {0x210, 32, 0, 0})
	CMember(class UAudioComponent*)                    MirrorAudioComponent                                        OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class USoundAttenuation*)                  MirrorSoundAttenuation                                      OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(EFortStreamingVideoSelectionMode)          StreamingMode                                               OFFSET(get<T>, {0x241, 1, 0, 0})
	SMember(FDelegateProperty)                         OnSubmixSpectralAnalysisDelegate                            OFFSET(getStruct<T>, {0x268, 12, 0, 0})
	SMember(FVideoPlayerDeviceCMSEventData)            CMSEventData                                                OFFSET(getStruct<T>, {0x288, 56, 0, 0})


	/// Functions
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UsePriorityMode
	// void UsePriorityMode();                                                                                                  // [0xac814b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UseMirrorModeByName
	// void UseMirrorModeByName(FString DeviceName);                                                                            // [0xac81334] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UseMirrorMode
	// void UseMirrorMode(class AActor* NewMirrorDevice);                                                                       // [0xac812b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UseDeviceOverrideMode
	// void UseDeviceOverrideMode();                                                                                            // [0xac812a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UpdateStaticMesh
	// void UpdateStaticMesh(class UStaticMeshComponent* ScreenMesh);                                                           // [0xac811d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.TearDownComponent
	// void TearDownComponent();                                                                                                // [0xac811bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.StreamedVideoOpeningTimeout
	// void StreamedVideoOpeningTimeout();                                                                                      // [0xac811a8] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.StreamedVideoOnMediaPlayerEndReached
	// void StreamedVideoOnMediaPlayerEndReached();                                                                             // [0xac81194] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.StreamedVideoOnMediaPlayerClosed
	// void StreamedVideoOnMediaPlayerClosed();                                                                                 // [0xac81180] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Stop
	// void Stop();                                                                                                             // [0xac8116c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.SetRestartStreamWhenPlaying
	// void SetRestartStreamWhenPlaying(bool bNewRestartStreamWhenPlaying);                                                     // [0xac810ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.SetFullScreenComponents
	// void SetFullScreenComponents(bool bEnable);                                                                              // [0xac8106c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Seek
	// void Seek(FTimespan SeekTime);                                                                                           // [0xac80f3c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Restart
	// void Restart();                                                                                                          // [0xac80f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.PrintVideoPlayerDebugData
	// void PrintVideoPlayerDebugData();                                                                                        // [0x6cb2178] Net|Native|Event|NetMulticast|Public|NetClient|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Play
	// void Play();                                                                                                             // [0xac80f14] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnStreamingDeviceChanged
	// void OnStreamingDeviceChanged();                                                                                         // [0xac80f00] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnRep_StreamingSelectionMode
	// void OnRep_StreamingSelectionMode();                                                                                     // [0xac807ac] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnMediaSoundComponentActivated
	// void OnMediaSoundComponentActivated(class UActorComponent* Component, bool bReset);                                      // [0xac80e48] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnAudioAnalysisSpectrumUpdated
	// void OnAudioAnalysisSpectrumUpdated(TArray<float>& MagnitudeArray);                                                      // [0xac80d6c] Final|Native|Private|HasOutParms 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.IsRestartStreamWhenPlaying
	// bool IsRestartStreamWhenPlaying();                                                                                       // [0xac80d54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.IsDevicePlaying
	// bool IsDevicePlaying();                                                                                                  // [0xac80d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.IsComponentInitialized
	// bool IsComponentInitialized();                                                                                           // [0xac80d18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Init
	// void Init(bool InUsesAudio, bool InUsesVideo, class UStaticMeshComponent* ScreenMesh);                                   // [0xac80c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.HandleVideoStreamingTerminalError
	// void HandleVideoStreamingTerminalError(EBaseMediaTerminalErrorReason ErrorReason);                                       // [0xac80b8c] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.HandleVideoStreamingSuccess
	// void HandleVideoStreamingSuccess();                                                                                      // [0xac80b78] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.HandleCMSEvents
	// void HandleCMSEvents(FVideoPlayerDeviceCMSEventData EventData, bool bEnable);                                            // [0xac8090c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingVideoSelectionMode
	// EFortStreamingVideoSelectionMode GetStreamingVideoSelectionMode();                                                       // [0xac808f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingDevice
	// class AActor* GetStreamingDevice();                                                                                      // [0xac808d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingController
	// class AFortCreativeStreamingController* GetStreamingController();                                                        // [0xac808ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingComponents
	// FVideoPlayerDeviceComponents GetStreamingComponents();                                                                   // [0xac80824] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetFortBaseStreamingVideo
	// class UFortBaseStreamingVideo* GetFortBaseStreamingVideo();                                                              // [0xac8080c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetDeviceState
	// EFortStreamingVideoDeviceState GetDeviceState();                                                                         // [0xac807f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetDeviceComponents
	// FVideoPlayerDeviceComponents GetDeviceComponents();                                                                      // [0xac807c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.ForceRestart
	// void ForceRestart();                                                                                                     // [0xac807ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.DisableScreenAndAudio
	// void DisableScreenAndAudio(bool bDisabled);                                                                              // [0xac8072c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.CMSEventStarted
	// void CMSEventStarted(class UMediaCMSEvent* Event);                                                                       // [0xac804fc] Final|Native|Public  
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.CMSEventEnded
	// void CMSEventEnded(class UMediaCMSEvent* Event);                                                                         // [0xac802fc] Final|Native|Public  
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceComponents
/// Size: 0x0030 (0x000000 - 0x000030)
class FVideoPlayerDeviceComponents : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UStaticMeshComponent*)               ScreenMesh                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ScreenMaterialDynamic                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMediaTexture*)                      VideoTexture                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceFullscreenData
/// Size: 0x0008 (0x000000 - 0x000008)
class FVideoPlayerDeviceFullscreenData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   InstanceID                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDevicePIPSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FVideoPlayerDevicePIPSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     TriggerRange                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bAlwaysAllow                                                OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(int32_t)                                   InstanceID                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDevicePIPFullscreenSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FVideoPlayerDevicePIPFullscreenSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AController*)                        Instigator                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnableFullscreen                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   InstanceID                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceCMSEventData
/// Size: 0x0038 (0x000000 - 0x000038)
class FVideoPlayerDeviceCMSEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   EventPage                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceAudioAnalysisSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FVideoPlayerDeviceAudioAnalysisSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FSoundSubmixSpectralAnalysisBandSettings>) AudioAnalysisBandSettings                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FName>)                             AudioAnalysisBandNames                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     PercussionParameterName                                     OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     AverageAmplitudeParameterName                               OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(float)                                     UpdateRate                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DecibelNoiseFloor                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bDoNormalize                                                OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bDoAutoRange                                                OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     AutoRangeAttackTime                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     AutoRangeReleaseTime                                        OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Enum /Script/FortCreativeStreamingComponent.EFortStreamingVideoDeviceState
/// Size: 0x04
enum class EFortStreamingVideoDeviceState : uint8_t
{
	EFortStreamingVideoDeviceState__No_Stream                                        = 0,
	EFortStreamingVideoDeviceState__Controller                                       = 1,
	EFortStreamingVideoDeviceState__Listener                                         = 2,
	EFortStreamingVideoDeviceState__EFortStreamingVideoDeviceState_MAX               = 3
};

/// Enum /Script/FortCreativeStreamingComponent.EFortStreamingVideoSelectionMode
/// Size: 0x04
enum class EFortStreamingVideoSelectionMode : uint8_t
{
	EFortStreamingVideoSelectionMode__Priority                                       = 0,
	EFortStreamingVideoSelectionMode__Device_Override                                = 1,
	EFortStreamingVideoSelectionMode__Mirror                                         = 2,
	EFortStreamingVideoSelectionMode__EFortStreamingVideoSelectionMode_MAX           = 3
};

