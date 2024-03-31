
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicStreamMediaSource
/// dependency: MediaAssets

/// Class /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo
/// Size: 0x0120 (0x000028 - 0x000148)
class UEpicBaseStreamingVideo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMulticastInlineDelegate)                  VideoOnTerminalError                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnSuccess                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnClosed                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnEndReached                                           OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnOpenTimeout                                          OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnResumed                                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(class UEpicStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FIntPoint)                                 VideoSize                                                   OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSubmix                                               OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSubmix                                              OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x140, 8, 0, 0})


	/// Functions
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Stop
	// void Stop(bool bRelease, bool bStopPlayer);                                                                              // [0x817626c] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Start
	// void Start(FString InVUID, class UMediaTexture* InVideoTexture);                                                         // [0x8175ba4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetVideoSize
	// void SetVideoSize(int32_t Width, int32_t Height);                                                                        // [0x8175a5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);     // [0x8175790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSoundSubmixes
	// void SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed); // [0x81755b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetOpenTimeout
	// void SetOpenTimeout(double InTimeoutTime);                                                                               // [0x81754ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetCreateAudioComponent
	// void SetCreateAudioComponent(bool bInCreateAudioComponent);                                                              // [0x817542c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.RetryOnError
	// bool RetryOnError(EBaseMediaTerminalErrorReason Reason);                                                                 // [0x817535c] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Release
	// void Release();                                                                                                          // [0x1bbc518] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Open
	// bool Open(FMediaPlayerOptions InMediaOptions);                                                                           // [0x817525c] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnSuccessfulURL
	// void OnSuccessfulURL(FString URL);                                                                                       // [0x8174c00] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnFailedURL
	// void OnFailedURL(FString URL);                                                                                           // [0x81745a4] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.MethodDebounce
	// void MethodDebounce(bool bDebounce);                                                                                     // [0x81744e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.IsSyncStartTimeSet
	// bool IsSyncStartTimeSet();                                                                                               // [0x81744cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Init
	// bool Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover); // [0x817428c] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaResumed
	// void HandleMediaResumed();                                                                                               // [0x685ca18] Native|Protected     
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpenedFailed
	// void HandleMediaOpenedFailed(FString FailedUrl);                                                                         // [0x8173c30] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpened
	// void HandleMediaOpened(FString OpenedUrl);                                                                               // [0x81735d4] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaEndReached
	// void HandleMediaEndReached();                                                                                            // [0x81735b4] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaClosed
	// void HandleMediaClosed();                                                                                                // [0x81735a0] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType);                                                              // [0x81734dc] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetSoundComponent
	// class UMediaSoundComponent* GetSoundComponent();                                                                         // [0x2f215c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaSource
	// class UEpicStreamMediaSource* GetMediaSource();                                                                          // [0x2a7655c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayerOptions
	// FMediaPlayerOptions GetMediaPlayerOptions();                                                                             // [0x817349c] Native|Public        
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x8173484] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetLicensedAudio
	// bool GetLicensedAudio();                                                                                                 // [0x657a700] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                   // [0x8173470] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicMediaBasePlayer.BaseMediaDelayConfig
/// Size: 0x0050 (0x000000 - 0x000050)
class FBaseMediaDelayConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaTerminalErrorReason
/// Size: 0x07
enum class EBaseMediaTerminalErrorReason : uint8_t
{
	EBaseMediaTerminalErrorReason__Unknown                                           = 0,
	EBaseMediaTerminalErrorReason__ClosedError                                       = 1,
	EBaseMediaTerminalErrorReason__OpenTimeout                                       = 2,
	EBaseMediaTerminalErrorReason__OpenFailed                                        = 3,
	EBaseMediaTerminalErrorReason__Source                                            = 4,
	EBaseMediaTerminalErrorReason__UCP                                               = 5,
	EBaseMediaTerminalErrorReason__EBaseMediaTerminalErrorReason_MAX                 = 6
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaDelayAction
/// Size: 0x04
enum class EBaseMediaDelayAction : uint8_t
{
	EBaseMediaDelayAction__Open                                                      = 0,
	EBaseMediaDelayAction__Stop                                                      = 1,
	EBaseMediaDelayAction__Start                                                     = 2,
	EBaseMediaDelayAction__EBaseMediaDelayAction_MAX                                 = 3
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaPlayerState
/// Size: 0x09
enum class EBaseMediaPlayerState : uint8_t
{
	EBaseMediaPlayerState__None                                                      = 0,
	EBaseMediaPlayerState__Released                                                  = 1,
	EBaseMediaPlayerState__Stopped                                                   = 2,
	EBaseMediaPlayerState__Started                                                   = 3,
	EBaseMediaPlayerState__Opened                                                    = 4,
	EBaseMediaPlayerState__Playing                                                   = 5,
	EBaseMediaPlayerState__Ended                                                     = 6,
	EBaseMediaPlayerState__Error                                                     = 7,
	EBaseMediaPlayerState__EBaseMediaPlayerState_MAX                                 = 8
};
